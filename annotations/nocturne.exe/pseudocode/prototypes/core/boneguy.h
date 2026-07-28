#pragma once

// Function prototypes for core/boneguy.cpp
// Generated from Ghidra function signatures

// Original: core_boneguy.cpp_staticInit_FUN_00418150
// Address: 00418150
void __cdecl staticInit(void);

// Original: core_boneguy.cpp_FUN_00418180
// Address: 00418180
float * FUN_00418180(float *param_1,int param_2);

// Original: core_boneguy.cpp_FUN_004181f0
// Address: 004181f0
CVector3f * FUN_004181f0(CVector3f *param_1,CDemonActor *param_2);

// Original: core_boneguy.cpp_FUN_004182a0
// Address: 004182a0
void FUN_004182a0(void);

// Original: core_boneguy.cpp_FUN_004182c0
// Address: 004182c0
CDemonActorType * FUN_004182c0(void);

// Original: core_boneguy.cpp_FUN_004182cd
// Address: 004182cd
float * FUN_004182cd(float *param_1);

// Original: core_boneguy.cpp_hsvToRgb_FUN_00418480
// Address: 00418480
CColor3f * __cdecl hsvToRgb(CColor3f *out_rgb,CColor3f *in_hsv);

// Original: core_boneguy.cpp_FUN_00418630
// Address: 00418630
int FUN_00418630(CEnemy *param_1);

// Original: core_boneguy.cpp_CBoneGuy_setup_FUN_00418800
// Address: 00418800
void CBoneGuy::setup(CEnemy *param_1);

// Original: core_boneguy.cpp_FUN_00418a00
// Address: 00418a00
void FUN_00418a00(CBoneGuy *param_1,float param_2);

// Original: core_boneguy.cpp_FUN_004194b0
// Address: 004194b0
void FUN_004194b0(int param_1,int param_2);

// Original: core_boneguy.cpp_FUN_004196b0
// Address: 004196b0
undefined4 FUN_004196b0(CCharacter *param_1,float param_2);

// Original: core_boneguy.cpp_CBoneGuy_renderOpaque_FUN_00419bf0
// Address: 00419bf0
void CBoneGuy::renderOpaque(CCharacter *param_1);

// Original: core_boneguy.cpp_FUN_00419c20
// Address: 00419c20
int FUN_00419c20(CCharacter *param_1);

// Original: core_boneguy.cpp_FUN_00419ce0
// Address: 00419ce0
void FUN_00419ce0(CEnemy *param_1);

// Original: core_boneguy.cpp_FUN_00419f30
// Address: 00419f30
undefined4 FUN_00419f30(void);

// Original: core_boneguy.cpp_CBoneGuy_processDamage_FUN_00419f40
// Address: 00419f40
void CBoneGuy::processDamage(CBoneGuy *param_1,SDamageInfo *param_2);

// Original: core_boneguy.cpp_CBoneGuy_getTargetPoints_FUN_00419fc0
// Address: 00419fc0
undefined4 CBoneGuy::getTargetPoints(int param_1,CVector3f *param_2);

// Original: core_boneguy.cpp_CBoneGuy_explode_FUN_0041a0f0
// Address: 0041a0f0
void __cdecl CBoneGuy::explode(CBoneGuy *this_ptr);

// Original: core_boneguy.cpp_CBoneGuy_beginRecombine_FUN_0041a310
// Address: 0041a310
void __cdecl CBoneGuy::beginRecombine(CBoneGuy *this_ptr);

// Original: core_boneguy.cpp_FUN_0041a3e0
// Address: 0041a3e0
ECollisionType FUN_0041a3e0(CCharacter *param_1,SCollisionInfo *param_2);

// Original: core_boneguy.cpp_CBoneGuy_dtor_FUN_0041a400
// Address: 0041a400
CDemonActor * CBoneGuy::dtor(CDemonActor *param_1,byte param_2);

// Original: core_boneguy.cpp_FUN_0041a4d0
// Address: 0041a4d0
undefined4 FUN_0041a4d0(undefined4 param_1);

// Original: core_boneguy.cpp_FUN_0041a4e0
// Address: 0041a4e0
undefined4 FUN_0041a4e0(undefined4 param_1);

// Original: core_boneguy.cpp_SBoneGuyBox_arrdtor_FUN_0041a4f0
// Address: 0041a4f0
SBoneGuyBox * __cdecl SBoneGuyBox::arrdtor(SBoneGuyBox *objs,uint flags);
