#pragma once

// Function prototypes for core/trigger.cpp
// Generated from Ghidra function signatures

// Original: core_trigger.cpp_staticInit_FUN_00547850
// Address: 00547850
void __cdecl staticInit(void);

// Original: core_trigger.cpp_factoryFunc_FUN_00547880
// Address: 00547880
CTrigger * __cdecl factoryFunc(void);

// Original: core_trigger.cpp_CTrigger_getActorType_FUN_005478a0
// Address: 005478a0
CDemonActorType * CTrigger::getActorType(void);

// Original: core_trigger.cpp_CTrigger_ctor_FUN_005478b0
// Address: 005478b0
CTrigger * __cdecl CTrigger::ctor(CTrigger *this_ptr);

// Original: core_trigger.cpp_CTrigger_setup_FUN_00547a00
// Address: 00547a00
void __cdecl CTrigger::setup(CTrigger *this_ptr);

// Original: core_trigger.cpp_CTrigger_process_FUN_00547b30
// Address: 00547b30
void CTrigger::process(CTrigger *param_1,float param_2);

// Original: core_trigger.cpp_CTrigger_renderTransparent_FUN_00548100
// Address: 00548100
undefined4 CTrigger::renderTransparent(void);

// Original: core_trigger.cpp_CTrigger_getBoundingBox_FUN_00548110
// Address: 00548110
void CTrigger::getBoundingBox(int param_1,float *param_2);

// Original: core_trigger.cpp_CTrigger_archive_FUN_00548170
// Address: 00548170
void __cdecl CTrigger::archive(CTrigger *this_ptr);

// Original: core_trigger.cpp_CTrigger_getCollisionType_FUN_00548410
// Address: 00548410
undefined4 CTrigger::getCollisionType(int param_1,int *param_2);

// Original: core_trigger.cpp_CTrigger_evaluateTriggerCondition_FUN_00548460
// Address: 00548460
undefined4 CTrigger::evaluateTriggerCondition(CDemonActor *param_1,undefined4 param_2,CVector3f *param_3);

// Original: core_trigger.cpp_CTrigger_processActionButton_FUN_00548500
// Address: 00548500
undefined4 CTrigger::processActionButton(int param_1);

// Original: core_trigger.cpp_CTrigger_onLaserHit_FUN_00548530
// Address: 00548530
void CTrigger::onLaserHit(CDemonActor *param_1,SLaserInfo *param_2);

// Original: core_trigger.cpp_CTrigger_onProjectileHit_FUN_00548580
// Address: 00548580
void __cdecl CTrigger::onProjectileHit(CTrigger *this_ptr);

// Original: core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_005485a0
// Address: 005485a0
int __cdecl CTrigger::acceptsDamageFrom(CTrigger *this_ptr,CDemonActor *actor);

// Original: core_trigger.cpp_CTrigger_applyDamage_FUN_005485e0
// Address: 005485e0
void __cdecl CTrigger::applyDamage(CTrigger *this_ptr,float hit_points);

// Original: core_trigger.cpp_CTrigger_calculateTestRadius_FUN_00548680
// Address: 00548680
void __cdecl CTrigger::calculateTestRadius(CTrigger *this_ptr);

// Original: core_trigger.cpp_CTrigger_getTargetPoints_FUN_00548710
// Address: 00548710
undefined4 CTrigger::getTargetPoints(int param_1,float *param_2);

// Original: core_trigger.cpp_CTrigger_containsActor_FUN_005487b0
// Address: 005487b0
int __cdecl CTrigger::containsActor(CTrigger *this_ptr,CDemonActor *actor);

// Original: core_trigger.cpp_CTrigger_dtor_FUN_00548a50
// Address: 00548a50
CTrigger * __cdecl CTrigger::dtor(CTrigger *this_ptr,uint flags);
