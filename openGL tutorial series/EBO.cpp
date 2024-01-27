#include "EBO.h"

EBO::EBO(GLuint* indices, GLsizeiptr size)
{
	glGenBuffers(1, &ID); // Generate a buffer with only one ID and store it in the ID variable
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ID); // Bind the buffer to the GL_ELEMENT_ARRAY_BUFFER target
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, size, indices, GL_STATIC_DRAW); // Copy the indices data into the buffer
}

void EBO::Bind()
{
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ID); // Bind the buffer to the GL_ELEMENT_ARRAY_BUFFER target
}

void EBO::Unbind()
{
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0); // Unbind the buffer
}

void EBO::Delete()
{
	glDeleteBuffers(1, &ID); // Delete the buffer
}
