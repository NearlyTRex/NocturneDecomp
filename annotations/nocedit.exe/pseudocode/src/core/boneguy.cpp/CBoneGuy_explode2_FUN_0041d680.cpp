// Name: core_boneguy.cpp_CBoneGuy_explode2_FUN_0041d680
// Address: 0041d680
// Address Range: [[0041d680, 0041d72f] [0041d853, 0041d89c]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_CBoneGuy_explode2_FUN_0041d680()
// Cross-references:
//   core_boneguy.cpp_ExplodeAndSoundSomething_FUN_0041d4d0 (0041d4d0) at 0041d50b [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041bfe8 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_boneguy_cpp_00616304
//   TerminatedCString s_CBoneGuy_explode_Not_eno_00616318
//   TerminatedCString s_boneguy_fallapart_wav_00616342
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_charactr.cpp_CCharacter_FUN_0042d060
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_boneguy.cpp_CBoneGuy_explode2(undefined4 param_1) */

void core_boneguy_cpp_CBoneGuy_explode2_FUN_0041d680(void)

{
  CLocation *pCVar1;
  int iVar2;
  undefined4 *puVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  undefined4 *puVar5;
  byte bVar6;
  CCharacter *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  CDemonActor *in_stack_00000010;
  float afStackY_1818 [1519];
  float fStack_50;
  CVector3f *euler_angles;
  float local_34;
  COrientation *local_20;
  CLocation *local_1c;
  float local_18;
  int *local_14;
  CDemonActor *pCVar7;
  int iVar8;
  
  bVar6 = 0;
  fStack_50 = 6.046279e-39;
  core_charactr_cpp_CCharacter_FUN_0042d060(in_stack_00000004);
  *(undefined4 *)(in_stack_00000008 + 0xc4dc) = 1;
  *(undefined4 *)(in_stack_00000008 + 0xc4e0) = 0;
  local_1c = (CLocation *)core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0();
  iVar8 = *(int *)(local_1c + 0x714);
  *(int *)(in_stack_0000000c + 0xbf38) = iVar8;
  if (0x14 < iVar8) {
    g_CurrentFilename = "..\\core\\boneguy.cpp";
    g_CurrentLineNumber = 0x443;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CBoneGuy::explode - Not enough containers");
  }
  iVar8 = 0;
  if (0 < *(int *)((int)local_18 + 0x7140)) {
    local_14 = &in_stack_00000010[0x8e].field7_0x6c;
    local_20 = &in_stack_00000010->orient;
    local_1c = &in_stack_00000010->location;
    pcVar4 = in_stack_00000010[0x8e].create_event;
    pCVar7 = in_stack_00000010;
    do {
      euler_angles = (CVector3f *)0x40a00000;
      local_20 = (COrientation *)core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
      pCVar1 = (CLocation *)core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,10.0);
      local_1c = pCVar1;
      local_34 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
      fStack_50 = 2.8026e-45;
      local_18 = local_34;
      iVar2 = core_bodypart_cpp_CreateBodyPart_FUN_00418e10();
      fStack_50 = local_18;
      core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
      *(undefined4 *)(iVar2 + 0xcc4) = 1;
      core_bodypart_cpp_FUN_0041a050();
      local_14[0x2fe0] = iVar2;
      puVar3 = (undefined4 *)((int)pCVar7 * 0x48 + (int)local_18);
      if (puVar3 != (undefined4 *)(iVar2 + 0x20)) {
        *puVar3 = *(undefined4 *)(iVar2 + 0x20);
        puVar3[1] = *(undefined4 *)(iVar2 + 0x24);
        puVar3[2] = *(undefined4 *)(iVar2 + 0x28);
      }
      if (pcVar4 != (char *)(iVar2 + 0x30)) {
        *(undefined4 *)pcVar4 = *(undefined4 *)(iVar2 + 0x30);
        *(undefined4 *)(pcVar4 + 4) = *(undefined4 *)(iVar2 + 0x34);
        *(undefined4 *)(pcVar4 + 8) = *(undefined4 *)(iVar2 + 0x38);
      }
      pcVar4 = pcVar4 + 0x48;
      core_xform_cpp_eulerToQuaternion_FUN_005f7b20((CQuaternion4f *)(iVar2 + 0x30),euler_angles);
      iVar8 = iVar8 + 1;
      puVar3 = (undefined4 *)((int)pCVar7 + (uint)bVar6 * -8 + 49000);
      *(CLocation **)(pCVar7[0x8e].create_event + 0x1c) = pCVar1;
      puVar5 = puVar3 + (uint)bVar6 * -2 + 1;
      *puVar3 = *(undefined4 *)(&stack0xffffffc8 + (uint)bVar6 * -8);
      *puVar5 = *(undefined4 *)((int)&stack0xffffffcc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      puVar5[(uint)bVar6 * -2 + 1] =
           ((undefined4 *)((int)&stack0xffffffcc + (uint)bVar6 * -8 + (uint)bVar6 * -8))
           [(uint)bVar6 * -2 + 1];
      pCVar7 = (CDemonActor *)((pCVar7->orient_matrix).m + 1);
    } while (iVar8 < *(int *)((int)local_18 + 0x7140));
  }
  (*((in_stack_00000010->metadata).vtable)->playSound)
            (in_stack_00000010,"boneguy-fallapart.wav");
  return;
}


// Assembly code:
// 0041d680: PUSH EBX
//   Label: core_boneguy.cpp_CBoneGuy_explode2_FUN_0041d680
// 0041d681: PUSH ESI
// 0041d682: PUSH EDI
// 0041d683: PUSH EBP
// 0041d684: SUB ESP,0x38
// 0041d687: MOV EDX,dword ptr [ESP + 0x4c]
// 0041d68b: PUSH EDX
// 0041d68c: CALL core_charactr.cpp_CCharacter_FUN_0042d060
//   XREF to: 0042d060 (UNCONDITIONAL_CALL)
// 0041d691: ADD ESP,0x4
// 0041d694: MOV EAX,dword ptr [ESP + 0x4c]
// 0041d698: ADD EAX,0x158
// 0041d69d: MOV dword ptr [EAX + 0xc384],0x1
// 0041d6a7: PUSH EAX
// 0041d6a8: MOV dword ptr [EAX + 0xc388],0x0
// 0041d6b2: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 0041d6b7: ADD ESP,0x4
// 0041d6ba: MOV EBX,dword ptr [ESP + 0x4c]
// 0041d6be: MOV dword ptr [ESP + 0x24],EAX
// 0041d6c2: MOV EAX,dword ptr [EAX + 0x7140]
// 0041d6c8: MOV dword ptr [EBX + 0xbf38],EAX
// 0041d6ce: CMP EAX,0x14
// 0041d6d1: JG 0x0041d875
//   XREF to: 0041d875 (CONDITIONAL_JUMP)
// 0041d6d7: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_0041d6d7
// 0041d6db: XOR EDI,EDI
// 0041d6dd: MOV EBP,dword ptr [EAX + 0x7140]
// 0041d6e3: MOV dword ptr [ESP + 0x30],EDI
// 0041d6e7: TEST EBP,EBP
// 0041d6e9: JLE 0x0041d853
//   XREF to: 0041d853 (CONDITIONAL_JUMP)
// 0041d6ef: MOV EAX,dword ptr [ESP + 0x4c]
// 0041d6f3: ADD EAX,0xbf3c
// 0041d6f8: MOV dword ptr [ESP + 0x28],EAX
// 0041d6fc: MOV EAX,dword ptr [ESP + 0x4c]
// 0041d700: ADD EAX,0x30
// 0041d703: MOV dword ptr [ESP + 0x1c],EAX
// 0041d707: MOV EAX,dword ptr [ESP + 0x4c]
// 0041d70b: ADD EAX,0x20
// 0041d70e: MOV EBP,dword ptr [ESP + 0x28]
// 0041d712: MOV dword ptr [ESP + 0x20],EAX
// 0041d716: MOV EAX,dword ptr [ESP + 0x4c]
// 0041d71a: ADD EBP,0xc
// 0041d71d: MOV dword ptr [ESP + 0x2c],EAX
// 0041d721: PUSH 0x40a00000
//   Label: LAB_0041d721
// 0041d726: PUSH 0xc0a00000
// 0041d72b: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 0041d853: PUSH 0x616342
//   Label: LAB_0041d853
//   XREF to: 00616342 (DATA)
// 0041d858: MOV EBP,dword ptr [ESP + 0x50]
// 0041d85c: MOV EAX,dword ptr [ESP + 0x50]
// 0041d860: PUSH EBP
// 0041d861: MOV EAX,dword ptr [EAX + 0x154]
// 0041d867: CALL dword ptr [EAX + 0x24]
// 0041d86a: ADD ESP,0x8
// 0041d86d: ADD ESP,0x38
// 0041d870: POP EBP
// 0041d871: POP EDI
// 0041d872: POP ESI
// 0041d873: POP EBX
// 0041d874: RET
// 0041d875: MOV EBX,0x616304
//   Label: LAB_0041d875
//   XREF to: 00616304 (DATA)
// 0041d87a: MOV ESI,0x443
// 0041d87f: PUSH 0x616318
//   XREF to: 00616318 (DATA)
// 0041d884: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0041d88a: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0041d890: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0041d895: ADD ESP,0x4
// 0041d898: JMP 0x0041d6d7
//   XREF to: 0041d6d7 (UNCONDITIONAL_JUMP)
