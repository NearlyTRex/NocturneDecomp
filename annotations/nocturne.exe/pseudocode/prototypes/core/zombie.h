#pragma once

// Function prototypes for core/zombie.cpp
// Generated from Ghidra function signatures

// Original: core_zombie.cpp_staticInit_FUN_0055e780
// Address: 0055e780
void __cdecl staticInit(void);

// Original: core_zombie.cpp_classifyObjectShape_FUN_0055e940
// Address: 0055e940
int __cdecl classifyObjectShape(CVector3f *dimensions);

// Original: core_zombie.cpp_FUN_0055ea90
// Address: 0055ea90
void FUN_0055ea90(void);

// Original: core_zombie.cpp_FUN_0055eab0
// Address: 0055eab0
CDemonActorType * FUN_0055eab0(void);

// Original: core_zombie.cpp_CZombie_ctor_FUN_0055eac0
// Address: 0055eac0
CZombie * __cdecl CZombie::ctor(CZombie *this_ptr);

// Original: core_zombie.cpp_CZombie_setup_FUN_0055ec20
// Address: 0055ec20
void CZombie::setup(CEnemy *param_1);

// Original: core_zombie.cpp_FUN_0055ef50
// Address: 0055ef50
void FUN_0055ef50(CZombie *param_1,float param_2);

// Original: core_zombie.cpp_FUN_00560cd0
// Address: 00560cd0
void FUN_00560cd0(int param_1,int param_2);

// Original: core_zombie.cpp_FUN_00561010
// Address: 00561010
undefined4 FUN_00561010(CZombie *param_1,float param_2);

// Original: core_zombie.cpp_CZombie_getPickupHandIndex_FUN_005617e0
// Address: 005617e0
int __cdecl CZombie::getPickupHandIndex(CZombie *this_ptr,int object_shape_type);

// Original: core_zombie.cpp_CZombie_canPickupWithHand_FUN_00561880
// Address: 00561880
int __cdecl CZombie::canPickupWithHand(CZombie *this_ptr,int object_shape_type);

// Original: core_zombie.cpp_CZombie_dropAndClearTarget_FUN_005618c0
// Address: 005618c0
void CZombie::dropAndClearTarget(int param_1);

// Original: core_zombie.cpp_FUN_00561900
// Address: 00561900
int FUN_00561900(CCharacter *param_1);

// Original: core_zombie.cpp_FUN_00561940
// Address: 00561940
int FUN_00561940(CCharacter *param_1);

// Original: core_zombie.cpp_CZombie_archive_FUN_00561aa0
// Address: 00561aa0
void CZombie::archive(CEnemy *param_1);

// Original: core_zombie.cpp_CZombie_canBeAttracted_FUN_00561bf0
// Address: 00561bf0
undefined4 CZombie::canBeAttracted(CDemonActor *param_1,CVector3f *param_2);

// Original: core_zombie.cpp_CZombie_processDismemberment_FUN_00561cf0
// Address: 00561cf0
void __cdecl CZombie::processDismemberment(CZombie *this_ptr,SDamageInfo *damage_info);

// Original: core_zombie.cpp_CZombie_processDamage_FUN_00561fc0
// Address: 00561fc0
void CZombie::processDamage(CZombie *param_1,SDamageInfo *param_2);

// Original: core_zombie.cpp_FUN_005621f0
// Address: 005621f0
int FUN_005621f0(int param_1,CVector3f *param_2);

// Original: core_zombie.cpp_CZombie_isGrabbable_FUN_005623f0
// Address: 005623f0
int CZombie::isGrabbable(CCharacter *param_1,CDemonActor *param_2);

// Original: core_zombie.cpp_CZombie_canBeGrabbed_FUN_00562430
// Address: 00562430
bool CZombie::canBeGrabbed(undefined4 param_1,undefined4 param_2,int param_3);

// Original: core_zombie.cpp_CZombie_getGrabbed_FUN_00562440
// Address: 00562440
undefined4 CZombie::getGrabbed(int param_1,undefined4 param_2,int param_3);

// Original: core_zombie.cpp_CZombie_shouldIgnoreForTargeting_FUN_005624b0
// Address: 005624b0
undefined4 CZombie::shouldIgnoreForTargeting(int param_1);

// Original: core_zombie.cpp_CZombie_resetChaseState_FUN_005624e0
// Address: 005624e0
void __cdecl CZombie::resetChaseState(CZombie *this_ptr);

// Original: core_zombie.cpp_CZombie_dtor_FUN_00562550
// Address: 00562550
CDemonActor * CZombie::dtor(CDemonActor *param_1,byte param_2);
