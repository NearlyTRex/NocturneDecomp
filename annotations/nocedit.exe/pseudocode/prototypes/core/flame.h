#pragma once

// Function prototypes for core/flame.cpp
// Generated from Ghidra function signatures

// Original: core_flame.cpp_staticInit_FUN_004c9a30
// Address: 004c9a30
void __cdecl staticInit(void);

// Original: core_flame.cpp_factoryFuncFlame_FUN_004c9a60
// Address: 004c9a60
CFlame * __cdecl factoryFuncFlame(void);

// Original: core_flame.cpp_CFlame_getActorType_FUN_004c9a90
// Address: 004c9a90
CDemonActorType * __cdecl CFlame::getActorType(CFlame *this_ptr);

// Original: core_flame.cpp_CFlame_ctor_FUN_004c9aa0
// Address: 004c9aa0
CFlame * __cdecl CFlame::ctor(CFlame *this_ptr);

// Original: core_flame.cpp_CFlame_setup_FUN_004c9b90
// Address: 004c9b90
void __cdecl CFlame::setup(CFlame *this_ptr);

// Original: core_flame.cpp_CFlame_process_FUN_004c9c00
// Address: 004c9c00
void __cdecl CFlame::process(CFlame *this_ptr,float delta_time);

// Original: core_flame.cpp_CFlame_renderTransparent_FUN_004ca110
// Address: 004ca110
int __cdecl CFlame::renderTransparent(CFlame *this_ptr);

// Original: core_flame.cpp_CFlame_hide_FUN_004caa70
// Address: 004caa70
void __cdecl CFlame::hide(CFlame *this_ptr);

// Original: core_flame.cpp_CFlame_renderBackground_FUN_004caa80
// Address: 004caa80
void __cdecl CFlame::renderBackground(CFlame *this_ptr,int layer_flag);

// Original: core_flame.cpp_CFlame_getBoundingBox_FUN_004cac00
// Address: 004cac00
CBoundingBox3D * __cdecl CFlame::getBoundingBox(CFlame *this_ptr,CBoundingBox3D *out_box);

// Original: core_flame.cpp_CFlame_archive_FUN_004cac60
// Address: 004cac60
void __cdecl CFlame::archive(CFlame *this_ptr);

// Original: core_flame.cpp_CFlame_getCollisionType_FUN_004cad80
// Address: 004cad80
ECollisionType __cdecl CFlame::getCollisionType(CFlame *this_ptr,SCollisionInfo *collision_info);

// Original: core_flame.cpp_CFlame_updateGlobe_FUN_004cad90
// Address: 004cad90
void __cdecl CFlame::updateGlobe(CFlame *this_ptr);

// Original: core_flame.cpp_CFlame_getPropertyList_FUN_004cae70
// Address: 004cae70
void __cdecl CFlame::getPropertyList(CFlame *this_ptr,CActorPropertyList *property_list);

// Original: core_flame.cpp_CFlame_processInEditor_FUN_004caf60
// Address: 004caf60
void __cdecl CFlame::processInEditor(CFlame *this_ptr);

// Original: core_flame.cpp_CFlame_showEditorHelp_FUN_004cb0a0
// Address: 004cb0a0
void __cdecl CFlame::showEditorHelp(CFlame *this_ptr,int *y_pos);

// Original: core_flame.cpp_CFlame_addFilesToExtract_FUN_004cb0e0
// Address: 004cb0e0
void __cdecl CFlame::addFilesToExtract(CFlame *this_ptr,_FILE *file_handle);
