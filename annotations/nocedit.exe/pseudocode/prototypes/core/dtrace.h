#pragma once

// Function prototypes for core/dtrace.cpp
// Generated from Ghidra function signatures

// Original: core_dtrace.cpp_staticInit_FUN_004941e0
// Address: 004941e0
void staticInit(void);

// Original: core_dtrace.cpp_CDemonRaytrace_ctor_FUN_00494200
// Address: 00494200
CDemonRaytrace * CDemonRaytrace::ctor(CDemonRaytrace * this_ptr);

// Original: core_dtrace.cpp_CDemonRaytrace_dtor_FUN_00494240
// Address: 00494240
CDemonRaytrace * CDemonRaytrace::dtor(CDemonRaytrace * this_ptr);

// Original: core_dtrace.cpp_CDemonRaytrace_allocCubeList_FUN_00494270
// Address: 00494270
void CDemonRaytrace::allocCubeList(CDemonRaytrace * this_ptr);

// Original: core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004942d0
// Address: 004942d0
void CDemonRaytrace::freeCubeList(CDemonRaytrace * this_ptr);

// Original: core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380
// Address: 00494380
void CDemonRaytrace::allocNewCubeList(CDemonRaytrace * this_ptr);

// Original: core_dtrace.cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400
// Address: 00494400
void CDemonRaytrace::freeNewCubeList(CDemonRaytrace * this_ptr);

// Original: core_dtrace.cpp_CDemonRaytrace_consolidateTriList_FUN_00494450
// Address: 00494450
void CDemonRaytrace::consolidateTriList(CDemonRaytrace * this_ptr);

// Original: core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_00494600
// Address: 00494600
void CDemonRaytrace::allocTriList(CDemonRaytrace * this_ptr);

// Original: core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_00494690
// Address: 00494690
void CDemonRaytrace::freeTriList(CDemonRaytrace * this_ptr);

// Original: core_dtrace.cpp_CDemonRaytrace_convertLinearIndexToWorldPosAndCallback_FUN_00494710
// Address: 00494710
void CDemonRaytrace::convertLinearIndexToWorldPosAndCallback(CDemonRaytrace * this_ptr, void * callback_data, int linear_index, void * user_data);

// Original: core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0
// Address: 004947a0
void CDemonRaytrace::loadBinary(CDemonRaytrace * this_ptr, FILE * file_handle);

// Original: core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0
// Address: 00494de0
int CDemonRaytrace::loadAndSyncWithGeoFile(CDemonRaytrace * this_ptr, char * filename);

// Original: core_dtrace.cpp_CDemonRaytrace_saveBinary_FUN_00494f50
// Address: 00494f50
void CDemonRaytrace::saveBinary(CDemonRaytrace * this_ptr, FILE * file_handle);

// Original: core_dtrace.cpp_CDemonRaytrace_save_FUN_00495040
// Address: 00495040
void CDemonRaytrace::save(CDemonRaytrace * this_ptr, char * filename);

// Original: core_dtrace.cpp_CDemonRaytrace_allocTris_FUN_004950b0
// Address: 004950b0
void CDemonRaytrace::allocTris(CDemonRaytrace * this_ptr);

// Original: core_dtrace.cpp_CDemonRaytrace_addTriangle_FUN_00495100
// Address: 00495100
void CDemonRaytrace::addTriangle(CDemonRaytrace * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3, uchar triangle_flags);

// Original: core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
// Address: 004952b0
CDemonCube * CDemonRaytrace::getCubeAt(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z);

// Original: core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310
// Address: 00495310
void CDemonRaytrace::crunch(CDemonRaytrace * this_ptr, float cube_size);

// Original: core_dtrace.cpp_CDemonRaytrace_rayIntersection_FUN_00495aa0
// Address: 00495aa0
CVector3f * CDemonRaytrace::rayIntersection(CDemonRaytrace * this_ptr, CVector3f * output_point, CVector3f * ray_start, CVector3f * ray_end);

// Original: core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
// Address: 00495b70
float CDemonRaytrace::rayVoxelIntersection(CDemonRaytrace * this_ptr, CVector3f * ray_start, CVector3f * ray_end, CVector3f * out_intersection_point, int * out_intersection_type);

// Original: core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220
// Address: 00496220
int CDemonRaytrace::rayVoxelGridTest(CDemonRaytrace * this_ptr, CVector3f * start_pos, CVector3f * end_pos);

// Original: core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0
// Address: 004966f0
float CDemonRaytrace::getGroundHeight(CDemonRaytrace * this_ptr, CVector3f * pos, int * hit_flag, CVector3f * normal_out);

// Original: core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950
// Address: 00496950
float CDemonRaytrace::cylinderGroundCheck(CDemonRaytrace * this_ptr, CVector3f * pos, float radius, int * hit_flag, CVector3f * normal_out);

// Original: core_dtrace.cpp_initCapsuleCollisionData_FUN_00496b90
// Address: 00496b90
void initCapsuleCollisionData(SCapsuleCollision * out_data, float start_x, float start_z, float dir_x, float dir_z, float radius, void * user_data1, void * user_data2);

// Original: core_dtrace.cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60
// Address: 00496c60
void CDemonRaytrace::testCapsuleCollision(CDemonRaytrace * this_ptr, SCapsuleCollision * capsule_data);

// Original: core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00496e70
// Address: 00496e70
void CDemonRaytrace::renderGridCube(CDemonRaytrace * this_ptr, CVector3f * world_pos);

// Original: core_dtrace.cpp_CDemonRaytrace_renderVoxelGrid_FUN_004973b0
// Address: 004973b0
void CDemonRaytrace::renderVoxelGrid(CDemonRaytrace * this_ptr, uchar * voxel_data, int grid_x, int grid_y, int grid_z);

// Original: core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
// Address: 00497500
void CDemonRaytrace::renderCubeForPVS(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, int render_mode);

// Original: core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50
// Address: 00497e50
void CDemonRaytrace::renderFrustumCubes(CDemonRaytrace * this_ptr, float fov_or_radius, int render_mode);

// Original: core_dtrace.cpp_CDemonRaytrace_setPVS_FUN_00498e50
// Address: 00498e50
void CDemonRaytrace::setPVS(CDemonRaytrace * this_ptr, int visible_cube_count, int * visible_cube_indices);

// Original: core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_00498fb0
// Address: 00498fb0
void CDemonRaytrace::savePVS(CDemonRaytrace * this_ptr, int * output_count, int * * input_indices_array, int * * output_indices_array);

// Original: core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_004990f0
// Address: 004990f0
void CDemonRaytrace::renderPVSCubes(CDemonRaytrace * this_ptr);

// Original: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170
// Address: 00499170
float CDemonRaytrace::getVoxelHeightAtPosition(CDemonRaytrace * this_ptr, CVector3f * world_position);

// Original: core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330
// Address: 00499330
int CDemonRaytrace::voxelRaycast3D(CDemonRaytrace * this_ptr, CVector3f * start_position, CVector3f * end_position);

// Original: core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0
// Address: 004997d0
void CDemonRaytrace::worldPositionToGridCoords(CDemonRaytrace * this_ptr, CVector3f * world_position, CVector3i * output_grid_coords);

// Original: core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
// Address: 00499880
void CDemonRaytrace::worldPositionToVoxelCoords(CDemonRaytrace * this_ptr, CVector3f * world_position, CVector3i * output_voxel_coords);

// Original: core_dtrace.cpp_CDemonRaytrace_voxelCoordsToWorldPosition_FUN_00499930
// Address: 00499930
CVector3f * CDemonRaytrace::voxelCoordsToWorldPosition(CDemonRaytrace * raytrace_ptr, CVector3f * output_position, CVector3i * voxel_coords);

// Original: core_dtrace.cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00499970
// Address: 00499970
int CDemonRaytrace::testVoxelAtCoords(CDemonRaytrace * this_ptr, CVector3i * voxel_coords);

// Original: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00499a50
// Address: 00499a50
int CDemonRaytrace::getVoxelHeightAtVoxelCoords(CDemonRaytrace * this_ptr, CVector3i * voxel_coords);

// Original: core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40
// Address: 00499b40
CVector3f * CDemonRaytrace::getBBoxMin(CDemonRaytrace * this_ptr, CVector3f * output_vector);

// Original: core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70
// Address: 00499b70
CVector3f * CDemonRaytrace::getBBoxMax(CDemonRaytrace * this_ptr, CVector3f * output_vector);

// Original: core_dtrace.cpp_CDemonRaytrace_convertCubeIndexToPosition_FUN_00499ba0
// Address: 00499ba0
CVector3f * CDemonRaytrace::convertCubeIndexToPosition(CDemonRaytrace * this_ptr, CVector3f * output_position, int cube_index);

// Original: core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest_FUN_00499c20
// Address: 00499c20
void CDemonRaytrace::voxelGridSweepTest(CDemonRaytrace * this_ptr, CVector3f * offset_vector, CVector3f * start_position, CVector3f * end_position, void * light_data);

// Original: core_dtrace.cpp_CDemonRaytrace_copyVoxelBuffer2ToBuffer1_FUN_00499e70
// Address: 00499e70
void CDemonRaytrace::copyVoxelBuffer2ToBuffer1(CDemonRaytrace * this_ptr);

// Original: core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest2_FUN_00499f10
// Address: 00499f10
void CDemonRaytrace::voxelGridSweepTest2(CDemonRaytrace * this_ptr, CVector3f * offset_vector, void * light_data, CVector3f * start_position, CVector3f * end_position);

// Original: core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160
// Address: 0049a160
void CDemonRaytrace::setVoxelShadowBit(CDemonRaytrace * this_ptr, CVector3f * world_position);

// Original: core_dtrace.cpp_CDemonRaytrace_transferVoxelShadowBit_FUN_0049a280
// Address: 0049a280
void CDemonRaytrace::transferVoxelShadowBit(CDemonRaytrace * this_ptr, CVector3f * world_position);

// Original: core_dtrace.cpp_STriangleRef_copy_FUN_0049a3b0
// Address: 0049a3b0
STriangleRef * STriangleRef::copy(STriangleRef * this_ptr, STriangleRef * other);

// Original: core_dtrace.cpp_STriangleRef_dtor_FUN_0049a400
// Address: 0049a400
STriangleRef * STriangleRef::dtor(STriangleRef * this_ptr);

// Original: core_dtrace.cpp_freeVectors_FUN_0049a410
// Address: 0049a410
void freeVectors(CVector3f * * array);
