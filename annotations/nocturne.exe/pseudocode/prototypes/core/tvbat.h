#pragma once

// Function prototypes for core/tvbat.cpp
// Generated from Ghidra function signatures

// Original: core_tvbat.cpp_staticInit_FUN_0054b0b0
// Address: 0054b0b0
void __cdecl staticInit(void);

// Original: core_tvbat.cpp_FUN_0054b0e0
// Address: 0054b0e0
void FUN_0054b0e0(void);

// Original: core_tvbat.cpp_FUN_0054b100
// Address: 0054b100
CDemonActorType * FUN_0054b100(void);

// Original: core_tvbat.cpp_jitterValue_FUN_0054b110
// Address: 0054b110
float jitterValue(void);

// Original: core_tvbat.cpp_CTVBat_ctor_FUN_0054b140
// Address: 0054b140
CTVBat * __cdecl CTVBat::ctor(CTVBat *this_ptr);

// Original: core_tvbat.cpp_CTVBat_setup_FUN_0054b2a0
// Address: 0054b2a0
void CTVBat::setup(CEnemy *param_1);

// Original: core_tvbat.cpp_CTVBat_archive_FUN_0054b310
// Address: 0054b310
void CTVBat::archive(CEnemy *param_1);

// Original: core_tvbat.cpp_CTVBat_process_FUN_0054b460
// Address: 0054b460
void CTVBat::process(CDemonActor *param_1,float param_2);

// Original: core_tvbat.cpp_FUN_0054bfc0
// Address: 0054bfc0
void FUN_0054bfc0(int param_1);

// Original: core_tvbat.cpp_FUN_0054bfd0
// Address: 0054bfd0
int FUN_0054bfd0(CDemonActor *param_1);

// Original: core_tvbat.cpp_FUN_0054c040
// Address: 0054c040
undefined4 * FUN_0054c040(int param_1,undefined4 *param_2);

// Original: core_tvbat.cpp_CTVBat_getCollisionType_FUN_0054c0c0
// Address: 0054c0c0
undefined4 CTVBat::getCollisionType(int param_1);

// Original: core_tvbat.cpp_FUN_0054c0e0
// Address: 0054c0e0
undefined4 FUN_0054c0e0(void);

// Original: core_tvbat.cpp_CTVBat_getDeathState_FUN_0054c0f0
// Address: 0054c0f0
int CTVBat::getDeathState(int param_1);

// Original: core_tvbat.cpp_CTVBat_processDamage_FUN_0054c120
// Address: 0054c120
void CTVBat::processDamage(CEnemy *param_1,SDamageInfo *param_2);

// Original: core_tvbat.cpp_CTVBat_dtor_FUN_0054c190
// Address: 0054c190
CDemonActor * CTVBat::dtor(CDemonActor *param_1,byte param_2);
