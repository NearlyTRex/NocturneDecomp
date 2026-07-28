#pragma once

// Function prototypes for core/dtri.cpp
// Generated from Ghidra function signatures

// Original: core_dtri.cpp_staticInit_FUN_0046c250
// Address: 0046c250
void __cdecl staticInit(void);

// Original: core_dtri.cpp_CDemonTriangle_readDataCSV_FUN_0046c300
// Address: 0046c300
void CDemonTriangle::readDataCSV(void);

// Original: core_dtri.cpp_CDemonTriangle_writeDataCSV_FUN_0046c350
// Address: 0046c350
void CDemonTriangle::writeDataCSV(void);

// Original: core_dtri.cpp_FUN_0046c3c0
// Address: 0046c3c0
void FUN_0046c3c0(void *param_1,_FILE *param_2);

// Original: core_dtri.cpp_FUN_0046c410
// Address: 0046c410
void FUN_0046c410(void *param_1,_FILE *param_2);

// Original: core_dtri.cpp_CDemonTriangle_calculateData_FUN_0046c460
// Address: 0046c460
void __cdecl CDemonTriangle::calculateData(CDemonTriangle *triangle);

// Original: core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
// Address: 0046c5b0
void __cdecl CDemonTriangle::buildCollision(CDemonTriangle *this_ptr,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3);

// Original: core_dtri.cpp_rayTriangleIntersection_FUN_0046c620
// Address: 0046c620
float rayTriangleIntersection(float *param_1,float *param_2,float *param_3);

// Original: core_dtri.cpp_cylinderEdgeIntersection_FUN_0046c820
// Address: 0046c820
int __cdecl cylinderEdgeIntersection(SIntersectXZCylinder *cylinder);

// Original: core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_0046cb00
// Address: 0046cb00
void __cdecl cylinderEdgeTestWithHeight(SIntersectXZCylinder *cylinder,CVector3f *vertex1,CVector3f *vertex2);

// Original: core_dtri.cpp_cylinderTriangleTest_FUN_0046cba0
// Address: 0046cba0
void __cdecl cylinderTriangleTest(CDemonTriangle *triangle,SIntersectXZCylinder *cylinder);

// Original: core_dtri.cpp_rayEdgeHeightTest_FUN_0046cfa0
// Address: 0046cfa0
int __cdecl rayEdgeHeightTest(CVector3f *vertex1,CVector3f *vertex2,float ray_radius,float *out_height);

// Original: core_dtri.cpp_rayTriangleFloorTest_FUN_0046d110
// Address: 0046d110
int __cdecl rayTriangleFloorTest(CDemonTriangle *triangle,CVector3f *position,float search_radius,float *out_height);

// Original: core_dtri.cpp_FUN_0046d4c0
// Address: 0046d4c0
void FUN_0046d4c0(void);

// Original: core_dtri.cpp_clipLineToPlane_FUN_0046d4e0
// Address: 0046d4e0
void clipLineToPlane(float *param_1,float *param_2,float *param_3,int param_4,uint param_5,int param_6,uint param_7,int param_8,uint param_9,double param_10);

// Original: core_dtri.cpp_FUN_0046d680
// Address: 0046d680
void FUN_0046d680(float param_1);

// Original: core_dtri.cpp_FUN_0046d7e0
// Address: 0046d7e0
void FUN_0046d7e0(float param_1);

// Original: core_dtri.cpp_FUN_0046d950
// Address: 0046d950
void FUN_0046d950(float param_1);

// Original: core_dtri.cpp_FUN_0046dab0
// Address: 0046dab0
void FUN_0046dab0(float param_1);

// Original: core_dtri.cpp_FUN_0046dc10
// Address: 0046dc10
void FUN_0046dc10(float param_1);

// Original: core_dtri.cpp_FUN_0046dd80
// Address: 0046dd80
void FUN_0046dd80(float param_1);

// Original: core_dtri.cpp_clipTriangleToBounds_FUN_0046df40
// Address: 0046df40
undefined4 clipTriangleToBounds(undefined4 *param_1,float *param_2,float *param_3);

// Original: core_dtri.cpp_getClippedTriangleCount_FUN_0046e950
// Address: 0046e950
int __cdecl getClippedTriangleCount(int flags);

// Original: core_dtri.cpp_buildClipTriangleFan_FUN_0046e960
// Address: 0046e960
undefined4 buildClipTriangleFan(int param_1);

// Original: core_dtri.cpp_FUN_0046e9d0
// Address: 0046e9d0
undefined4 FUN_0046e9d0(void);

// Original: core_dtri.cpp_FUN_0046e9e0
// Address: 0046e9e0
undefined * FUN_0046e9e0(void);

// Original: core_dtri.cpp_CDemonTriangle_render_FUN_0046e9f0
// Address: 0046e9f0
void CDemonTriangle::render(float *param_1);

// Original: core_dtri.cpp_FUN_0046eb40
// Address: 0046eb40
void FUN_0046eb40(void);
