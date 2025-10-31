#pragma once

// Function prototypes for core/dtri.cpp
// Generated from Ghidra function signatures

// Original: core_dtri.cpp_staticInit_FUN_0049a430
// Address: 0049a430
void staticInit(void);

// Original: core_dtri.cpp_CDemonTriangle_readDataCSV_FUN_0049a4e0
// Address: 0049a4e0
void CDemonTriangle::readDataCSV(CDemonTriangle * this_ptr, FILE * file_handle);

// Original: core_dtri.cpp_CDemonTriangle_writeDataCSV_FUN_0049a530
// Address: 0049a530
void CDemonTriangle::writeDataCSV(CDemonTriangle * this_ptr, FILE * file_handle);

// Original: core_dtri.cpp_CDemonTriangle_readDataBinary_FUN_0049a5a0
// Address: 0049a5a0
void CDemonTriangle::readDataBinary(CDemonTriangle * this_ptr, FILE * file_handle);

// Original: core_dtri.cpp_CDemonTriangle_writeDataBinary_FUN_0049a5f0
// Address: 0049a5f0
void CDemonTriangle::writeDataBinary(CDemonTriangle * this_ptr, FILE * file_handle);

// Original: core_dtri.cpp_CDemonTriangle_calculateData_FUN_0049a640
// Address: 0049a640
void CDemonTriangle::calculateData(CDemonTriangle * triangle);

// Original: core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
// Address: 0049a790
void CDemonTriangle::buildCollision(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3);

// Original: core_dtri.cpp_rayTriangleIntersection_FUN_0049a800
// Address: 0049a800
float rayTriangleIntersection(CDemonTriangle * triangle, CVector3f * rayOrigin, CVector3f * rayDirection);

// Original: core_dtri.cpp_cylinderEdgeIntersection_FUN_0049aa00
// Address: 0049aa00
int cylinderEdgeIntersection(SIntersectXZCylinder * cylinder);

// Original: core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_0049ace0
// Address: 0049ace0
void cylinderEdgeTestWithHeight(SIntersectXZCylinder * cylinder, CVector3f * vertex1, CVector3f * vertex2);

// Original: core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
// Address: 0049ad80
void cylinderTriangleTest(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder);

// Original: core_dtri.cpp_rayEdgeHeightTest_FUN_0049b180
// Address: 0049b180
int rayEdgeHeightTest(CVector3f * vertex1, CVector3f * vertex2, float rayRadius, float * outHeight);

// Original: core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0
// Address: 0049b2f0
int rayTriangleFloorTest(CDemonTriangle * triangle, float x, float z, float * out_height);

// Original: core_dtri.cpp_copyVector3_FUN_0049b6a0
// Address: 0049b6a0
void copyVector3(CVector3f * dest_ptr, CVector3f * src_ptr);

// Original: core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
// Address: 0049b6c0
void clipLineToPlane(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, double plane_ny, double plane_nz, double plane_d);

// Original: core_dtri.cpp_clipPolygonToTop_FUN_0049b860
// Address: 0049b860
void clipPolygonToTop(float y_max);

// Original: core_dtri.cpp_clipPolygonToBottom_FUN_0049b9c0
// Address: 0049b9c0
void clipPolygonToBottom(float y_min);

// Original: core_dtri.cpp_clipPolygonToRight_FUN_0049bb30
// Address: 0049bb30
void clipPolygonToRight(float x_max);

// Original: core_dtri.cpp_clipPolygonToLeft_FUN_0049bc90
// Address: 0049bc90
void clipPolygonToLeft(float x_min);

// Original: core_dtri.cpp_clipPolygonToNear_FUN_0049bdf0
// Address: 0049bdf0
void clipPolygonToNear(float z_near);

// Original: core_dtri.cpp_clipPolygonToFar_FUN_0049bf60
// Address: 0049bf60
void clipPolygonToFar(float z_far);

// Original: core_dtri.cpp_clipTriangleToBounds_FUN_0049c120
// Address: 0049c120
int clipTriangleToBounds(CVector3f * triangle_vertices, CVector3f * bounds_min, CVector3f * bounds_max);

// Original: core_dtri.cpp_getClippedTriangleCount_FUN_0049cb30
// Address: 0049cb30
int getClippedTriangleCount(void);

// Original: core_dtri.cpp_buildClipTriangleFan_FUN_0049cb40
// Address: 0049cb40
CDemonTriangle * buildClipTriangleFan(void);

// Original: core_dtri.cpp_buildClipTriangleFan_FUN_0049cb5a
// Address: 0049cb5a
CDemonTriangle * buildClipTriangleFan(int triangle_count);

// Original: core_dtri.cpp_getClippedVertexCount_FUN_0049cbb0
// Address: 0049cbb0
int getClippedVertexCount(void);

// Original: core_dtri.cpp_getClippedVertices_FUN_0049cbc0
// Address: 0049cbc0
CVector3f * getClippedVertices(void);

// Original: core_dtri.cpp_CDemonTriangle_render_FUN_0049cbd0
// Address: 0049cbd0
void CDemonTriangle::render(CDemonTriangle * this_ptr);

// Original: core_dtri.cpp_freeTriangles_FUN_0049cd20
// Address: 0049cd20
void freeTriangles(CDemonTriangle * * array);
