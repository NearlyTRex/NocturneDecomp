#pragma once

// Function prototypes for core/lever.cpp
// Generated from Ghidra function signatures

// Original: core_lever.cpp_staticInit_FUN_00504760
// Address: 00504760
void __cdecl staticInit(void);

// Original: core_lever.cpp_factoryFunc_FUN_00504790
// Address: 00504790
CLever * __cdecl factoryFunc(void);

// Original: core_lever.cpp_CLever_getActorType_FUN_005047c0
// Address: 005047c0
CDemonActorType * __cdecl CLever::getActorType(CLever *this_ptr);

// Original: core_lever.cpp_CLever_ctor_FUN_005047d0
// Address: 005047d0
CLever * __cdecl CLever::ctor(CLever *this_ptr);

// Original: core_lever.cpp_CLever_setup_FUN_005048a0
// Address: 005048a0
void __cdecl CLever::setup(CLever *this_ptr);

// Original: core_lever.cpp_CLever_process_FUN_00504920
// Address: 00504920
void __cdecl CLever::process(CLever *this_ptr,float delta_time);

// Original: core_lever.cpp_CLever_FUN_00504b20
// Address: 00504b20
void __cdecl CLever(CLever *this_ptr);

// Original: core_lever.cpp_CLever_FUN_00504c90
// Address: 00504c90
void __cdecl CLever(CLever *this_ptr);

// Original: core_lever.cpp_CLever_renderOpaque_FUN_00504cf0
// Address: 00504cf0
int __cdecl CLever::renderOpaque(CLever *this_ptr);

// Original: core_lever.cpp_CLever_getBoundingBox_FUN_00504d80
// Address: 00504d80
CBoundingBox3D * __cdecl CLever::getBoundingBox(CLever *this_ptr,CBoundingBox3D *out_box);

// Original: core_lever.cpp_CLever_FUN_00504dd0
// Address: 00504dd0
CVector3f * __cdecl CLever(CLever *this_ptr);

// Original: core_lever.cpp_CLever_archive_FUN_00504e80
// Address: 00504e80
void __cdecl CLever::archive(CLever *this_ptr);

// Original: core_lever.cpp_CLever_hasCollision_FUN_00505060
// Address: 00505060
int __cdecl CLever::hasCollision(CLever *this_ptr,SCollisionInfo *collision_info);

// Original: core_lever.cpp_CLever_FUN_00505080
// Address: 00505080
int __cdecl CLever(CLever *this_ptr);

// Original: core_lever.cpp_CLever_propertyDisplayTypeCallback_FUN_00505100
// Address: 00505100
void __cdecl CLever::propertyDisplayTypeCallback(CLever *this_ptr,CActorProperty *property,char *output_buffer);

// Original: core_lever.cpp_CLever_propertyActionTypeCallback_FUN_00505160
// Address: 00505160
int __cdecl CLever::propertyActionTypeCallback(CLever *this_ptr,CActorProperty *property);

// Original: core_lever.cpp_CLever_propertyDisplayStateFunc_FUN_005051a0
// Address: 005051a0
void __cdecl CLever::propertyDisplayStateFunc(CLever *this_ptr,CActorProperty *property,char *output_buffer);

// Original: core_lever.cpp_CLever_propertyActionStateCallback_FUN_00505210
// Address: 00505210
int __cdecl CLever::propertyActionStateCallback(CLever *this_ptr,CActorProperty *property);

// Original: core_lever.cpp_CLever_getPropertyList_FUN_00505240
// Address: 00505240
void __cdecl CLever::getPropertyList(CLever *this_ptr,CActorPropertyList *property_list);

// Original: core_lever.cpp_CLever_writeDependencies_FUN_00505370
// Address: 00505370
void __cdecl CLever::writeDependencies(CLever *this_ptr,_FILE *file_handle);

// Original: core_lever.cpp_CLever_showEditorHelp_FUN_00505390
// Address: 00505390
void __cdecl CLever::showEditorHelp(CLever *this_ptr,int *y_pos);

// Original: core_lever.cpp_CLever_dtor_FUN_00505430
// Address: 00505430
CLever * __cdecl CLever::dtor(CLever *this_ptr,uint flags);
