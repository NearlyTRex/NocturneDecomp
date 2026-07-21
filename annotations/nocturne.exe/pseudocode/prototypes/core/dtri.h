#pragma once

// Function prototypes for core/dtri.cpp
// Generated from Ghidra function signatures

// Original: core_dtri.cpp_CDemonTriangle_calculateData_FUN_0046c460
// Address: 0046c460
void __cdecl CDemonTriangle::calculateData(float *param_1);

// Original: core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
// Address: 0046c5b0
void __cdecl CDemonTriangle::buildCollision(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);

// Original: core_dtri.cpp_rayTriangleIntersection_FUN_0046c620
// Address: 0046c620
float rayTriangleIntersection(float *param_1,float *param_2,float *param_3);

// Original: core_dtri.cpp_cylinderEdgeIntersection_FUN_0046c820
// Address: 0046c820
undefined4 __cdecl cylinderEdgeIntersection(float *param_1);

// Original: core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_0046cb00
// Address: 0046cb00
void __cdecl cylinderEdgeTestWithHeight(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);

// Original: core_dtri.cpp_cylinderTriangleTest_FUN_0046cba0
// Address: 0046cba0
void __cdecl cylinderTriangleTest(float *param_1,undefined4 *param_2);

// Original: core_dtri.cpp_rayEdgeHeightTest_FUN_0046cfa0
// Address: 0046cfa0
undefined4 __cdecl rayEdgeHeightTest(float *param_1,float *param_2,float param_3,float *param_4);

// Original: core_dtri.cpp_rayTriangleFloorTest_FUN_0046d110
// Address: 0046d110
uint __cdecl rayTriangleFloorTest(float *param_1,float *param_2,float param_3,float *param_4);

// Original: core_dtri.cpp_clipLineToPlane_FUN_0046d4e0
// Address: 0046d4e0
void clipLineToPlane(float *param_1,float *param_2,float *param_3,int param_4,uint param_5,int param_6,uint param_7,int param_8,uint param_9,double param_10);
