#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "shader.h"

class PointLight
{
public:
    PointLight(glm::vec3 position, glm::vec3 color, float ambientLevel, float diffuseLevel, float specularLevel, float constant, float linear, float quadratic);
    PointLight(glm::vec3 position, glm::vec3 color, float ambientLevel, float diffuseLevel, float specularLevel, float constant, float linear, float quadratic, unsigned int VAO);

    void updateShader(Shader& shader, glm::mat4 viewMatrix, int index = -1);
    void Draw(Shader& shader);

    glm::vec3 position;
    glm::vec3 color;

private:
    glm::vec3 ambient;
    glm::vec3 diffuse;
    glm::vec3 specular;

    float constant;
    float linear;
    float quadratic;

    unsigned int VAO, VBO;
};