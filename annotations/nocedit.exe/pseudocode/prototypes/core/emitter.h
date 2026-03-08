#pragma once

// Function prototypes for core/emitter.cpp
// Generated from Ghidra function signatures

// Original: core_emitter.cpp_staticInit_FUN_004a7c30
// Address: 004a7c30
void __cdecl staticInit(void);

// Original: core_emitter.cpp_factoryFunc_FUN_004a7c60
// Address: 004a7c60
CEmitter * __cdecl factoryFunc(void);

// Original: core_emitter.cpp_CEmitter_getActorType_FUN_004a7c90
// Address: 004a7c90
CDemonActorType * __cdecl CEmitter::getActorType(CEmitter *this_ptr);

// Original: core_emitter.cpp_CEmitter_ctor_FUN_004a7ca0
// Address: 004a7ca0
CEmitter * __cdecl CEmitter::ctor(CEmitter *this_ptr);

// Original: core_emitter.cpp_CEmitter_setup_FUN_004a7e00
// Address: 004a7e00
void __cdecl CEmitter::setup(CEmitter *this_ptr);

// Original: core_emitter.cpp_CEmitter_FUN_004a7e80
// Address: 004a7e80
void __cdecl CEmitter(CEmitter *this_ptr);

// Original: core_emitter.cpp_CEmitter_process_FUN_004a8070
// Address: 004a8070
void __cdecl CEmitter::process(CEmitter *this_ptr,float delta_time);

// Original: core_emitter.cpp_CEmitter_renderOpaque_FUN_004a8860
// Address: 004a8860
int __cdecl CEmitter::renderOpaque(CEmitter *this_ptr);

// Original: core_emitter.cpp_CEmitter_renderBackground_FUN_004a8a80
// Address: 004a8a80
void __cdecl CEmitter::renderBackground(CEmitter *this_ptr,int layer_flag);

// Original: core_emitter.cpp_CEmitter_getBoundingBox_FUN_004a8ad0
// Address: 004a8ad0
CBoundingBox3D * __cdecl CEmitter::getBoundingBox(CEmitter *this_ptr,CBoundingBox3D *out_box);

// Original: core_emitter.cpp_CEmitter_archive_FUN_004a8b30
// Address: 004a8b30
void __cdecl CEmitter::archive(CEmitter *this_ptr);

// Original: core_emitter.cpp_CEmitter_getCollisionType_FUN_004a8d10
// Address: 004a8d10
ECollisionType __cdecl CEmitter::getCollisionType(CEmitter *this_ptr,SCollisionInfo *collision_info);

// Original: core_emitter.cpp_CEmitter_FUN_004a8d20
// Address: 004a8d20
CVector3f * __cdecl CEmitter(CEmitter *this_ptr);

// Original: core_emitter.cpp_CEmitter_getPropertyList_FUN_004a8db0
// Address: 004a8db0
void __cdecl CEmitter::getPropertyList(CEmitter *this_ptr,CActorPropertyList *property_list);

// Original: core_emitter.cpp_CEmitter_processInEditor_FUN_004a8fe0
// Address: 004a8fe0
void __cdecl CEmitter::processInEditor(CEmitter *this_ptr);

// Original: core_emitter.cpp_CEmitter_showEditorHelp_FUN_004a9350
// Address: 004a9350
void __cdecl CEmitter::showEditorHelp(CEmitter *this_ptr,int *y_pos);

// Original: core_emitter.cpp_CEmitter_addFilesToExtract_FUN_004a9390
// Address: 004a9390
void __cdecl CEmitter::addFilesToExtract(CEmitter *this_ptr,_FILE *file_handle);

// Original: core_emitter.cpp_CEmitter_dtor_FUN_004a93c0
// Address: 004a93c0
CEmitter * __cdecl CEmitter::dtor(CEmitter *this_ptr,uint flags);

// Original: core_emitter.cpp_SLaserInfo_copy_FUN_004a9410
// Address: 004a9410
void __cdecl SLaserInfo::copy(SLaserInfo *this_ptr,SLaserInfo *copy);

// Original: core_emitter.cpp_SLaserInfo_dtor_FUN_004a94c0
// Address: 004a94c0
SLaserInfo * __cdecl SLaserInfo::dtor(SLaserInfo *this_ptr,uint flags);
