#pragma once

// Function prototypes for core/dcube.cpp
// Generated from Ghidra function signatures

// Original: core_dcube.cpp_clipEdgeToPlane_FUN_004484c0
// Address: 004484c0
void clipEdgeToPlane(float *param_1,float *param_2,float *param_3,int param_4,uint param_5,int param_6,uint param_7,int param_8,uint param_9,double param_10);

// Original: core_dcube.cpp_CDemonCubeTriangle_readFromFile_FUN_00448ec0
// Address: 00448ec0
void CDemonCubeTriangle::readFromFile(int *param_1,undefined4 param_2,int param_3);

// Original: core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00449150
// Address: 00449150
float CDemonCubeTriangle::rayTriangleIntersection(undefined4 *param_1,float *param_2,float *param_3);

// Original: core_dcube.cpp_intersectXZCylinder_FUN_004493a0
// Address: 004493a0
undefined4 __cdecl intersectXZCylinder(float *param_1);

// Original: core_dcube.cpp_intersectXZCylinderWithHeight_FUN_00449680
// Address: 00449680
undefined4 __cdecl intersectXZCylinderWithHeight(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);

// Original: core_dcube.cpp_intersectTriangleWithXZCylinder_FUN_00449720
// Address: 00449720
uint __cdecl intersectTriangleWithXZCylinder(int *param_1,undefined4 *param_2);

// Original: core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00449bc0
// Address: 00449bc0
undefined4 __cdecl intersectVerticalCylinderSegment(float *param_1,float *param_2,float param_3,float *param_4);

// Original: core_dcube.cpp_triangleCylinderCollision_FUN_00449d30
// Address: 00449d30
uint __cdecl triangleCylinderCollision(int *param_1,float *param_2,float param_3,float *param_4);

// Original: core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_0044ab60
// Address: 0044ab60
void buildAndRenderTrianglePrimitive(int *param_1,int param_2);

// Original: core_dcube.cpp_CDemonCube_ctor_FUN_0044abd0
// Address: 0044abd0
void CDemonCube::ctor(undefined4 *param_1);

// Original: core_dcube.cpp_CDemonCube_dtor_FUN_0044ac10
// Address: 0044ac10
undefined4 CDemonCube::dtor(undefined4 param_1);

// Original: core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_0044acb0
// Address: 0044acb0
void __cdecl CDemonCube::allocGeometryMemory(int *param_1);

// Original: core_dcube.cpp_CDemonCube_load_FUN_0044aed0
// Address: 0044aed0
undefined4 CDemonCube::load(undefined4 *param_1,undefined4 param_2);

// Original: core_dcube.cpp_CDemonCube_rotateVertices_FUN_0044aff0
// Address: 0044aff0
void __cdecl CDemonCube::rotateVertices(int param_1,uint param_2);

// Original: core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_0044b290
// Address: 0044b290
float CDemonCube::rayIntersectTriangles(int param_1,undefined4 param_2,undefined4 param_3,float *param_4,uint *param_5);

// Original: core_dcube.cpp_CDemonCube_testCylinderCollision_FUN_0044b430
// Address: 0044b430
void __cdecl CDemonCube::testCylinderCollision(int param_1,undefined4 param_2);

// Original: core_dcube.cpp_CDemonCube_testCylinderGroundCollision_FUN_0044b500
// Address: 0044b500
undefined4 __cdecl CDemonCube::testCylinderGroundCollision(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float *param_5,uint *param_6);
