#pragma once

// Function prototypes for core/npc.cpp
// Generated from Ghidra function signatures

// Original: core_npc.cpp_CNPC_dtor_FUN_004b68c0
// Address: 004b68c0
CNPC * __cdecl CNPC::dtor(CNPC *this_ptr,uint flags);

// Original: core_npc.cpp_staticInit_FUN_004ee8f0
// Address: 004ee8f0
void __cdecl staticInit(void);

// Original: core_npc.cpp_factoryFunc_FUN_004ee920
// Address: 004ee920
CNPC * __cdecl factoryFunc(void);

// Original: core_npc.cpp_CNPC_getActorType_FUN_004ee940
// Address: 004ee940
CDemonActorType * CNPC::getActorType(void);

// Original: core_npc.cpp_FUN_004ee950
// Address: 004ee950
CNPC * __cdecl FUN_004ee950(CNPC *this_ptr);

// Original: core_npc.cpp_CNPC_setup_FUN_004ee9e0
// Address: 004ee9e0
void __cdecl CNPC::setup(CNPC *this_ptr);

// Original: core_npc.cpp_CNPC_process_FUN_004eea20
// Address: 004eea20
void __cdecl CNPC::process(CNPC *this_ptr,float delta_time);

// Original: core_npc.cpp_CNPC_renderBackground_FUN_004eece0
// Address: 004eece0
void __cdecl CNPC::renderBackground(CNPC *this_ptr,int layer_flag);

// Original: core_npc.cpp_CNPC_archive_FUN_004eed10
// Address: 004eed10
void __cdecl CNPC::archive(CNPC *this_ptr);

// Original: core_npc.cpp_CNPC_setRandomMotionVariant_FUN_004eedc0
// Address: 004eedc0
int __cdecl CNPC::setRandomMotionVariant(CNPC *this_ptr,char *motion_name);

// Original: core_npc.cpp_CNPC_processDamage_FUN_004eeea0
// Address: 004eeea0
void __cdecl CNPC::processDamage(CNPC *this_ptr,SDamageInfo *damage_info);

// Original: core_npc.cpp_CNPC_isInvulnerable_FUN_004eef80
// Address: 004eef80
int __cdecl CNPC::isInvulnerable(CNPC *this_ptr);

// Original: core_npc.cpp_CNPC_getPathMap_FUN_004eefa0
// Address: 004eefa0
CPathMap * __cdecl CNPC::getPathMap(CNPC *this_ptr);
