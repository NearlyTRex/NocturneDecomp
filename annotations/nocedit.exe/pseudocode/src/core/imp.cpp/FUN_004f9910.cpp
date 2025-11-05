// Name: core_imp.cpp_FUN_004f9910
// Address: 004f9910
// Address Range: [[004f9910, 004f9bf0]]
// Convention: unknown
// Signature: undefined core_imp.cpp_FUN_004f9910()
// Globals:
//   TerminatedCString s_Bip01_Head_0062f83b
//   TerminatedCString s_Bip01_L_ForeArm_0062f846
//   TerminatedCString s_Bip01_R_ForeArm_0062f856
//   TerminatedCString s_Bip01_L_UpperArm_0062f866
//   TerminatedCString s_Bip01_R_UpperArm_0062f877
//   TerminatedCString s_Bip01_L_Foot_0062f888
//   TerminatedCString s_Bip01_R_Foot_0062f895
//   TerminatedCString s_Bip01_L_Hand_0062f8a2
//   TerminatedCString s_Bip01_R_Hand_0062f8af
//   TerminatedCString s_Bip01_Spine_0062f8bc
//   TerminatedCString s_Bip01_Spine1_0062f8c8
//   TerminatedCString s_Bip01_Spine2_0062f8d5
//   TerminatedCString s_Bip01_Head_0062f8e2
//   TerminatedCString s_Bip01_L_UpperArm_0062f8ed
//   TerminatedCString s_Bip01_R_UpperArm_0062f8fe
//   TerminatedCString s_Bip01_Spine_0062f90f
//   TerminatedCString s_Bip01_Spine2_0062f91b
//   TerminatedCString s_larm01_0062f928
//   TerminatedCString s_l4arm01_0062f92f
//   TerminatedCString s_rarm01_0062f937
//   TerminatedCString s_r4arm01_0062f93e
//   TerminatedCString s_rthigh01_0062f946
//   TerminatedCString s_rshin01_0062f94f
//   TerminatedCString s_lthigh01_0062f957
//   TerminatedCString s_lshin01_0062f960
//   TerminatedCString s_ass01_0062f968
//   TerminatedCString s_torso01_0062f96e
//   TerminatedCString s_head01_0062f976
//   undefined4 DAT_02db89f4
//   undefined4 DAT_02db89f8
//   undefined4 DAT_02db89fc
//   undefined4 DAT_02db8a00
//   undefined4 DAT_02db8a04
//   undefined4 DAT_02db8a08
//   undefined4 DAT_02db8a0c
//   undefined4 DAT_02db8a10
//   undefined4 DAT_02db8a14
//   undefined4 DAT_02db8a18
//   undefined4 DAT_02db8a1c
//   undefined4 DAT_02db8a20
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_enemy.cpp_CEnemy_FUN_004a9650
//   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_imp.cpp_FUN_004f9910(undefined4 param_1) */

void core_imp_cpp_FUN_004f9910(void)

{
  CDeformableModelInstance *this_ptr;
  CCharacter *pCVar1;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar2;
  float fVar3;
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_FUN_004a9650(in_stack_00000004);
  this_ptr = &(in_stack_00000004->base_character).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  DAT_02db89f4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Head");
  _DAT_02db8a00 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L ForeArm");
  _DAT_02db8a04 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R ForeArm");
  DAT_02db8a08 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L UpperArm");
  DAT_02db8a0c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R UpperArm");
  _DAT_02db8a10 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Foot");
  _DAT_02db8a14 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R Foot");
  DAT_02db89f8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Hand");
  DAT_02db89fc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Hand");
  DAT_02db8a18 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine");
  _DAT_02db8a1c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 Spine1");
  DAT_02db8a20 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2");
  DAT_02db89f4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Head");
  DAT_02db8a08 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L UpperArm");
  DAT_02db8a0c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R UpperArm");
  DAT_02db8a18 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine");
  DAT_02db8a20 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2");
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"larm01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x14) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"l4arm01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x18) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"rarm01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x1c) = iVar2;
  fVar3 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"r4arm01",1);
  in_stack_00000004[1].base_character.base_actor.location.position.x = fVar3;
  fVar3 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"rthigh01",1);
  in_stack_00000004[1].base_character.base_actor.location.position.y = fVar3;
  fVar3 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"rshin01",1);
  in_stack_00000004[1].base_character.base_actor.location.position.z = fVar3;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"lthigh01",1);
  in_stack_00000004[1].base_character.base_actor.location.area_id = iVar2;
  fVar3 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"lshin01",1);
  in_stack_00000004[1].base_character.base_actor.orient.pitch = fVar3;
  fVar3 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"ass01",1);
  in_stack_00000004[1].base_character.base_actor.orient.bank = fVar3;
  fVar3 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"torso01",1);
  in_stack_00000004[1].base_character.base_actor.orient.heading = fVar3;
  fVar3 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"head01",1);
  pCVar1 = &in_stack_00000004[1].base_character;
  (pCVar1->base_actor).actor_name[8] = '\0';
  (pCVar1->base_actor).actor_name[9] = '\0';
  (pCVar1->base_actor).actor_name[10] = '\0';
  (pCVar1->base_actor).actor_name[0xb] = '\0';
  pCVar1 = &in_stack_00000004[1].base_character;
  (pCVar1->base_actor).actor_name[0xc] = '\0';
  (pCVar1->base_actor).actor_name[0xd] = '\0';
  (pCVar1->base_actor).actor_name[0xe] = '\0';
  (pCVar1->base_actor).actor_name[0xf] = '\0';
  in_stack_00000004[1].base_character.base_actor.orient_matrix.m[0].x = fVar3;
  *(int *)(in_stack_00000004->base_character).carry_hands[0].field0_0x0 = DAT_02db89f8;
  *(undefined4 *)((in_stack_00000004->base_character).carry_hands[0].field0_0x0 + 4) =
       *(undefined4 *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x18);
  *(int *)(in_stack_00000004->base_character).carry_hands[1].field0_0x0 = DAT_02db89fc;
  *(float *)((in_stack_00000004->base_character).carry_hands[1].field0_0x0 + 4) =
       in_stack_00000004[1].base_character.base_actor.location.position.x;
  fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
  *(float *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10) = fVar3;
  return;
}


// Assembly code:
// 004f9910: PUSH EBX
//   Label: core_imp.cpp_FUN_004f9910
// 004f9911: PUSH ESI
// 004f9912: SUB ESP,0x4
// 004f9915: MOV EBX,dword ptr [ESP + 0x10]
// 004f9919: PUSH EDI
// 004f991a: PUSH EBX
// 004f991b: CALL core_enemy.cpp_CEnemy_FUN_004a9650
//   XREF to: 004a9650 (UNCONDITIONAL_CALL)
// 004f9920: ADD ESP,0x4
// 004f9923: LEA EDI,[EBX + 0x158]
// 004f9929: PUSH EDI
// 004f992a: CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 004f992f: ADD ESP,0x4
// 004f9932: PUSH EDI
// 004f9933: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 004f9938: ADD ESP,0x4
// 004f993b: PUSH 0x1
// 004f993d: PUSH 0x62f83b
//   XREF to: 0062f83b (DATA)
// 004f9942: PUSH EAX
// 004f9943: MOV ESI,EAX
// 004f9945: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f994a: ADD ESP,0xc
// 004f994d: PUSH 0x1
// 004f994f: PUSH 0x62f846
//   XREF to: 0062f846 (DATA)
// 004f9954: PUSH ESI
// 004f9955: MOV [0x02db89f4],EAX
//   XREF to: 02db89f4 (WRITE)
// 004f995a: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f995f: ADD ESP,0xc
// 004f9962: PUSH 0x1
// 004f9964: PUSH 0x62f856
//   XREF to: 0062f856 (DATA)
// 004f9969: PUSH ESI
// 004f996a: MOV [0x02db8a00],EAX
//   XREF to: 02db8a00 (WRITE)
// 004f996f: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f9974: ADD ESP,0xc
// 004f9977: PUSH 0x1
// 004f9979: PUSH 0x62f866
//   XREF to: 0062f866 (DATA)
// 004f997e: PUSH ESI
// 004f997f: MOV [0x02db8a04],EAX
//   XREF to: 02db8a04 (WRITE)
// 004f9984: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f9989: ADD ESP,0xc
// 004f998c: PUSH 0x1
// 004f998e: PUSH 0x62f877
//   XREF to: 0062f877 (DATA)
// 004f9993: PUSH ESI
// 004f9994: MOV [0x02db8a08],EAX
//   XREF to: 02db8a08 (WRITE)
// 004f9999: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f999e: ADD ESP,0xc
// 004f99a1: PUSH 0x1
// 004f99a3: PUSH 0x62f888
//   XREF to: 0062f888 (DATA)
// 004f99a8: PUSH ESI
// 004f99a9: MOV [0x02db8a0c],EAX
//   XREF to: 02db8a0c (WRITE)
// 004f99ae: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f99b3: ADD ESP,0xc
// 004f99b6: PUSH 0x1
// 004f99b8: PUSH 0x62f895
//   XREF to: 0062f895 (DATA)
// 004f99bd: PUSH ESI
// 004f99be: MOV [0x02db8a10],EAX
//   XREF to: 02db8a10 (WRITE)
// 004f99c3: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f99c8: ADD ESP,0xc
// 004f99cb: PUSH 0x1
// 004f99cd: PUSH 0x62f8a2
//   XREF to: 0062f8a2 (DATA)
// 004f99d2: PUSH ESI
// 004f99d3: MOV [0x02db8a14],EAX
//   XREF to: 02db8a14 (WRITE)
// 004f99d8: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f99dd: ADD ESP,0xc
// 004f99e0: MOV [0x02db89f8],EAX
//   XREF to: 02db89f8 (WRITE)
// 004f99e5: PUSH 0x1
// 004f99e7: PUSH 0x62f8af
//   XREF to: 0062f8af (DATA)
// 004f99ec: PUSH ESI
// 004f99ed: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f99f2: ADD ESP,0xc
// 004f99f5: PUSH 0x1
// 004f99f7: PUSH 0x62f8bc
//   XREF to: 0062f8bc (DATA)
// 004f99fc: PUSH ESI
// 004f99fd: MOV [0x02db89fc],EAX
//   XREF to: 02db89fc (WRITE)
// 004f9a02: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f9a07: ADD ESP,0xc
// 004f9a0a: PUSH 0x1
// 004f9a0c: PUSH 0x62f8c8
//   XREF to: 0062f8c8 (DATA)
// 004f9a11: PUSH ESI
// 004f9a12: MOV [0x02db8a18],EAX
//   XREF to: 02db8a18 (WRITE)
// 004f9a17: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f9a1c: ADD ESP,0xc
// 004f9a1f: PUSH 0x1
// 004f9a21: PUSH 0x62f8d5
//   XREF to: 0062f8d5 (DATA)
// 004f9a26: PUSH ESI
// 004f9a27: MOV [0x02db8a1c],EAX
//   XREF to: 02db8a1c (WRITE)
// 004f9a2c: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f9a31: ADD ESP,0xc
// 004f9a34: PUSH 0x1
// 004f9a36: PUSH 0x62f8e2
//   XREF to: 0062f8e2 (DATA)
// 004f9a3b: PUSH ESI
// 004f9a3c: MOV [0x02db8a20],EAX
//   XREF to: 02db8a20 (WRITE)
// 004f9a41: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f9a46: ADD ESP,0xc
// 004f9a49: PUSH 0x1
// 004f9a4b: PUSH 0x62f8ed
//   XREF to: 0062f8ed (DATA)
// 004f9a50: PUSH ESI
// 004f9a51: MOV [0x02db89f4],EAX
//   XREF to: 02db89f4 (WRITE)
// 004f9a56: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f9a5b: ADD ESP,0xc
// 004f9a5e: PUSH 0x1
// 004f9a60: PUSH 0x62f8fe
//   XREF to: 0062f8fe (DATA)
// 004f9a65: PUSH ESI
// 004f9a66: MOV [0x02db8a08],EAX
//   XREF to: 02db8a08 (WRITE)
// 004f9a6b: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f9a70: ADD ESP,0xc
// 004f9a73: PUSH 0x1
// 004f9a75: PUSH 0x62f90f
//   XREF to: 0062f90f (DATA)
// 004f9a7a: PUSH ESI
// 004f9a7b: MOV [0x02db8a0c],EAX
//   XREF to: 02db8a0c (WRITE)
// 004f9a80: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f9a85: ADD ESP,0xc
// 004f9a88: PUSH 0x1
// 004f9a8a: PUSH 0x62f91b
//   XREF to: 0062f91b (DATA)
// 004f9a8f: PUSH ESI
// 004f9a90: MOV [0x02db8a18],EAX
//   XREF to: 02db8a18 (WRITE)
// 004f9a95: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f9a9a: ADD ESP,0xc
// 004f9a9d: PUSH EDI
// 004f9a9e: MOV [0x02db8a20],EAX
//   XREF to: 02db8a20 (WRITE)
// 004f9aa3: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 004f9aa8: MOV ESI,EAX
// 004f9aaa: ADD ESP,0x4
// 004f9aad: POP EDI
// 004f9aae: PUSH 0x1
// 004f9ab0: PUSH 0x62f928
//   XREF to: 0062f928 (DATA)
// 004f9ab5: PUSH EAX
// 004f9ab6: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004f9abb: ADD ESP,0xc
// 004f9abe: PUSH 0x1
// 004f9ac0: PUSH 0x62f92f
//   XREF to: 0062f92f (DATA)
// 004f9ac5: PUSH ESI
// 004f9ac6: MOV dword ptr [EBX + 0xbec8],EAX
// 004f9acc: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004f9ad1: ADD ESP,0xc
// 004f9ad4: PUSH 0x1
// 004f9ad6: PUSH 0x62f937
//   XREF to: 0062f937 (DATA)
// 004f9adb: PUSH ESI
// 004f9adc: MOV dword ptr [EBX + 0xbecc],EAX
// 004f9ae2: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004f9ae7: ADD ESP,0xc
// 004f9aea: PUSH 0x1
// 004f9aec: PUSH 0x62f93e
//   XREF to: 0062f93e (DATA)
// 004f9af1: PUSH ESI
// 004f9af2: MOV dword ptr [EBX + 0xbed0],EAX
// 004f9af8: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004f9afd: ADD ESP,0xc
// 004f9b00: PUSH 0x1
// 004f9b02: PUSH 0x62f946
//   XREF to: 0062f946 (DATA)
// 004f9b07: PUSH ESI
// 004f9b08: MOV dword ptr [EBX + 0xbed4],EAX
// 004f9b0e: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004f9b13: ADD ESP,0xc
// 004f9b16: PUSH 0x1
// 004f9b18: PUSH 0x62f94f
//   XREF to: 0062f94f (DATA)
// 004f9b1d: PUSH ESI
// 004f9b1e: MOV dword ptr [EBX + 0xbed8],EAX
// 004f9b24: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004f9b29: ADD ESP,0xc
// 004f9b2c: PUSH 0x1
// 004f9b2e: PUSH 0x62f957
//   XREF to: 0062f957 (DATA)
// 004f9b33: PUSH ESI
// 004f9b34: MOV dword ptr [EBX + 0xbedc],EAX
// 004f9b3a: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004f9b3f: ADD ESP,0xc
// 004f9b42: PUSH 0x1
// 004f9b44: PUSH 0x62f960
//   XREF to: 0062f960 (DATA)
// 004f9b49: PUSH ESI
// 004f9b4a: MOV dword ptr [EBX + 0xbee0],EAX
// 004f9b50: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004f9b55: ADD ESP,0xc
// 004f9b58: PUSH 0x1
// 004f9b5a: PUSH 0x62f968
//   XREF to: 0062f968 (DATA)
// 004f9b5f: PUSH ESI
// 004f9b60: MOV dword ptr [EBX + 0xbee4],EAX
// 004f9b66: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004f9b6b: ADD ESP,0xc
// 004f9b6e: MOV dword ptr [EBX + 0xbee8],EAX
// 004f9b74: PUSH 0x1
// 004f9b76: PUSH 0x62f96e
//   XREF to: 0062f96e (DATA)
// 004f9b7b: PUSH ESI
// 004f9b7c: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004f9b81: ADD ESP,0xc
// 004f9b84: PUSH 0x1
// 004f9b86: PUSH 0x62f976
//   XREF to: 0062f976 (DATA)
// 004f9b8b: PUSH ESI
// 004f9b8c: MOV dword ptr [EBX + 0xbeec],EAX
// 004f9b92: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004f9b97: MOV dword ptr [EBX + 0xbebc],0x0
// 004f9ba1: MOV dword ptr [EBX + 0xbec0],0x0
// 004f9bab: MOV dword ptr [EBX + 0xbef0],EAX
// 004f9bb1: MOV EAX,[0x02db89f8]
//   XREF to: 02db89f8 (READ)
// 004f9bb6: MOV dword ptr [EBX + 0x24ac],EAX
// 004f9bbc: MOV EAX,dword ptr [EBX + 0xbecc]
// 004f9bc2: MOV dword ptr [EBX + 0x24b0],EAX
// 004f9bc8: MOV EAX,[0x02db89fc]
//   XREF to: 02db89fc (READ)
// 004f9bcd: ADD ESP,0xc
// 004f9bd0: MOV dword ptr [EBX + 0x24f0],EAX
// 004f9bd6: PUSH 0x41a00000
// 004f9bdb: MOV EAX,dword ptr [EBX + 0xbed4]
// 004f9be1: PUSH 0x41200000
// 004f9be6: MOV dword ptr [EBX + 0x24f4],EAX
// 004f9bec: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
