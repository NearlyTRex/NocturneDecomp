// Name: core_hostage.cpp_NPCSFromZombieTown_FUN_004f4970
// Address: 004f4970
// Address Range: [[004f4970, 004f4b38]]
// Convention: unknown
// Signature: undefined core_hostage.cpp_NPCSFromZombieTown_FUN_004f4970()
// Globals:
//   TerminatedCString s_hickboy_dfm_0062ee40
//   TerminatedCString s_depute_dfm_0062ee4c
//   TerminatedCString s_hickho_dfm_0062ee57
//   TerminatedCString s_hickgirl_dfm_0062ee62
//   TerminatedCString s_hickdad_dfm_0062ee6f
//   TerminatedCString s_preacher_dfm_0062ee7b
//   TerminatedCString s_Bip01_R_UpperArm_0062ee88
//   TerminatedCString s_Bip01_Head_0062ee99
//   TerminatedCString s_Bip01_L_Foot_0062eea4
//   TerminatedCString s_Bip01_R_Foot_0062eeb1
//   TerminatedCString s_Bip01_R_Hand_0062eebe
//   TerminatedCString s_Bip01_L_Hand_0062eecb
//   TerminatedCString s_Bip01_Spine1_0062eed8
//   TerminatedCString s_gunup_0062eee5
//   undefined4 DAT_02db8888
// Function calls:
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   core_npc.cpp_CNPC_FUN_00544870
//   core_skeleton.cpp_CDeformableModelInstance_CallToLoadSkeletonDeformable_FUN_005a0450
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

/* Signature: undefined1 actors_npc_hostage.cpp_NPCSFromZombieTown(undefined4 param_1) */

void core_hostage_cpp_NPCSFromZombieTown_FUN_004f4970(void)

{
  char *str1;
  CCharacter *pCVar1;
  int iVar2;
  undefined4 uVar3;
  CNPC *in_stack_00000004;
  
  core_skeleton_cpp_CDeformableModelInstance_CallToLoadSkeletonDeformable_FUN_005a0450();
  str1 = (in_stack_00000004->base_character).model.padding_0x0 + 0x2260;
  pCVar1 = &in_stack_00000004[1].base_character;
  (pCVar1->model).padding_0x0[600] = '\x06';
  (pCVar1->model).padding_0x0[0x259] = '\0';
  (pCVar1->model).padding_0x0[0x25a] = '\0';
  (pCVar1->model).padding_0x0[0x25b] = '\0';
  iVar2 = crt_string_c_stricmp_FUN_005fe7f0(str1,"hickboy.dfm");
  if (iVar2 == 0) {
    pCVar1 = &in_stack_00000004[1].base_character;
    (pCVar1->model).padding_0x0[600] = '\0';
    (pCVar1->model).padding_0x0[0x259] = '\0';
    (pCVar1->model).padding_0x0[0x25a] = '\0';
    (pCVar1->model).padding_0x0[0x25b] = '\0';
  }
  iVar2 = crt_string_c_stricmp_FUN_005fe7f0(str1,"depute.dfm");
  if (iVar2 == 0) {
    pCVar1 = &in_stack_00000004[1].base_character;
    (pCVar1->model).padding_0x0[600] = '\x01';
    (pCVar1->model).padding_0x0[0x259] = '\0';
    (pCVar1->model).padding_0x0[0x25a] = '\0';
    (pCVar1->model).padding_0x0[0x25b] = '\0';
  }
  iVar2 = crt_string_c_stricmp_FUN_005fe7f0(str1,"hickho.dfm");
  if (iVar2 == 0) {
    pCVar1 = &in_stack_00000004[1].base_character;
    (pCVar1->model).padding_0x0[600] = '\x02';
    (pCVar1->model).padding_0x0[0x259] = '\0';
    (pCVar1->model).padding_0x0[0x25a] = '\0';
    (pCVar1->model).padding_0x0[0x25b] = '\0';
  }
  iVar2 = crt_string_c_stricmp_FUN_005fe7f0(str1,"hickgirl.dfm");
  if (iVar2 == 0) {
    pCVar1 = &in_stack_00000004[1].base_character;
    (pCVar1->model).padding_0x0[600] = '\x04';
    (pCVar1->model).padding_0x0[0x259] = '\0';
    (pCVar1->model).padding_0x0[0x25a] = '\0';
    (pCVar1->model).padding_0x0[0x25b] = '\0';
  }
  iVar2 = crt_string_c_stricmp_FUN_005fe7f0(str1,"hickdad.dfm");
  if (iVar2 == 0) {
    pCVar1 = &in_stack_00000004[1].base_character;
    (pCVar1->model).padding_0x0[600] = '\x05';
    (pCVar1->model).padding_0x0[0x259] = '\0';
    (pCVar1->model).padding_0x0[0x25a] = '\0';
    (pCVar1->model).padding_0x0[0x25b] = '\0';
  }
  iVar2 = crt_string_c_stricmp_FUN_005fe7f0(str1,"preacher.dfm");
  if (iVar2 == 0) {
    pCVar1 = &in_stack_00000004[1].base_character;
    (pCVar1->model).padding_0x0[600] = '\x03';
    (pCVar1->model).padding_0x0[0x259] = '\0';
    (pCVar1->model).padding_0x0[0x25a] = '\0';
    (pCVar1->model).padding_0x0[0x25b] = '\0';
  }
  core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820();
  core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0();
  uVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  *(undefined4 *)(in_stack_00000004[1].base_character.model.padding_0x0 + 0x270) = uVar3;
  uVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  *(undefined4 *)(in_stack_00000004[1].base_character.model.padding_0x0 + 0x26c) = uVar3;
  uVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  *(undefined4 *)(in_stack_00000004[1].base_character.model.padding_0x0 + 0x274) = uVar3;
  uVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  *(undefined4 *)(in_stack_00000004[1].base_character.model.padding_0x0 + 0x278) = uVar3;
  uVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  iVar2 = *(int *)(in_stack_00000004[1].base_character.model.padding_0x0 + 600);
  *(undefined4 *)(in_stack_00000004->base_character).carry_hands[1].field0_0x0 = uVar3;
  if (iVar2 != 1) {
    uVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
    *(undefined4 *)(in_stack_00000004->base_character).carry_hands[0].field0_0x0 = uVar3;
  }
  uVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  iVar2 = *(int *)(in_stack_00000004[1].base_character.model.padding_0x0 + 600);
  *(undefined4 *)((in_stack_00000004->base_character).field11_0x25a0 + 0x24) = uVar3;
  if (iVar2 == 1) {
    DAT_02db8888 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460();
  }
  core_npc_cpp_CNPC_FUN_00544870(in_stack_00000004);
  pCVar1 = &in_stack_00000004[1].base_character;
  (pCVar1->model).padding_0x0[0x250] = '\0';
  (pCVar1->model).padding_0x0[0x251] = '\0';
  (pCVar1->model).padding_0x0[0x252] = '\0';
  (pCVar1->model).padding_0x0[0x253] = '\0';
  return;
}


// Assembly code:
// 004f4970: PUSH EBX
//   Label: core_hostage.cpp_NPCSFromZombieTown_FUN_004f4970
// 004f4971: PUSH ESI
// 004f4972: PUSH EDI
// 004f4973: PUSH EBP
// 004f4974: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f4978: LEA EAX,[EBX + 0x158]
// 004f497e: PUSH EAX
// 004f497f: CALL core_skeleton.cpp_CDeformableModelInstance_CallToLoadSkeletonDeformable_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 004f4984: ADD ESP,0x4
// 004f4987: PUSH 0x62ee40
//   XREF to: 0062ee40 (DATA)
// 004f498c: LEA EAX,[EBX + 0x23b8]
// 004f4992: PUSH EAX
// 004f4993: MOV dword ptr [EBX + 0x1fab8],0x6
// 004f499d: MOV ESI,EAX
// 004f499f: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004f49a4: ADD ESP,0x8
// 004f49a7: TEST EAX,EAX
// 004f49a9: JNZ 0x004f49b1
//   XREF to: 004f49b1 (CONDITIONAL_JUMP)
// 004f49ab: MOV dword ptr [EBX + 0x1fab8],EAX
// 004f49b1: PUSH 0x62ee4c
//   Label: LAB_004f49b1
//   XREF to: 0062ee4c (DATA)
// 004f49b6: PUSH ESI
// 004f49b7: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004f49bc: ADD ESP,0x8
// 004f49bf: TEST EAX,EAX
// 004f49c1: JNZ 0x004f49cd
//   XREF to: 004f49cd (CONDITIONAL_JUMP)
// 004f49c3: MOV dword ptr [EBX + 0x1fab8],0x1
// 004f49cd: PUSH 0x62ee57
//   Label: LAB_004f49cd
//   XREF to: 0062ee57 (DATA)
// 004f49d2: PUSH ESI
// 004f49d3: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004f49d8: ADD ESP,0x8
// 004f49db: TEST EAX,EAX
// 004f49dd: JNZ 0x004f49e9
//   XREF to: 004f49e9 (CONDITIONAL_JUMP)
// 004f49df: MOV dword ptr [EBX + 0x1fab8],0x2
// 004f49e9: PUSH 0x62ee62
//   Label: LAB_004f49e9
//   XREF to: 0062ee62 (DATA)
// 004f49ee: PUSH ESI
// 004f49ef: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004f49f4: ADD ESP,0x8
// 004f49f7: TEST EAX,EAX
// 004f49f9: JNZ 0x004f4a05
//   XREF to: 004f4a05 (CONDITIONAL_JUMP)
// 004f49fb: MOV dword ptr [EBX + 0x1fab8],0x4
// 004f4a05: PUSH 0x62ee6f
//   Label: LAB_004f4a05
//   XREF to: 0062ee6f (DATA)
// 004f4a0a: PUSH ESI
// 004f4a0b: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004f4a10: ADD ESP,0x8
// 004f4a13: TEST EAX,EAX
// 004f4a15: JNZ 0x004f4a21
//   XREF to: 004f4a21 (CONDITIONAL_JUMP)
// 004f4a17: MOV dword ptr [EBX + 0x1fab8],0x5
// 004f4a21: PUSH 0x62ee7b
//   Label: LAB_004f4a21
//   XREF to: 0062ee7b (DATA)
// 004f4a26: PUSH ESI
// 004f4a27: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004f4a2c: ADD ESP,0x8
// 004f4a2f: TEST EAX,EAX
// 004f4a31: JNZ 0x004f4a3d
//   XREF to: 004f4a3d (CONDITIONAL_JUMP)
// 004f4a33: MOV dword ptr [EBX + 0x1fab8],0x3
// 004f4a3d: LEA EDI,[EBX + 0x158]
//   Label: LAB_004f4a3d
// 004f4a43: PUSH EDI
// 004f4a44: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 004f4a49: ADD ESP,0x4
// 004f4a4c: PUSH EDI
// 004f4a4d: MOV ESI,EAX
// 004f4a4f: MOV EBP,EAX
// 004f4a51: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 004f4a56: ADD ESP,0x4
// 004f4a59: PUSH 0x1
// 004f4a5b: PUSH 0x62ee88
//   XREF to: 0062ee88 (DATA)
// 004f4a60: PUSH ESI
// 004f4a61: MOV EDI,EAX
// 004f4a63: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f4a68: ADD ESP,0xc
// 004f4a6b: PUSH 0x1
// 004f4a6d: PUSH 0x62ee99
//   XREF to: 0062ee99 (DATA)
// 004f4a72: PUSH ESI
// 004f4a73: MOV dword ptr [EBX + 0x1fad0],EAX
// 004f4a79: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f4a7e: ADD ESP,0xc
// 004f4a81: PUSH 0x1
// 004f4a83: PUSH 0x62eea4
//   XREF to: 0062eea4 (DATA)
// 004f4a88: PUSH ESI
// 004f4a89: MOV dword ptr [EBX + 0x1facc],EAX
// 004f4a8f: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f4a94: ADD ESP,0xc
// 004f4a97: PUSH 0x1
// 004f4a99: PUSH 0x62eeb1
//   XREF to: 0062eeb1 (DATA)
// 004f4a9e: PUSH ESI
// 004f4a9f: MOV dword ptr [EBX + 0x1fad4],EAX
// 004f4aa5: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f4aaa: ADD ESP,0xc
// 004f4aad: PUSH 0x1
// 004f4aaf: PUSH 0x62eebe
//   XREF to: 0062eebe (DATA)
// 004f4ab4: PUSH ESI
// 004f4ab5: MOV dword ptr [EBX + 0x1fad8],EAX
// 004f4abb: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f4ac0: ADD ESP,0xc
// 004f4ac3: MOV EDX,dword ptr [EBX + 0x1fab8]
// 004f4ac9: MOV dword ptr [EBX + 0x24f0],EAX
// 004f4acf: CMP EDX,0x1
// 004f4ad2: JZ 0x004f4aea
//   XREF to: 004f4aea (CONDITIONAL_JUMP)
// 004f4ad4: PUSH 0x1
// 004f4ad6: PUSH 0x62eecb
//   XREF to: 0062eecb (DATA)
// 004f4adb: PUSH ESI
// 004f4adc: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f4ae1: ADD ESP,0xc
// 004f4ae4: MOV dword ptr [EBX + 0x24ac],EAX
// 004f4aea: PUSH 0x1
//   Label: LAB_004f4aea
// 004f4aec: PUSH 0x62eed8
//   XREF to: 0062eed8 (DATA)
// 004f4af1: PUSH EBP
// 004f4af2: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f4af7: ADD ESP,0xc
// 004f4afa: MOV ECX,dword ptr [EBX + 0x1fab8]
// 004f4b00: MOV dword ptr [EBX + 0x25c4],EAX
// 004f4b06: CMP ECX,0x1
// 004f4b09: JZ 0x004f4b23
//   XREF to: 004f4b23 (CONDITIONAL_JUMP)
// 004f4b0b: PUSH EBX
//   Label: LAB_004f4b0b
// 004f4b0c: CALL core_npc.cpp_CNPC_FUN_00544870
//   XREF to: 00544870 (UNCONDITIONAL_CALL)
// 004f4b11: ADD ESP,0x4
// 004f4b14: MOV dword ptr [EBX + 0x1fab0],0x0
// 004f4b1e: POP EBP
// 004f4b1f: POP EDI
// 004f4b20: POP ESI
// 004f4b21: POP EBX
// 004f4b22: RET
// 004f4b23: PUSH ECX
//   Label: LAB_004f4b23
// 004f4b24: PUSH 0x62eee5
//   XREF to: 0062eee5 (DATA)
// 004f4b29: PUSH EDI
// 004f4b2a: CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   XREF to: 0052d460 (UNCONDITIONAL_CALL)
// 004f4b2f: ADD ESP,0xc
// 004f4b32: MOV [0x02db8888],EAX
//   XREF to: 02db8888 (WRITE)
// 004f4b37: JMP 0x004f4b0b
//   XREF to: 004f4b0b (UNCONDITIONAL_JUMP)
