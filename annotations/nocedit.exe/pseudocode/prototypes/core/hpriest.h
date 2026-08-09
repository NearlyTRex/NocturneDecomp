#pragma once

// Function prototypes for core/hpriest.cpp
// Generated from Ghidra function signatures

// Original: core_hpriest.cpp_staticInit_FUN_004f7b00
// Address: 004f7b00
void __cdecl staticInit(void);

// Original: core_hpriest.cpp_factoryFuncHighPriestOfGardath_FUN_004f7b30
// Address: 004f7b30
CHighPriestOfGardath * __cdecl factoryFuncHighPriestOfGardath(void);

// Original: core_hpriest.cpp_CHighPriestOfGardath_getActorType_FUN_004f7b60
// Address: 004f7b60
CDemonActorType * __cdecl CHighPriestOfGardath::getActorType(CHighPriestOfGardath *this_ptr);

// Original: core_hpriest.cpp_CHighPriestOfGardath_ctor_FUN_004f7b70
// Address: 004f7b70
CHighPriestOfGardath * __cdecl CHighPriestOfGardath::ctor(CHighPriestOfGardath *this_ptr);

// Original: core_hpriest.cpp_CHighPriestOfGardath_archive_FUN_004f7bd0
// Address: 004f7bd0
void __cdecl CHighPriestOfGardath::archive(CHighPriestOfGardath *this_ptr);

// Original: core_hpriest.cpp_CHighPriestOfGardath_process_FUN_004f7c00
// Address: 004f7c00
void __cdecl CHighPriestOfGardath::process(CHighPriestOfGardath *this_ptr,float delta_time);

// Original: core_hpriest.cpp_CHighPriestOfGardath_processDamage_FUN_004f7c50
// Address: 004f7c50
void __cdecl CHighPriestOfGardath::processDamage(CHighPriestOfGardath *this_ptr,SDamageInfo *damage_info);

// Original: core_hpriest.cpp_CHighPriestOfGardath_getPropertyList_FUN_004f7c70
// Address: 004f7c70
void __cdecl CHighPriestOfGardath::getPropertyList(CHighPriestOfGardath *this_ptr,CActorPropertyList *property_list);

// Original: core_hpriest.cpp_CHighPriestOfGardath_dtor_FUN_004f7cb0
// Address: 004f7cb0
CHighPriestOfGardath * __cdecl CHighPriestOfGardath::dtor(CHighPriestOfGardath *this_ptr,uint flags);
