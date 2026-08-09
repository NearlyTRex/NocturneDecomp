#pragma once

// Function prototypes for core/health.cpp
// Generated from Ghidra function signatures

// Original: core_health.cpp_staticInit_FUN_004f1d60
// Address: 004f1d60
void __cdecl staticInit(void);

// Original: core_health.cpp_factoryFuncHealthItem_FUN_004f1d90
// Address: 004f1d90
CHealthItem * __cdecl factoryFuncHealthItem(void);

// Original: core_health.cpp_CHealthItem_getActorType_FUN_004f1dc0
// Address: 004f1dc0
CDemonActorType * __cdecl CHealthItem::getActorType(CHealthItem *this_ptr);

// Original: core_health.cpp_CHealthItem_ctor_FUN_004f1dd0
// Address: 004f1dd0
CHealthItem * __cdecl CHealthItem::ctor(CHealthItem *this_ptr);

// Original: core_health.cpp_CHealthItem_setup_FUN_004f1e30
// Address: 004f1e30
void __cdecl CHealthItem::setup(CHealthItem *this_ptr);

// Original: core_health.cpp_CHealthItem_process_FUN_004f1e50
// Address: 004f1e50
void __cdecl CHealthItem::process(CHealthItem *this_ptr,float delta_time);

// Original: core_health.cpp_CHealthItem_renderOpaque_FUN_004f1e60
// Address: 004f1e60
int __cdecl CHealthItem::renderOpaque(CHealthItem *this_ptr);

// Original: core_health.cpp_CHealthItem_getBoundingBox_FUN_004f1ed0
// Address: 004f1ed0
CBoundingBox3D * __cdecl CHealthItem::getBoundingBox(CHealthItem *this_ptr,CBoundingBox3D *out_box);

// Original: core_health.cpp_CHealthItem_archive_FUN_004f1f20
// Address: 004f1f20
void __cdecl CHealthItem::archive(CHealthItem *this_ptr);

// Original: core_health.cpp_CHealthItem_getCollisionType_FUN_004f1fa0
// Address: 004f1fa0
ECollisionType __cdecl CHealthItem::getCollisionType(CHealthItem *this_ptr,SCollisionInfo *collision_info);

// Original: core_health.cpp_CHealthItem_canPickup_FUN_004f1fb0
// Address: 004f1fb0
int __cdecl CHealthItem::canPickup(CHealthItem *this_ptr,CDemonActor *picker);

// Original: core_health.cpp_CHealthItem_useItem_FUN_004f1fd0
// Address: 004f1fd0
int __cdecl CHealthItem::useItem(CHealthItem *this_ptr,CCharacter *user);

// Original: core_health.cpp_CHealthItem_onPickup_FUN_004f2020
// Address: 004f2020
void __cdecl CHealthItem::onPickup(CHealthItem *this_ptr,CDemonActor *owner);

// Original: core_health.cpp_CHealthItem_getPropertyList_FUN_004f2040
// Address: 004f2040
void __cdecl CHealthItem::getPropertyList(CHealthItem *this_ptr,CActorPropertyList *property_list);

// Original: core_health.cpp_CHealthItem_addFilesToExtract_FUN_004f20b0
// Address: 004f20b0
void __cdecl CHealthItem::addFilesToExtract(CHealthItem *this_ptr,_FILE *file_handle);

// Original: core_health.cpp_CHealthItem_dtor_FUN_004f20d0
// Address: 004f20d0
CHealthItem * __cdecl CHealthItem::dtor(CHealthItem *this_ptr,uint flags);
