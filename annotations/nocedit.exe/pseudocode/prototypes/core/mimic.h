#pragma once

// Function prototypes for core/mimic.cpp
// Generated from Ghidra function signatures

// Original: core_mimic.cpp_staticInit_FUN_0051f100
// Address: 0051f100
void __cdecl staticInit(void);

// Original: core_mimic.cpp_FUN_0051f130
// Address: 0051f130
void __cdecl FUN_0051f130(void);

// Original: core_mimic.cpp_factoryFunc_FUN_0051f190
// Address: 0051f190
CMimic * __cdecl factoryFunc(void);

// Original: core_mimic.cpp_CMimic_getActorType_FUN_0051f1c0
// Address: 0051f1c0
CDemonActorType * __cdecl CMimic::getActorType(CMimic *this_ptr);

// Original: core_mimic.cpp_CMimic_ctor_FUN_0051f1d0
// Address: 0051f1d0
CMimic * __cdecl CMimic::ctor(CMimic *this_ptr);

// Original: core_mimic.cpp_CMimic_dtor_FUN_0051f2c0
// Address: 0051f2c0
CMimic * __cdecl CMimic::dtor(CMimic *this_ptr,uint flags);

// Original: core_mimic.cpp_CMimic_setup_FUN_0051f3e0
// Address: 0051f3e0
void __cdecl CMimic::setup(CMimic *this_ptr);

// Original: core_mimic.cpp_CMimic_process_FUN_0051f780
// Address: 0051f780
void __cdecl CMimic::process(CMimic *this_ptr,float delta_time);

// Original: core_mimic.cpp_CMimic_FUN_0051f930
// Address: 0051f930
void __cdecl CMimic(CMimic *this_ptr);

// Original: core_mimic.cpp_CMimic_FUN_0051fcc0
// Address: 0051fcc0
void __cdecl CMimic(CMimic *this_ptr);

// Original: core_mimic.cpp_CMimic_FUN_00520500
// Address: 00520500
void __cdecl CMimic(CMimic *this_ptr);

// Original: core_mimic.cpp_CMimic_FUN_005205f0
// Address: 005205f0
int __cdecl CMimic(CMimic *this_ptr);

// Original: core_mimic.cpp_CMimic_renderOpaque_FUN_00520870
// Address: 00520870
int __cdecl CMimic::renderOpaque(CMimic *this_ptr);

// Original: core_mimic.cpp_CMimic_renderTransparent_FUN_00520890
// Address: 00520890
int __cdecl CMimic::renderTransparent(CMimic *this_ptr);

// Original: core_mimic.cpp_CMimic_getDeathState_FUN_005208a0
// Address: 005208a0
int __cdecl CMimic::getDeathState(CMimic *this_ptr);

// Original: core_mimic.cpp_CMimic_renderBackground_FUN_005208b0
// Address: 005208b0
void __cdecl CMimic::renderBackground(CMimic *this_ptr,int layer_flag);

// Original: core_mimic.cpp_CMimic_archive_FUN_00520930
// Address: 00520930
void __cdecl CMimic::archive(CMimic *this_ptr);

// Original: core_mimic.cpp_CMimic_hasCollision_FUN_00520a00
// Address: 00520a00
int __cdecl CMimic::hasCollision(CMimic *this_ptr,SCollisionInfo *collision_info);

// Original: core_mimic.cpp_CMimic_beginMorph_FUN_00520a80
// Address: 00520a80
void __cdecl CMimic::beginMorph(CMimic *this_ptr);

// Original: core_mimic.cpp_CMimic_processMorph_FUN_00520ba0
// Address: 00520ba0
void __cdecl CMimic::processMorph(CMimic *this_ptr);

// Original: core_mimic.cpp_CMimic_getPropertyList_FUN_00520d10
// Address: 00520d10
void __cdecl CMimic::getPropertyList(CMimic *this_ptr,CActorPropertyList *property_list);

// Original: core_mimic.cpp_CMimic_onActorDeleted_FUN_00520da0
// Address: 00520da0
void __cdecl CMimic::onActorDeleted(CMimic *this_ptr,CDemonActor *deleted_actor);

// Original: core_mimic.cpp_CMimic_addFilesToExtract_FUN_00520dd0
// Address: 00520dd0
void __cdecl CMimic::addFilesToExtract(CMimic *this_ptr,_FILE *file_handle);

// Original: core_mimic.cpp_FUN_00520e00
// Address: 00520e00
void __cdecl FUN_00520e00(void);
