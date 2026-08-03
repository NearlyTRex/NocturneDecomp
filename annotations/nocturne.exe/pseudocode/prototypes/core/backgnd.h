#pragma once

// Function prototypes for core/backgnd.cpp
// Generated from Ghidra function signatures

// Original: core_backgnd.cpp_staticInit_FUN_0040fe70
// Address: 0040fe70
void __cdecl staticInit(void);

// Original: core_backgnd.cpp_factoryFunc_FUN_0040fea0
// Address: 0040fea0
CBackgroundActor * __cdecl factoryFunc(void);

// Original: core_backgnd.cpp_CBackgroundActor_getActorType_FUN_0040fec0
// Address: 0040fec0
CDemonActorType * CBackgroundActor::getActorType(void);

// Original: core_backgnd.cpp_CBackgroundActor_ctor_FUN_0040fed0
// Address: 0040fed0
CBackgroundActor * __cdecl CBackgroundActor::ctor(CBackgroundActor *this_ptr);

// Original: core_backgnd.cpp_CBackgroundActor_setup_FUN_0040ff30
// Address: 0040ff30
undefined8 CBackgroundActor::setup(CDemonActor *param_1);

// Original: core_backgnd.cpp_CBackgroundActor_process_FUN_0040ff70
// Address: 0040ff70
void CBackgroundActor::process(void);

// Original: core_backgnd.cpp_CBackgroundActor_renderBackground_FUN_0040ff80
// Address: 0040ff80
void CBackgroundActor::renderBackground(CDemonActor *param_1,int param_2);

// Original: core_backgnd.cpp_CBackgroundActor_renderOpaque_FUN_0040ffe0
// Address: 0040ffe0
undefined4 CBackgroundActor::renderOpaque(void);

// Original: core_backgnd.cpp_CBackgroundActor_getBoundingBox_FUN_0040fff0
// Address: 0040fff0
float * CBackgroundActor::getBoundingBox(int param_1,float *param_2);

// Original: core_backgnd.cpp_CBackgroundActor_archive_FUN_00410040
// Address: 00410040
void CBackgroundActor::archive(CDemonActor *param_1);

// Original: core_backgnd.cpp_CBackgroundActor_getCollisionType_FUN_004100a0
// Address: 004100a0
ECollisionType __cdecl CBackgroundActor::getCollisionType(CBackgroundActor *this_ptr,SCollisionInfo *collision_info);

// Original: core_backgnd.cpp_CBackgroundActor_getGroundType_FUN_004100e0
// Address: 004100e0
EGroundType __cdecl CBackgroundActor::getGroundType(CBackgroundActor *this_ptr);

// Original: core_backgnd.cpp_CBackgroundActor_dtor_FUN_004100f0
// Address: 004100f0
CBackgroundActor * __cdecl CBackgroundActor::dtor(CBackgroundActor *this_ptr,uint flags);
