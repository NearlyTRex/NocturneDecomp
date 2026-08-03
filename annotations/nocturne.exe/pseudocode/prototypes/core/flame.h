#pragma once

// Function prototypes for core/flame.cpp
// Generated from Ghidra function signatures

// Original: core_flame.cpp_staticInit_FUN_0048cf00
// Address: 0048cf00
void __cdecl staticInit(void);

// Original: core_flame.cpp_FUN_0048cf30
// Address: 0048cf30
void FUN_0048cf30(void);

// Original: core_flame.cpp_CFlame_getActorType_FUN_0048cf50
// Address: 0048cf50
CDemonActorType * __cdecl CFlame::getActorType(CFlame *this_ptr);

// Original: core_flame.cpp_CFlame_ctor_FUN_0048cf60
// Address: 0048cf60
CFlame * __cdecl CFlame::ctor(CFlame *this_ptr);

// Original: core_flame.cpp_CFlame_setup_FUN_0048d050
// Address: 0048d050
void __cdecl CFlame::setup(CFlame *this_ptr);

// Original: core_flame.cpp_CFlame_process_FUN_0048d0c0
// Address: 0048d0c0
void __cdecl CFlame::process(CFlame *this_ptr,float delta_time);

// Original: core_flame.cpp_CFlame_renderTransparent_FUN_0048d5d0
// Address: 0048d5d0
int __cdecl CFlame::renderTransparent(CFlame *this_ptr);

// Original: core_flame.cpp_FUN_0048df10
// Address: 0048df10
void __cdecl FUN_0048df10(CFlame *this_ptr);

// Original: core_flame.cpp_CFlame_renderBackground_FUN_0048df20
// Address: 0048df20
void __cdecl CFlame::renderBackground(CFlame *this_ptr,int layer_flag);

// Original: core_flame.cpp_CFlame_getBoundingBox_FUN_0048e0a0
// Address: 0048e0a0
CBoundingBox3D * __cdecl CFlame::getBoundingBox(CFlame *this_ptr,CBoundingBox3D *out_box);

// Original: core_flame.cpp_CFlame_archive_FUN_0048e100
// Address: 0048e100
void __cdecl CFlame::archive(CFlame *this_ptr);

// Original: core_flame.cpp_CFlame_getCollisionType_FUN_0048e220
// Address: 0048e220
ECollisionType __cdecl CFlame::getCollisionType(CFlame *this_ptr,SCollisionInfo *collision_info);

// Original: core_flame.cpp_CFlame_updateGlobe_FUN_0048e230
// Address: 0048e230
void __cdecl CFlame::updateGlobe(CFlame *this_ptr);
