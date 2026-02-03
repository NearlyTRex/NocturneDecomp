#pragma once

// Function prototypes for core/backgnd.cpp
// Generated from Ghidra function signatures

// Original: core_backgnd.cpp_staticInit_FUN_00412740
// Address: 00412740
void __cdecl staticInit(void);

// Original: core_backgnd.cpp_factoryFunc_FUN_00412770
// Address: 00412770
CBackgroundActor * __cdecl factoryFunc(void);

// Original: core_backgnd.cpp_CBackgroundActor_getActorType_FUN_004127a0
// Address: 004127a0
CDemonActorType * __cdecl CBackgroundActor::getActorType(CBackgroundActor *this_ptr);

// Original: core_backgnd.cpp_CBackgroundActor_ctor_FUN_004127b0
// Address: 004127b0
CBackgroundActor * __cdecl CBackgroundActor::ctor(CBackgroundActor *this_ptr);

// Original: core_backgnd.cpp_CBackgroundActor_setup_FUN_00412810
// Address: 00412810
int __cdecl CBackgroundActor::setup(CBackgroundActor *this_ptr);

// Original: core_backgnd.cpp_CBackgroundActor_process_FUN_00412850
// Address: 00412850
void __cdecl CBackgroundActor::process(CBackgroundActor *this_ptr,float delta_time);

// Original: core_backgnd.cpp_CBackgroundActor_renderBackground_FUN_00412860
// Address: 00412860
void __cdecl CBackgroundActor::renderBackground(CBackgroundActor *this_ptr,int layer_flag);

// Original: core_backgnd.cpp_CBackgroundActor_renderOpaque_FUN_004128d0
// Address: 004128d0
int __cdecl CBackgroundActor::renderOpaque(CBackgroundActor *this_ptr);

// Original: core_backgnd.cpp_CBackgroundActor_getBoundingBox_FUN_00412940
// Address: 00412940
CBoundingBox3D * __cdecl CBackgroundActor::getBoundingBox(CBackgroundActor *this_ptr,CBoundingBox3D *out_box);

// Original: core_backgnd.cpp_CBackgroundActor_archive_FUN_00412990
// Address: 00412990
void __cdecl CBackgroundActor::archive(CBackgroundActor *this_ptr);

// Original: core_backgnd.cpp_CBackgroundActor_hasCollision_FUN_004129f0
// Address: 004129f0
int __cdecl CBackgroundActor::hasCollision(CBackgroundActor *this_ptr,SCollisionInfo *collision_info);

// Original: core_backgnd.cpp_CBackgroundActor_getGroundType_FUN_00412a30
// Address: 00412a30
int __cdecl CBackgroundActor::getGroundType(CBackgroundActor *this_ptr);

// Original: core_backgnd.cpp_CBackgroundActor_getPropertyList_FUN_00412a40
// Address: 00412a40
void __cdecl CBackgroundActor::getPropertyList(CBackgroundActor *this_ptr,CActorPropertyList *property_list);

// Original: core_backgnd.cpp_CBackgroundActor_writeDependencies_FUN_00412ab0
// Address: 00412ab0
void __cdecl CBackgroundActor::writeDependencies(CBackgroundActor *this_ptr,_FILE *file_handle);

// Original: core_backgnd.cpp_CBackgroundActor_dtor_FUN_00412ad0
// Address: 00412ad0
CBackgroundActor * __cdecl CBackgroundActor::dtor(CBackgroundActor *this_ptr,uint flags);
