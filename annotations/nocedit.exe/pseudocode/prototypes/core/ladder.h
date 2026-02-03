#pragma once

// Function prototypes for core/ladder.cpp
// Generated from Ghidra function signatures

// Original: core_ladder.cpp_staticInit_FUN_005024d0
// Address: 005024d0
void __cdecl staticInit(void);

// Original: core_ladder.cpp_factoryFunc_FUN_00502500
// Address: 00502500
CLadder * __cdecl factoryFunc(void);

// Original: core_ladder.cpp_CLadder_getActorType_FUN_00502530
// Address: 00502530
CDemonActorType * __cdecl CLadder::getActorType(CLadder *this_ptr);

// Original: core_ladder.cpp_CLadder_ctor_FUN_00502540
// Address: 00502540
CLadder * __cdecl CLadder::ctor(CLadder *this_ptr);

// Original: core_ladder.cpp_CLadder_setup_FUN_005025f0
// Address: 005025f0
void __cdecl CLadder::setup(CLadder *this_ptr);

// Original: core_ladder.cpp_CLadder_process_FUN_00502610
// Address: 00502610
void __cdecl CLadder::process(CLadder *this_ptr,float delta_time);

// Original: core_ladder.cpp_CLadder_FUN_00502620
// Address: 00502620
int __cdecl CLadder(CLadder *this_ptr);

// Original: core_ladder.cpp_CLadder_FUN_005028c0
// Address: 005028c0
float * __cdecl CLadder(CLadder *this_ptr);

// Original: core_ladder.cpp_CLadder_archive_FUN_005029c0
// Address: 005029c0
void __cdecl CLadder::archive(CLadder *this_ptr);

// Original: core_ladder.cpp_CLadder_FUN_00502a40
// Address: 00502a40
int __cdecl CLadder(CLadder *this_ptr);

// Original: core_ladder.cpp_CLadder_FUN_00502a70
// Address: 00502a70
void __cdecl CLadder(CLadder *this_ptr);

// Original: core_ladder.cpp_CLadder_FUN_00502b80
// Address: 00502b80
void __cdecl CLadder(CLadder *this_ptr);

// Original: core_ladder.cpp_CLadder_getGroundType_FUN_00502c90
// Address: 00502c90
int __cdecl CLadder::getGroundType(CLadder *this_ptr);

// Original: core_ladder.cpp_CLadder_getPropertyList_FUN_00502ca0
// Address: 00502ca0
void __cdecl CLadder::getPropertyList(CLadder *this_ptr,CActorPropertyList *property_list);

// Original: core_ladder.cpp_CLadder_processInEditor_FUN_00502d00
// Address: 00502d00
void __cdecl CLadder::processInEditor(CLadder *this_ptr);

// Original: core_ladder.cpp_CLadder_showEditorHelp_FUN_00502e50
// Address: 00502e50
void __cdecl CLadder::showEditorHelp(CLadder *this_ptr,int *y_pos);

// Original: core_ladder.cpp_CLadder_onActorDeleted_FUN_00502e90
// Address: 00502e90
void __cdecl CLadder::onActorDeleted(CLadder *this_ptr,CDemonActor *deleted_actor);

// Original: core_ladder.cpp_CLadder_writeDependencies_FUN_00502eb0
// Address: 00502eb0
void __cdecl CLadder::writeDependencies(CLadder *this_ptr,_FILE *file_handle);

// Original: core_ladder.cpp_CLadder_dtor_FUN_00502ed0
// Address: 00502ed0
CLadder * __cdecl CLadder::dtor(CLadder *this_ptr,uint flags);
