#pragma once

// Function prototypes for core/beast.cpp
// Generated from Ghidra function signatures

// Original: core_beast.cpp_staticInit_FUN_00414ff0
// Address: 00414ff0
void __cdecl staticInit(void);

// Original: core_beast.cpp_FUN_00415020
// Address: 00415020
void FUN_00415020(void);

// Original: core_beast.cpp_FUN_00415040
// Address: 00415040
CDemonActorType * FUN_00415040(void);

// Original: core_beast.cpp_FUN_00415050
// Address: 00415050
CEnemy * FUN_00415050(CEnemy *param_1);

// Original: core_beast.cpp_CBeast_setup_FUN_004150b0
// Address: 004150b0
void __cdecl CBeast::setup(CBeast *this_ptr);

// Original: core_beast.cpp_CBeast_process_FUN_004150d0
// Address: 004150d0
void CBeast::process(CCharacter *param_1,float param_2);

// Original: core_beast.cpp_FUN_00415160
// Address: 00415160
void FUN_00415160(CEnemy *param_1);

// Original: core_beast.cpp_FUN_004151b0
// Address: 004151b0
void FUN_004151b0(CEnemy *param_1,SDamageInfo *param_2);

// Original: core_beast.cpp_FUN_004151d0
// Address: 004151d0
undefined4 FUN_004151d0(void);

// Original: core_beast.cpp_FUN_004151e0
// Address: 004151e0
undefined4 FUN_004151e0(int param_1,CVector3f *param_2);

// Original: core_beast.cpp_CBeast_getCollisionType_FUN_00415230
// Address: 00415230
undefined4 CBeast::getCollisionType(int param_1,int *param_2);

// Original: core_beast.cpp_CBeast_dtor_FUN_00415250
// Address: 00415250
CBeast * __cdecl CBeast::dtor(CBeast *this_ptr,uint flags);
