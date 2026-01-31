// Name: core_icepick.cpp_CIcePick_setup_FUN_004f7e80
// Address: 004f7e80
// Address Range: [[004f7e80, 004f8094]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_setup_FUN_004f7e80(CIcePick *this_ptr)

#include "nocturne.h"

void __cdecl core_icepick_cpp_CIcePick_setup_FUN_004f7e80(CIcePick *this_ptr)

{
  CHero *pCVar1;
  CCharacter *pCVar2;
  SCarryHand *pSVar3;
  int iVar4;
  CSkeleton *this_ptr_00;
  
  core_hero_cpp_CHero_setup_FUN_004f2540(&this_ptr->base);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                          (&(this_ptr->base).base.model);
  INT_02db8970 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 head");
  INT_02db8974 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Clavicle");
  INT_02db8978 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Clavicle");
  INT_02db897c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L UpperArm");
  INT_02db8980 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R UpperArm");
  INT_02db8984 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L ForeArm");
  INT_02db8988 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R ForeArm");
  INT_02db898c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Foot");
  INT_02db8990 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Foot");
  INT_02db8994 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Thigh");
  INT_02db8998 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Thigh");
  INT_02db899c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Calf");
  INT_02db89a0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Calf");
  INT_02db89a4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Hand");
  INT_02db89a8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Hand");
  INT_02db89ac = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2");
  INT_02db89b0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine1");
  INT_02db89b4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine");
  pCVar2 = &(this_ptr->base).base;
  pCVar2->carry_hands[0].unk1[4] = '\0';
  pCVar2->carry_hands[0].unk1[5] = '\0';
  pCVar2->carry_hands[0].unk1[6] = '\0';
  pCVar2->carry_hands[0].unk1[7] = '\0';
  pSVar3 = (this_ptr->base).base.carry_hands;
  pSVar3[1].unk1[4] = '\0';
  pSVar3[1].unk1[5] = '\0';
  pSVar3[1].unk1[6] = '\0';
  pSVar3[1].unk1[7] = '\0';
  this_ptr->unk[0] = '\0';
  this_ptr->unk[1] = '\0';
  this_ptr->unk[2] = '\0';
  this_ptr->unk[3] = '\0';
  *(int *)(this_ptr->base).base.carry_hands[0].unk1 = INT_02db89a4;
  *(int *)(this_ptr->base).base.carry_hands[1].unk1 = INT_02db89a8;
  iVar4 = g_LocalHeroIndex;
  this_ptr->unk[0x24] = '\0';
  this_ptr->unk[0x25] = '\0';
  this_ptr->unk[0x26] = '\0';
  this_ptr->unk[0x27] = '\0';
  if (this_ptr == (CIcePick *)g_HeroActors[iVar4]) {
    pCVar1 = &((CIcePick *)g_HeroActors[iVar4])->base;
    (pCVar1->base).cloth_data[0x348] = '\0';
    (pCVar1->base).cloth_data[0x349] = '\0';
    (pCVar1->base).cloth_data[0x34a] = -0x40;
    (pCVar1->base).cloth_data[0x34b] = '?';
  }
  this_ptr->unk[0xc] = '\0';
  this_ptr->unk[0xd] = '\0';
  this_ptr->unk[0xe] = '\0';
  this_ptr->unk[0xf] = '\0';
  this_ptr->unk[8] = '\0';
  this_ptr->unk[9] = '\0';
  this_ptr->unk[10] = '\0';
  this_ptr->unk[0xb] = '\0';
  this_ptr->unk[0x2c] = '\0';
  this_ptr->unk[0x2d] = '\0';
  this_ptr->unk[0x2e] = '\0';
  this_ptr->unk[0x2f] = '\0';
  return;
}
