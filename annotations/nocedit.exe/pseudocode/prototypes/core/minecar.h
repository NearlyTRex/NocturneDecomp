#pragma once

// Function prototypes for core/minecar.cpp
// Generated from Ghidra function signatures

// Original: core_minecar.cpp_staticInit_FUN_00520e20
// Address: 00520e20
void __cdecl staticInit(void);

// Original: core_minecar.cpp_factoryFunc_FUN_00520e50
// Address: 00520e50
CMineCar * __cdecl factoryFunc(void);

// Original: core_minecar.cpp_CMinecar_getActorType_FUN_00520e80
// Address: 00520e80
CDemonActorType * __cdecl CMinecar::getActorType(CMineCar *this_ptr);

// Original: core_minecar.cpp_CMinecar_setup_FUN_00520e90
// Address: 00520e90
void __cdecl CMinecar::setup(CMineCar *this_ptr);

// Original: core_minecar.cpp_CMinecar_process_FUN_00520eb0
// Address: 00520eb0
void __cdecl CMinecar::process(CMineCar *this_ptr,float delta_time);

// Original: core_minecar.cpp_CMineCar_ctor_FUN_00520f20
// Address: 00520f20
CMineCar * __cdecl CMineCar::ctor(CMineCar *this_ptr);

// Original: core_minecar.cpp_CMineCar_dtor_FUN_00520f40
// Address: 00520f40
CMineCar * __cdecl CMineCar::dtor(CMineCar *this_ptr,uint d1,uint d2,uint d3);
