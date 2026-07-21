#pragma once

// Function prototypes for core/setcolid.cpp
// Generated from Ghidra function signatures

// Original: core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
// Address: 0050ec80
float CDemonSet::processCollisionTypes(int param_1,float *param_2,float param_3);

// Original: core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0050fa30
// Address: 0050fa30
undefined4 __cdecl CDemonSet::testLineOcclusion(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// Original: core_setcolid.cpp_CDemonSet_getVoxelHeight_FUN_0050fab0
// Address: 0050fab0
undefined4 CDemonSet::getVoxelHeight(undefined4 param_1,undefined4 param_2);

// Original: core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_0050fae0
// Address: 0050fae0
void __cdecl CDemonSet::testVoxelRaycast(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// Original: core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00
// Address: 0050fb00
undefined4 CDemonSet::raycast(int param_1,float *param_2,float *param_3);

// Original: core_setcolid.cpp_CDemonSet_iterativeRaycast_FUN_0050fdd0
// Address: 0050fdd0
float CDemonSet::iterativeRaycast(undefined4 param_1,float *param_2,float *param_3);

// Original: core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_0050ffe0
// Address: 0050ffe0
float CDemonSet::raycastAgainstActors(int param_1,float param_2,float *param_3,float *param_4,float param_5);

// Original: core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_005103f0
// Address: 005103f0
undefined4 __cdecl CDemonSet::isActorIgnored(int param_1,int param_2);

// Original: core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00510710
// Address: 00510710
bool __cdecl CDemonSet::testOBBCylinderCollision(undefined4 param_1,float *param_2,undefined4 param_3,float *param_4,undefined4 param_5);

// Original: core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_005113e0
// Address: 005113e0
void __cdecl CDemonSet::pushRaytraceState(int param_1);

// Original: core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00511590
// Address: 00511590
void __cdecl CDemonSet::popRaytraceState(int param_1);

// Original: core_setcolid.cpp_CDemonSet_init_FUN_00511750
// Address: 00511750
void __cdecl CDemonSet::init(int param_1);

// Original: core_setcolid.cpp_CDemonSet_ignore_FUN_00511780
// Address: 00511780
void __cdecl CDemonSet::ignore(int param_1,int param_2);

// Original: core_setcolid.cpp_CDemonSet_disableIgnore_FUN_005117e0
// Address: 005117e0
void __cdecl CDemonSet::disableIgnore(int param_1);

// Original: core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800
// Address: 00511800
void __cdecl CDemonSet::setRayType(int param_1,int param_2);

// Original: core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00511840
// Address: 00511840
void CDemonSet::setRayTypeLaser(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);

// Original: core_setcolid.cpp_CDemonSet_notifyDamageListeners_FUN_00511880
// Address: 00511880
void __cdecl CDemonSet::notifyDamageListeners(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);

// Original: core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990
// Address: 00511990
void __cdecl SCollisionInfo::ctor(undefined4 *param_1);

// Original: core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005119b0
// Address: 005119b0
void __cdecl CDemonSet::buildCollidableActorList(int param_1);

// Original: core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_00511b30
// Address: 00511b30
void __cdecl CDemonSet::commitVoxelBuffer(void);

// Original: core_setcolid.cpp_CDemonSet_isPointInWater_FUN_00511b50
// Address: 00511b50
undefined4 __cdecl CDemonSet::isPointInWater(int param_1,int param_2);
