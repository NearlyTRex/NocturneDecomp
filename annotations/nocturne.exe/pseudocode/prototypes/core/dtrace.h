#pragma once

// Function prototypes for core/dtrace.cpp
// Generated from Ghidra function signatures

// Original: core_dtrace.cpp_staticInit_FUN_004671c0
// Address: 004671c0
void __cdecl staticInit(void);

// Original: core_dtrace.cpp_CDemonRaytrace_ctor_FUN_004671e0
// Address: 004671e0
CDemonRaytrace * __cdecl CDemonRaytrace::ctor(CDemonRaytrace *this_ptr);

// Original: core_dtrace.cpp_CDemonRaytrace_dtor_FUN_00467220
// Address: 00467220
CDemonRaytrace * CDemonRaytrace::dtor(CDemonRaytrace *param_1);

// Original: core_dtrace.cpp_CDemonRaytrace_allocCubeList_FUN_00467250
// Address: 00467250
void CDemonRaytrace::allocCubeList(int param_1);

// Original: core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004672a0
// Address: 004672a0
void __cdecl CDemonRaytrace::freeCubeList(CDemonRaytrace *this_ptr);

// Original: core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00467330
// Address: 00467330
void __cdecl CDemonRaytrace::allocNewCubeList(CDemonRaytrace *this_ptr);

// Original: core_dtrace.cpp_FUN_004673a0
// Address: 004673a0
void FUN_004673a0(int param_1);

// Original: core_dtrace.cpp_FUN_004673e0
// Address: 004673e0
void FUN_004673e0(CDemonRaytrace *param_1);

// Original: core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_00467560
// Address: 00467560
void __cdecl CDemonRaytrace::allocTriList(CDemonRaytrace *this_ptr);

// Original: core_dtrace.cpp_FUN_004675e0
// Address: 004675e0
void FUN_004675e0(int param_1);

// Original: core_dtrace.cpp_FUN_004676c0
// Address: 004676c0
void FUN_004676c0(CDemonRaytrace *param_1,_FILE *param_2);

// Original: core_dtrace.cpp_FUN_00467890
// Address: 00467890
undefined4 FUN_00467890(undefined4 param_1,char *param_2);

// Original: core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0
// Address: 004678d0
CDemonCube * __cdecl CDemonRaytrace::getCubeAt(CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z);

// Original: core_dtrace.cpp_CDemonRaytrace_rayIntersection_FUN_00467930
// Address: 00467930
CVector3f * __cdecl CDemonRaytrace::rayIntersection(CDemonRaytrace *this_ptr,CVector3f *output_point,CVector3f *ray_start,CVector3f *ray_end);

// Original: core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00
// Address: 00467a00
float CDemonRaytrace::rayVoxelIntersection(CDemonRaytrace *param_1,float *param_2,float *param_3,float *param_4,float *param_5);

// Original: core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_004680b0
// Address: 004680b0
int __cdecl CDemonRaytrace::rayVoxelGridTest(CDemonRaytrace *this_ptr,CVector3f *start_pos,CVector3f *end_pos);

// Original: core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_00468580
// Address: 00468580
float CDemonRaytrace::getGroundHeight(CDemonRaytrace *param_1,float *param_2,undefined4 *param_3,float *param_4);

// Original: core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_004687e0
// Address: 004687e0
float __cdecl CDemonRaytrace::cylinderGroundCheck(CDemonRaytrace *this_ptr,CVector3f *pos,float radius,int *hit_flag,CVector3f *normal_out);

// Original: core_dtrace.cpp_initIntersectionCylinder_FUN_00468a20
// Address: 00468a20
void __cdecl initIntersectionCylinder(SIntersectXZCylinder *this_ptr,float start_x,float start_z,float dir_x,float dir_z,float radius,float bottom_y,float top_y);

// Original: core_dtrace.cpp_CDemonRaytrace_testCylinderCollision_FUN_00468af0
// Address: 00468af0
void __cdecl CDemonRaytrace::testCylinderCollision(CDemonRaytrace *this_ptr,SIntersectXZCylinder *cylinder);

// Original: core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00468d00
// Address: 00468d00
void __cdecl CDemonRaytrace::renderGridCube(CDemonRaytrace *this_ptr,CVector3f *world_pos);

// Original: core_dtrace.cpp_CDemonRaytrace_renderVoxelGrid_FUN_00469240
// Address: 00469240
void CDemonRaytrace::renderVoxelGrid(CDemonRaytrace *param_1,int *param_2,int param_3,int param_4,int param_5);

// Original: core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
// Address: 00469390
void CDemonRaytrace::renderCubeForPVS(CDemonRaytrace *param_1,float param_2,int param_3,int param_4,int param_5);

// Original: core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00469ce0
// Address: 00469ce0
void __cdecl CDemonRaytrace::renderFrustumCubes(CDemonRaytrace *this_ptr,float fov_or_radius,int render_mode);

// Original: core_dtrace.cpp_CDemonRaytrace_setPVS_FUN_0046ace0
// Address: 0046ace0
void __cdecl CDemonRaytrace::setPVS(CDemonRaytrace *this_ptr,int visible_cube_count,int *visible_cube_indices);

// Original: core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_0046ae40
// Address: 0046ae40
void __cdecl CDemonRaytrace::savePVS(CDemonRaytrace *this_ptr,int *output_count,int **input_indices_array);

// Original: core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_0046af70
// Address: 0046af70
void __cdecl CDemonRaytrace::renderPVSCubes(CDemonRaytrace *this_ptr);

// Original: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_0046aff0
// Address: 0046aff0
float __cdecl CDemonRaytrace::getVoxelHeightAtPosition(CDemonRaytrace *this_ptr,CVector3f *world_position);

// Original: core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_0046b1b0
// Address: 0046b1b0
int __cdecl CDemonRaytrace::voxelRaycast3D(CDemonRaytrace *this_ptr,CVector3f *start_position,CVector3f *end_position);

// Original: core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_0046b650
// Address: 0046b650
void CDemonRaytrace::worldPositionToGridCoords(int param_1,float *param_2);

// Original: core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700
// Address: 0046b700
void CDemonRaytrace::worldPositionToVoxelCoords(int param_1,float *param_2);

// Original: core_dtrace.cpp_CDemonRaytrace_voxelCoordsToWorldPosition_FUN_0046b7b0
// Address: 0046b7b0
float * CDemonRaytrace::voxelCoordsToWorldPosition(void);

// Original: core_dtrace.cpp_CDemonRaytrace_testVoxelAtCoords_FUN_0046b7f0
// Address: 0046b7f0
int __cdecl CDemonRaytrace::testVoxelAtCoords(CDemonRaytrace *this_ptr,CVector3i *voxel_coords);

// Original: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_0046b8d0
// Address: 0046b8d0
int __cdecl CDemonRaytrace::getVoxelHeightAtVoxelCoords(CDemonRaytrace *this_ptr,CVector3i *voxel_coords);

// Original: core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_0046b9c0
// Address: 0046b9c0
CVector3f * __cdecl CDemonRaytrace::getBBoxMin(CDemonRaytrace *this_ptr,CVector3f *output_vector);

// Original: core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_0046b9f0
// Address: 0046b9f0
CVector3f * __cdecl CDemonRaytrace::getBBoxMax(CDemonRaytrace *this_ptr,CVector3f *output_vector);

// Original: core_dtrace.cpp_CDemonRaytrace_convertCubeIndexToPosition_FUN_0046ba20
// Address: 0046ba20
float * CDemonRaytrace::convertCubeIndexToPosition(int param_1,float *param_2,int param_3);

// Original: core_dtrace.cpp_CDemonRaytrace_markShadowVoxels_FUN_0046baa0
// Address: 0046baa0
void __cdecl CDemonRaytrace::markShadowVoxels(CDemonRaytrace *this_ptr,CVector3f *offset,CVector3f *rotation,CVector3f *extent,CVector3f *light_position);

// Original: core_dtrace.cpp_CDemonRaytrace_commitShadowBuffer_FUN_0046bcf0
// Address: 0046bcf0
void __cdecl CDemonRaytrace::commitShadowBuffer(CDemonRaytrace *this_ptr);

// Original: core_dtrace.cpp_CDemonRaytrace_transferShadowVoxels_FUN_0046bd90
// Address: 0046bd90
void __cdecl CDemonRaytrace::transferShadowVoxels(CDemonRaytrace *this_ptr,CVector3f *offset,CVector3f *rotation,CVector3f *start,CVector3f *end);

// Original: core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0046bfe0
// Address: 0046bfe0
void __cdecl CDemonRaytrace::setVoxelShadowBit(CDemonRaytrace *this_ptr,CVector3f *world_position);

// Original: core_dtrace.cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_0046c100
// Address: 0046c100
void __cdecl CDemonRaytrace::restoreShadowBitFromBuffer(CDemonRaytrace *this_ptr,CVector3f *world_position);

// Original: core_dtrace.cpp_CVector3f_arrdtor_FUN_0046c230
// Address: 0046c230
void CVector3f::arrdtor(void);
