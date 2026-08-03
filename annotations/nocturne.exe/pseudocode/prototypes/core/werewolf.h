#pragma once

// Function prototypes for core/werewolf.cpp
// Generated from Ghidra function signatures

// Original: core_werewolf.cpp_staticInit_FUN_00555a00
// Address: 00555a00
void __cdecl staticInit(void);

// Original: core_werewolf.cpp_factoryFunc_FUN_00555a60
// Address: 00555a60
CWerewolf * __cdecl factoryFunc(void);

// Original: core_werewolf.cpp_CWerewolf_getActorType_FUN_00555a80
// Address: 00555a80
CDemonActorType * __cdecl CWerewolf::getActorType(CWerewolf *this_ptr);

// Original: core_werewolf.cpp_CWerewolf_ctor_FUN_00555a90
// Address: 00555a90
CWerewolf * __cdecl CWerewolf::ctor(CWerewolf *this_ptr);

// Original: core_werewolf.cpp_CWerewolf_setup_FUN_00555b40
// Address: 00555b40
void __cdecl CWerewolf::setup(CWerewolf *this_ptr);

// Original: core_werewolf.cpp_CWerewolf_process_FUN_00555c60
// Address: 00555c60
void __cdecl CWerewolf::process(CWerewolf *this_ptr,float delta_time);

// Original: core_werewolf.cpp_CWerewolf_setWalkTarget_FUN_00557020
// Address: 00557020
void __cdecl CWerewolf::setWalkTarget(CWerewolf *this_ptr,CDemonActor *target,float speed,float distance);

// Original: core_werewolf.cpp_CWerewolf_playHowl_FUN_00557060
// Address: 00557060
void __cdecl CWerewolf::playHowl(CWerewolf *this_ptr);

// Original: core_werewolf.cpp_CWerewolf_renderEyeGlow_FUN_005570b0
// Address: 005570b0
void __cdecl CWerewolf::renderEyeGlow(CWerewolf *this_ptr,CVector3f *eye_position);

// Original: core_werewolf.cpp_CWerewolf_renderTransparent_FUN_005576a0
// Address: 005576a0
int __cdecl CWerewolf::renderTransparent(CWerewolf *this_ptr);

// Original: core_werewolf.cpp_CWerewolf_archive_FUN_00557800
// Address: 00557800
void __cdecl CWerewolf::archive(CWerewolf *this_ptr);

// Original: core_werewolf.cpp_CWerewolf_processDamage_FUN_00557940
// Address: 00557940
void __cdecl CWerewolf::processDamage(CWerewolf *this_ptr,SDamageInfo *damage_info);

// Original: core_werewolf.cpp_CWerewolf_getDeathState_FUN_00557c30
// Address: 00557c30
EDeathState __cdecl CWerewolf::getDeathState(CWerewolf *this_ptr);

// Original: core_werewolf.cpp_CWerewolf_getTargetPoints_FUN_00557c70
// Address: 00557c70
int __cdecl CWerewolf::getTargetPoints(CWerewolf *this_ptr,CVector3f *out_points_array);

// Original: core_werewolf.cpp_CWerewolf_processChainConstraint_FUN_00557cc0
// Address: 00557cc0
void __cdecl CWerewolf::processChainConstraint(CWerewolf *this_ptr);

// Original: core_werewolf.cpp_CWerewolf_dtor_FUN_00557e90
// Address: 00557e90
CWerewolf * __cdecl CWerewolf::dtor(CWerewolf *this_ptr,uint flags);
