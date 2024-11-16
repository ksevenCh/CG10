#ifndef  HEADER
#define HEADER

// ID ��������� ���������
GLuint Program;
// ID ��������
GLint Attrib_vertex;
// ID Vertex Buffer Object
GLuint VBO;

struct Vertex {
	GLfloat x;
	GLfloat y;
};

// �������� ��� ���������� �������
const char* VertexShaderSource = R"(
 #version 330 core
 in vec2 coord;
 void main() {
 gl_Position = vec4(coord, 0.0, 1.0);
 }
)";

// �������� ��� ������������ �������
const char* FragShaderSource = R"(
 #version 330 core
 out vec4 color;
 void main() {
 color = vec4(0, 1, 0, 1);
 }
)";

void Init();
void InitShader();
void InitVBO();
void Draw();
void Release();
void ReleaseShader();
void ReleaseVBO();
void ShaderLog(unsigned int);
void checkOpenGLerror();

#endif 
