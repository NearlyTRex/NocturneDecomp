#pragma once

// Function prototypes for core/door.cpp
// Generated from Ghidra function signatures

// Original: core_door.cpp_staticInit_FUN_0047fa60
// Address: 0047fa60
void __cdecl staticInit(void);

// Original: core_door.cpp_factoryFunc_FUN_0047fa90
// Address: 0047fa90
CDoor * __cdecl factoryFunc(void);

// Original: core_door.cpp_CDoor_getActorType_FUN_0047fac0
// Address: 0047fac0
CDemonActorType * __cdecl CDoor::getActorType(CDoor *this_ptr);

// Original: core_door.cpp_CDoor_ctor_FUN_0047fad0
// Address: 0047fad0
CDoor * __cdecl CDoor::ctor(CDoor *this_ptr);

// Original: core_door.cpp_CDoor_setup_FUN_0047fc70
// Address: 0047fc70
void __cdecl CDoor::setup(CDoor *this_ptr);

// Original: core_door.cpp_CDoor_onOpened_FUN_0047fcf0
// Address: 0047fcf0
void __cdecl CDoor::onOpened(CDoor *this_ptr);

// Original: core_door.cpp_CDoor_reposition_FUN_0047fd20
// Address: 0047fd20
void __cdecl CDoor::reposition(CDoor *this_ptr);

// Original: core_door.cpp_CDoor_process_FUN_004800c0
// Address: 004800c0
void __cdecl CDoor::process(CDoor *this_ptr,float delta_time);

// Original: core_door.cpp_CDoor_renderOpaque_FUN_004807d0
// Address: 004807d0
int __cdecl CDoor::renderOpaque(CDoor *this_ptr);

// Original: core_door.cpp_CDoor_renderBackground_FUN_004809e0
// Address: 004809e0
void __cdecl CDoor::renderBackground(CDoor *this_ptr,int layer_flag);

// Original: core_door.cpp_CDoor_getBoundingBox_FUN_00480a50
// Address: 00480a50
CBoundingBox3D * __cdecl CDoor::getBoundingBox(CDoor *this_ptr,CBoundingBox3D *out_box);

// Original: core_door.cpp_CDoor_archive_FUN_00480aa0
// Address: 00480aa0
void __cdecl CDoor::archive(CDoor *this_ptr);

// Original: core_door.cpp_CDoor_hasCollision_FUN_00480d90
// Address: 00480d90
int __cdecl CDoor::hasCollision(CDoor *this_ptr,SCollisionInfo *collision_info);

// Original: core_door.cpp_CDoor_getGroundType_FUN_00480dd0
// Address: 00480dd0
int __cdecl CDoor::getGroundType(CDoor *this_ptr);

// Original: core_door.cpp_CDoor_setSwingRange_FUN_00480de0
// Address: 00480de0
void __cdecl CDoor::setSwingRange(CDoor *this_ptr,float swing_range);

// Original: core_door.cpp_CDoor_getBlockVirtualDirectorFlag_FUN_00480df0
// Address: 00480df0
int __cdecl CDoor::getBlockVirtualDirectorFlag(CDoor *this_ptr);

// Original: core_door.cpp_CDoor_allowBulletHoles_FUN_00480e00
// Address: 00480e00
int __cdecl CDoor::allowBulletHoles(CDoor *this_ptr);

// Original: core_door.cpp_CDoor_getOpenStandPos_FUN_00480e20
// Address: 00480e20
float * __cdecl CDoor::getOpenStandPos(CDoor *this_ptr);

// Original: core_door.cpp_CDoor_updateCollisionData_FUN_00481020
// Address: 00481020
void __cdecl CDoor::updateCollisionData(CDoor *this_ptr);

// Original: core_door.cpp_CDoor_getMoveType_FUN_00481070
// Address: 00481070
int __cdecl CDoor::getMoveType(CDoor *this_ptr,CDemonActor *opener);

// Original: core_door.cpp_CDoor_onLocked_FUN_00481210
// Address: 00481210
uint __cdecl CDoor::onLocked(CDoor *this_ptr);

// Original: core_door.cpp_CDoor_propertyDisplayCallback_FUN_00481250
// Address: 00481250
void __cdecl CDoor::propertyDisplayCallback(CDoor *this_ptr,CActorPropertyList *property,char *output_buffer);

// Original: core_door.cpp_CDoor_propertyActionCallback_FUN_004812b0
// Address: 004812b0
int __cdecl CDoor::propertyActionCallback(CDoor *this_ptr,CActorProperty *property);

// Original: core_door.cpp_CDoor_getPropertyList_FUN_00481320
// Address: 00481320
void __cdecl CDoor::getPropertyList(CDoor *this_ptr,CActorPropertyList *property_list);

// Original: core_door.cpp_CDoor_processInEditor_FUN_00481590
// Address: 00481590
void __cdecl CDoor::processInEditor(CDoor *this_ptr);

// Original: core_door.cpp_CDoor_addFilesToExtract_FUN_00481630
// Address: 00481630
void __cdecl CDoor::addFilesToExtract(CDoor *this_ptr,_FILE *file_handle);

// Original: core_door.cpp_clearRuleList_FUN_00481650
// Address: 00481650
CRuleList * __cdecl clearRuleList(CRuleList *rule_list);

// Original: core_door.cpp_CDoor_dtor_FUN_00481670
// Address: 00481670
CDoor * __cdecl CDoor::dtor(CDoor *this_ptr,uint flags);
