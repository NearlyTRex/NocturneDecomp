#pragma once

// Function prototypes for core/dtrace.cpp
// Generated from Ghidra function signatures

// Original: core_dtrace.cpp_staticInit_FUN_004671c0
// Address: 004671c0
void __cdecl staticInit(void);

// Original: core_dtrace.cpp_CDemonRaytrace_ctor_FUN_004671e0
// Address: 004671e0
void CDemonRaytrace::ctor(undefined4 *param_1);

// Original: core_dtrace.cpp_CDemonRaytrace_dtor_FUN_00467220
// Address: 00467220
undefined4 CDemonRaytrace::dtor(undefined4 param_1);

// Original: core_dtrace.cpp_FUN_00467250
// Address: 00467250
void FUN_00467250(int param_1);

// Original: core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004672a0
// Address: 004672a0
void __cdecl CDemonRaytrace::freeCubeList(int param_1);

// Original: core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00467330
// Address: 00467330
void __cdecl CDemonRaytrace::allocNewCubeList(int param_1);

// Original: core_dtrace.cpp_FUN_004673a0
// Address: 004673a0
void FUN_004673a0(int param_1);

// Original: core_dtrace.cpp_FUN_004673e0
// Address: 004673e0
void FUN_004673e0(int param_1);

// Original: core_dtrace.cpp_FUN_00467560
// Address: 00467560
void FUN_00467560(int param_1);

// Original: core_dtrace.cpp_FUN_004675e0
// Address: 004675e0
void FUN_004675e0(int param_1);

// Original: core_dtrace.cpp_FUN_004676c0
// Address: 004676c0
void FUN_004676c0(int param_1,int param_2);

// Original: core_dtrace.cpp_FUN_00467890
// Address: 00467890
undefined4 FUN_00467890(undefined4 param_1,undefined4 param_2);

// Original: core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0
// Address: 004678d0
int __cdecl CDemonRaytrace::getCubeAt(int param_1,int param_2,int param_3,int param_4);

// Original: core_dtrace.cpp_CDemonRaytrace_rayIntersection_FUN_00467930
// Address: 00467930
float * __cdecl CDemonRaytrace::rayIntersection(undefined4 param_1,float *param_2,float *param_3,float *param_4);

// Original: core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00
// Address: 00467a00
float CDemonRaytrace::rayVoxelIntersection(int param_1,float *param_2,float *param_3,float *param_4,float *param_5);

// Original: core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_004680b0
// Address: 004680b0
undefined4 __cdecl CDemonRaytrace::rayVoxelGridTest(int param_1,float *param_2,float *param_3);

// Original: core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_00468580
// Address: 00468580
float CDemonRaytrace::getGroundHeight(int param_1,float *param_2,undefined4 *param_3,float *param_4);

// Original: core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_004687e0
// Address: 004687e0
undefined4 __cdecl CDemonRaytrace::cylinderGroundCheck(int param_1,float *param_2,float param_3);

// Original: core_dtrace.cpp_initIntersectionCylinder_FUN_00468a20
// Address: 00468a20
void __cdecl initIntersectionCylinder(undefined4 *param_1,float param_2,float param_3,float param_4,float param_5,float param_6,undefined4 param_7,undefined4 param_8);

// Original: core_dtrace.cpp_CDemonRaytrace_testCylinderCollision_FUN_00468af0
// Address: 00468af0
void __cdecl CDemonRaytrace::testCylinderCollision(int param_1,int param_2);

// Original: core_dtrace.cpp_FUN_00468d00
// Address: 00468d00
void FUN_00468d00(int param_1,float *param_2);

// Original: core_dtrace.cpp_FUN_00469240
// Address: 00469240
void FUN_00469240(int param_1,int *param_2,int param_3,int param_4,int param_5);

// Original: core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
// Address: 00469390
void CDemonRaytrace::renderCubeForPVS(int *param_1,int *param_2,undefined1 *param_3,float *param_4,int param_5);

// Original: core_dtrace.cpp_FUN_00469ce0
// Address: 00469ce0
void FUN_00469ce0(int *param_1,float param_2,int param_3);

// Original: core_dtrace.cpp_CDemonRaytrace_setPVS_FUN_0046ace0
// Address: 0046ace0
void __cdecl CDemonRaytrace::setPVS(int param_1,int param_2,int *param_3);

// Original: core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_0046ae40
// Address: 0046ae40
void __cdecl CDemonRaytrace::savePVS(int param_1,int *param_2,int *param_3);

// Original: core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_0046af70
// Address: 0046af70
void __cdecl CDemonRaytrace::renderPVSCubes(void);

// Original: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_0046aff0
// Address: 0046aff0
float __cdecl CDemonRaytrace::getVoxelHeightAtPosition(int param_1,float *param_2);

// Original: core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_0046b1b0
// Address: 0046b1b0
undefined4 __cdecl CDemonRaytrace::voxelRaycast3D(int param_1,float *param_2,float *param_3);

// Original: core_dtrace.cpp_FUN_0046b650
// Address: 0046b650
void FUN_0046b650(int param_1,float *param_2);

// Original: core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700
// Address: 0046b700
void CDemonRaytrace::worldPositionToVoxelCoords(int param_1,float *param_2);

// Original: core_dtrace.cpp_FUN_0046b7b0
// Address: 0046b7b0
float * FUN_0046b7b0(void);

// Original: core_dtrace.cpp_CDemonRaytrace_testVoxelAtCoords_FUN_0046b7f0
// Address: 0046b7f0
bool __cdecl CDemonRaytrace::testVoxelAtCoords(int param_1,uint *param_2);

// Original: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_0046b8d0
// Address: 0046b8d0
int __cdecl CDemonRaytrace::getVoxelHeightAtVoxelCoords(int param_1,uint *param_2);

// Original: core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_0046b9c0
// Address: 0046b9c0
undefined4 * __cdecl CDemonRaytrace::getBBoxMin(int param_1,undefined4 *param_2);

// Original: core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_0046b9f0
// Address: 0046b9f0
undefined4 * __cdecl CDemonRaytrace::getBBoxMax(int param_1,undefined4 *param_2);

// Original: core_dtrace.cpp_FUN_0046ba20
// Address: 0046ba20
float * FUN_0046ba20(int param_1,float *param_2,int param_3);

// Original: core_dtrace.cpp_FUN_0046baa0
// Address: 0046baa0
void FUN_0046baa0(int param_1,float *param_2,undefined4 param_3,float *param_4,float *param_5);

// Original: core_dtrace.cpp_CDemonRaytrace_commitShadowBuffer_FUN_0046bcf0
// Address: 0046bcf0
void __cdecl CDemonRaytrace::commitShadowBuffer(int param_1);

// Original: core_dtrace.cpp_FUN_0046bd90
// Address: 0046bd90
void FUN_0046bd90(int param_1,float *param_2,undefined4 param_3,float *param_4,float *param_5);

// Original: core_dtrace.cpp_FUN_0046bfe0
// Address: 0046bfe0
void FUN_0046bfe0(int param_1,undefined4 param_2);

// Original: core_dtrace.cpp_FUN_0046c100
// Address: 0046c100
void FUN_0046c100(int param_1,undefined4 param_2);

// Original: core_dtrace.cpp_FUN_0046c230
// Address: 0046c230
void FUN_0046c230(void);
