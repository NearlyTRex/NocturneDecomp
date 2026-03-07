#pragma once

// Function prototypes for core/trigger.cpp
// Generated from Ghidra function signatures

// Original: core_trigger.cpp_staticInit_FUN_005df7d0
// Address: 005df7d0
void __cdecl staticInit(void);

// Original: core_trigger.cpp_factoryFunc_FUN_005df800
// Address: 005df800
CTrigger * __cdecl factoryFunc(void);

// Original: core_trigger.cpp_CTrigger_getActorType_FUN_005df830
// Address: 005df830
CDemonActorType * __cdecl CTrigger::getActorType(CTrigger *this_ptr);

// Original: core_trigger.cpp_CTrigger_ctor_FUN_005df840
// Address: 005df840
CTrigger * __cdecl CTrigger::ctor(CTrigger *this_ptr);

// Original: core_trigger.cpp_CTrigger_setup_FUN_005df990
// Address: 005df990
void __cdecl CTrigger::setup(CTrigger *this_ptr);

// Original: core_trigger.cpp_CTrigger_process_FUN_005dfac0
// Address: 005dfac0
void __cdecl CTrigger::process(CTrigger *this_ptr,float delta_time);

// Original: core_trigger.cpp_CTrigger_renderTransparent_FUN_005e00d0
// Address: 005e00d0
int __cdecl CTrigger::renderTransparent(CTrigger *this_ptr);

// Original: core_trigger.cpp_CTrigger_getBoundingBox_FUN_005e0630
// Address: 005e0630
CBoundingBox3D * __cdecl CTrigger::getBoundingBox(CTrigger *this_ptr,CBoundingBox3D *out_box);

// Original: core_trigger.cpp_CTrigger_archive_FUN_005e0690
// Address: 005e0690
void __cdecl CTrigger::archive(CTrigger *this_ptr);

// Original: core_trigger.cpp_CTrigger_hasCollision_FUN_005e0930
// Address: 005e0930
int __cdecl CTrigger::hasCollision(CTrigger *this_ptr,SCollisionInfo *collision_info);

// Original: core_trigger.cpp_CTrigger_evaluateTriggerCondition_FUN_005e0980
// Address: 005e0980
int __cdecl CTrigger::evaluateTriggerCondition(CTrigger *this_ptr);

// Original: core_trigger.cpp_CTrigger_processActionButton_FUN_005e0a20
// Address: 005e0a20
int __cdecl CTrigger::processActionButton(CTrigger *this_ptr);

// Original: core_trigger.cpp_CTrigger_onLaserHit_FUN_005e0a50
// Address: 005e0a50
void __cdecl CTrigger::onLaserHit(CTrigger *this_ptr,SLaserInfo *laser_info);

// Original: core_trigger.cpp_CTrigger_onProjectileHit_FUN_005e0aa0
// Address: 005e0aa0
void __cdecl CTrigger::onProjectileHit(CTrigger *this_ptr);

// Original: core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0
// Address: 005e0ac0
int __cdecl CTrigger::acceptsDamageFrom(CTrigger *this_ptr,CDemonActor *actor);

// Original: core_trigger.cpp_CTrigger_applyDamage_FUN_005e0b00
// Address: 005e0b00
void __cdecl CTrigger::applyDamage(CTrigger *this_ptr,float hit_points);

// Original: core_trigger.cpp_CTrigger_calculateTestRadius_FUN_005e0ba0
// Address: 005e0ba0
void __cdecl CTrigger::calculateTestRadius(CTrigger *this_ptr);

// Original: core_trigger.cpp_CTrigger_getTargetPoints_FUN_005e0c30
// Address: 005e0c30
int __cdecl CTrigger::getTargetPoints(CTrigger *this_ptr,CVector3f *out_points_array);

// Original: core_trigger.cpp_CTrigger_containsActor_FUN_005e0cd0
// Address: 005e0cd0
int __cdecl CTrigger::containsActor(CTrigger *this_ptr,CDemonActor *actor);

// Original: core_trigger.cpp_CTrigger_getPropertyList_FUN_005e0f70
// Address: 005e0f70
void __cdecl CTrigger::getPropertyList(CTrigger *this_ptr,CActorPropertyList *property_list);

// Original: core_trigger.cpp_CTrigger_processInEditor_FUN_005e1180
// Address: 005e1180
void __cdecl CTrigger::processInEditor(CTrigger *this_ptr);

// Original: core_trigger.cpp_CTrigger_showEditorHelp_FUN_005e1350
// Address: 005e1350
void __cdecl CTrigger::showEditorHelp(CTrigger *this_ptr,int *y_pos);

// Original: core_trigger.cpp_CTrigger_dtor_FUN_005e1660
// Address: 005e1660
CTrigger * __cdecl CTrigger::dtor(CTrigger *this_ptr,uint flags);
