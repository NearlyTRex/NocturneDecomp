#pragma once

// Function prototypes for core/lever.cpp
// Generated from Ghidra function signatures

// Original: core_lever.cpp_staticInit_FUN_004c5fe0
// Address: 004c5fe0
void __cdecl staticInit(void);

// Original: core_lever.cpp_factoryFuncLever_FUN_004c6010
// Address: 004c6010
CLever * __cdecl factoryFuncLever(void);

// Original: core_lever.cpp_CLever_getActorType_FUN_004c6030
// Address: 004c6030
CDemonActorType * __cdecl CLever::getActorType(CLever *this_ptr);

// Original: core_lever.cpp_CLever_ctor_FUN_004c6040
// Address: 004c6040
CLever * __cdecl CLever::ctor(CLever *this_ptr);

// Original: core_lever.cpp_CLever_setup_FUN_004c6110
// Address: 004c6110
void __cdecl CLever::setup(CLever *this_ptr);

// Original: core_lever.cpp_CLever_process_FUN_004c6190
// Address: 004c6190
void __cdecl CLever::process(CLever *this_ptr,float delta_time);

// Original: core_lever.cpp_CLever_setState_FUN_004c6390
// Address: 004c6390
void __cdecl CLever::setState(CLever *this_ptr,float new_state);

// Original: core_lever.cpp_CLever_activate_FUN_004c6500
// Address: 004c6500
void __cdecl CLever::activate(CLever *this_ptr);

// Original: core_lever.cpp_CLever_renderOpaque_FUN_004c6560
// Address: 004c6560
int __cdecl CLever::renderOpaque(CLever *this_ptr);

// Original: core_lever.cpp_CLever_getBoundingBox_FUN_004c65f0
// Address: 004c65f0
CBoundingBox3D * __cdecl CLever::getBoundingBox(CLever *this_ptr,CBoundingBox3D *out_box);

// Original: core_lever.cpp_CLever_getHandlePosition_FUN_004c6640
// Address: 004c6640
CVector3f * __cdecl CLever::getHandlePosition(CLever *this_ptr,CVector3f *out_position);

// Original: core_lever.cpp_CLever_archive_FUN_004c66f0
// Address: 004c66f0
void __cdecl CLever::archive(CLever *this_ptr);

// Original: core_lever.cpp_CLever_getCollisionType_FUN_004c68d0
// Address: 004c68d0
ECollisionType __cdecl CLever::getCollisionType(CLever *this_ptr,SCollisionInfo *collision_info);

// Original: core_lever.cpp_CLever_isAccessibleFrom_FUN_004c68f0
// Address: 004c68f0
int __cdecl CLever::isAccessibleFrom(CLever *this_ptr,CVector3f *world_position);

// Original: core_lever.cpp_CLever_dtor_FUN_004c6970
// Address: 004c6970
CLever * __cdecl CLever::dtor(CLever *this_ptr,uint flags);
