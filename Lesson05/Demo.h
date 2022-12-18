#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2, texture3, texture4, texture5, texture6,
		texture7, texture8,texture9, texture10, texture11, texture12, texture13, texture14, texture15;

	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	float angle = 0;

	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow* window);

	void BuildYellowWall();
	void BuildWall();
	void BuildWhiteWall();
	void BuildGreyWall();
	void BuildGreyBuilding();
	void BuildSky();
	void BuildColoredPlane();
	void BuildSea();
	void BuildMoon();
	void BuildBridge();
	void BuildStem();
	void BuildLeaf();
	void BuildBushes();
	void BuildYellowLight();
	void BuildBench();

	void DrawBuilding1();
	void DrawRoof1();
	void DrawBuilding2();
	void DrawRoof2();
	void DrawBuilding3a(float s1, float s2, float s3, float sc1, float sc2, float sc3);
	void DrawBuilding3b(float s1, float s2, float s3, float sc1, float sc2, float sc3);

	void DrawColoredPlane();
	void DrawSky(float s1, float s2, float s3, float sc1, float sc2, float sc3);
	void DrawSea();
	void DrawMoon();
	void DrawBridge(float s1, float s2, float s3, float sc1, float sc2, float sc3);
	void DrawBridge2(float s3);
	void DrawBridge3(float s3);
	void DrawBridge4(float s3);
	void DrawStem(float s1, float s2, float s3, float sc1, float sc2, float sc3);
	void DrawLeaf(float s1, float s2, float s3, float sc1, float sc2, float sc3, float x);
	void DrawLeaf2(float s1, float s2, float s3, float sc1, float sc2, float sc3);
	void DrawBushes(float s1, float s2, float s3);
	void DrawLamp(float s1, float s2, float s3);
	void DrawLight(float s1, float s2, float s3);
	void DrawBench(float s1, float s2, float s3, float sc1, float sc2, float sc3);

	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();

};


