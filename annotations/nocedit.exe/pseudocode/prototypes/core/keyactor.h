#pragma once

// Function prototypes for core/keyactor.cpp
// Generated from Ghidra function signatures

// Original: core_keyactor.cpp_staticInit_FUN_00501620
// Address: 00501620
void __cdecl staticInit(void);

// Original: core_keyactor.cpp_factoryFuncKeyActor_FUN_00501650
// Address: 00501650
CKeyActor * __cdecl factoryFuncKeyActor(void);

// Original: core_keyactor.cpp_CKeyActor_getActorType_FUN_00501680
// Address: 00501680
CDemonActorType * __cdecl CKeyActor::getActorType(CKeyActor *this_ptr);

// Original: core_keyactor.cpp_CKeyActor_ctor_FUN_00501690
// Address: 00501690
CKeyActor * __cdecl CKeyActor::ctor(CKeyActor *this_ptr);

// Original: core_keyactor.cpp_CKeyActor_setup_FUN_005016f0
// Address: 005016f0
void __cdecl CKeyActor::setup(CKeyActor *this_ptr);

// Original: core_keyactor.cpp_CKeyActor_process_FUN_00501710
// Address: 00501710
void __cdecl CKeyActor::process(CKeyActor *this_ptr,float delta_time);

// Original: core_keyactor.cpp_CKeyActor_renderOpaque_FUN_005017c0
// Address: 005017c0
int __cdecl CKeyActor::renderOpaque(CKeyActor *this_ptr);

// Original: core_keyactor.cpp_CKeyActor_getBoundingBox_FUN_00501830
// Address: 00501830
CBoundingBox3D * __cdecl CKeyActor::getBoundingBox(CKeyActor *this_ptr,CBoundingBox3D *out_box);

// Original: core_keyactor.cpp_CKeyActor_archive_FUN_00501880
// Address: 00501880
void __cdecl CKeyActor::archive(CKeyActor *this_ptr);

// Original: core_keyactor.cpp_CKeyActor_getCollisionType_FUN_005018f0
// Address: 005018f0
ECollisionType __cdecl CKeyActor::getCollisionType(CKeyActor *this_ptr,SCollisionInfo *collision_info);

// Original: core_keyactor.cpp_CKeyActor_canPickup_FUN_00501900
// Address: 00501900
int __cdecl CKeyActor::canPickup(CKeyActor *this_ptr,CDemonActor *picker);

// Original: core_keyactor.cpp_CKeyActor_onPickup_FUN_00501920
// Address: 00501920
void __cdecl CKeyActor::onPickup(CKeyActor *this_ptr,CDemonActor *owner);

// Original: core_keyactor.cpp_CKeyActor_getPropertyList_FUN_00501940
// Address: 00501940
void __cdecl CKeyActor::getPropertyList(CKeyActor *this_ptr,CActorPropertyList *property_list);

// Original: core_keyactor.cpp_CKeyActor_addFilesToExtract_FUN_00501990
// Address: 00501990
void __cdecl CKeyActor::addFilesToExtract(CKeyActor *this_ptr,_FILE *file_handle);

// Original: core_keyactor.cpp_CKeyActor_dtor_FUN_005019b0
// Address: 005019b0
CKeyActor * __cdecl CKeyActor::dtor(CKeyActor *this_ptr,uint flags);
