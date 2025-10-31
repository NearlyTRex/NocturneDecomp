#pragma once

// Function prototypes for core/dcube.cpp
// Generated from Ghidra function signatures

// Original: core_dcube.cpp_staticInit_FUN_00454720
// Address: 00454720
void staticInit(void);

// Original: core_dcube.cpp_copyVector3_FUN_004547b0
// Address: 004547b0
void copyVector3(CVector3f * dest, CVector3f * src);

// Original: core_dcube.cpp_clipEdgeToPlane_FUN_004547d0
// Address: 004547d0
void clipEdgeToPlane(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, double plane_ny, double plane_nz, double plane_d);

// Original: core_dcube.cpp_clipPolygonAgainstMaxY_FUN_00454970
// Address: 00454970
void clipPolygonAgainstMaxY(float max_y_plane);

// Original: core_dcube.cpp_clipPolygonAgainstMinY_FUN_00454ad0
// Address: 00454ad0
void clipPolygonAgainstMinY(float min_y_plane);

// Original: core_dcube.cpp_clipPolygonAgainstMaxX_FUN_00454c40
// Address: 00454c40
void clipPolygonAgainstMaxX(float max_x_plane);

// Original: core_dcube.cpp_clipPolygonAgainstMinX_FUN_00454da0
// Address: 00454da0
void clipPolygonAgainstMinX(float min_x_plane);

// Original: core_dcube.cpp_clipPolygonAgainstMinZ_FUN_00454f00
// Address: 00454f00
void clipPolygonAgainstMinZ(float min_z_plane);

// Original: core_dcube.cpp_clipPolygonAgainstMaxZ_FUN_00455070
// Address: 00455070
void clipPolygonAgainstMaxZ(float max_z_plane);

// Original: core_dcube.cpp_CDemonCubeTriangle_readFromFile_FUN_004551d0
// Address: 004551d0
void CDemonCubeTriangle::readFromFile(CDemonCubeTriangle * this_ptr, FILE * file_handle, CVector3f * vertex_buffer_base);

// Original: core_dcube.cpp_CDemonCubeTriangle_writeToFile_FUN_00455250
// Address: 00455250
void CDemonCubeTriangle::writeToFile(CDemonCubeTriangle * this_ptr, FILE * file_handle, CVector3f * vertex_buffer_base);

// Original: core_dcube.cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_004552c0
// Address: 004552c0
void CDemonCubeTriangle::calculateNormalAndPlane(CDemonCubeTriangle * this_ptr);

// Original: core_dcube.cpp_CDemonCubeTriangle_ctor_FUN_00455430
// Address: 00455430
void CDemonCubeTriangle::ctor(CDemonCubeTriangle * this_ptr, CVector3f * vertex0, CVector3f * vertex1, CVector3f * vertex2);

// Original: core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460
// Address: 00455460
float CDemonCubeTriangle::rayTriangleIntersection(CDemonCubeTriangle * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction);

// Original: core_dcube.cpp_intersectXZCapsule_FUN_004556b0
// Address: 004556b0
int intersectXZCapsule(SIntersectXZCylinder * cylinder);

// Original: core_dcube.cpp_intersectXZCapsuleWithHeight_FUN_00455990
// Address: 00455990
int intersectXZCapsuleWithHeight(SIntersectXZCylinder * cylinder, CVector3f * segment_start, CVector3f * segment_end);

// Original: core_dcube.cpp_intersectTriangleWithXZCapsule_FUN_00455a30
// Address: 00455a30
uint intersectTriangleWithXZCapsule(CVector3f * * triangle_vertices, SIntersectXZCylinder * cylinder);

// Original: core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00455ed0
// Address: 00455ed0
uint intersectVerticalCylinderSegment(CVector3f * segment_start, CVector3f * segment_end, float radius, float * out_height);

// Original: core_dcube.cpp_triangleCylinderCollision_FUN_00456040
// Address: 00456040
uint triangleCylinderCollision(CDemonCubeTriangle * triangle, CVector3f * cylinder_center, float cylinder_radius, float * out_height);

// Original: core_dcube.cpp_clipTriangleToAABB_FUN_00456400
// Address: 00456400
uint clipTriangleToAABB(CVector3f * * triangle_vertices, CVector3f * aabb_min, CVector3f * aabb_max);

// Original: core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_004566e0
// Address: 004566e0
void buildAndRenderTrianglePrimitive(CVector3f * * triangle_vertex_pointers, CVector3f * vertex_buffer);

// Original: core_dcube.cpp_CDemonCube_ctor_FUN_00456750
// Address: 00456750
CDemonCube * CDemonCube::ctor(CDemonCube * this_ptr);

// Original: core_dcube.cpp_CDemonCube_dtor_FUN_00456790
// Address: 00456790
CDemonCube * CDemonCube::dtor(CDemonCube * this_ptr);

// Original: core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_004567b0
// Address: 004567b0
void CDemonCube::allocVoxelMemory(CDemonCube * this_ptr);

// Original: core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00456840
// Address: 00456840
void CDemonCube::allocGeometryMemory(CDemonCube * this_ptr);

// Original: core_dcube.cpp_CDemonCube_freeMemory_FUN_004569b0
// Address: 004569b0
void CDemonCube::freeMemory(CDemonCube * this_ptr);

// Original: core_dcube.cpp_CDemonCube_setBounds_FUN_00456a90
// Address: 00456a90
void CDemonCube::setBounds(CDemonCube * this_ptr, CVector3f * min_bounds, CVector3f * max_bounds);

// Original: core_dcube.cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0
// Address: 00456af0
void CDemonCube::clipTriangleToFrustum(CDemonCubeFrustum * frustum, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3, uchar texture_id);

// Original: core_dcube.cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0
// Address: 004570a0
void CDemonCube::loadGeometryFromTriangleList(CDemonCube * this_ptr, void * triangle_data, int triangle_count, CVector3f * min_bounds, CVector3f * max_bounds, uchar * ground_types, uint * voxel_data);

// Original: core_dcube.cpp_CDemonCube_save_FUN_00457430
// Address: 00457430
void CDemonCube::save(CDemonCube * this_ptr, FILE * file_handle);

// Original: core_dcube.cpp_CDemonCube_load_FUN_00457530
// Address: 00457530
void CDemonCube::load(CDemonCube * this_ptr, FILE * file_handle);

// Original: core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457650
// Address: 00457650
void CDemonCube::rotateVertices(CDemonCube * this_ptr, uint rendering_mode);

// Original: core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
// Address: 004578f0
float CDemonCube::rayIntersectTriangles(CDemonCube * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * hit_normal, uint * hit_material);

// Original: core_dcube.cpp_CDemonCube_testCapsuleCollision_FUN_00457a90
// Address: 00457a90
void CDemonCube::testCapsuleCollision(CDemonCube * this_ptr, SIntersectXZCylinder * capsule_data);

// Original: core_dcube.cpp_CDemonCube_testCylinderGroundCollision_FUN_00457b60
// Address: 00457b60
int CDemonCube::testCylinderGroundCollision(CDemonCube * this_ptr, CVector3f * cylinder_position, float cylinder_radius, CVector3f * output_height, CVector3f * output_normal, uint * output_material);

// Original: core_dcube.cpp_CDemonCube_testAABBIntersection_FUN_00457ca0
// Address: 00457ca0
int CDemonCube::testAABBIntersection(CDemonCube * this_ptr, CVector3f * aabb_min, CVector3f * aabb_max);

// Original: core_dcube.cpp_CDemonCube_buildVoxelOccupancyGrid_FUN_00457cf0
// Address: 00457cf0
void CDemonCube::buildVoxelOccupancyGrid(SVoxelGridParams * params);

// Original: core_dcube.cpp_freeVectors_FUN_00457eb0
// Address: 00457eb0
void freeVectors(CVector3f * * array);
