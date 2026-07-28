#pragma once

// Function prototypes for core/werewolf.cpp
// Generated from Ghidra function signatures

// Original: core_werewolf.cpp_staticInit_FUN_00555a00
// Address: 00555a00
void __cdecl staticInit(void);

// Original: core_werewolf.cpp_FUN_00555a60
// Address: 00555a60
void FUN_00555a60(void);

// Original: core_werewolf.cpp_FUN_00555a80
// Address: 00555a80
CDemonActorType * FUN_00555a80(void);

// Original: core_werewolf.cpp_CWerewolf_ctor_FUN_00555a90
// Address: 00555a90
CWerewolf * __cdecl CWerewolf::ctor(CWerewolf *this_ptr);

// Original: core_werewolf.cpp_CWerewolf_setup_FUN_00555b40
// Address: 00555b40
void CWerewolf::setup(CEnemy *param_1);

// Original: core_werewolf.cpp_CWerewolf_process_FUN_00555c60
// Address: 00555c60
void CWerewolf::process(CWerewolf *param_1,float param_2);

// Original: core_werewolf.cpp_CWerewolf_setWalkTarget_FUN_00557020
// Address: 00557020
void CWerewolf::setWalkTarget(CCharacter *param_1,CDemonActor *param_2,float param_3,float param_4);

// Original: core_werewolf.cpp_CWerewolf_playHowl_FUN_00557060
// Address: 00557060
void __cdecl CWerewolf::playHowl(CWerewolf *this_ptr);

// Original: core_werewolf.cpp_CWerewolf_renderEyeGlow_FUN_005570b0
// Address: 005570b0
void __cdecl CWerewolf::renderEyeGlow(CWerewolf *this_ptr,CVector3f *eye_position);

// Original: core_werewolf.cpp_FUN_005576a0
// Address: 005576a0
int FUN_005576a0(CWerewolf *param_1);

// Original: core_werewolf.cpp_CWerewolf_archive_FUN_00557800
// Address: 00557800
void CWerewolf::archive(CEnemy *param_1);

// Original: core_werewolf.cpp_CWerewolf_processDamage_FUN_00557940
// Address: 00557940
void CWerewolf::processDamage(CWerewolf *param_1,SDamageInfo *param_2);

// Original: core_werewolf.cpp_CWerewolf_getDeathState_FUN_00557c30
// Address: 00557c30
undefined4 CWerewolf::getDeathState(int param_1);

// Original: core_werewolf.cpp_FUN_00557c70
// Address: 00557c70
undefined4 FUN_00557c70(int param_1,CVector3f *param_2);

// Original: core_werewolf.cpp_CWerewolf_processChainConstraint_FUN_00557cc0
// Address: 00557cc0
void __cdecl CWerewolf::processChainConstraint(CWerewolf *this_ptr);

// Original: core_werewolf.cpp_CWerewolf_dtor_FUN_00557e90
// Address: 00557e90
CDemonActor * CWerewolf::dtor(CDemonActor *param_1,byte param_2);
