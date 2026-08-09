#pragma once

// Function prototypes for core/trigger.cpp
// Generated from Ghidra function signatures

// Original: core_trigger.cpp_staticInit_FUN_00547850
// Address: 00547850
void __cdecl staticInit(void);

// Original: core_trigger.cpp_factoryFuncTrigger_FUN_00547880
// Address: 00547880
CTrigger * __cdecl factoryFuncTrigger(void);

// Original: core_trigger.cpp_CTrigger_getActorType_FUN_005478a0
// Address: 005478a0
CDemonActorType * __cdecl CTrigger::getActorType(CTrigger *this_ptr);

// Original: core_trigger.cpp_CTrigger_ctor_FUN_005478b0
// Address: 005478b0
CTrigger * __cdecl CTrigger::ctor(CTrigger *this_ptr);

// Original: core_trigger.cpp_CTrigger_setup_FUN_00547a00
// Address: 00547a00
void __cdecl CTrigger::setup(CTrigger *this_ptr);

// Original: core_trigger.cpp_CTrigger_process_FUN_00547b30
// Address: 00547b30
void __cdecl CTrigger::process(CTrigger *this_ptr,float delta_time);

// Original: core_trigger.cpp_CTrigger_renderTransparent_FUN_00548100
// Address: 00548100
int __cdecl CTrigger::renderTransparent(CTrigger *this_ptr);

// Original: core_trigger.cpp_CTrigger_getBoundingBox_FUN_00548110
// Address: 00548110
CBoundingBox3D * __cdecl CTrigger::getBoundingBox(CTrigger *this_ptr,CBoundingBox3D *out_box);

// Original: core_trigger.cpp_CTrigger_archive_FUN_00548170
// Address: 00548170
void __cdecl CTrigger::archive(CTrigger *this_ptr);

// Original: core_trigger.cpp_CTrigger_getCollisionType_FUN_00548410
// Address: 00548410
ECollisionType __cdecl CTrigger::getCollisionType(CTrigger *this_ptr,SCollisionInfo *collision_info);

// Original: core_trigger.cpp_CTrigger_evaluateTriggerCondition_FUN_00548460
// Address: 00548460
float __cdecl CTrigger::evaluateTriggerCondition(CTrigger *this_ptr,CDemonActor *querying_actor,CVector3f *query_position);

// Original: core_trigger.cpp_CTrigger_processActionButton_FUN_00548500
// Address: 00548500
int __cdecl CTrigger::processActionButton(CTrigger *this_ptr);

// Original: core_trigger.cpp_CTrigger_onLaserHit_FUN_00548530
// Address: 00548530
void __cdecl CTrigger::onLaserHit(CTrigger *this_ptr,SLaserInfo *laser_info);

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
int __cdecl CTrigger::getTargetPoints(CTrigger *this_ptr,CVector3f *out_points_array);

// Original: core_trigger.cpp_CTrigger_containsActor_FUN_005487b0
// Address: 005487b0
int __cdecl CTrigger::containsActor(CTrigger *this_ptr,CDemonActor *actor);

// Original: core_trigger.cpp_CTrigger_dtor_FUN_00548a50
// Address: 00548a50
CTrigger * __cdecl CTrigger::dtor(CTrigger *this_ptr,uint flags);
