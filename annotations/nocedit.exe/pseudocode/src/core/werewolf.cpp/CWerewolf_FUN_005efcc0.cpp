// Name: core_werewolf.cpp_CWerewolf_FUN_005efcc0
// Address: 005efcc0
// Address Range: [[005efcc0, 005efd71]]
// Convention: __cdecl
// Signature: void core_werewolf.cpp_CWerewolf_FUN_005efcc0(CWerewolf * this_ptr)
// Globals:
//   TerminatedCString s_Bip01_Spine3_00657c5f
//   TerminatedCString s_Bip01_L_Finger1_00657c6c
//   TerminatedCString s_Bip01_R_Finger1_00657c7c
//   TerminatedCString s_Bip01jaw2_00657c8c
//   TerminatedCString s_Bip01_Head_00657c96
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_enemy.cpp_CEnemy_FUN_004a9650
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_FUN_005efcc0(CWerewolf *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CEnemy *pCVar1;
  CSkeleton *this_ptr_01;
  int iVar2;
  float fVar3;
  undefined4 uStack00000008;
  float fStack00000018;
  
  this_ptr_00 = &(this_ptr->base_enemy).base_character.model;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0450(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine3");
  *(int *)this_ptr->field4_0xbec0 = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Finger1");
  *(int *)(this_ptr->field4_0xbec0 + 4) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Finger1");
  *(int *)(this_ptr->field4_0xbec0 + 8) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01jaw2");
  uStack00000008 = 1;
  *(int *)(this_ptr->field4_0xbec0 + 0xc) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Head");
  *(int *)(this_ptr->field4_0xbec0 + 0x10) = iVar2;
  uStack00000008 = 0x5efd57;
  core_enemy_cpp_CEnemy_FUN_004a9650(&this_ptr->base_enemy);
  (this_ptr->base_enemy).base_character.base_actor.is_transparent = this_ptr->light_up_eyes;
  uStack00000008 = 0x5efd72;
  fStack00000018 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
  this_ptr->field11_0xbf00 = (int)fStack00000018;
  if (this_ptr->type == 0) {
    pCVar1 = &this_ptr->base_enemy;
    (pCVar1->base_character).cloth_data[0x348] = '\0';
    (pCVar1->base_character).cloth_data[0x349] = '\0';
    (pCVar1->base_character).cloth_data[0x34a] = -0x40;
    (pCVar1->base_character).cloth_data[0x34b] = '?';
  }
  this_ptr->field6_0xbed8[0] = '\0';
  this_ptr->field6_0xbed8[1] = '\0';
  this_ptr->field6_0xbed8[2] = '\0';
  this_ptr->field6_0xbed8[3] = '\0';
  fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,30.0);
  this_ptr->field6_0xbed8[8] = '\0';
  this_ptr->field6_0xbed8[9] = '\0';
  this_ptr->field6_0xbed8[10] = '\0';
  this_ptr->field6_0xbed8[0xb] = '\0';
  this_ptr->field6_0xbed8[0xc] = '\0';
  this_ptr->field6_0xbed8[0xd] = '\0';
  this_ptr->field6_0xbed8[0xe] = '\0';
  this_ptr->field6_0xbed8[0xf] = '\0';
  *(float *)(this_ptr->field6_0xbed8 + 4) = fVar3;
  return;
}


// Assembly code:
// 005efcc0: PUSH EBX
//   Label: core_werewolf.cpp_CWerewolf_FUN_005efcc0
// 005efcc1: PUSH ESI
// 005efcc2: SUB ESP,0x4
// 005efcc5: MOV EBX,dword ptr [ESP + 0x10]
// 005efcc9: LEA ESI,[EBX + 0x158]
// 005efccf: PUSH ESI
// 005efcd0: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 005efcd5: ADD ESP,0x4
// 005efcd8: PUSH ESI
// 005efcd9: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 005efcde: ADD ESP,0x4
// 005efce1: PUSH 0x1
// 005efce3: PUSH 0x657c5f
//   XREF to: 00657c5f (DATA)
// 005efce8: PUSH EAX
// 005efce9: MOV ESI,EAX
// 005efceb: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005efcf0: ADD ESP,0xc
// 005efcf3: PUSH 0x1
// 005efcf5: PUSH 0x657c6c
//   XREF to: 00657c6c (DATA)
// 005efcfa: PUSH ESI
// 005efcfb: MOV dword ptr [EBX + 0xbec0],EAX
// 005efd01: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005efd06: ADD ESP,0xc
// 005efd09: PUSH 0x1
// 005efd0b: PUSH 0x657c7c
//   XREF to: 00657c7c (DATA)
// 005efd10: PUSH ESI
// 005efd11: MOV dword ptr [EBX + 0xbec4],EAX
// 005efd17: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005efd1c: ADD ESP,0xc
// 005efd1f: PUSH 0x1
// 005efd21: PUSH 0x657c8c
//   XREF to: 00657c8c (DATA)
// 005efd26: PUSH ESI
// 005efd27: MOV dword ptr [EBX + 0xbec8],EAX
// 005efd2d: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005efd32: ADD ESP,0xc
// 005efd35: PUSH 0x1
// 005efd37: PUSH 0x657c96
//   XREF to: 00657c96 (DATA)
// 005efd3c: PUSH ESI
// 005efd3d: MOV dword ptr [EBX + 0xbecc],EAX
// 005efd43: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005efd48: ADD ESP,0xc
// 005efd4b: PUSH EBX
// 005efd4c: MOV dword ptr [EBX + 0xbed0],EAX
// 005efd52: CALL core_enemy.cpp_CEnemy_FUN_004a9650
//   XREF to: 004a9650 (UNCONDITIONAL_CALL)
// 005efd57: ADD ESP,0x4
// 005efd5a: PUSH 0x3f800000
// 005efd5f: MOV EAX,dword ptr [EBX + 0xbed4]
// 005efd65: PUSH 0x0
// 005efd67: MOV dword ptr [EBX + 0xfc],EAX
// 005efd6d: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
