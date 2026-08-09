#pragma once

// Function prototypes for core/werewolf.cpp
// Generated from Ghidra function signatures

// Original: core_werewolf.cpp_staticInit_FUN_005efb70
// Address: 005efb70
void __cdecl staticInit(void);

// Original: core_werewolf.cpp_factoryFuncWerewolf_FUN_005efbd0
// Address: 005efbd0
CWerewolf * __cdecl factoryFuncWerewolf(void);

// Original: core_werewolf.cpp_CWerewolf_getActorType_FUN_005efc00
// Address: 005efc00
CDemonActorType * __cdecl CWerewolf::getActorType(CWerewolf *this_ptr);

// Original: core_werewolf.cpp_CWerewolf_ctor_FUN_005efc10
// Address: 005efc10
CWerewolf * __cdecl CWerewolf::ctor(CWerewolf *this_ptr);

// Original: core_werewolf.cpp_CWerewolf_setup_FUN_005efcc0
// Address: 005efcc0
void __cdecl CWerewolf::setup(CWerewolf *this_ptr);

// Original: core_werewolf.cpp_CWerewolf_process_FUN_005efde0
// Address: 005efde0
void __cdecl CWerewolf::process(CWerewolf *this_ptr,float delta_time);

// Original: core_werewolf.cpp_CWerewolf_setWalkTarget_FUN_005f11a0
// Address: 005f11a0
void __cdecl CWerewolf::setWalkTarget(CWerewolf *this_ptr,CDemonActor *target,float speed,float distance);

// Original: core_werewolf.cpp_CWerewolf_playHowl_FUN_005f11e0
// Address: 005f11e0
void __cdecl CWerewolf::playHowl(CWerewolf *this_ptr);

// Original: core_werewolf.cpp_CWerewolf_renderEyeGlow_FUN_005f1230
// Address: 005f1230
void __cdecl CWerewolf::renderEyeGlow(CWerewolf *this_ptr,CVector3f *eye_position);

// Original: core_werewolf.cpp_CWerewolf_renderTransparent_FUN_005f1820
// Address: 005f1820
int __cdecl CWerewolf::renderTransparent(CWerewolf *this_ptr);

// Original: core_werewolf.cpp_CWerewolf_archive_FUN_005f1980
// Address: 005f1980
void __cdecl CWerewolf::archive(CWerewolf *this_ptr);

// Original: core_werewolf.cpp_CWerewolf_processDamage_FUN_005f1ac0
// Address: 005f1ac0
void __cdecl CWerewolf::processDamage(CWerewolf *this_ptr,SDamageInfo *damage_info);

// Original: core_werewolf.cpp_CWerewolf_getDeathState_FUN_005f1db0
// Address: 005f1db0
EDeathState __cdecl CWerewolf::getDeathState(CWerewolf *this_ptr);

// Original: core_werewolf.cpp_CWerewolf_getTargetPoints_FUN_005f1df0
// Address: 005f1df0
int __cdecl CWerewolf::getTargetPoints(CWerewolf *this_ptr,CVector3f *out_points_array);

// Original: core_werewolf.cpp_CWerewolf_processChainConstraint_FUN_005f1e40
// Address: 005f1e40
void __cdecl CWerewolf::processChainConstraint(CWerewolf *this_ptr);

// Original: core_werewolf.cpp_CWerewolf_propertyDisplayCallback_FUN_005f2010
// Address: 005f2010
void __cdecl CWerewolf::propertyDisplayCallback(CWerewolf *this_ptr,CActorProperty *property,char *output_buffer);

// Original: core_werewolf.cpp_CWerewolf_propertyActionCallback_FUN_005f2070
// Address: 005f2070
int __cdecl CWerewolf::propertyActionCallback(CWerewolf *this_ptr,CActorProperty *property);

// Original: core_werewolf.cpp_CWerewolf_getPropertyList_FUN_005f20d0
// Address: 005f20d0
void __cdecl CWerewolf::getPropertyList(CWerewolf *this_ptr,CActorPropertyList *property_list);

// Original: core_werewolf.cpp_CWerewolf_randomize_FUN_005f21e0
// Address: 005f21e0
void __cdecl CWerewolf::randomize(CWerewolf *this_ptr);

// Original: core_werewolf.cpp_CWerewolf_addFilesToExtract_FUN_005f21f0
// Address: 005f21f0
void __cdecl CWerewolf::addFilesToExtract(CWerewolf *this_ptr,_FILE *file_handle);

// Original: core_werewolf.cpp_CWerewolf_dtor_FUN_005f2220
// Address: 005f2220
CWerewolf * __cdecl CWerewolf::dtor(CWerewolf *this_ptr,uint flags);
