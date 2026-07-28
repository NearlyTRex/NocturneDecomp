#pragma once

// Function prototypes for core/imp.cpp
// Generated from Ghidra function signatures

// Original: core_imp.cpp_staticInit_FUN_004bb700
// Address: 004bb700
void __cdecl staticInit(void);

// Original: core_imp.cpp_FUN_004bb730
// Address: 004bb730
void FUN_004bb730(void);

// Original: core_imp.cpp_FUN_004bb750
// Address: 004bb750
CDemonActorType * FUN_004bb750(void);

// Original: core_imp.cpp_FUN_004bb760
// Address: 004bb760
CEnemy * FUN_004bb760(CEnemy *param_1);

// Original: core_imp.cpp_CImp_setup_FUN_004bb7d0
// Address: 004bb7d0
void CImp::setup(CEnemy *param_1);

// Original: core_imp.cpp_CImp_process_FUN_004bbaf0
// Address: 004bbaf0
void CImp::process(CEnemy *param_1,float param_2);

// Original: core_imp.cpp_FUN_004bc7c0
// Address: 004bc7c0
void FUN_004bc7c0(void);

// Original: core_imp.cpp_FUN_004bc7e0
// Address: 004bc7e0
void FUN_004bc7e0(int param_1,int param_2);

// Original: core_imp.cpp_CImp_attractActorToward_FUN_004bc9b0
// Address: 004bc9b0
bool CImp::attractActorToward(undefined4 param_1,int param_2);

// Original: core_imp.cpp_FUN_004bc9c0
// Address: 004bc9c0
void FUN_004bc9c0(CEnemy *param_1);

// Original: core_imp.cpp_CImp_processDismemberment_FUN_004bca20
// Address: 004bca20
void __cdecl CImp::processDismemberment(CImp *this_ptr,SDamageInfo *damage_info);

// Original: core_imp.cpp_CImp_processDamage_FUN_004bccc0
// Address: 004bccc0
void CImp::processDamage(CImp *param_1,SDamageInfo *param_2);

// Original: core_imp.cpp_CImp_getTargetPoints_FUN_004bce00
// Address: 004bce00
int CImp::getTargetPoints(int param_1,CVector3f *param_2);

// Original: core_imp.cpp_FUN_004bcfb0
// Address: 004bcfb0
void FUN_004bcfb0(CCharacter *param_1,SCollisionInfo *param_2);

// Original: core_imp.cpp_FUN_004bcfd0
// Address: 004bcfd0
CDemonActor * FUN_004bcfd0(CDemonActor *param_1,byte param_2);
