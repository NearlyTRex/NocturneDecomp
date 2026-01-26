#pragma once

// Function prototypes for core/door.cpp
// Generated from Ghidra function signatures

// Original: core_door.cpp_staticInit_FUN_0047fa60
// Address: 0047fa60
void staticInit(void);

// Original: core_door.cpp_factoryFunc_FUN_0047fa90
// Address: 0047fa90
CDoor * factoryFunc(void);

// Original: core_door.cpp_CDoor_getActorType_FUN_0047fac0
// Address: 0047fac0
CDemonActorType * CDoor::getActorType(CDoor * this_ptr);

// Original: core_door.cpp_CDoor_ctor_FUN_0047fad0
// Address: 0047fad0
CDoor * CDoor::ctor(CDoor * this_ptr);

// Original: core_door.cpp_CDoor_setup_FUN_0047fc70
// Address: 0047fc70
void CDoor::setup(CDoor * this_ptr);

// Original: core_door.cpp_FUN_0047fcf0
// Address: 0047fcf0
undefined FUN_0047fcf0();

// Original: core_door.cpp_CDoor_reposition_FUN_0047fd20
// Address: 0047fd20
void CDoor::reposition(CDoor * this_ptr);

// Original: core_door.cpp_CDoor_process_FUN_004800c0
// Address: 004800c0
void CDoor::process(CDoor * this_ptr, float delta_time);

// Original: core_door.cpp_CDoor_renderOpaque_FUN_004807d0
// Address: 004807d0
int CDoor::renderOpaque(CDoor * this_ptr);

// Original: core_door.cpp_CDoor_renderBackground_FUN_004809e0
// Address: 004809e0
void CDoor::renderBackground(CDoor * this_ptr, int layer_flag);

// Original: core_door.cpp_CDoor_getBoundingBox_FUN_00480a50
// Address: 00480a50
CBoundingBox3D * CDoor::getBoundingBox(CDoor * this_ptr, CBoundingBox3D * out_box);

// Original: core_door.cpp_CDoor_serialize_FUN_00480aa0
// Address: 00480aa0
void CDoor::serialize(CDoor * this_ptr);

// Original: core_door.cpp_CDoor_hasCollision_FUN_00480d90
// Address: 00480d90
int CDoor::hasCollision(CDoor * this_ptr, SCollisionInfo * collision_info);

// Original: core_door.cpp_CDoor_getGroundType_FUN_00480dd0
// Address: 00480dd0
int CDoor::getGroundType(CDoor * this_ptr);

// Original: core_door.cpp_CDoor_FUN_00480de0
// Address: 00480de0
void CDoor(CDoor * this_ptr);

// Original: core_door.cpp_CDoor_getBlockVirtualDirectorFlag_FUN_00480df0
// Address: 00480df0
int CDoor::getBlockVirtualDirectorFlag(CDoor * this_ptr);

// Original: core_door.cpp_CDoor_allowBulletHoles_FUN_00480e00
// Address: 00480e00
int CDoor::allowBulletHoles(CDoor * this_ptr);

// Original: core_door.cpp_CDoor_getOpenStandPos_FUN_00480e20
// Address: 00480e20
float * CDoor::getOpenStandPos(CDoor * this_ptr);

// Original: core_door.cpp_CDoor_updateCollisionData_FUN_00481020
// Address: 00481020
void CDoor::updateCollisionData(CDoor * this_ptr);

// Original: core_door.cpp_CDoor_getMoveType_FUN_00481070
// Address: 00481070
int CDoor::getMoveType(CDoor * this_ptr);

// Original: core_door.cpp_CDoor_FUN_00481210
// Address: 00481210
void CDoor(CDoor * this_ptr);

// Original: core_door.cpp_FUN_00481250
// Address: 00481250
undefined FUN_00481250();

// Original: core_door.cpp_FUN_004812b0
// Address: 004812b0
int FUN_004812b0(void);

// Original: core_door.cpp_CDoor_getPropertyList_FUN_00481320
// Address: 00481320
void CDoor::getPropertyList(CDoor * this_ptr, CActorPropertyList * property_list);

// Original: core_door.cpp_CDoor_processInEditor_FUN_00481590
// Address: 00481590
void CDoor::processInEditor(CDoor * this_ptr);

// Original: core_door.cpp_CDoor_writeDependencies_FUN_00481630
// Address: 00481630
void CDoor::writeDependencies(CDoor * this_ptr, FILE * file_handle);

// Original: core_door.cpp_FUN_00481650
// Address: 00481650
undefined FUN_00481650();

// Original: core_door.cpp_CDoor_dtor_FUN_00481670
// Address: 00481670
CDoor * CDoor::dtor(CDoor * this_ptr, uint d1, uint d2);
