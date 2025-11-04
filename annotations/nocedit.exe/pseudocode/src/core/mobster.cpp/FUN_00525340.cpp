// Name: core_mobster.cpp_FUN_00525340
// Address: 00525340
// Address Range: [[00525340, 0052564f]]
// Convention: unknown
// Signature: undefined core_mobster.cpp_FUN_00525340()
// Globals:
//   TerminatedCString s_Bip01_Head_006396dc
//   TerminatedCString s_Bip01_L_ForeArm_006396e7
//   TerminatedCString s_Bip01_R_ForeArm_006396f7
//   TerminatedCString s_Bip01_L_UpperArm_00639707
//   TerminatedCString s_Bip01_R_UpperArm_00639718
//   TerminatedCString s_Bip01_L_Foot_00639729
//   TerminatedCString s_Bip01_R_Foot_00639736
//   TerminatedCString s_Bip01_L_Hand_00639743
//   TerminatedCString s_Bip01_R_Hand_00639750
//   TerminatedCString s_Bip01_Spine_0063975d
//   TerminatedCString s_Bip01_Spine1_00639769
//   TerminatedCString s_Bip01_Spine2_00639776
//   TerminatedCString s_Bip01_Head_00639783
//   TerminatedCString s_Bip01_L_UpperArm_0063978e
//   TerminatedCString s_Bip01_R_UpperArm_0063979f
//   TerminatedCString s_Bip01_Spine_006397b0
//   TerminatedCString s_Bip01_Spine2_006397bc
//   TerminatedCString s_larm01_006397c9
//   TerminatedCString s_l4arm01_006397d0
//   TerminatedCString s_rarm01_006397d8
//   TerminatedCString s_r4arm01_006397df
//   TerminatedCString s_rthigh01_006397e7
//   TerminatedCString s_rshin01_006397f0
//   TerminatedCString s_lthigh01_006397f8
//   TerminatedCString s_lshin01_00639801
//   TerminatedCString s_waist01_00639809
//   TerminatedCString s_torso01_00639811
//   TerminatedCString s_head01_00639819
//   undefined4 DAT_02f37ec8
//   undefined4 DAT_02f37ecc
//   undefined4 DAT_02f37ed0
//   undefined4 DAT_02f37ed4
//   undefined4 DAT_02f37ed8
//   undefined4 DAT_02f37edc
//   undefined4 DAT_02f37ee0
//   undefined4 DAT_02f37ee4
//   undefined4 DAT_02f37ee8
//   undefined4 DAT_02f37eec
//   undefined4 DAT_02f37ef0
//   undefined4 DAT_02f37ef4
// Function calls:
//   core_enemy.cpp_CEnemy_FUN_004a9650
//   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_mobster.cpp_FUN_00525340(undefined4 param_1) */

void core_mobster_cpp_FUN_00525340(void)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  CCharacter *pCVar2;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar3;
  CEnemy *in_stack_00000004;
  
  this_ptr = &(in_stack_00000004->base_character).model;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0450(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  DAT_02f37ec8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Head");
  _DAT_02f37ed4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L ForeArm");
  _DAT_02f37ed8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R ForeArm");
  _DAT_02f37edc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L UpperArm");
  _DAT_02f37ee0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R UpperArm");
  _DAT_02f37ee4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Foot");
  _DAT_02f37ee8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R Foot");
  DAT_02f37ecc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Hand");
  DAT_02f37ed0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Hand");
  DAT_02f37eec = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine");
  DAT_02f37ef0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine1");
  DAT_02f37ef4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2");
  DAT_02f37ec8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Head");
  _DAT_02f37edc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L UpperArm");
  _DAT_02f37ee0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R UpperArm");
  DAT_02f37eec = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine");
  DAT_02f37ef4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2");
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"larm01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x34) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"l4arm01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x38) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"rarm01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x3c) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"r4arm01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x40) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"rthigh01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x44) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"rshin01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x48) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"lthigh01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x4c) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"lshin01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x50) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"waist01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x54) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"torso01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x58) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"head01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x5c) = iVar3;
  *(int *)(in_stack_00000004->base_character).carry_hands[0].field0_0x0 = DAT_02f37ecc;
  *(undefined4 *)((in_stack_00000004->base_character).carry_hands[0].field0_0x0 + 4) =
       *(undefined4 *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x38);
  *(int *)(in_stack_00000004->base_character).carry_hands[1].field0_0x0 = DAT_02f37ed0;
  *(undefined4 *)((in_stack_00000004->base_character).carry_hands[1].field0_0x0 + 4) =
       *(undefined4 *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x40);
  core_enemy_cpp_CEnemy_FUN_004a9650(in_stack_00000004);
  pCVar2 = &in_stack_00000004[1].base_character;
  (pCVar2->base_actor).create_event[0x60] = '\0';
  (pCVar2->base_actor).create_event[0x61] = '\0';
  (pCVar2->base_actor).create_event[0x62] = '\0';
  (pCVar2->base_actor).create_event[99] = '\0';
  fVar1 = in_stack_00000004[1].base_character.base_actor.location.position.z;
  in_stack_00000004[1].base_character.base_actor.field11_0xdc = 0;
  if (fVar1 != 0.0) {
    pCVar2 = &in_stack_00000004[1].base_character;
    (pCVar2->base_actor).actor_name[4] = '\x01';
    (pCVar2->base_actor).actor_name[5] = '\0';
    (pCVar2->base_actor).actor_name[6] = '\0';
    (pCVar2->base_actor).actor_name[7] = '\0';
  }
  pCVar2 = &in_stack_00000004[1].base_character;
  (pCVar2->base_actor).create_event[0x28] = '\0';
  (pCVar2->base_actor).create_event[0x29] = '\0';
  (pCVar2->base_actor).create_event[0x2a] = '\0';
  (pCVar2->base_actor).create_event[0x2b] = '\0';
  pCVar2 = &in_stack_00000004[1].base_character;
  (pCVar2->base_actor).create_event[0x2c] = '\0';
  (pCVar2->base_actor).create_event[0x2d] = '\0';
  (pCVar2->base_actor).create_event[0x2e] = '\0';
  (pCVar2->base_actor).create_event[0x2f] = '\0';
  pCVar2 = &in_stack_00000004[1].base_character;
  (pCVar2->base_actor).create_event[0x30] = '\0';
  (pCVar2->base_actor).create_event[0x31] = '\0';
  (pCVar2->base_actor).create_event[0x32] = '\0';
  (pCVar2->base_actor).create_event[0x33] = '\0';
  pCVar2 = &in_stack_00000004[1].base_character;
  (pCVar2->base_actor).create_event[0x24] = '\0';
  (pCVar2->base_actor).create_event[0x25] = '\0';
  (pCVar2->base_actor).create_event[0x26] = '\0';
  (pCVar2->base_actor).create_event[0x27] = '\0';
  return;
}


// Assembly code:
// 00525340: PUSH EBX
//   Label: core_mobster.cpp_FUN_00525340
// 00525341: PUSH ESI
// 00525342: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00525346: PUSH EDI
// 00525347: LEA EDI,[EBX + 0x158]
// 0052534d: PUSH EDI
// 0052534e: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 00525353: ADD ESP,0x4
// 00525356: PUSH EDI
// 00525357: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0052535c: ADD ESP,0x4
// 0052535f: PUSH 0x1
// 00525361: PUSH 0x6396dc
//   XREF to: 006396dc (DATA)
// 00525366: PUSH EAX
// 00525367: MOV ESI,EAX
// 00525369: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0052536e: ADD ESP,0xc
// 00525371: PUSH 0x1
// 00525373: PUSH 0x6396e7
//   XREF to: 006396e7 (DATA)
// 00525378: PUSH ESI
// 00525379: MOV [0x02f37ec8],EAX
//   XREF to: 02f37ec8 (WRITE)
// 0052537e: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00525383: ADD ESP,0xc
// 00525386: PUSH 0x1
// 00525388: PUSH 0x6396f7
//   XREF to: 006396f7 (DATA)
// 0052538d: PUSH ESI
// 0052538e: MOV [0x02f37ed4],EAX
//   XREF to: 02f37ed4 (WRITE)
// 00525393: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00525398: ADD ESP,0xc
// 0052539b: PUSH 0x1
// 0052539d: PUSH 0x639707
//   XREF to: 00639707 (DATA)
// 005253a2: PUSH ESI
// 005253a3: MOV [0x02f37ed8],EAX
//   XREF to: 02f37ed8 (WRITE)
// 005253a8: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005253ad: ADD ESP,0xc
// 005253b0: PUSH 0x1
// 005253b2: PUSH 0x639718
//   XREF to: 00639718 (DATA)
// 005253b7: PUSH ESI
// 005253b8: MOV [0x02f37edc],EAX
//   XREF to: 02f37edc (WRITE)
// 005253bd: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005253c2: ADD ESP,0xc
// 005253c5: PUSH 0x1
// 005253c7: PUSH 0x639729
//   XREF to: 00639729 (DATA)
// 005253cc: PUSH ESI
// 005253cd: MOV [0x02f37ee0],EAX
//   XREF to: 02f37ee0 (WRITE)
// 005253d2: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005253d7: ADD ESP,0xc
// 005253da: PUSH 0x1
// 005253dc: PUSH 0x639736
//   XREF to: 00639736 (DATA)
// 005253e1: PUSH ESI
// 005253e2: MOV [0x02f37ee4],EAX
//   XREF to: 02f37ee4 (WRITE)
// 005253e7: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005253ec: ADD ESP,0xc
// 005253ef: PUSH 0x1
// 005253f1: PUSH 0x639743
//   XREF to: 00639743 (DATA)
// 005253f6: PUSH ESI
// 005253f7: MOV [0x02f37ee8],EAX
//   XREF to: 02f37ee8 (WRITE)
// 005253fc: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00525401: ADD ESP,0xc
// 00525404: PUSH 0x1
// 00525406: PUSH 0x639750
//   XREF to: 00639750 (DATA)
// 0052540b: PUSH ESI
// 0052540c: MOV [0x02f37ecc],EAX
//   XREF to: 02f37ecc (WRITE)
// 00525411: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00525416: ADD ESP,0xc
// 00525419: MOV [0x02f37ed0],EAX
//   XREF to: 02f37ed0 (WRITE)
// 0052541e: PUSH 0x1
// 00525420: PUSH 0x63975d
//   XREF to: 0063975d (DATA)
// 00525425: PUSH ESI
// 00525426: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0052542b: ADD ESP,0xc
// 0052542e: PUSH 0x1
// 00525430: PUSH 0x639769
//   XREF to: 00639769 (DATA)
// 00525435: PUSH ESI
// 00525436: MOV [0x02f37eec],EAX
//   XREF to: 02f37eec (WRITE)
// 0052543b: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00525440: ADD ESP,0xc
// 00525443: PUSH 0x1
// 00525445: PUSH 0x639776
//   XREF to: 00639776 (DATA)
// 0052544a: PUSH ESI
// 0052544b: MOV [0x02f37ef0],EAX
//   XREF to: 02f37ef0 (WRITE)
// 00525450: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00525455: ADD ESP,0xc
// 00525458: PUSH 0x1
// 0052545a: PUSH 0x639783
//   XREF to: 00639783 (DATA)
// 0052545f: PUSH ESI
// 00525460: MOV [0x02f37ef4],EAX
//   XREF to: 02f37ef4 (WRITE)
// 00525465: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0052546a: ADD ESP,0xc
// 0052546d: PUSH 0x1
// 0052546f: PUSH 0x63978e
//   XREF to: 0063978e (DATA)
// 00525474: PUSH ESI
// 00525475: MOV [0x02f37ec8],EAX
//   XREF to: 02f37ec8 (WRITE)
// 0052547a: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0052547f: ADD ESP,0xc
// 00525482: PUSH 0x1
// 00525484: PUSH 0x63979f
//   XREF to: 0063979f (DATA)
// 00525489: PUSH ESI
// 0052548a: MOV [0x02f37edc],EAX
//   XREF to: 02f37edc (WRITE)
// 0052548f: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00525494: ADD ESP,0xc
// 00525497: PUSH 0x1
// 00525499: PUSH 0x6397b0
//   XREF to: 006397b0 (DATA)
// 0052549e: PUSH ESI
// 0052549f: MOV [0x02f37ee0],EAX
//   XREF to: 02f37ee0 (WRITE)
// 005254a4: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005254a9: ADD ESP,0xc
// 005254ac: PUSH 0x1
// 005254ae: PUSH 0x6397bc
//   XREF to: 006397bc (DATA)
// 005254b3: PUSH ESI
// 005254b4: MOV [0x02f37eec],EAX
//   XREF to: 02f37eec (WRITE)
// 005254b9: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005254be: ADD ESP,0xc
// 005254c1: PUSH EDI
// 005254c2: MOV [0x02f37ef4],EAX
//   XREF to: 02f37ef4 (WRITE)
// 005254c7: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 005254cc: ADD ESP,0x4
// 005254cf: PUSH 0x1
// 005254d1: PUSH 0x6397c9
//   XREF to: 006397c9 (DATA)
// 005254d6: PUSH EAX
// 005254d7: MOV ESI,EAX
// 005254d9: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 005254de: ADD ESP,0xc
// 005254e1: MOV dword ptr [EBX + 0xbf60],EAX
// 005254e7: POP EDI
// 005254e8: PUSH 0x1
// 005254ea: PUSH 0x6397d0
//   XREF to: 006397d0 (DATA)
// 005254ef: PUSH ESI
// 005254f0: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 005254f5: ADD ESP,0xc
// 005254f8: PUSH 0x1
// 005254fa: PUSH 0x6397d8
//   XREF to: 006397d8 (DATA)
// 005254ff: PUSH ESI
// 00525500: MOV dword ptr [EBX + 0xbf64],EAX
// 00525506: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 0052550b: ADD ESP,0xc
// 0052550e: PUSH 0x1
// 00525510: PUSH 0x6397df
//   XREF to: 006397df (DATA)
// 00525515: PUSH ESI
// 00525516: MOV dword ptr [EBX + 0xbf68],EAX
// 0052551c: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 00525521: ADD ESP,0xc
// 00525524: PUSH 0x1
// 00525526: PUSH 0x6397e7
//   XREF to: 006397e7 (DATA)
// 0052552b: PUSH ESI
// 0052552c: MOV dword ptr [EBX + 0xbf6c],EAX
// 00525532: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 00525537: ADD ESP,0xc
// 0052553a: PUSH 0x1
// 0052553c: PUSH 0x6397f0
//   XREF to: 006397f0 (DATA)
// 00525541: PUSH ESI
// 00525542: MOV dword ptr [EBX + 0xbf70],EAX
// 00525548: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 0052554d: ADD ESP,0xc
// 00525550: PUSH 0x1
// 00525552: PUSH 0x6397f8
//   XREF to: 006397f8 (DATA)
// 00525557: PUSH ESI
// 00525558: MOV dword ptr [EBX + 0xbf74],EAX
// 0052555e: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 00525563: ADD ESP,0xc
// 00525566: PUSH 0x1
// 00525568: PUSH 0x639801
//   XREF to: 00639801 (DATA)
// 0052556d: PUSH ESI
// 0052556e: MOV dword ptr [EBX + 0xbf78],EAX
// 00525574: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 00525579: ADD ESP,0xc
// 0052557c: PUSH 0x1
// 0052557e: PUSH 0x639809
//   XREF to: 00639809 (DATA)
// 00525583: PUSH ESI
// 00525584: MOV dword ptr [EBX + 0xbf7c],EAX
// 0052558a: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 0052558f: ADD ESP,0xc
// 00525592: PUSH 0x1
// 00525594: PUSH 0x639811
//   XREF to: 00639811 (DATA)
// 00525599: PUSH ESI
// 0052559a: MOV dword ptr [EBX + 0xbf80],EAX
// 005255a0: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 005255a5: ADD ESP,0xc
// 005255a8: MOV dword ptr [EBX + 0xbf84],EAX
// 005255ae: PUSH 0x1
// 005255b0: PUSH 0x639819
//   XREF to: 00639819 (DATA)
// 005255b5: PUSH ESI
// 005255b6: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 005255bb: MOV dword ptr [EBX + 0xbf88],EAX
// 005255c1: MOV EAX,[0x02f37ecc]
//   XREF to: 02f37ecc (READ)
// 005255c6: MOV dword ptr [EBX + 0x24ac],EAX
// 005255cc: MOV EAX,dword ptr [EBX + 0xbf64]
// 005255d2: MOV dword ptr [EBX + 0x24b0],EAX
// 005255d8: MOV EAX,[0x02f37ed0]
//   XREF to: 02f37ed0 (READ)
// 005255dd: MOV dword ptr [EBX + 0x24f0],EAX
// 005255e3: ADD ESP,0xc
// 005255e6: MOV EAX,dword ptr [EBX + 0xbf6c]
// 005255ec: PUSH EBX
// 005255ed: MOV dword ptr [EBX + 0x24f4],EAX
// 005255f3: CALL core_enemy.cpp_CEnemy_FUN_004a9650
//   XREF to: 004a9650 (UNCONDITIONAL_CALL)
// 005255f8: MOV dword ptr [EBX + 0xbf8c],0x0
// 00525602: ADD ESP,0x4
// 00525605: MOV EDX,dword ptr [EBX + 0xbedc]
// 0052560b: MOV dword ptr [EBX + 0xbf90],0x0
// 00525615: TEST EDX,EDX
// 00525617: JNZ 0x00525644
//   XREF to: 00525644 (CONDITIONAL_JUMP)
// 00525619: MOV dword ptr [EBX + 0xbf54],0x0
//   Label: LAB_00525619
// 00525623: MOV dword ptr [EBX + 0xbf58],0x0
// 0052562d: MOV dword ptr [EBX + 0xbf5c],0x0
// 00525637: MOV dword ptr [EBX + 0xbf50],0x0
// 00525641: POP ESI
// 00525642: POP EBX
// 00525643: RET
// 00525644: MOV dword ptr [EBX + 0xbeb8],0x1
//   Label: LAB_00525644
// 0052564e: JMP 0x00525619
//   XREF to: 00525619 (UNCONDITIONAL_JUMP)
