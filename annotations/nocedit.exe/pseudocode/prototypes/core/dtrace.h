#pragma once

// Function prototypes for core/dtrace.cpp
// Generated from Ghidra function signatures

// Original: core_dtrace.cpp_staticInit_FUN_004941e0
// Address: 004941e0
void __cdecl staticInit(void);

// Original: core_dtrace.cpp_CDemonRaytrace_ctor_FUN_00494200
// Address: 00494200
CDemonRaytrace * __cdecl CDemonRaytrace::ctor(CDemonRaytrace *this_ptr);

// Original: core_dtrace.cpp_CDemonRaytrace_dtor_FUN_00494240
// Address: 00494240
CDemonRaytrace * __cdecl CDemonRaytrace::dtor(CDemonRaytrace *this_ptr,uint flags);

// Original: core_dtrace.cpp_CDemonRaytrace_allocCubeList_FUN_00494270
// Address: 00494270
void __cdecl CDemonRaytrace::allocCubeList(CDemonRaytrace *this_ptr);

// Original: core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004942d0
// Address: 004942d0
void __cdecl CDemonRaytrace::freeCubeList(CDemonRaytrace *this_ptr);

// Original: core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380
// Address: 00494380
void __cdecl CDemonRaytrace::allocNewCubeList(CDemonRaytrace *this_ptr);

// Original: core_dtrace.cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400
// Address: 00494400
void __cdecl CDemonRaytrace::freeNewCubeList(CDemonRaytrace *this_ptr);

// Original: core_dtrace.cpp_CDemonRaytrace_consolidateTriList_FUN_00494450
// Address: 00494450
void __cdecl CDemonRaytrace::consolidateTriList(CDemonRaytrace *this_ptr);

// Original: core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_00494600
// Address: 00494600
void __cdecl CDemonRaytrace::allocTriList(CDemonRaytrace *this_ptr);

// Original: core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_00494690
// Address: 00494690
void __cdecl CDemonRaytrace::freeTriList(CDemonRaytrace *this_ptr);

// Original: core_dtrace.cpp_CDemonRaytrace_convertLinearIndexToWorldPosAndCallback_FUN_00494710
// Address: 00494710
void __cdecl CDemonRaytrace::convertLinearIndexToWorldPosAndCallback(CDemonRaytrace *this_ptr,void *callback_data,int linear_index,void *user_data);

// Original: core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0
// Address: 004947a0
void __cdecl CDemonRaytrace::loadBinary(CDemonRaytrace *this_ptr,_FILE *file_handle);

// Original: core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0
// Address: 00494de0
int __cdecl CDemonRaytrace::loadAndSyncWithGeoFile(CDemonRaytrace *this_ptr,char *filename);

// Original: core_dtrace.cpp_CDemonRaytrace_saveBinary_FUN_00494f50
// Address: 00494f50
void __cdecl CDemonRaytrace::saveBinary(CDemonRaytrace *this_ptr,_FILE *file_handle);

// Original: core_dtrace.cpp_CDemonRaytrace_save_FUN_00495040
// Address: 00495040
void __cdecl CDemonRaytrace::save(CDemonRaytrace *this_ptr,char *filename);

// Original: core_dtrace.cpp_CDemonRaytrace_allocTris_FUN_004950b0
// Address: 004950b0
void __cdecl CDemonRaytrace::allocTris(CDemonRaytrace *this_ptr);

// Original: core_dtrace.cpp_CDemonRaytrace_addTriangle_FUN_00495100
// Address: 00495100
void __cdecl CDemonRaytrace::addTriangle(CDemonRaytrace *this_ptr,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3,uchar triangle_flags);

// Original: core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
// Address: 004952b0
CDemonCube * __cdecl CDemonRaytrace::getCubeAt(CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z);

// Original: core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310
// Address: 00495310
void __cdecl CDemonRaytrace::crunch(CDemonRaytrace *this_ptr,float cube_size);

// Original: core_dtrace.cpp_CDemonRaytrace_rayIntersection_FUN_00495aa0
// Address: 00495aa0
CVector3f * __cdecl CDemonRaytrace::rayIntersection(CDemonRaytrace *this_ptr,CVector3f *output_point,CVector3f *ray_start,CVector3f *ray_end);

// Original: core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
// Address: 00495b70
float __cdecl CDemonRaytrace::rayVoxelIntersection(CDemonRaytrace *this_ptr,CVector3f *ray_start,CVector3f *ray_end,CVector3f *out_intersection_point,int *out_intersection_type);

// Original: core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220
// Address: 00496220
int __cdecl CDemonRaytrace::rayVoxelGridTest(CDemonRaytrace *this_ptr,CVector3f *start_pos,CVector3f *end_pos);

// Original: core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0
// Address: 004966f0
float __cdecl CDemonRaytrace::getGroundHeight(CDemonRaytrace *this_ptr,CVector3f *pos,int *hit_flag,CVector3f *normal_out);

// Original: core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950
// Address: 00496950
float __cdecl CDemonRaytrace::cylinderGroundCheck(CDemonRaytrace *this_ptr,CVector3f *pos,float radius,int *hit_flag,CVector3f *normal_out);

// Original: core_dtrace.cpp_initIntersectionCylinder_FUN_00496b90
// Address: 00496b90
void __cdecl initIntersectionCylinder(SIntersectXZCylinder *this_ptr,float start_x,float start_z,float dir_x,float dir_z,float radius,float bottom_y,float top_y);

// Original: core_dtrace.cpp_CDemonRaytrace_testCylinderCollision_FUN_00496c60
// Address: 00496c60
void __cdecl CDemonRaytrace::testCylinderCollision(CDemonRaytrace *this_ptr,SIntersectXZCylinder *cylinder);

// Original: core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00496e70
// Address: 00496e70
void __cdecl CDemonRaytrace::renderGridCube(CDemonRaytrace *this_ptr,CVector3f *world_pos);

// Original: core_dtrace.cpp_CDemonRaytrace_renderVoxelGrid_FUN_004973b0
// Address: 004973b0
void __cdecl CDemonRaytrace::renderVoxelGrid(CDemonRaytrace *this_ptr,uchar *voxel_data,int grid_x,int grid_y,int grid_z);

// Original: core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
// Address: 00497500
void __cdecl CDemonRaytrace::renderCubeForPVS(CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z,int render_mode);

// Original: core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50
// Address: 00497e50
void __cdecl CDemonRaytrace::renderFrustumCubes(CDemonRaytrace *this_ptr,float fov_or_radius,int render_mode);

// Original: core_dtrace.cpp_CDemonRaytrace_setPVS_FUN_00498e50
// Address: 00498e50
void __cdecl CDemonRaytrace::setPVS(CDemonRaytrace *this_ptr,int visible_cube_count,int *visible_cube_indices);

// Original: core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_00498fb0
// Address: 00498fb0
void __cdecl CDemonRaytrace::savePVS(CDemonRaytrace *this_ptr,int *output_count,int **input_indices_array);

// Original: core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_004990f0
// Address: 004990f0
void __cdecl CDemonRaytrace::renderPVSCubes(CDemonRaytrace *this_ptr);

// Original: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170
// Address: 00499170
float __cdecl CDemonRaytrace::getVoxelHeightAtPosition(CDemonRaytrace *this_ptr,CVector3f *world_position);

// Original: core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330
// Address: 00499330
int __cdecl CDemonRaytrace::voxelRaycast3D(CDemonRaytrace *this_ptr,CVector3f *start_position,CVector3f *end_position);

// Original: core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0
// Address: 004997d0
void __stack2_esi CDemonRaytrace::worldPositionToGridCoords(CDemonRaytrace *this_ptr,CVector3f *world_position,CVector3i *output_grid_coords);

// Original: core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
// Address: 00499880
void __stack2_esi CDemonRaytrace::worldPositionToVoxelCoords(CDemonRaytrace *this_ptr,CVector3f *world_position,CVector3i *output_voxel_coords);

// Original: core_dtrace.cpp_CDemonRaytrace_voxelCoordsToWorldPosition_FUN_00499930
// Address: 00499930
CVector3f * __cdecl CDemonRaytrace::voxelCoordsToWorldPosition(CDemonRaytrace *raytrace_ptr,CVector3f *output_position,CVector3i *voxel_coords);

// Original: core_dtrace.cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00499970
// Address: 00499970
int __cdecl CDemonRaytrace::testVoxelAtCoords(CDemonRaytrace *this_ptr,CVector3i *voxel_coords);

// Original: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00499a50
// Address: 00499a50
int __cdecl CDemonRaytrace::getVoxelHeightAtVoxelCoords(CDemonRaytrace *this_ptr,CVector3i *voxel_coords);

// Original: core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40
// Address: 00499b40
CVector3f * __cdecl CDemonRaytrace::getBBoxMin(CDemonRaytrace *this_ptr,CVector3f *output_vector);

// Original: core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70
// Address: 00499b70
CVector3f * __cdecl CDemonRaytrace::getBBoxMax(CDemonRaytrace *this_ptr,CVector3f *output_vector);

// Original: core_dtrace.cpp_CDemonRaytrace_convertCubeIndexToPosition_FUN_00499ba0
// Address: 00499ba0
CVector3f * __cdecl CDemonRaytrace::convertCubeIndexToPosition(CDemonRaytrace *this_ptr,CVector3f *output_position,int cube_index);

// Original: core_dtrace.cpp_CDemonRaytrace_markShadowVoxels_FUN_00499c20
// Address: 00499c20
void __cdecl CDemonRaytrace::markShadowVoxels(CDemonRaytrace *this_ptr,CVector3f *offset,CVector3f *rotation,CVector3f *extent,CVector3f *light_position);

// Original: core_dtrace.cpp_CDemonRaytrace_commitShadowBuffer_FUN_00499e70
// Address: 00499e70
void __cdecl CDemonRaytrace::commitShadowBuffer(CDemonRaytrace *this_ptr);

// Original: core_dtrace.cpp_CDemonRaytrace_transferShadowVoxels_FUN_00499f10
// Address: 00499f10
void __cdecl CDemonRaytrace::transferShadowVoxels(CDemonRaytrace *this_ptr,CVector3f *offset,CVector3f *rotation,CVector3f *start,CVector3f *end);

// Original: core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160
// Address: 0049a160
void __cdecl CDemonRaytrace::setVoxelShadowBit(CDemonRaytrace *this_ptr,CVector3f *world_position);

// Original: core_dtrace.cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_0049a280
// Address: 0049a280
void __cdecl CDemonRaytrace::restoreShadowBitFromBuffer(CDemonRaytrace *this_ptr,CVector3f *world_position);

// Original: core_dtrace.cpp_STriangleRef_copy_FUN_0049a3b0
// Address: 0049a3b0
STriangleRef * __cdecl STriangleRef::copy(STriangleRef *this_ptr,STriangleRef *other);

// Original: core_dtrace.cpp_STriangleRef_dtor_FUN_0049a400
// Address: 0049a400
STriangleRef * __cdecl STriangleRef::dtor(STriangleRef *this_ptr,uint flags);

// Original: core_dtrace.cpp_CVector3f_arrdtor_FUN_0049a410
// Address: 0049a410
CVector3f * __cdecl CVector3f::arrdtor(CVector3f *objs,uint flags);
