#pragma once

// Function prototypes for core/dest.cpp
// Generated from Ghidra function signatures

// Original: core_dest.cpp_staticInit_FUN_0046f890
// Address: 0046f890
void __cdecl staticInit(void);

// Original: core_dest.cpp_factoryFunc_FUN_0046f8c0
// Address: 0046f8c0
CActorDestination * __cdecl factoryFunc(void);

// Original: core_dest.cpp_CActorDestination_getActorType_FUN_0046f8f0
// Address: 0046f8f0
CDemonActorType * __cdecl CActorDestination::getActorType(CActorDestination *this_ptr);

// Original: core_dest.cpp_CActorDestination_ctor_FUN_0046f900
// Address: 0046f900
CActorDestination * __cdecl CActorDestination::ctor(CActorDestination *this_ptr);

// Original: core_dest.cpp_CActorDestination_setup_FUN_0046f970
// Address: 0046f970
void __cdecl CActorDestination::setup(CActorDestination *this_ptr);

// Original: core_dest.cpp_CActorDestination_process_FUN_0046f9b0
// Address: 0046f9b0
void __cdecl CActorDestination::process(CActorDestination *this_ptr,float delta_time);

// Original: core_dest.cpp_CActorDestination_renderTransparent_FUN_0046fb70
// Address: 0046fb70
int __cdecl CActorDestination::renderTransparent(CActorDestination *this_ptr);

// Original: core_dest.cpp_CActorDestination_getBoundingBox_FUN_0046fcc0
// Address: 0046fcc0
CBoundingBox3D * __cdecl CActorDestination::getBoundingBox(CActorDestination *this_ptr,CBoundingBox3D *out_box);

// Original: core_dest.cpp_CActorDestination_FUN_0046fd50
// Address: 0046fd50
int __cdecl CActorDestination(CActorDestination *this_ptr,CDemonActor *actor);

// Original: core_dest.cpp_CActorDestination_archive_FUN_0046fdb0
// Address: 0046fdb0
void __cdecl CActorDestination::archive(CActorDestination *this_ptr);

// Original: core_dest.cpp_CActorDestination_hasCollision_FUN_0046fe70
// Address: 0046fe70
int __cdecl CActorDestination::hasCollision(CActorDestination *this_ptr,SCollisionInfo *collision_info);

// Original: core_dest.cpp_CActorDestination_getPropertyList_FUN_0046fe80
// Address: 0046fe80
void __cdecl CActorDestination::getPropertyList(CActorDestination *this_ptr,CActorPropertyList *property_list);

// Original: core_dest.cpp_CActorDestination_dtor_FUN_0046ff00
// Address: 0046ff00
CActorDestination * __cdecl CActorDestination::dtor(CActorDestination *this_ptr,uint flags);
