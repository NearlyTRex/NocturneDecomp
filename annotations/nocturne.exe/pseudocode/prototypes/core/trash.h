#pragma once

// Function prototypes for core/trash.cpp
// Generated from Ghidra function signatures

// Original: core_trash.cpp_staticInit_FUN_00546c30
// Address: 00546c30
void __cdecl staticInit(void);

// Original: core_trash.cpp_factoryFunc_FUN_00546c60
// Address: 00546c60
CTrash * __cdecl factoryFunc(void);

// Original: core_trash.cpp_CTrash_getActorType_FUN_00546c80
// Address: 00546c80
CDemonActorType * CTrash::getActorType(void);

// Original: core_trash.cpp_CTrash_ctor_FUN_00546c90
// Address: 00546c90
CTrash * __cdecl CTrash::ctor(CTrash *this_ptr);

// Original: core_trash.cpp_CTrash_setup_FUN_00546ce0
// Address: 00546ce0
void CTrash::setup(CDemonActor *param_1);

// Original: core_trash.cpp_CTrash_archive_FUN_00546da0
// Address: 00546da0
void __cdecl CTrash::archive(CTrash *this_ptr);

// Original: core_trash.cpp_CTrash_process_FUN_00546e10
// Address: 00546e10
void CTrash::process(CDemonActor *param_1,float param_2);

// Original: core_trash.cpp_CTrash_renderOpaque_FUN_00547670
// Address: 00547670
int CTrash::renderOpaque(CDemonActor *param_1);

// Original: core_trash.cpp_CTrash_getBoundingBox_FUN_00547730
// Address: 00547730
float * CTrash::getBoundingBox(CDemonActor *param_1,float *param_2);

// Original: core_trash.cpp_CTrash_getCollisionType_FUN_005477f0
// Address: 005477f0
undefined4 CTrash::getCollisionType(void);

// Original: core_trash.cpp_CTrash_dtor_FUN_00547800
// Address: 00547800
CDemonActor * CTrash::dtor(CDemonActor *param_1,byte param_2);
