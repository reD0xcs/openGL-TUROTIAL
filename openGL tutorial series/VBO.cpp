#include "VBO.h"

VBO::VBO(GLfloat* vertices, GLsizeiptr size)
{
	glGenBuffers(1, &ID); // Generate a buffer with only one ID and store it in the ID variable
	glBindBuffer(GL_ARRAY_BUFFER, ID); // Bind the buffer to the GL_ARRAY_BUFFER target
	glBufferData(GL_ARRAY_BUFFER, size, vertices, GL_STATIC_DRAW); // Copy the vertices data into the buffer
}

void VBO::Bind()
{
	glBindBuffer(GL_ARRAY_BUFFER, ID); // Bind the buffer to the GL_ARRAY_BUFFER target
}

void VBO::Unbind()
{
	glBindBuffer(GL_ARRAY_BUFFER, 0); // Unbind the buffer
}

void VBO::Delete()
{
	glDeleteBuffers(1, &ID); // Delete the buffer
}
