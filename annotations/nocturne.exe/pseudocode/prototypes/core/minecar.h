#pragma once

// Function prototypes for core/minecar.cpp
// Generated from Ghidra function signatures

// Original: core_minecar.cpp_staticInit_FUN_004d5fb0
// Address: 004d5fb0
void __cdecl staticInit(void);

// Original: core_minecar.cpp_factoryFunc_FUN_004d5fe0
// Address: 004d5fe0
CMineCar * __cdecl factoryFunc(void);

// Original: core_minecar.cpp_CMineCar_getActorType_FUN_004d6010
// Address: 004d6010
CDemonActorType * CMineCar::getActorType(void);

// Original: core_minecar.cpp_CMinecar_setup_FUN_004d6020
// Address: 004d6020
void __cdecl CMinecar::setup(CMineCar *this_ptr);

// Original: core_minecar.cpp_CMineCar_process_FUN_004d6040
// Address: 004d6040
void CMineCar::process(CPlatform *param_1,float param_2);

// Original: core_minecar.cpp_FUN_004d60b0
// Address: 004d60b0
void FUN_004d60b0(undefined4 param_1);

// Original: core_minecar.cpp_CMineCar_dtor_FUN_004d60d0
// Address: 004d60d0
CMineCar * __cdecl CMineCar::dtor(CMineCar *this_ptr,uint flags);
