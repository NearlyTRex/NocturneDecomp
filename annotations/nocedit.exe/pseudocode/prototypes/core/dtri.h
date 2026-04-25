#pragma once

// Function prototypes for core/dtri.cpp
// Generated from Ghidra function signatures

// Original: core_dtri.cpp_staticInit_FUN_0049a430
// Address: 0049a430
void __cdecl staticInit(void);

// Original: core_dtri.cpp_CDemonTriangle_readDataCSV_FUN_0049a4e0
// Address: 0049a4e0
void __cdecl CDemonTriangle::readDataCSV(CDemonTriangle *this_ptr,_FILE *file_handle);

// Original: core_dtri.cpp_CDemonTriangle_writeDataCSV_FUN_0049a530
// Address: 0049a530
void __cdecl CDemonTriangle::writeDataCSV(CDemonTriangle *this_ptr,_FILE *file_handle);

// Original: core_dtri.cpp_CDemonTriangle_readDataBinary_FUN_0049a5a0
// Address: 0049a5a0
void __cdecl CDemonTriangle::readDataBinary(CDemonTriangle *this_ptr,_FILE *file_handle);

// Original: core_dtri.cpp_CDemonTriangle_writeDataBinary_FUN_0049a5f0
// Address: 0049a5f0
void __cdecl CDemonTriangle::writeDataBinary(CDemonTriangle *this_ptr,_FILE *file_handle);

// Original: core_dtri.cpp_CDemonTriangle_calculateData_FUN_0049a640
// Address: 0049a640
void __cdecl CDemonTriangle::calculateData(CDemonTriangle *triangle);

// Original: core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
// Address: 0049a790
void __cdecl CDemonTriangle::buildCollision(CDemonTriangle *this_ptr,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3);

// Original: core_dtri.cpp_rayTriangleIntersection_FUN_0049a800
// Address: 0049a800
float __cdecl rayTriangleIntersection(CDemonTriangle *triangle,CVector3f *rayOrigin,CVector3f *rayDirection);

// Original: core_dtri.cpp_cylinderEdgeIntersection_FUN_0049aa00
// Address: 0049aa00
int __cdecl cylinderEdgeIntersection(SIntersectXZCylinder *cylinder);

// Original: core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_0049ace0
// Address: 0049ace0
void __cdecl cylinderEdgeTestWithHeight(SIntersectXZCylinder *cylinder,CVector3f *vertex1,CVector3f *vertex2);

// Original: core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
// Address: 0049ad80
void __cdecl cylinderTriangleTest(CDemonTriangle *triangle,SIntersectXZCylinder *cylinder);

// Original: core_dtri.cpp_rayEdgeHeightTest_FUN_0049b180
// Address: 0049b180
int __cdecl rayEdgeHeightTest(CVector3f *vertex1,CVector3f *vertex2,float ray_radius,float *out_height);

// Original: core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0
// Address: 0049b2f0
int __cdecl rayTriangleFloorTest(CDemonTriangle *triangle,CVector3f *position,float search_radius,float *out_height);

// Original: core_dtri.cpp_copyVector3_FUN_0049b6a0
// Address: 0049b6a0
void __cdecl copyVector3(CVector3f *dest_ptr,CVector3f *src_ptr);

// Original: core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
// Address: 0049b6c0
void __cdecl clipLineToPlane(CVector3f *point1_ptr,CVector3f *point2_ptr,CVector3f *result_ptr,double plane_nx,double plane_ny,double plane_nz,double plane_d);

// Original: core_dtri.cpp_clipPolygonToTop_FUN_0049b860
// Address: 0049b860
void __cdecl clipPolygonToTop(float y_max);

// Original: core_dtri.cpp_clipPolygonToBottom_FUN_0049b9c0
// Address: 0049b9c0
void __cdecl clipPolygonToBottom(float y_min);

// Original: core_dtri.cpp_clipPolygonToRight_FUN_0049bb30
// Address: 0049bb30
void __cdecl clipPolygonToRight(float x_max);

// Original: core_dtri.cpp_clipPolygonToLeft_FUN_0049bc90
// Address: 0049bc90
void __cdecl clipPolygonToLeft(float x_min);

// Original: core_dtri.cpp_clipPolygonToNear_FUN_0049bdf0
// Address: 0049bdf0
void __cdecl clipPolygonToNear(float z_near);

// Original: core_dtri.cpp_clipPolygonToFar_FUN_0049bf60
// Address: 0049bf60
void __cdecl clipPolygonToFar(float z_far);

// Original: core_dtri.cpp_clipTriangleToBounds_FUN_0049c120
// Address: 0049c120
int __cdecl clipTriangleToBounds(CVector3f *triangle_vertices,CVector3f *bounds_min,CVector3f *bounds_max);

// Original: core_dtri.cpp_getClippedTriangleCount_FUN_0049cb30
// Address: 0049cb30
int __cdecl getClippedTriangleCount(int flags);

// Original: core_dtri.cpp_buildClipTriangleFan_FUN_0049cb40
// Address: 0049cb40
CDemonTriangle * __cdecl buildClipTriangleFan(int flags);

// Original: core_dtri.cpp_getClippedVertexCount_FUN_0049cbb0
// Address: 0049cbb0
int __cdecl getClippedVertexCount(void);

// Original: core_dtri.cpp_getClippedVertices_FUN_0049cbc0
// Address: 0049cbc0
CVector3f * __cdecl getClippedVertices(void);

// Original: core_dtri.cpp_CDemonTriangle_render_FUN_0049cbd0
// Address: 0049cbd0
void __cdecl CDemonTriangle::render(CDemonTriangle *this_ptr);

// Original: core_dtri.cpp_CDemonTriangle_arrdtor_FUN_0049cd20
// Address: 0049cd20
CDemonTriangle * __cdecl CDemonTriangle::arrdtor(CDemonTriangle *objs,uint flags);
