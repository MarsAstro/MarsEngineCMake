#version 330 core
out vec4 FragColor;

in vec3 VertexNormal;
in vec3 FragmentPosition;

uniform vec3 cameraPosition;
uniform samplerCube skybox;

void main()
{
    vec3 I = normalize(FragmentPosition - cameraPosition);
    vec3 R = reflect(I, normalize(VertexNormal));
    FragColor = vec4(texture(skybox, R).rgb, 1.0);
} 