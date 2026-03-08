#pragma once

// Function prototypes for core/grave.cpp
// Generated from Ghidra function signatures

// Original: core_grave.cpp_staticInit_FUN_004ee4a0
// Address: 004ee4a0
void __cdecl staticInit(void);

// Original: core_grave.cpp_factoryFunc_FUN_004ee4d0
// Address: 004ee4d0
CGrave * __cdecl factoryFunc(void);

// Original: core_grave.cpp_CGrave_getActorType_FUN_004ee500
// Address: 004ee500
CDemonActorType * __cdecl CGrave::getActorType(CGrave *this_ptr);

// Original: core_grave.cpp_CGrave_ctor_FUN_004ee510
// Address: 004ee510
CGrave * __cdecl CGrave::ctor(CGrave *this_ptr);

// Original: core_grave.cpp_CGrave_setup_FUN_004ee5a0
// Address: 004ee5a0
void __cdecl CGrave::setup(CGrave *this_ptr);

// Original: core_grave.cpp_CGrave_process_FUN_004ee5c0
// Address: 004ee5c0
void __cdecl CGrave::process(CGrave *this_ptr,float delta_time);

// Original: core_grave.cpp_CGrave_renderOpaque_FUN_004ee680
// Address: 004ee680
int __cdecl CGrave::renderOpaque(CGrave *this_ptr);

// Original: core_grave.cpp_CGrave_renderBackground_FUN_004ee710
// Address: 004ee710
void __cdecl CGrave::renderBackground(CGrave *this_ptr,int layer_flag);

// Original: core_grave.cpp_CGrave_startAnimation_FUN_004ee790
// Address: 004ee790
void __cdecl CGrave::startAnimation(CGrave *this_ptr);

// Original: core_grave.cpp_CGrave_archive_FUN_004ee7f0
// Address: 004ee7f0
void __cdecl CGrave::archive(CGrave *this_ptr);

// Original: core_grave.cpp_CGrave_getBoundingBox_FUN_004ee8f0
// Address: 004ee8f0
CBoundingBox3D * __cdecl CGrave::getBoundingBox(CGrave *this_ptr,CBoundingBox3D *out_box);

// Original: core_grave.cpp_CGrave_getCollisionType_FUN_004ee9d0
// Address: 004ee9d0
ECollisionType __cdecl CGrave::getCollisionType(CGrave *this_ptr,SCollisionInfo *collision_info);

// Original: core_grave.cpp_CGrave_getPropertyList_FUN_004ee9e0
// Address: 004ee9e0
void __cdecl CGrave::getPropertyList(CGrave *this_ptr,CActorPropertyList *property_list);

// Original: core_grave.cpp_CGrave_processInEditor_FUN_004eea70
// Address: 004eea70
void __cdecl CGrave::processInEditor(CGrave *this_ptr);

// Original: core_grave.cpp_CGrave_showEditorHelp_FUN_004eead0
// Address: 004eead0
void __cdecl CGrave::showEditorHelp(CGrave *this_ptr,int *y_pos);

// Original: core_grave.cpp_CGrave_addFilesToExtract_FUN_004eeb10
// Address: 004eeb10
void __cdecl CGrave::addFilesToExtract(CGrave *this_ptr,_FILE *file_handle);

// Original: core_grave.cpp_CGrave_dtor_FUN_004eeb40
// Address: 004eeb40
CGrave * __cdecl CGrave::dtor(CGrave *this_ptr,uint flags);
