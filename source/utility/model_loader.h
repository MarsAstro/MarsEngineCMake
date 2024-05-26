#pragma once

#include "mesh.h"

namespace Utility
{
    class ModelLoader {
    public:
        static Mesh LoadMesh(const char* path);

    private:
        static glm::vec3 ReadVec3FromLine(std::stringstream& lineStream);
        static glm::vec2 ReadVec2FromLine(std::stringstream& lineStream);
        static Face ReadFaceFromLine(std::stringstream& lineStream);
    };
}
