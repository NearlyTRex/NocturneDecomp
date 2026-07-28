#pragma once

// Function prototypes for core/moloch.cpp
// Generated from Ghidra function signatures

// Original: core_moloch.cpp_staticInit_FUN_004dd8d0
// Address: 004dd8d0
void __cdecl staticInit(void);

// Original: core_moloch.cpp_FUN_004dd900
// Address: 004dd900
void FUN_004dd900(void);

// Original: core_moloch.cpp_FUN_004dd920
// Address: 004dd920
CDemonActorType * FUN_004dd920(void);

// Original: core_moloch.cpp_CMoloch_ctor_FUN_004dd930
// Address: 004dd930
CMoloch * __cdecl CMoloch::ctor(CMoloch *this_ptr);

// Original: core_moloch.cpp_CMoloch_dtor_FUN_004dd9f0
// Address: 004dd9f0
CHero * CMoloch::dtor(CHero *param_1,byte param_2);

// Original: core_moloch.cpp_CMoloch_setup_FUN_004dda70
// Address: 004dda70
void CMoloch::setup(int param_1);

// Original: core_moloch.cpp_CMoloch_process_FUN_004ddb20
// Address: 004ddb20
void CMoloch::process(CMoloch *param_1,float param_2);

// Original: core_moloch.cpp_CMoloch_processAI_FUN_004de1b0
// Address: 004de1b0
void __cdecl CMoloch::processAI(CMoloch *this_ptr,float delta_time);

// Original: core_moloch.cpp_FUN_004de550
// Address: 004de550
int FUN_004de550(CCharacter *param_1);

// Original: core_moloch.cpp_FUN_004de680
// Address: 004de680
void FUN_004de680(int param_1);

// Original: core_moloch.cpp_CMoloch_startMorph_FUN_004de700
// Address: 004de700
void __cdecl CMoloch::startMorph(CMoloch *this_ptr);

// Original: core_moloch.cpp_FUN_004de750
// Address: 004de750
void FUN_004de750(void);

// Original: core_moloch.cpp_FUN_004de760
// Address: 004de760
undefined4 FUN_004de760(void);
