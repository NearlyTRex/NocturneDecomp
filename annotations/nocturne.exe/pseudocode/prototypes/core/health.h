#pragma once

// Function prototypes for core/health.cpp
// Generated from Ghidra function signatures

// Original: core_health.cpp_staticInit_FUN_004b4190
// Address: 004b4190
void __cdecl staticInit(void);

// Original: core_health.cpp_factoryFuncHealthItem_FUN_004b41c0
// Address: 004b41c0
CHealthItem * __cdecl factoryFuncHealthItem(void);

// Original: core_health.cpp_CHealthItem_getActorType_FUN_004b41e0
// Address: 004b41e0
CDemonActorType * __cdecl CHealthItem::getActorType(CHealthItem *this_ptr);

// Original: core_health.cpp_CHealthItem_ctor_FUN_004b41f0
// Address: 004b41f0
CHealthItem * __cdecl CHealthItem::ctor(CHealthItem *this_ptr);

// Original: core_health.cpp_CHealthItem_setup_FUN_004b4250
// Address: 004b4250
void __cdecl CHealthItem::setup(CHealthItem *this_ptr);

// Original: core_health.cpp_CHealthItem_process_FUN_004b4270
// Address: 004b4270
void __cdecl CHealthItem::process(CHealthItem *this_ptr,float delta_time);

// Original: core_health.cpp_CHealthItem_renderOpaque_FUN_004b4280
// Address: 004b4280
int __cdecl CHealthItem::renderOpaque(CHealthItem *this_ptr);

// Original: core_health.cpp_CHealthItem_getBoundingBox_FUN_004b42f0
// Address: 004b42f0
CBoundingBox3D * __cdecl CHealthItem::getBoundingBox(CHealthItem *this_ptr,CBoundingBox3D *out_box);

// Original: core_health.cpp_CHealthItem_archive_FUN_004b4340
// Address: 004b4340
void __cdecl CHealthItem::archive(CHealthItem *this_ptr);

// Original: core_health.cpp_CHealthItem_getCollisionType_FUN_004b43c0
// Address: 004b43c0
ECollisionType __cdecl CHealthItem::getCollisionType(CHealthItem *this_ptr,SCollisionInfo *collision_info);

// Original: core_health.cpp_CHealthItem_canPickup_FUN_004b43d0
// Address: 004b43d0
int __cdecl CHealthItem::canPickup(CHealthItem *this_ptr,CDemonActor *picker);

// Original: core_health.cpp_CHealthItem_useItem_FUN_004b43f0
// Address: 004b43f0
int __cdecl CHealthItem::useItem(CHealthItem *this_ptr,CCharacter *user);

// Original: core_health.cpp_CHealthItem_onPickup_FUN_004b4440
// Address: 004b4440
void __cdecl CHealthItem::onPickup(CHealthItem *this_ptr,CDemonActor *owner);

// Original: core_health.cpp_CHealthItem_dtor_FUN_004b4460
// Address: 004b4460
CHealthItem * __cdecl CHealthItem::dtor(CHealthItem *this_ptr,uint flags);
