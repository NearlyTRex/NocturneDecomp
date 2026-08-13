#pragma once

// Function prototypes for core/dcube.cpp
// Generated from Ghidra function signatures

// Original: core_dcube.cpp_staticInit_FUN_00448410
// Address: 00448410
void __cdecl staticInit(void);

// Original: core_dcube.cpp_copyVector3_FUN_004484a0
// Address: 004484a0
void __cdecl copyVector3(CVector3f *dest,CVector3f *src);

// Original: core_dcube.cpp_clipEdgeToPlane_FUN_004484c0
// Address: 004484c0
void __cdecl clipEdgeToPlane(CVector3f *vertex1,CVector3f *vertex2,CVector3f *output_vertex,double plane_nx,double plane_ny,double plane_nz,double plane_d);

// Original: core_dcube.cpp_clipPolygonAgainstMaxY_FUN_00448660
// Address: 00448660
void __cdecl clipPolygonAgainstMaxY(float max_y_plane);

// Original: core_dcube.cpp_clipPolygonAgainstMinY_FUN_004487c0
// Address: 004487c0
void __cdecl clipPolygonAgainstMinY(float min_y_plane);

// Original: core_dcube.cpp_clipPolygonAgainstMaxX_FUN_00448930
// Address: 00448930
void __cdecl clipPolygonAgainstMaxX(float max_x_plane);

// Original: core_dcube.cpp_clipPolygonAgainstMinX_FUN_00448a90
// Address: 00448a90
void __cdecl clipPolygonAgainstMinX(float min_x_plane);

// Original: core_dcube.cpp_clipPolygonAgainstMinZ_FUN_00448bf0
// Address: 00448bf0
void __cdecl clipPolygonAgainstMinZ(float min_z_plane);

// Original: core_dcube.cpp_clipPolygonAgainstMaxZ_FUN_00448d60
// Address: 00448d60
void __cdecl clipPolygonAgainstMaxZ(float max_z_plane);

// Original: core_dcube.cpp_CDemonCubeTriangle_readFromFile_FUN_00448ec0
// Address: 00448ec0
void __cdecl CDemonCubeTriangle::readFromFile(CDemonCubeTriangle *this_ptr,_FILE *file_handle,CVector3f *vertex_buffer_base);

// Original: core_dcube.cpp_CDemonCubeTriangle_writeToFile_FUN_00448f40
// Address: 00448f40
void __cdecl CDemonCubeTriangle::writeToFile(CDemonCubeTriangle *this_ptr,_FILE *file_handle,CVector3f *vertex_buffer_base);

// Original: core_dcube.cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_00448fb0
// Address: 00448fb0
void __cdecl CDemonCubeTriangle::calculateNormalAndPlane(CDemonCubeTriangle *this_ptr);

// Original: core_dcube.cpp_CDemonCubeTriangle_init_FUN_00449120
// Address: 00449120
void __cdecl CDemonCubeTriangle::init(CDemonCubeTriangle *this_ptr,CVector3f *vertex0,CVector3f *vertex1,CVector3f *vertex2);

// Original: core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00449150
// Address: 00449150
float __cdecl CDemonCubeTriangle::rayTriangleIntersection(CDemonCubeTriangle *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction);

// Original: core_dcube.cpp_intersectXZCylinder_FUN_004493a0
// Address: 004493a0
int __cdecl intersectXZCylinder(SIntersectXZCylinder *cylinder);

// Original: core_dcube.cpp_intersectXZCylinderWithHeight_FUN_00449680
// Address: 00449680
int __cdecl intersectXZCylinderWithHeight(SIntersectXZCylinder *cylinder,CVector3f *segment_start,CVector3f *segment_end);

// Original: core_dcube.cpp_intersectTriangleWithXZCylinder_FUN_00449720
// Address: 00449720
uint __cdecl intersectTriangleWithXZCylinder(STriangleRef *triangle,SIntersectXZCylinder *cylinder);

// Original: core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00449bc0
// Address: 00449bc0
uint __cdecl intersectVerticalCylinderSegment(CVector3f *segment_start,CVector3f *segment_end,float radius,float *out_height);

// Original: core_dcube.cpp_triangleCylinderCollision_FUN_00449d30
// Address: 00449d30
uint __cdecl triangleCylinderCollision(CDemonCubeTriangle *triangle,CVector3f *cylinder_center,float cylinder_radius,float *out_height);

// Original: core_dcube.cpp_FUN_0044a150
// Address: 0044a150
undefined4 FUN_0044a150(int *param_1,float *param_2,float *param_3);

// Original: core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_0044ab60
// Address: 0044ab60
void __cdecl buildAndRenderTrianglePrimitive(CVector3f **triangle_vertex_pointers,CVector3f *vertex_buffer);

// Original: core_dcube.cpp_CDemonCube_ctor_FUN_0044abd0
// Address: 0044abd0
CDemonCube * __cdecl CDemonCube::ctor(CDemonCube *this_ptr);

// Original: core_dcube.cpp_CDemonCube_dtor_FUN_0044ac10
// Address: 0044ac10
CDemonCube * __cdecl CDemonCube::dtor(CDemonCube *this_ptr,uint flags);

// Original: core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_0044ac30
// Address: 0044ac30
void __cdecl CDemonCube::allocVoxelMemory(CDemonCube *this_ptr);

// Original: core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_0044acb0
// Address: 0044acb0
void __cdecl CDemonCube::allocGeometryMemory(CDemonCube *this_ptr);

// Original: core_dcube.cpp_CDemonCube_FUN_0044adf0
// Address: 0044adf0
void __cdecl CDemonCube(CDemonCube *this_ptr);

// Original: core_dcube.cpp_FUN_0044ae80
// Address: 0044ae80
void FUN_0044ae80(void);

// Original: core_dcube.cpp_CDemonCube_load_FUN_0044aed0
// Address: 0044aed0
void __cdecl CDemonCube::load(CDemonCube *this_ptr,_FILE *file_handle);

// Original: core_dcube.cpp_CDemonCube_rotateVertices_FUN_0044aff0
// Address: 0044aff0
void __cdecl CDemonCube::rotateVertices(CDemonCube *this_ptr,uint rendering_mode);

// Original: core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_0044b290
// Address: 0044b290
float __cdecl CDemonCube::rayIntersectTriangles(CDemonCube *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *hit_normal,uint *hit_material);

// Original: core_dcube.cpp_CDemonCube_testCylinderCollision_FUN_0044b430
// Address: 0044b430
void __cdecl CDemonCube::testCylinderCollision(CDemonCube *this_ptr,SIntersectXZCylinder *cylinder);

// Original: core_dcube.cpp_CDemonCube_testCylinderGroundCollision_FUN_0044b500
// Address: 0044b500
int __cdecl CDemonCube::testCylinderGroundCollision(CDemonCube *this_ptr,CVector3f *cylinder_position,float cylinder_radius,CVector3f *output_height,CVector3f *output_normal,uint *output_material);

// Original: core_dcube.cpp_CVector3f_arrdtor_FUN_0044b640
// Address: 0044b640
CVector3f * __cdecl CVector3f::arrdtor(CVector3f *this_ptr,uint flags);

// Original: core_dcube.cpp_FUN_0044b660
// Address: 0044b660
void __cdecl FUN_0044b660(char *filename);

// Original: core_dcube.cpp_FUN_0044b720
// Address: 0044b720
void FUN_0044b720(void);
