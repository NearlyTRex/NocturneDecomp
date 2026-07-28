#pragma once

// Function prototypes for core/mimic.cpp
// Generated from Ghidra function signatures

// Original: core_mimic.cpp_staticInit_FUN_004d4390
// Address: 004d4390
void __cdecl staticInit(void);

// Original: core_mimic.cpp_mirrorXTransform_FUN_004d43c0
// Address: 004d43c0
void mirrorXTransform(void);

// Original: core_mimic.cpp_FUN_004d4420
// Address: 004d4420
void FUN_004d4420(void);

// Original: core_mimic.cpp_FUN_004d4440
// Address: 004d4440
CDemonActorType * FUN_004d4440(void);

// Original: core_mimic.cpp_CMimic_ctor_FUN_004d4450
// Address: 004d4450
CMimic * __cdecl CMimic::ctor(CMimic *this_ptr);

// Original: core_mimic.cpp_FUN_004d4540
// Address: 004d4540
CDemonActor * FUN_004d4540(CDemonActor *param_1,byte param_2);

// Original: core_mimic.cpp_FUN_004d4650
// Address: 004d4650
void FUN_004d4650(CEnemy *param_1);

// Original: core_mimic.cpp_FUN_004d49f0
// Address: 004d49f0
void FUN_004d49f0(CMimic *param_1,float param_2);

// Original: core_mimic.cpp_FUN_004d4ba0
// Address: 004d4ba0
void FUN_004d4ba0(int param_1);

// Original: core_mimic.cpp_FUN_004d4f30
// Address: 004d4f30
void FUN_004d4f30(CMimic *param_1,float param_2);

// Original: core_mimic.cpp_CMimic_setupCloth_FUN_004d5770
// Address: 004d5770
void __cdecl CMimic::setupCloth(CMimic *this_ptr);

// Original: core_mimic.cpp_CMimic_renderMirrored_FUN_004d5860
// Address: 004d5860
int __cdecl CMimic::renderMirrored(CMimic *this_ptr);

// Original: core_mimic.cpp_CMimic_renderOpaque_FUN_004d5ae0
// Address: 004d5ae0
int CMimic::renderOpaque(CMimic *param_1);

// Original: core_mimic.cpp_CMimic_renderTransparent_FUN_004d5b00
// Address: 004d5b00
int CMimic::renderTransparent(CMimic *param_1);

// Original: core_mimic.cpp_FUN_004d5b10
// Address: 004d5b10
undefined4 FUN_004d5b10(void);

// Original: core_mimic.cpp_FUN_004d5b20
// Address: 004d5b20
void FUN_004d5b20(CDemonActor *param_1,int param_2);

// Original: core_mimic.cpp_CMimic_archive_FUN_004d5bb0
// Address: 004d5bb0
void CMimic::archive(CEnemy *param_1);

// Original: core_mimic.cpp_CMimic_getCollisionType_FUN_004d5c80
// Address: 004d5c80
undefined4 CMimic::getCollisionType(int param_1,int *param_2);

// Original: core_mimic.cpp_CMimic_beginMorph_FUN_004d5d00
// Address: 004d5d00
void __cdecl CMimic::beginMorph(CMimic *this_ptr);

// Original: core_mimic.cpp_CMimic_processMorph_FUN_004d5e20
// Address: 004d5e20
void __cdecl CMimic::processMorph(CMimic *this_ptr,float delta_time);
