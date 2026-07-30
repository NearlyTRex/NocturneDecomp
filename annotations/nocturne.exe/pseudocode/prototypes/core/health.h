#pragma once

// Function prototypes for core/health.cpp
// Generated from Ghidra function signatures

// Original: core_health.cpp_staticInit_FUN_004b4190
// Address: 004b4190
void __cdecl staticInit(void);

// Original: core_health.cpp_factoryFunc_FUN_004b41c0
// Address: 004b41c0
CHealthItem * __cdecl factoryFunc(void);

// Original: core_health.cpp_CHealthItem_getActorType_FUN_004b41e0
// Address: 004b41e0
CDemonActorType * CHealthItem::getActorType(void);

// Original: core_health.cpp_FUN_004b41f0
// Address: 004b41f0
int * FUN_004b41f0(CDemonActor *param_1);

// Original: core_health.cpp_CHealthItem_setup_FUN_004b4250
// Address: 004b4250
void CHealthItem::setup(CDemonActor *param_1);

// Original: core_health.cpp_CHealthItem_process_FUN_004b4270
// Address: 004b4270
void CHealthItem::process(void);

// Original: core_health.cpp_CHealthItem_renderOpaque_FUN_004b4280
// Address: 004b4280
int CHealthItem::renderOpaque(CDemonActor *param_1);

// Original: core_health.cpp_CHealthItem_getBoundingBox_FUN_004b42f0
// Address: 004b42f0
CBoundingBox3D * __cdecl CHealthItem::getBoundingBox(CHealthItem *this_ptr,CBoundingBox3D *out_box);

// Original: core_health.cpp_CHealthItem_archive_FUN_004b4340
// Address: 004b4340
void CHealthItem::archive(CDemonActor *param_1);

// Original: core_health.cpp_CHealthItem_getCollisionType_FUN_004b43c0
// Address: 004b43c0
undefined4 CHealthItem::getCollisionType(void);

// Original: core_health.cpp_CHealthItem_canPickup_FUN_004b43d0
// Address: 004b43d0
undefined4 CHealthItem::canPickup(undefined4 param_1,CDemonActor *param_2);

// Original: core_health.cpp_CHealthItem_useItem_FUN_004b43f0
// Address: 004b43f0
int __cdecl CHealthItem::useItem(CHealthItem *this_ptr,CCharacter *user);

// Original: core_health.cpp_CHealthItem_onPickup_FUN_004b4440
// Address: 004b4440
void CHealthItem::onPickup(CDemonActor *param_1,CDemonActor *param_2);

// Original: core_health.cpp_CHealthItem_dtor_FUN_004b4460
// Address: 004b4460
CDemonActor * CHealthItem::dtor(CDemonActor *param_1,byte param_2);
