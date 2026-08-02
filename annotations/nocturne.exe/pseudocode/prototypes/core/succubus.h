#pragma once

// Function prototypes for core/succubus.cpp
// Generated from Ghidra function signatures

// Original: core_succubus.cpp_staticInit_FUN_00540ae0
// Address: 00540ae0
void __cdecl staticInit(void);

// Original: core_succubus.cpp_factoryFunc_FUN_00540b10
// Address: 00540b10
CSuccubus * __cdecl factoryFunc(void);

// Original: core_succubus.cpp_CSuccubus_getActorType_FUN_00540b30
// Address: 00540b30
CDemonActorType * CSuccubus::getActorType(void);

// Original: core_succubus.cpp_CSuccubus_ctor_FUN_00540b40
// Address: 00540b40
CSuccubus * __cdecl CSuccubus::ctor(CSuccubus *this_ptr);

// Original: core_succubus.cpp_CSuccubus_setup_FUN_00540c20
// Address: 00540c20
void CSuccubus::setup(CEnemy *param_1);

// Original: core_succubus.cpp_CSuccubus_process_FUN_00540f50
// Address: 00540f50
void CSuccubus::process(CEnemy *param_1,float param_2);

// Original: core_succubus.cpp_CSuccubus_renderOpaque_FUN_00541640
// Address: 00541640
int CSuccubus::renderOpaque(CCharacter *param_1);

// Original: core_succubus.cpp_CSuccubus_archive_FUN_005417c0
// Address: 005417c0
void __cdecl CSuccubus::archive(CSuccubus *this_ptr);

// Original: core_succubus.cpp_CSuccubus_processDamage_FUN_00541810
// Address: 00541810
void CSuccubus::processDamage(CEnemy *param_1,SDamageInfo *param_2);

// Original: core_succubus.cpp_CSuccubus_getTargetPoints_FUN_00541830
// Address: 00541830
undefined4 CSuccubus::getTargetPoints(void);

// Original: core_succubus.cpp_CSuccubus_getCollisionType_FUN_00541840
// Address: 00541840
void CSuccubus::getCollisionType(CCharacter *param_1,SCollisionInfo *param_2);

// Original: core_succubus.cpp_CSuccubus_dtor_FUN_00541860
// Address: 00541860
CSuccubus * __cdecl CSuccubus::dtor(CSuccubus *this_ptr,uint flags);
