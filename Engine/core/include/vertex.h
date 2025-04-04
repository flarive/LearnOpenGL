#pragma once

#include "misc/noncopyable.h"
#include "common_defines.h"


#define MAX_BONE_INFLUENCE 4

namespace engine
{
    struct Vertex// : private NonCopyable
    {
        // position
        glm::vec3 Position{};
        // normal
        glm::vec3 Normal{};
        // texCoords
        glm::vec2 TexCoords{};
        // tangent
        glm::vec3 Tangent{};
        // bitangent
        glm::vec3 Bitangent{};
        //bone indexes which will influence this vertex
        int m_BoneIDs[MAX_BONE_INFLUENCE]{};
        //weights from each bone
        float m_Weights[MAX_BONE_INFLUENCE]{};
    };
}
