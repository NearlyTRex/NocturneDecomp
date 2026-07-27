#pragma once

// Function prototypes for core/cloth.cpp
// Generated from Ghidra function signatures

// Original: core_cloth.cpp_CCloth_ctor_FUN_00435100
// Address: 00435100
int __cdecl CCloth::ctor(undefined4 param_1);

// Original: core_cloth.cpp_CCloth_dtor_FUN_00435160
// Address: 00435160
void __cdecl CCloth::dtor(int param_1);

// Original: core_cloth.cpp_CCloth_allocMemory_FUN_004351b0
// Address: 004351b0
void __cdecl CCloth::allocMemory(int param_1);

// Original: core_cloth.cpp_FUN_00435210
// Address: 00435210
void FUN_00435210(int param_1);

// Original: core_cloth.cpp_CCloth_load_FUN_00435240
// Address: 00435240
int __cdecl CCloth::load(int param_1,undefined4 param_2);

// Original: core_cloth.cpp_CCloth_initializeConnections_FUN_004357b0
// Address: 004357b0
void __cdecl CCloth::initializeConnections(int param_1);

// Original: core_cloth.cpp_CCloth_setup_FUN_004359e0
// Address: 004359e0
void __cdecl CCloth::setup(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4);

// Original: core_cloth.cpp_CCloth_orientBoneToChild_FUN_004363e0
// Address: 004363e0
void __cdecl CCloth::orientBoneToChild(int param_1,int param_2,int param_3);

// Original: core_cloth.cpp_CCloth_computeBoneTransform_FUN_00436580
// Address: 00436580
void __cdecl CCloth::computeBoneTransform(int param_1,int param_2,int param_3);

// Original: core_cloth.cpp_CCloth_applyConstraints_FUN_004366f0
// Address: 004366f0
void __cdecl CCloth::applyConstraints(int param_1,float *param_2);

// Original: core_cloth.cpp_CCloth_process_FUN_00436e50
// Address: 00436e50
void __cdecl CCloth::process(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);

// Original: core_cloth.cpp_CCloth_step_FUN_00436e80
// Address: 00436e80
void __cdecl CCloth::step(int param_1,float *param_2,float *param_3,float param_4,float param_5,int param_6);

// Original: core_cloth.cpp_FUN_00437a60
// Address: 00437a60
void FUN_00437a60(int param_1);

// Original: core_cloth.cpp_FUN_00437ab0
// Address: 00437ab0
void FUN_00437ab0(int param_1,int param_2,int param_3);

// Original: core_cloth.cpp_CCloth_saveJoinedLight_FUN_00437cc0
// Address: 00437cc0
int CCloth::saveJoinedLight(int param_1,int param_2);

// Original: core_cloth.cpp_CCloth_render_FUN_00437db0
// Address: 00437db0
void __cdecl CCloth::render(int param_1,int param_2);

// Original: core_cloth.cpp_CClothList_ctor_FUN_00438210
// Address: 00438210
undefined4 * __cdecl CClothList::ctor(undefined4 *param_1);

// Original: core_cloth.cpp_CClothList_dtor_FUN_00438250
// Address: 00438250
undefined4 __cdecl CClothList::dtor(undefined4 param_1);

// Original: core_cloth.cpp_CClothList_load_FUN_00438270
// Address: 00438270
void __cdecl CClothList::load(int *param_1);

// Original: core_cloth.cpp_CClothList_reset_FUN_00438320
// Address: 00438320
void __cdecl CClothList::reset(int *param_1);

// Original: core_cloth.cpp_CClothList_add_FUN_00438390
// Address: 00438390
void __cdecl CClothList::add(int *param_1,char *param_2);

// Original: core_cloth.cpp_FUN_00438410
// Address: 00438410
void FUN_00438410(int *param_1,int param_2);

// Original: core_cloth.cpp_CClothList_setup_FUN_00438510
// Address: 00438510
void __cdecl CClothList::setup(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);

// Original: core_cloth.cpp_CClothList_process_FUN_00438550
// Address: 00438550
void __cdecl CClothList::process(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);

// Original: core_cloth.cpp_CClothList_render_FUN_004385a0
// Address: 004385a0
void __cdecl CClothList::render(int *param_1,int param_2);

// Original: core_cloth.cpp_FUN_00438620
// Address: 00438620
void FUN_00438620(int *param_1,undefined4 param_2);

// Original: core_cloth.cpp_FUN_00438660
// Address: 00438660
void FUN_00438660(int *param_1,undefined4 *param_2);

// Original: core_cloth.cpp_CCloth_grabCloth_FUN_004386b0
// Address: 004386b0
void __cdecl CCloth::grabCloth(int param_1,undefined4 param_2,int param_3);

// Original: core_cloth.cpp_CCloth_resetState_FUN_00438750
// Address: 00438750
void __cdecl CCloth::resetState(int param_1,int param_2);

// Original: core_cloth.cpp_CCloth_applyRotation_FUN_00438780
// Address: 00438780
void CCloth::applyRotation(int param_1,float *param_2);

// Original: core_cloth.cpp_FUN_00438880
// Address: 00438880
int FUN_00438880(void);

// Original: core_cloth.cpp_FUN_004388a0
// Address: 004388a0
void FUN_004388a0(void);

// Original: core_cloth.cpp_FUN_004388d0
// Address: 004388d0
int FUN_004388d0(void);

// Original: core_cloth.cpp_FUN_00438900
// Address: 00438900
void FUN_00438900(void);

// Original: core_cloth.cpp_FUN_00438950
// Address: 00438950
void FUN_00438950(void);

// Original: core_cloth.cpp_FUN_00438980
// Address: 00438980
undefined4 FUN_00438980(undefined4 param_1);

// Original: core_cloth.cpp_FUN_00438990
// Address: 00438990
undefined4 FUN_00438990(undefined4 param_1);

// Original: core_cloth.cpp_SClothVertex_ctor_FUN_004389a0
// Address: 004389a0
int SClothVertex::ctor(int param_1);

// Original: core_cloth.cpp_SClothVertex_dtor_FUN_004389c0
// Address: 004389c0
int SClothVertex::dtor(int param_1);

// Original: core_cloth.cpp_CVector3f_arrdtor_FUN_004389e0
// Address: 004389e0
void __cdecl CVector3f::arrdtor(undefined4 param_1);

// Original: core_cloth.cpp_SClothVertex_arrdtor_FUN_00438a00
// Address: 00438a00
void __cdecl SClothVertex::arrdtor(undefined4 param_1);

// Original: core_cloth.cpp_SClothBone_arrdtor_FUN_00438a20
// Address: 00438a20
void __cdecl SClothBone::arrdtor(undefined4 param_1);
