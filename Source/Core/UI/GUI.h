#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <iostream>
#include <string>
#include <array>
#include <unordered_map>
#include <vector>

/* C Libraries */
#include <cstdio>
#include <cstdlib>
#include <cstdarg>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

// GLClass includes
#include "../OpenGL Classes/Texture.h"
#include "../OpenGL Classes/VertexArray.h"
#include "../OpenGL Classes/VertexBuffer.h"
#include "../OpenGL Classes/IndexBuffer.h"
#include "../OpenGL Classes/Shader.h"

#include "../TextureAtlas.h"

namespace Minecraft
{
	namespace GUI
	{
		void InitUISystem(GLFWwindow* window);
		void RenderUI(double ts, long long frame);
		void UpdateUI(double ts, const glm::vec2& mouse_position, long long frame);
	}
}