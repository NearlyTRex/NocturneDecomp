#pragma once

// Function prototypes for core/mimic.cpp
// Generated from Ghidra function signatures

// Original: core_mimic.cpp_staticInit_FUN_004d4390
// Address: 004d4390
void __cdecl staticInit(void);

// Original: core_mimic.cpp_mirrorXTransform_FUN_004d43c0
// Address: 004d43c0
void __cdecl mirrorXTransform(void);

// Original: core_mimic.cpp_factoryFuncMimic_FUN_004d4420
// Address: 004d4420
CMimic * __cdecl factoryFuncMimic(void);

// Original: core_mimic.cpp_CMimic_getActorType_FUN_004d4440
// Address: 004d4440
CDemonActorType * __cdecl CMimic::getActorType(CMimic *this_ptr);

// Original: core_mimic.cpp_CMimic_ctor_FUN_004d4450
// Address: 004d4450
CMimic * __cdecl CMimic::ctor(CMimic *this_ptr);

// Original: core_mimic.cpp_CMimic_dtor_FUN_004d4540
// Address: 004d4540
CMimic * __cdecl CMimic::dtor(CMimic *this_ptr,uint flags);

// Original: core_mimic.cpp_CMimic_setup_FUN_004d4650
// Address: 004d4650
void __cdecl CMimic::setup(CMimic *this_ptr);

// Original: core_mimic.cpp_CMimic_process_FUN_004d49f0
// Address: 004d49f0
void __cdecl CMimic::process(CMimic *this_ptr,float delta_time);

// Original: core_mimic.cpp_CMimic_FUN_004d4ba0
// Address: 004d4ba0
void __cdecl CMimic(CMimic *this_ptr);

// Original: core_mimic.cpp_CMimic_FUN_004d4f30
// Address: 004d4f30
void __cdecl CMimic(CMimic *this_ptr,float delta_time);

// Original: core_mimic.cpp_CMimic_setupCloth_FUN_004d5770
// Address: 004d5770
void __cdecl CMimic::setupCloth(CMimic *this_ptr);

// Original: core_mimic.cpp_CMimic_renderMirrored_FUN_004d5860
// Address: 004d5860
int __cdecl CMimic::renderMirrored(CMimic *this_ptr);

// Original: core_mimic.cpp_CMimic_renderOpaque_FUN_004d5ae0
// Address: 004d5ae0
int __cdecl CMimic::renderOpaque(CMimic *this_ptr);

// Original: core_mimic.cpp_CMimic_renderTransparent_FUN_004d5b00
// Address: 004d5b00
int __cdecl CMimic::renderTransparent(CMimic *this_ptr);

// Original: core_mimic.cpp_CMimic_getDeathState_FUN_004d5b10
// Address: 004d5b10
EDeathState __cdecl CMimic::getDeathState(CMimic *this_ptr);

// Original: core_mimic.cpp_CMimic_renderBackground_FUN_004d5b20
// Address: 004d5b20
void __cdecl CMimic::renderBackground(CMimic *this_ptr,int layer_flag);

// Original: core_mimic.cpp_CMimic_archive_FUN_004d5bb0
// Address: 004d5bb0
void __cdecl CMimic::archive(CMimic *this_ptr);

// Original: core_mimic.cpp_CMimic_getCollisionType_FUN_004d5c80
// Address: 004d5c80
ECollisionType __cdecl CMimic::getCollisionType(CMimic *this_ptr,SCollisionInfo *collision_info);

// Original: core_mimic.cpp_CMimic_beginMorph_FUN_004d5d00
// Address: 004d5d00
void __cdecl CMimic::beginMorph(CMimic *this_ptr);

// Original: core_mimic.cpp_CMimic_processMorph_FUN_004d5e20
// Address: 004d5e20
void __cdecl CMimic::processMorph(CMimic *this_ptr,float delta_time);
