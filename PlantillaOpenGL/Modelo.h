#pragma once

#include <stdio.h>
#include <stdlib.h>
#define GLEW_STATIC
#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <vector>
#include "Vertice.h"
#include "Shader.h"

using namespace std;

class Modelo {
public:
	vector<Vertice> vertices;
	Shader *shader;
	GLuint vertexArrayID;
	GLuint bufferID;

	Modelo();
	void inicializarVertexArray(GLuint posicionID, GLuint colorID);
	//Enumeracion se utilzaba para las direcciones es un alias para de un arreglo
	void dibujar(GLenum modoDibujo);

};