#pragma once

// Function prototypes for core/turret.cpp
// Generated from Ghidra function signatures

// Original: core_turret.cpp_staticInit_FUN_005e2080
// Address: 005e2080
void __cdecl staticInit(void);

// Original: core_turret.cpp_factoryFunc_FUN_005e20b0
// Address: 005e20b0
CTurret * __cdecl factoryFunc(void);

// Original: core_turret.cpp_CTurret_getActorType_FUN_005e20e0
// Address: 005e20e0
CDemonActorType * __cdecl CTurret::getActorType(CTurret *this_ptr);

// Original: core_turret.cpp_CTurret_ctor_FUN_005e20f0
// Address: 005e20f0
CTurret * __cdecl CTurret::ctor(CTurret *this_ptr);

// Original: core_turret.cpp_CTurret_setup_FUN_005e2240
// Address: 005e2240
void __cdecl CTurret::setup(CTurret *this_ptr);

// Original: core_turret.cpp_CTurret_renderOpaque_FUN_005e2320
// Address: 005e2320
int __cdecl CTurret::renderOpaque(CTurret *this_ptr);

// Original: core_turret.cpp_CTurret_process_FUN_005e2430
// Address: 005e2430
void __cdecl CTurret::process(CTurret *this_ptr,float delta_time);

// Original: core_turret.cpp_CTurret_getBoundingBox_FUN_005e2910
// Address: 005e2910
CBoundingBox3D * __cdecl CTurret::getBoundingBox(CTurret *this_ptr,CBoundingBox3D *out_box);

// Original: core_turret.cpp_CTurret_getCurFrame_FUN_005e2b30
// Address: 005e2b30
float __cdecl CTurret::getCurFrame(CTurret *this_ptr);

// Original: core_turret.cpp_CTurret_archive_FUN_005e2c40
// Address: 005e2c40
void __cdecl CTurret::archive(CTurret *this_ptr);

// Original: core_turret.cpp_CTurret_FUN_005e2d50
// Address: 005e2d50
void __cdecl CTurret(CTurret *this_ptr);

// Original: core_turret.cpp_CTurret_FUN_005e3280
// Address: 005e3280
int __cdecl CTurret(CTurret *this_ptr);

// Original: core_turret.cpp_CTurret_getInteractionInfo_FUN_005e3440
// Address: 005e3440
void __cdecl CTurret::getInteractionInfo(CTurret *this_ptr,SInteractionInfo *interaction_info);

// Original: core_turret.cpp_CTurret_startInteraction_FUN_005e34b0
// Address: 005e34b0
int __cdecl CTurret::startInteraction(CTurret *this_ptr,CDemonActor *user);

// Original: core_turret.cpp_CTurret_updateInteraction_FUN_005e34d0
// Address: 005e34d0
int __cdecl CTurret::updateInteraction(CTurret *this_ptr,COrientation *user_orientation,SInteractionState *interaction_state);

// Original: core_turret.cpp_CTurret_stopInteraction_FUN_005e3540
// Address: 005e3540
void __cdecl CTurret::stopInteraction(CTurret *this_ptr,CDemonActor *user);

// Original: core_turret.cpp_CTurret_FUN_005e3560
// Address: 005e3560
void __cdecl CTurret(CTurret *this_ptr);

// Original: core_turret.cpp_CTurret_FUN_005e36f0
// Address: 005e36f0
float __cdecl CTurret(CTurret *this_ptr);

// Original: core_turret.cpp_CTurret_FUN_005e3720
// Address: 005e3720
int __cdecl CTurret(CTurret *this_ptr);

// Original: core_turret.cpp_CTurret_fire_FUN_005e3750
// Address: 005e3750
int __cdecl CTurret::fire(CTurret *this_ptr);

// Original: core_turret.cpp_CTurret_canPickup_FUN_005e3c70
// Address: 005e3c70
int __cdecl CTurret::canPickup(CTurret *this_ptr,CDemonActor *picker);

// Original: core_turret.cpp_CTurret_getPropertyList_FUN_005e3ca0
// Address: 005e3ca0
void __cdecl CTurret::getPropertyList(CTurret *this_ptr,CActorPropertyList *property_list);

// Original: core_turret.cpp_CTurret_FUN_005e3dd0
// Address: 005e3dd0
void __cdecl CTurret(CTurret *this_ptr);

// Original: core_turret.cpp_CTurret_dtor_FUN_005e3e00
// Address: 005e3e00
CTurret * __cdecl CTurret::dtor(CTurret *this_ptr,uint flags);
