#pragma once

// Function prototypes for core/dest.cpp
// Generated from Ghidra function signatures

// Original: core_dest.cpp_staticInit_FUN_0044b740
// Address: 0044b740
void __cdecl staticInit(void);

// Original: core_dest.cpp_factoryFunc_FUN_0044b770
// Address: 0044b770
CActorDestination * __cdecl factoryFunc(void);

// Original: core_dest.cpp_CActorDestination_getActorType_FUN_0044b790
// Address: 0044b790
CDemonActorType * CActorDestination::getActorType(void);

// Original: core_dest.cpp_CActorDestination_ctor_FUN_0044b7a0
// Address: 0044b7a0
CActorDestination * __cdecl CActorDestination::ctor(CActorDestination *this_ptr);

// Original: core_dest.cpp_CActorDestination_setup_FUN_0044b810
// Address: 0044b810
void __cdecl CActorDestination::setup(CActorDestination *this_ptr);

// Original: core_dest.cpp_CActorDestination_process_FUN_0044b850
// Address: 0044b850
void __cdecl CActorDestination::process(CActorDestination *this_ptr,float delta_time);

// Original: core_dest.cpp_FUN_0044ba10
// Address: 0044ba10
undefined4 FUN_0044ba10(void);

// Original: core_dest.cpp_CActorDestination_getBoundingBox_FUN_0044ba20
// Address: 0044ba20
undefined4 * CActorDestination::getBoundingBox(int param_1,undefined4 *param_2);

// Original: core_dest.cpp_CActorDestination_acceptsActor_FUN_0044bab0
// Address: 0044bab0
int __cdecl CActorDestination::acceptsActor(CActorDestination *this_ptr,CDemonActor *actor);

// Original: core_dest.cpp_CActorDestination_archive_FUN_0044bb10
// Address: 0044bb10
void __cdecl CActorDestination::archive(CActorDestination *this_ptr);

// Original: core_dest.cpp_CActorDestination_dtor_FUN_0044bbd0
// Address: 0044bbd0
CActorDestination * __cdecl CActorDestination::dtor(CActorDestination *this_ptr,uint flags);
