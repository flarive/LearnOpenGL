#pragma once

#include <ft2build.h>
#include FT_FREETYPE_H

#include "../misc/noncopyable.h"
#include "../common_defines.h"

#include <map>

#include "../character.h"
#include "../shader.h"

namespace engine
{
    class Text : private NonCopyable
    {
    private:
        std::map<GLchar, Character> m_characters{};
        unsigned int m_VAO{}, m_VBO{};
        Shader m_textShader{};

    public:
        Text() = default;
        ~Text() = default;

        void setup(const std::string& fontPath, int fontSize, int width, int height);

        // draws the model, and thus all its meshes
        // render line of text
        // -------------------
        void draw(std::string text, float x, float y, float scale, glm::vec3 color);
    };
}
