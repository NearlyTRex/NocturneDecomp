#pragma once

// Function prototypes for core/hpriest.cpp
// Generated from Ghidra function signatures

// Original: core_hpriest.cpp_staticInit_FUN_004b9a90
// Address: 004b9a90
void __cdecl staticInit(void);

// Original: core_hpriest.cpp_factoryFunc_FUN_004b9ac0
// Address: 004b9ac0
CHighPriestOfGardath * __cdecl factoryFunc(void);

// Original: core_hpriest.cpp_CHighPriestOfGardath_getActorType_FUN_004b9ae0
// Address: 004b9ae0
CDemonActorType * CHighPriestOfGardath::getActorType(void);

// Original: core_hpriest.cpp_FUN_004b9af0
// Address: 004b9af0
CNPC * FUN_004b9af0(CNPC *param_1);

// Original: core_hpriest.cpp_CHighPriestOfGardath_archive_FUN_004b9b50
// Address: 004b9b50
void __cdecl CHighPriestOfGardath::archive(CHighPriestOfGardath *this_ptr);

// Original: core_hpriest.cpp_CHighPriestOfGardath_process_FUN_004b9b80
// Address: 004b9b80
void CHighPriestOfGardath::process(CNPC *param_1,float param_2);

// Original: core_hpriest.cpp_CHighPriestOfGardath_processDamage_FUN_004b9bd0
// Address: 004b9bd0
void __cdecl CHighPriestOfGardath::processDamage(CHighPriestOfGardath *this_ptr,SDamageInfo *damage_info);

// Original: core_hpriest.cpp_CHighPriestOfGardath_dtor_FUN_004b9bf0
// Address: 004b9bf0
CHighPriestOfGardath * __cdecl CHighPriestOfGardath::dtor(CHighPriestOfGardath *this_ptr,uint flags);
