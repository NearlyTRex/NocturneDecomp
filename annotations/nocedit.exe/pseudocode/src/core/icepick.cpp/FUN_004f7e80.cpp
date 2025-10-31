// Name: core_icepick.cpp_FUN_004f7e80
// Address: 004f7e80
// Address Range: [[004f7e80, 004f8094]]
// Convention: unknown
// Signature: undefined core_icepick.cpp_FUN_004f7e80()
// Globals:
//   TerminatedCString s_Bip01_head_0062f5b4
//   TerminatedCString s_Bip01_L_Clavicle_0062f5bf
//   TerminatedCString s_Bip01_R_Clavicle_0062f5d0
//   TerminatedCString s_Bip01_L_UpperArm_0062f5e1
//   TerminatedCString s_Bip01_R_UpperArm_0062f5f2
//   TerminatedCString s_Bip01_L_ForeArm_0062f603
//   TerminatedCString s_Bip01_R_ForeArm_0062f613
//   TerminatedCString s_Bip01_L_Foot_0062f623
//   TerminatedCString s_Bip01_R_Foot_0062f630
//   TerminatedCString s_Bip01_L_Thigh_0062f63d
//   TerminatedCString s_Bip01_R_Thigh_0062f64b
//   TerminatedCString s_Bip01_L_Calf_0062f659
//   TerminatedCString s_Bip01_R_Calf_0062f666
//   TerminatedCString s_Bip01_L_Hand_0062f673
//   TerminatedCString s_Bip01_R_Hand_0062f680
//   TerminatedCString s_Bip01_Spine2_0062f68d
//   TerminatedCString s_Bip01_Spine1_0062f69a
//   TerminatedCString s_Bip01_Spine_0062f6a7
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   undefined4 DAT_02db8970
//   undefined4 DAT_02db8974
//   undefined4 DAT_02db8978
//   undefined4 DAT_02db897c
//   undefined4 DAT_02db8980
//   undefined4 DAT_02db8984
//   undefined4 DAT_02db8988
//   undefined4 DAT_02db898c
//   undefined4 DAT_02db8990
//   undefined4 DAT_02db8994
//   undefined4 DAT_02db8998
//   undefined4 DAT_02db899c
//   undefined4 DAT_02db89a0
//   undefined4 DAT_02db89a4
//   undefined4 DAT_02db89a8
//   undefined4 DAT_02db89ac
//   undefined4 DAT_02db89b0
//   undefined4 DAT_02db89b4
// Function calls:
//   core_hero.cpp_CHero_FUN_004f2540
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_hero_icepick.cpp_FUN_004f7e80(undefined4 param_1) */

void core_icepick_cpp_FUN_004f7e80(void)

{
  CHero *pCVar1;
  CCharacter *pCVar2;
  SCarryHand *pSVar3;
  int iVar4;
  CHero *in_stack_00000004;
  
  core_hero_cpp_CHero_FUN_004f2540(in_stack_00000004);
  core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820();
  DAT_02db8970 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02db8974 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02db8978 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02db897c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02db8980 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02db8984 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02db8988 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02db898c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02db8990 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02db8994 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02db8998 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02db899c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02db89a0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_02db89a4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_02db89a8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02db89ac = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_02db89b0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02db89b4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  pCVar2 = &in_stack_00000004->base_character;
  pCVar2->carry_hands[0].field0_0x0[4] = '\0';
  pCVar2->carry_hands[0].field0_0x0[5] = '\0';
  pCVar2->carry_hands[0].field0_0x0[6] = '\0';
  pCVar2->carry_hands[0].field0_0x0[7] = '\0';
  pSVar3 = (in_stack_00000004->base_character).carry_hands;
  pSVar3[1].field0_0x0[4] = '\0';
  pSVar3[1].field0_0x0[5] = '\0';
  pSVar3[1].field0_0x0[6] = '\0';
  pSVar3[1].field0_0x0[7] = '\0';
  pCVar1 = in_stack_00000004 + 1;
  (pCVar1->base_character).base_actor.actor_name[0] = '\0';
  (pCVar1->base_character).base_actor.actor_name[1] = '\0';
  (pCVar1->base_character).base_actor.actor_name[2] = '\0';
  (pCVar1->base_character).base_actor.actor_name[3] = '\0';
  *(undefined4 *)(in_stack_00000004->base_character).carry_hands[0].field0_0x0 = DAT_02db89a4;
  *(undefined4 *)(in_stack_00000004->base_character).carry_hands[1].field0_0x0 = DAT_02db89a8;
  iVar4 = g_LocalHeroIndex;
  in_stack_00000004[1].base_character.base_actor.location.position.y = 0.0;
  pCVar1 = g_HeroActors[iVar4];
  if (in_stack_00000004 == pCVar1) {
    (pCVar1->base_character).cloth_data[0x348] = '\0';
    (pCVar1->base_character).cloth_data[0x349] = '\0';
    (pCVar1->base_character).cloth_data[0x34a] = -0x40;
    (pCVar1->base_character).cloth_data[0x34b] = '?';
  }
  pCVar2 = &in_stack_00000004[1].base_character;
  (pCVar2->base_actor).actor_name[0xc] = '\0';
  (pCVar2->base_actor).actor_name[0xd] = '\0';
  (pCVar2->base_actor).actor_name[0xe] = '\0';
  (pCVar2->base_actor).actor_name[0xf] = '\0';
  pCVar2 = &in_stack_00000004[1].base_character;
  (pCVar2->base_actor).actor_name[8] = '\0';
  (pCVar2->base_actor).actor_name[9] = '\0';
  (pCVar2->base_actor).actor_name[10] = '\0';
  (pCVar2->base_actor).actor_name[0xb] = '\0';
  in_stack_00000004[1].base_character.base_actor.location.area_id = 0;
  return;
}


// Assembly code:
// 004f7e80: PUSH EBX
//   Label: core_icepick.cpp_FUN_004f7e80
// 004f7e81: PUSH ESI
// 004f7e82: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004f7e86: PUSH ESI
// 004f7e87: CALL core_hero.cpp_CHero_FUN_004f2540
//   XREF to: 004f2540 (UNCONDITIONAL_CALL)
// 004f7e8c: ADD ESP,0x4
// 004f7e8f: LEA EAX,[ESI + 0x158]
// 004f7e95: PUSH EAX
// 004f7e96: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 004f7e9b: ADD ESP,0x4
// 004f7e9e: PUSH 0x1
// 004f7ea0: PUSH 0x62f5b4
//   XREF to: 0062f5b4 (DATA)
// 004f7ea5: PUSH EAX
// 004f7ea6: MOV EBX,EAX
// 004f7ea8: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f7ead: ADD ESP,0xc
// 004f7eb0: PUSH 0x1
// 004f7eb2: PUSH 0x62f5bf
//   XREF to: 0062f5bf (DATA)
// 004f7eb7: PUSH EBX
// 004f7eb8: MOV [0x02db8970],EAX
//   XREF to: 02db8970 (WRITE)
// 004f7ebd: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f7ec2: ADD ESP,0xc
// 004f7ec5: PUSH 0x1
// 004f7ec7: PUSH 0x62f5d0
//   XREF to: 0062f5d0 (DATA)
// 004f7ecc: PUSH EBX
// 004f7ecd: MOV [0x02db8974],EAX
//   XREF to: 02db8974 (WRITE)
// 004f7ed2: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f7ed7: ADD ESP,0xc
// 004f7eda: PUSH 0x1
// 004f7edc: PUSH 0x62f5e1
//   XREF to: 0062f5e1 (DATA)
// 004f7ee1: PUSH EBX
// 004f7ee2: MOV [0x02db8978],EAX
//   XREF to: 02db8978 (WRITE)
// 004f7ee7: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f7eec: ADD ESP,0xc
// 004f7eef: PUSH 0x1
// 004f7ef1: PUSH 0x62f5f2
//   XREF to: 0062f5f2 (DATA)
// 004f7ef6: PUSH EBX
// 004f7ef7: MOV [0x02db897c],EAX
//   XREF to: 02db897c (WRITE)
// 004f7efc: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f7f01: ADD ESP,0xc
// 004f7f04: PUSH 0x1
// 004f7f06: PUSH 0x62f603
//   XREF to: 0062f603 (DATA)
// 004f7f0b: PUSH EBX
// 004f7f0c: MOV [0x02db8980],EAX
//   XREF to: 02db8980 (WRITE)
// 004f7f11: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f7f16: ADD ESP,0xc
// 004f7f19: PUSH 0x1
// 004f7f1b: PUSH 0x62f613
//   XREF to: 0062f613 (DATA)
// 004f7f20: PUSH EBX
// 004f7f21: MOV [0x02db8984],EAX
//   XREF to: 02db8984 (WRITE)
// 004f7f26: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f7f2b: ADD ESP,0xc
// 004f7f2e: PUSH 0x1
// 004f7f30: PUSH 0x62f623
//   XREF to: 0062f623 (DATA)
// 004f7f35: PUSH EBX
// 004f7f36: MOV [0x02db8988],EAX
//   XREF to: 02db8988 (WRITE)
// 004f7f3b: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f7f40: ADD ESP,0xc
// 004f7f43: PUSH 0x1
// 004f7f45: PUSH 0x62f630
//   XREF to: 0062f630 (DATA)
// 004f7f4a: PUSH EBX
// 004f7f4b: MOV [0x02db898c],EAX
//   XREF to: 02db898c (WRITE)
// 004f7f50: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f7f55: ADD ESP,0xc
// 004f7f58: MOV [0x02db8990],EAX
//   XREF to: 02db8990 (WRITE)
// 004f7f5d: PUSH 0x1
// 004f7f5f: PUSH 0x62f63d
//   XREF to: 0062f63d (DATA)
// 004f7f64: PUSH EBX
// 004f7f65: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f7f6a: ADD ESP,0xc
// 004f7f6d: PUSH 0x1
// 004f7f6f: PUSH 0x62f64b
//   XREF to: 0062f64b (DATA)
// 004f7f74: PUSH EBX
// 004f7f75: MOV [0x02db8994],EAX
//   XREF to: 02db8994 (WRITE)
// 004f7f7a: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f7f7f: ADD ESP,0xc
// 004f7f82: PUSH 0x1
// 004f7f84: PUSH 0x62f659
//   XREF to: 0062f659 (DATA)
// 004f7f89: PUSH EBX
// 004f7f8a: MOV [0x02db8998],EAX
//   XREF to: 02db8998 (WRITE)
// 004f7f8f: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f7f94: ADD ESP,0xc
// 004f7f97: PUSH 0x1
// 004f7f99: PUSH 0x62f666
//   XREF to: 0062f666 (DATA)
// 004f7f9e: PUSH EBX
// 004f7f9f: MOV [0x02db899c],EAX
//   XREF to: 02db899c (WRITE)
// 004f7fa4: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f7fa9: ADD ESP,0xc
// 004f7fac: PUSH 0x1
// 004f7fae: PUSH 0x62f673
//   XREF to: 0062f673 (DATA)
// 004f7fb3: PUSH EBX
// 004f7fb4: MOV [0x02db89a0],EAX
//   XREF to: 02db89a0 (WRITE)
// 004f7fb9: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f7fbe: ADD ESP,0xc
// 004f7fc1: PUSH 0x1
// 004f7fc3: PUSH 0x62f680
//   XREF to: 0062f680 (DATA)
// 004f7fc8: PUSH EBX
// 004f7fc9: MOV [0x02db89a4],EAX
//   XREF to: 02db89a4 (WRITE)
// 004f7fce: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f7fd3: ADD ESP,0xc
// 004f7fd6: PUSH 0x1
// 004f7fd8: PUSH 0x62f68d
//   XREF to: 0062f68d (DATA)
// 004f7fdd: PUSH EBX
// 004f7fde: MOV [0x02db89a8],EAX
//   XREF to: 02db89a8 (WRITE)
// 004f7fe3: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f7fe8: ADD ESP,0xc
// 004f7feb: PUSH 0x1
// 004f7fed: PUSH 0x62f69a
//   XREF to: 0062f69a (DATA)
// 004f7ff2: PUSH EBX
// 004f7ff3: MOV [0x02db89ac],EAX
//   XREF to: 02db89ac (WRITE)
// 004f7ff8: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f7ffd: ADD ESP,0xc
// 004f8000: PUSH 0x1
// 004f8002: PUSH 0x62f6a7
//   XREF to: 0062f6a7 (DATA)
// 004f8007: PUSH EBX
// 004f8008: MOV [0x02db89b0],EAX
//   XREF to: 02db89b0 (WRITE)
// 004f800d: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f8012: MOV dword ptr [ESI + 0x24b0],0x0
// 004f801c: MOV dword ptr [ESI + 0x24f4],0x0
// 004f8026: MOV [0x02db89b4],EAX
//   XREF to: 02db89b4 (WRITE)
// 004f802b: MOV dword ptr [ESI + 0x1fbd4],0x0
// 004f8035: MOV EAX,[0x02db89a4]
//   XREF to: 02db89a4 (READ)
// 004f803a: MOV dword ptr [ESI + 0x24ac],EAX
// 004f8040: MOV EAX,[0x02db89a8]
//   XREF to: 02db89a8 (READ)
// 004f8045: MOV dword ptr [ESI + 0x24f0],EAX
// 004f804b: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004f8050: MOV dword ptr [ESI + 0x1fbf8],0x0
// 004f805a: MOV EDX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004f8061: ADD ESP,0xc
// 004f8064: CMP ESI,EDX
// 004f8066: JZ 0x004f8089
//   XREF to: 004f8089 (CONDITIONAL_JUMP)
// 004f8068: MOV dword ptr [ESI + 0x1fbe0],0x0
//   Label: LAB_004f8068
// 004f8072: MOV dword ptr [ESI + 0x1fbdc],0x0
// 004f807c: MOV dword ptr [ESI + 0x1fc00],0x0
// 004f8086: POP ESI
// 004f8087: POP EBX
// 004f8088: RET
// 004f8089: MOV dword ptr [EDX + 0x2de0],0x3fc00000
//   Label: LAB_004f8089
// 004f8093: JMP 0x004f8068
//   XREF to: 004f8068 (UNCONDITIONAL_JUMP)
