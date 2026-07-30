#pragma once

// Function prototypes for core/spike.cpp
// Generated from Ghidra function signatures

// Original: core_spike.cpp_staticInit_FUN_00532fc0
// Address: 00532fc0
void __cdecl staticInit(void);

// Original: core_spike.cpp_factoryFunc_FUN_00532ff0
// Address: 00532ff0
CSpike * __cdecl factoryFunc(void);

// Original: core_spike.cpp_CSpike_getActorType_FUN_00533010
// Address: 00533010
CDemonActorType * CSpike::getActorType(void);

// Original: core_spike.cpp_CSpike_ctor_FUN_00533020
// Address: 00533020
CSpike * __cdecl CSpike::ctor(CSpike *this_ptr);

// Original: core_spike.cpp_CSpike_setup_FUN_00533160
// Address: 00533160
void CSpike::setup(CDemonActor *param_1);

// Original: core_spike.cpp_CSpike_process_FUN_00533210
// Address: 00533210
void CSpike::process(CSpike *param_1,float param_2);

// Original: core_spike.cpp_CSpike_renderOpaque_FUN_00533530
// Address: 00533530
int CSpike::renderOpaque(CDemonActor *param_1);

// Original: core_spike.cpp_CSpike_getBoundingBox_FUN_005335a0
// Address: 005335a0
undefined4 * CSpike::getBoundingBox(int param_1,undefined4 *param_2);

// Original: core_spike.cpp_CSpike_archive_FUN_005335f0
// Address: 005335f0
void CSpike::archive(CDemonActor *param_1);

// Original: core_spike.cpp_CSpike_getCollisionType_FUN_00533740
// Address: 00533740
undefined4 CSpike::getCollisionType(void);

// Original: core_spike.cpp_FUN_00533750
// Address: 00533750
void __cdecl FUN_00533750(CSpike *this_ptr);

// Original: core_spike.cpp_CSpike_dtor_FUN_00533c90
// Address: 00533c90
CDemonActor * CSpike::dtor(CDemonActor *param_1,byte param_2);
