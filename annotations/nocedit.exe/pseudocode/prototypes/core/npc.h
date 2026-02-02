#pragma once

// Function prototypes for core/npc.cpp
// Generated from Ghidra function signatures

// Original: core_npc.cpp_CNPC_dtor_FUN_004f4700
// Address: 004f4700
CNPC * __cdecl CNPC::dtor(CNPC *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8,uint d9);

// Original: core_npc.cpp_staticInit_FUN_00544770
// Address: 00544770
void __cdecl staticInit(void);

// Original: core_npc.cpp_factoryFunc_FUN_005447a0
// Address: 005447a0
CNPC * __cdecl factoryFunc(void);

// Original: core_npc.cpp_CNPC_getActorType_FUN_005447d0
// Address: 005447d0
CDemonActorType * __cdecl CNPC::getActorType(CNPC *this_ptr);

// Original: core_npc.cpp_CNPC_ctor_FUN_005447e0
// Address: 005447e0
CNPC * __cdecl CNPC::ctor(CNPC *this_ptr);

// Original: core_npc.cpp_CNPC_setup_FUN_00544870
// Address: 00544870
void __cdecl CNPC::setup(CNPC *this_ptr);

// Original: core_npc.cpp_CNPC_process_FUN_005448b0
// Address: 005448b0
void __cdecl CNPC::process(CNPC *this_ptr,float delta_time);

// Original: core_npc.cpp_CNPC_renderBackground_FUN_00544b70
// Address: 00544b70
void __cdecl CNPC::renderBackground(CNPC *this_ptr,int layer_flag);

// Original: core_npc.cpp_CNPC_archive_FUN_00544ba0
// Address: 00544ba0
void __cdecl CNPC::archive(CNPC *this_ptr);

// Original: core_npc.cpp_CNPC_FUN_00544c50
// Address: 00544c50
int __cdecl CNPC(CNPC *this_ptr);

// Original: core_npc.cpp_CNPC_processDamage_FUN_00544d30
// Address: 00544d30
void __cdecl CNPC::processDamage(CNPC *this_ptr,SDamageInfo *damage_info);

// Original: core_npc.cpp_CNPC_FUN_00544e10
// Address: 00544e10
int __cdecl CNPC(CNPC *this_ptr);

// Original: core_npc.cpp_CNPC_getPathMap_FUN_00544e30
// Address: 00544e30
CPathMap * __cdecl CNPC::getPathMap(CNPC *this_ptr);

// Original: core_npc.cpp_CNPC_getPropertyList_FUN_00544e40
// Address: 00544e40
void __cdecl CNPC::getPropertyList(CNPC *this_ptr,CActorPropertyList *property_list);
