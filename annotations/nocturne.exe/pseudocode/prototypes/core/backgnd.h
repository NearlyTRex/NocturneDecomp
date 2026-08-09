#pragma once

// Function prototypes for core/backgnd.cpp
// Generated from Ghidra function signatures

// Original: core_backgnd.cpp_staticInit_FUN_0040fe70
// Address: 0040fe70
void __cdecl staticInit(void);

// Original: core_backgnd.cpp_factoryFuncBackgroundActor_FUN_0040fea0
// Address: 0040fea0
CBackgroundActor * __cdecl factoryFuncBackgroundActor(void);

// Original: core_backgnd.cpp_CBackgroundActor_getActorType_FUN_0040fec0
// Address: 0040fec0
CDemonActorType * __cdecl CBackgroundActor::getActorType(CBackgroundActor *this_ptr);

// Original: core_backgnd.cpp_CBackgroundActor_ctor_FUN_0040fed0
// Address: 0040fed0
CBackgroundActor * __cdecl CBackgroundActor::ctor(CBackgroundActor *this_ptr);

// Original: core_backgnd.cpp_CBackgroundActor_setup_FUN_0040ff30
// Address: 0040ff30
int __cdecl CBackgroundActor::setup(CBackgroundActor *this_ptr);

// Original: core_backgnd.cpp_CBackgroundActor_process_FUN_0040ff70
// Address: 0040ff70
void __cdecl CBackgroundActor::process(CBackgroundActor *this_ptr,float delta_time);

// Original: core_backgnd.cpp_CBackgroundActor_renderBackground_FUN_0040ff80
// Address: 0040ff80
void __cdecl CBackgroundActor::renderBackground(CBackgroundActor *this_ptr,int layer_flag);

// Original: core_backgnd.cpp_CBackgroundActor_renderOpaque_FUN_0040ffe0
// Address: 0040ffe0
int __cdecl CBackgroundActor::renderOpaque(CBackgroundActor *this_ptr);

// Original: core_backgnd.cpp_CBackgroundActor_getBoundingBox_FUN_0040fff0
// Address: 0040fff0
CBoundingBox3D * __cdecl CBackgroundActor::getBoundingBox(CBackgroundActor *this_ptr,CBoundingBox3D *out_box);

// Original: core_backgnd.cpp_CBackgroundActor_archive_FUN_00410040
// Address: 00410040
void __cdecl CBackgroundActor::archive(CBackgroundActor *this_ptr);

// Original: core_backgnd.cpp_CBackgroundActor_getCollisionType_FUN_004100a0
// Address: 004100a0
ECollisionType __cdecl CBackgroundActor::getCollisionType(CBackgroundActor *this_ptr,SCollisionInfo *collision_info);

// Original: core_backgnd.cpp_CBackgroundActor_getGroundType_FUN_004100e0
// Address: 004100e0
EGroundType __cdecl CBackgroundActor::getGroundType(CBackgroundActor *this_ptr);

// Original: core_backgnd.cpp_CBackgroundActor_dtor_FUN_004100f0
// Address: 004100f0
CBackgroundActor * __cdecl CBackgroundActor::dtor(CBackgroundActor *this_ptr,uint flags);
