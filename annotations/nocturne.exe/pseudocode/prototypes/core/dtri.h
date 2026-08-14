#pragma once

// Function prototypes for core/dtri.cpp
// Generated from Ghidra function signatures

// Original: core_dtri.cpp_staticInit_FUN_0046c250
// Address: 0046c250
void __cdecl staticInit(void);

// Original: core_dtri.cpp_CDemonTriangle_readDataCSV_FUN_0046c300
// Address: 0046c300
void __cdecl CDemonTriangle::readDataCSV(CDemonTriangle *this_ptr,_FILE *file_handle);

// Original: core_dtri.cpp_CDemonTriangle_writeDataCSV_FUN_0046c350
// Address: 0046c350
void __cdecl CDemonTriangle::writeDataCSV(CDemonTriangle *this_ptr,_FILE *file_handle);

// Original: core_dtri.cpp_CDemonTriangle_readDataBinary_FUN_0046c3c0
// Address: 0046c3c0
void __cdecl CDemonTriangle::readDataBinary(CDemonTriangle *this_ptr,_FILE *file_handle);

// Original: core_dtri.cpp_CDemonTriangle_writeDataBinary_FUN_0046c410
// Address: 0046c410
void __cdecl CDemonTriangle::writeDataBinary(CDemonTriangle *this_ptr,_FILE *file_handle);

// Original: core_dtri.cpp_CDemonTriangle_calculateData_FUN_0046c460
// Address: 0046c460
void __cdecl CDemonTriangle::calculateData(CDemonTriangle *this_ptr);

// Original: core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
// Address: 0046c5b0
void __cdecl CDemonTriangle::buildCollision(CDemonTriangle *this_ptr,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3);

// Original: core_dtri.cpp_rayTriangleIntersection_FUN_0046c620
// Address: 0046c620
float __cdecl rayTriangleIntersection(CDemonTriangle *triangle,CVector3f *rayOrigin,CVector3f *rayDirection);

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

// Original: core_dtri.cpp_copyVector3_FUN_0046d4c0
// Address: 0046d4c0
void __cdecl copyVector3(CVector3f *dest_ptr,CVector3f *src_ptr);

// Original: core_dtri.cpp_clipLineToPlane_FUN_0046d4e0
// Address: 0046d4e0
void __cdecl clipLineToPlane(CVector3f *point1_ptr,CVector3f *point2_ptr,CVector3f *result_ptr,double plane_nx,double plane_ny,double plane_nz,double plane_d);

// Original: core_dtri.cpp_clipPolygonToTop_FUN_0046d680
// Address: 0046d680
void __cdecl clipPolygonToTop(float y_max);

// Original: core_dtri.cpp_clipPolygonToBottom_FUN_0046d7e0
// Address: 0046d7e0
void __cdecl clipPolygonToBottom(float y_min);

// Original: core_dtri.cpp_clipPolygonToRight_FUN_0046d950
// Address: 0046d950
void __cdecl clipPolygonToRight(float x_max);

// Original: core_dtri.cpp_clipPolygonToLeft_FUN_0046dab0
// Address: 0046dab0
void __cdecl clipPolygonToLeft(float x_min);

// Original: core_dtri.cpp_clipPolygonToNear_FUN_0046dc10
// Address: 0046dc10
void __cdecl clipPolygonToNear(float z_near);

// Original: core_dtri.cpp_clipPolygonToFar_FUN_0046dd80
// Address: 0046dd80
void __cdecl clipPolygonToFar(float z_far);

// Original: core_dtri.cpp_clipTriangleToBounds_FUN_0046df40
// Address: 0046df40
int __cdecl clipTriangleToBounds(CVector3f *triangle_vertices,CVector3f *bounds_min,CVector3f *bounds_max);

// Original: core_dtri.cpp_getClippedTriangleCount_FUN_0046e950
// Address: 0046e950
int __cdecl getClippedTriangleCount(int flags);

// Original: core_dtri.cpp_buildClipTriangleFan_FUN_0046e960
// Address: 0046e960
CDemonTriangle * __cdecl buildClipTriangleFan(int flags);

// Original: core_dtri.cpp_FUN_0046e9d0
// Address: 0046e9d0
undefined4 FUN_0046e9d0(void);

// Original: core_dtri.cpp_FUN_0046e9e0
// Address: 0046e9e0
CVector3f * FUN_0046e9e0(void);

// Original: core_dtri.cpp_CDemonTriangle_render_FUN_0046e9f0
// Address: 0046e9f0
void __cdecl CDemonTriangle::render(CDemonTriangle *this_ptr);

// Original: core_dtri.cpp_CDemonTriangle_arrdtor_FUN_0046eb40
// Address: 0046eb40
CDemonTriangle * __cdecl CDemonTriangle::arrdtor(CDemonTriangle *this_ptr,uint flags);
