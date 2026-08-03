#pragma once

// Function prototypes for core/door.cpp
// Generated from Ghidra function signatures

// Original: core_door.cpp_staticInit_FUN_00454ff0
// Address: 00454ff0
void __cdecl staticInit(void);

// Original: core_door.cpp_factoryFunc_FUN_00455020
// Address: 00455020
CDoor * __cdecl factoryFunc(void);

// Original: core_door.cpp_CDoor_getActorType_FUN_00455040
// Address: 00455040
CDemonActorType * CDoor::getActorType(void);

// Original: core_door.cpp_CDoor_ctor_FUN_00455050
// Address: 00455050
CDoor * __cdecl CDoor::ctor(CDoor *this_ptr);

// Original: core_door.cpp_CDoor_setup_FUN_004551f0
// Address: 004551f0
void CDoor::setup(CDemonActor *param_1);

// Original: core_door.cpp_CDoor_onOpened_FUN_00455270
// Address: 00455270
void __cdecl CDoor::onOpened(CDoor *this_ptr);

// Original: core_door.cpp_CDoor_reposition_FUN_004552a0
// Address: 004552a0
void __cdecl CDoor::reposition(CDoor *this_ptr);

// Original: core_door.cpp_CDoor_process_FUN_00455640
// Address: 00455640
void CDoor::process(CDoor *param_1,float param_2);

// Original: core_door.cpp_CDoor_renderOpaque_FUN_00455d50
// Address: 00455d50
int CDoor::renderOpaque(CDemonActor *param_1);

// Original: core_door.cpp_CDoor_renderBackground_FUN_00455e10
// Address: 00455e10
void CDoor::renderBackground(CDemonActor *param_1,int param_2);

// Original: core_door.cpp_CDoor_getBoundingBox_FUN_00455e90
// Address: 00455e90
float * CDoor::getBoundingBox(int param_1,float *param_2);

// Original: core_door.cpp_CDoor_archive_FUN_00455ee0
// Address: 00455ee0
void CDoor::archive(CDemonActor *param_1);

// Original: core_door.cpp_CDoor_getCollisionType_FUN_004561d0
// Address: 004561d0
undefined4 CDoor::getCollisionType(int param_1,int param_2);

// Original: core_door.cpp_CDoor_getGroundType_FUN_00456210
// Address: 00456210
undefined4 CDoor::getGroundType(int param_1);

// Original: core_door.cpp_CDoor_setSwingRange_FUN_00456220
// Address: 00456220
void __cdecl CDoor::setSwingRange(CDoor *this_ptr,float swing_range);

// Original: core_door.cpp_CDoor_getBlockVirtualDirectorFlag_FUN_00456230
// Address: 00456230
undefined4 CDoor::getBlockVirtualDirectorFlag(int param_1);

// Original: core_door.cpp_CDoor_allowBulletHoles_FUN_00456240
// Address: 00456240
undefined4 CDoor::allowBulletHoles(int param_1);

// Original: core_door.cpp_CDoor_getOpenStandPos_FUN_00456260
// Address: 00456260
CVector3f * __cdecl CDoor::getOpenStandPos(CDoor *this_ptr,CVector3f *out_pos,CVector3f *direction,CVector3f *actor_pos);

// Original: core_door.cpp_CDoor_updateCollisionData_FUN_00456460
// Address: 00456460
void CDoor::updateCollisionData(CDoor *param_1);

// Original: core_door.cpp_CDoor_getMoveType_FUN_004564b0
// Address: 004564b0
int __cdecl CDoor::getMoveType(CDoor *this_ptr,CDemonActor *opener);

// Original: core_door.cpp_CDoor_onLocked_FUN_00456650
// Address: 00456650
uint __cdecl CDoor::onLocked(CDoor *this_ptr);

// Original: core_door.cpp_FUN_00456690
// Address: 00456690
CRuleList * FUN_00456690(void);

// Original: core_door.cpp_CDoor_dtor_FUN_004566b0
// Address: 004566b0
CDoor * __cdecl CDoor::dtor(CDoor *this_ptr,uint flags);
