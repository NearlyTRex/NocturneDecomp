// Name: core_hotdemon.cpp_FUN_004f6d00
// Address: 004f6d00
// Address Range: [[004f6d00, 004f6ede]]
// Convention: unknown
// Signature: undefined core_hotdemon.cpp_FUN_004f6d00()
// Globals:
//   TerminatedCString s_hotdemonx_dfm_0062f364
//   TerminatedCString s_hotdemon_dfm_0062f372
//   TerminatedCString s_Bip01_Head_0062f37f
//   TerminatedCString s_Bip01_L_ForeArm_0062f38a
//   TerminatedCString s_Bip01_R_ForeArm_0062f39a
//   TerminatedCString s_Bip01_L_UpperArm_0062f3aa
//   TerminatedCString s_Bip01_R_UpperArm_0062f3bb
//   TerminatedCString s_Bip01_L_Foot_0062f3cc
//   TerminatedCString s_Bip01_R_Foot_0062f3d9
//   TerminatedCString s_Bip01_L_Hand_0062f3e6
//   TerminatedCString s_Bip01_R_Hand_0062f3f3
//   TerminatedCString s_Bip01_Spine_0062f400
//   TerminatedCString s_Bip01_Spine1_0062f40c
//   TerminatedCString s_Bip01_Spine2_0062f419
//   TerminatedCString s_Bip01_Head_0062f426
//   TerminatedCString s_Bip01_L_UpperArm_0062f431
//   TerminatedCString s_Bip01_R_UpperArm_0062f442
//   TerminatedCString s_Bip01_Spine_0062f453
//   TerminatedCString s_Bip01_Spine2_0062f45f
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.nudity_flag
//   undefined4 DAT_02db88c8
//   undefined4 DAT_02db88cc
//   undefined4 DAT_02db88d0
//   undefined4 DAT_02db88d4
//   undefined4 DAT_02db88d8
//   undefined4 DAT_02db88dc
//   undefined4 DAT_02db88e0
//   undefined4 DAT_02db88e4
//   undefined4 DAT_02db88e8
//   undefined4 DAT_02db88ec
//   undefined4 DAT_02db88f0
//   undefined4 DAT_02db88f4
// Function calls:
//   core_enemy.cpp_CEnemy_FUN_004a9650
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_hotdemon.cpp_FUN_004f6d00(undefined4 param_1) */

void core_hotdemon_cpp_FUN_004f6d00(void)

{
  CDeformableModelInstance *this_ptr;
  CCharacter *pCVar1;
  CSkeleton *this_ptr_00;
  CEnemy *in_stack_00000004;
  
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840
            (&(in_stack_00000004->base_character).model);
  core_enemy_cpp_CEnemy_FUN_004a9650(in_stack_00000004);
  this_ptr = &(in_stack_00000004->base_character).model;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0450(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  DAT_02db88c8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Head");
  _DAT_02db88d4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L ForeArm");
  _DAT_02db88d8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R ForeArm");
  _DAT_02db88dc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L UpperArm");
  _DAT_02db88e0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R UpperArm");
  _DAT_02db88e4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Foot");
  _DAT_02db88e8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R Foot");
  _DAT_02db88cc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Hand");
  DAT_02db88d0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Hand");
  DAT_02db88ec = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine");
  _DAT_02db88f0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 Spine1");
  DAT_02db88f4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2");
  DAT_02db88c8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Head");
  _DAT_02db88dc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L UpperArm");
  _DAT_02db88e0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R UpperArm");
  DAT_02db88ec = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine");
  DAT_02db88f4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2");
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
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
  return;
}


// Assembly code:
// 004f6d00: PUSH EBX
//   Label: core_hotdemon.cpp_FUN_004f6d00
// 004f6d01: PUSH ESI
// 004f6d02: PUSH EDI
// 004f6d03: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004f6d07: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004f6d0d: MOV EDX,dword ptr [EBX + 0x18]
//   XREF to: 02d81ab4 (READ)
// 004f6d10: LEA EAX,[EDI + 0x158]
// 004f6d16: TEST EDX,EDX
// 004f6d18: JZ 0x004f6ed5
//   XREF to: 004f6ed5 (CONDITIONAL_JUMP)
// 004f6d1e: PUSH 0x62f372
//   XREF to: 0062f372 (DATA)
// 004f6d23: PUSH EAX
//   Label: LAB_004f6d23
// 004f6d24: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 004f6d29: ADD ESP,0x8
// 004f6d2c: PUSH EDI
// 004f6d2d: CALL core_enemy.cpp_CEnemy_FUN_004a9650
//   XREF to: 004a9650 (UNCONDITIONAL_CALL)
// 004f6d32: ADD ESP,0x4
// 004f6d35: LEA ESI,[EDI + 0x158]
// 004f6d3b: PUSH ESI
// 004f6d3c: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 004f6d41: ADD ESP,0x4
// 004f6d44: PUSH ESI
// 004f6d45: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 004f6d4a: ADD ESP,0x4
// 004f6d4d: PUSH 0x1
// 004f6d4f: PUSH 0x62f37f
//   XREF to: 0062f37f (DATA)
// 004f6d54: PUSH EAX
// 004f6d55: MOV EBX,EAX
// 004f6d57: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f6d5c: ADD ESP,0xc
// 004f6d5f: PUSH 0x1
// 004f6d61: PUSH 0x62f38a
//   XREF to: 0062f38a (DATA)
// 004f6d66: PUSH EBX
// 004f6d67: MOV [0x02db88c8],EAX
//   XREF to: 02db88c8 (WRITE)
// 004f6d6c: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f6d71: ADD ESP,0xc
// 004f6d74: PUSH 0x1
// 004f6d76: PUSH 0x62f39a
//   XREF to: 0062f39a (DATA)
// 004f6d7b: PUSH EBX
// 004f6d7c: MOV [0x02db88d4],EAX
//   XREF to: 02db88d4 (WRITE)
// 004f6d81: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f6d86: ADD ESP,0xc
// 004f6d89: PUSH 0x1
// 004f6d8b: PUSH 0x62f3aa
//   XREF to: 0062f3aa (DATA)
// 004f6d90: PUSH EBX
// 004f6d91: MOV [0x02db88d8],EAX
//   XREF to: 02db88d8 (WRITE)
// 004f6d96: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f6d9b: ADD ESP,0xc
// 004f6d9e: PUSH 0x1
// 004f6da0: PUSH 0x62f3bb
//   XREF to: 0062f3bb (DATA)
// 004f6da5: PUSH EBX
// 004f6da6: MOV [0x02db88dc],EAX
//   XREF to: 02db88dc (WRITE)
// 004f6dab: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f6db0: ADD ESP,0xc
// 004f6db3: PUSH 0x1
// 004f6db5: PUSH 0x62f3cc
//   XREF to: 0062f3cc (DATA)
// 004f6dba: PUSH EBX
// 004f6dbb: MOV [0x02db88e0],EAX
//   XREF to: 02db88e0 (WRITE)
// 004f6dc0: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f6dc5: ADD ESP,0xc
// 004f6dc8: PUSH 0x1
// 004f6dca: PUSH 0x62f3d9
//   XREF to: 0062f3d9 (DATA)
// 004f6dcf: PUSH EBX
// 004f6dd0: MOV [0x02db88e4],EAX
//   XREF to: 02db88e4 (WRITE)
// 004f6dd5: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f6dda: ADD ESP,0xc
// 004f6ddd: PUSH 0x1
// 004f6ddf: PUSH 0x62f3e6
//   XREF to: 0062f3e6 (DATA)
// 004f6de4: PUSH EBX
// 004f6de5: MOV [0x02db88e8],EAX
//   XREF to: 02db88e8 (WRITE)
// 004f6dea: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f6def: ADD ESP,0xc
// 004f6df2: MOV [0x02db88cc],EAX
//   XREF to: 02db88cc (WRITE)
// 004f6df7: PUSH 0x1
// 004f6df9: PUSH 0x62f3f3
//   XREF to: 0062f3f3 (DATA)
// 004f6dfe: PUSH EBX
// 004f6dff: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f6e04: ADD ESP,0xc
// 004f6e07: PUSH 0x1
// 004f6e09: PUSH 0x62f400
//   XREF to: 0062f400 (DATA)
// 004f6e0e: PUSH EBX
// 004f6e0f: MOV [0x02db88d0],EAX
//   XREF to: 02db88d0 (WRITE)
// 004f6e14: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f6e19: ADD ESP,0xc
// 004f6e1c: PUSH 0x1
// 004f6e1e: PUSH 0x62f40c
//   XREF to: 0062f40c (DATA)
// 004f6e23: PUSH EBX
// 004f6e24: MOV [0x02db88ec],EAX
//   XREF to: 02db88ec (WRITE)
// 004f6e29: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f6e2e: ADD ESP,0xc
// 004f6e31: PUSH 0x1
// 004f6e33: PUSH 0x62f419
//   XREF to: 0062f419 (DATA)
// 004f6e38: PUSH EBX
// 004f6e39: MOV [0x02db88f0],EAX
//   XREF to: 02db88f0 (WRITE)
// 004f6e3e: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f6e43: ADD ESP,0xc
// 004f6e46: PUSH 0x1
// 004f6e48: PUSH 0x62f426
//   XREF to: 0062f426 (DATA)
// 004f6e4d: PUSH EBX
// 004f6e4e: MOV [0x02db88f4],EAX
//   XREF to: 02db88f4 (WRITE)
// 004f6e53: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f6e58: ADD ESP,0xc
// 004f6e5b: PUSH 0x1
// 004f6e5d: PUSH 0x62f431
//   XREF to: 0062f431 (DATA)
// 004f6e62: PUSH EBX
// 004f6e63: MOV [0x02db88c8],EAX
//   XREF to: 02db88c8 (WRITE)
// 004f6e68: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f6e6d: ADD ESP,0xc
// 004f6e70: PUSH 0x1
// 004f6e72: PUSH 0x62f442
//   XREF to: 0062f442 (DATA)
// 004f6e77: PUSH EBX
// 004f6e78: MOV [0x02db88dc],EAX
//   XREF to: 02db88dc (WRITE)
// 004f6e7d: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f6e82: ADD ESP,0xc
// 004f6e85: PUSH 0x1
// 004f6e87: PUSH 0x62f453
//   XREF to: 0062f453 (DATA)
// 004f6e8c: PUSH EBX
// 004f6e8d: MOV [0x02db88e0],EAX
//   XREF to: 02db88e0 (WRITE)
// 004f6e92: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f6e97: ADD ESP,0xc
// 004f6e9a: PUSH 0x1
// 004f6e9c: PUSH 0x62f45f
//   XREF to: 0062f45f (DATA)
// 004f6ea1: PUSH EBX
// 004f6ea2: MOV [0x02db88ec],EAX
//   XREF to: 02db88ec (WRITE)
// 004f6ea7: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f6eac: ADD ESP,0xc
// 004f6eaf: PUSH ESI
// 004f6eb0: MOV [0x02db88f4],EAX
//   XREF to: 02db88f4 (WRITE)
// 004f6eb5: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 004f6eba: MOV dword ptr [EDI + 0xbebc],0x0
// 004f6ec4: ADD ESP,0x4
// 004f6ec7: MOV dword ptr [EDI + 0xbec0],0x0
// 004f6ed1: POP EDI
// 004f6ed2: POP ESI
// 004f6ed3: POP EBX
// 004f6ed4: RET
// 004f6ed5: PUSH 0x62f364
//   Label: LAB_004f6ed5
//   XREF to: 0062f364 (DATA)
// 004f6eda: JMP 0x004f6d23
//   XREF to: 004f6d23 (UNCONDITIONAL_JUMP)
