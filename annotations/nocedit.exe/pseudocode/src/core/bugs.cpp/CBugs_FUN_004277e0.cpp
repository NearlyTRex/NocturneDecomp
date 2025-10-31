// Name: core_bugs.cpp_CBugs_FUN_004277e0
// Address: 004277e0
// Address Range: [[004277e0, 004278c4]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_CBugs_FUN_004277e0()
// Globals:
//   TerminatedCString s_bugCount_00616e80
//   TerminatedCString s_Bug_model_d_00616e89
//   TerminatedCString s_allowChaseEvent_00616e96
//   TerminatedCString s_allowSwarmvent_00616ea6
//   TerminatedCString s_animateEvent_00616eb5
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e220
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_enemy.cpp_CEnemy_FUN_004aa170
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_bugs.cpp_CBugs_FUN_004277e0(undefined4 param_1,
   CActorPropertyList* param_2) */

void core_bugs_cpp_CBugs_FUN_004277e0(void)

{
  int extraout_EAX;
  int iVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  CEnemy *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  int in_stack_00000014;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(in_stack_00000004);
  core_actor_cpp_CActorPropertyList_FUN_0040e220(in_stack_00000008);
  *(undefined4 *)(extraout_EAX + 0x58) = 1;
  iVar2 = *(int *)(in_stack_00000014 + 0x122c4) + 1;
  if (4 < iVar2) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffa0,"Bug model %d",iVar1);
      iVar1 = iVar1 + 1;
      core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
    } while (iVar1 < iVar2);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  return;
}


// Assembly code:
// 004277e0: PUSH EBX
//   Label: core_bugs.cpp_CBugs_FUN_004277e0
// 004277e1: PUSH EDI
// 004277e2: PUSH EBP
// 004277e3: SUB ESP,0x64
// 004277e6: MOV EDI,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x8] (READ)
// 004277ea: PUSH EDI
// 004277eb: MOV EDX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x4] (READ)
// 004277ef: PUSH EDX
// 004277f0: CALL core_enemy.cpp_CEnemy_FUN_004aa170
//   XREF to: 004aa170 (UNCONDITIONAL_CALL)
// 004277f5: ADD ESP,0x8
// 004277f8: PUSH 0x0
// 004277fa: PUSH 0x190
// 004277ff: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x4] (READ)
// 00427803: PUSH 0x0
// 00427805: ADD EAX,0xbec0
// 0042780a: PUSH EAX
// 0042780b: PUSH 0x616e80
//   XREF to: 00616e80 (DATA)
// 00427810: PUSH EDI
// 00427811: CALL core_actor.cpp_CActorPropertyList_FUN_0040e220
//   XREF to: 0040e220 (UNCONDITIONAL_CALL)
// 00427816: ADD ESP,0x18
// 00427819: MOV EBP,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x4] (READ)
// 0042781d: MOV dword ptr [EAX + 0x58],0x1
// 00427824: MOV EBP,dword ptr [EBP + 0x122c4]
// 0042782a: INC EBP
// 0042782b: CMP EBP,0x4
// 0042782e: JLE 0x00427835
//   XREF to: 00427835 (CONDITIONAL_JUMP)
// 00427830: MOV EBP,0x4
// 00427835: XOR EBX,EBX
//   Label: LAB_00427835
// 00427837: TEST EBP,EBP
// 00427839: JLE 0x00427876
//   XREF to: 00427876 (CONDITIONAL_JUMP)
// 0042783b: PUSH ESI
// 0042783c: MOV ESI,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x4] (READ)
// 00427840: ADD ESI,0x122c8
// 00427846: PUSH EBX
//   Label: LAB_00427846
// 00427847: PUSH 0x616e89
//   XREF to: 00616e89 (DATA)
// 0042784c: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x70] (DATA)
// 00427850: PUSH EAX
// 00427851: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00427856: ADD ESP,0xc
// 00427859: PUSH 0x1
// 0042785b: PUSH ESI
// 0042785c: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x70] (DATA)
// 00427860: PUSH EAX
// 00427861: PUSH EDI
// 00427862: INC EBX
// 00427863: ADD ESI,0x17c
// 00427869: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 0042786e: ADD ESP,0x10
// 00427871: CMP EBX,EBP
// 00427873: JL 0x00427846
//   XREF to: 00427846 (CONDITIONAL_JUMP)
// 00427875: POP ESI
// 00427876: MOV EAX,dword ptr [ESP + 0x74]
//   Label: LAB_00427876
//   XREF to: Stack[0x4] (READ)
// 0042787a: ADD EAX,0x198a0
// 0042787f: PUSH EAX
// 00427880: PUSH 0x616e96
//   XREF to: 00616e96 (DATA)
// 00427885: PUSH EDI
// 00427886: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 0042788b: ADD ESP,0xc
// 0042788e: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x4] (READ)
// 00427892: ADD EAX,0x19904
// 00427897: PUSH EAX
// 00427898: PUSH 0x616ea6
//   XREF to: 00616ea6 (DATA)
// 0042789d: PUSH EDI
// 0042789e: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 004278a3: ADD ESP,0xc
// 004278a6: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x4] (READ)
// 004278aa: ADD EAX,0x19968
// 004278af: PUSH EAX
// 004278b0: PUSH 0x616eb5
//   XREF to: 00616eb5 (DATA)
// 004278b5: PUSH EDI
// 004278b6: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 004278bb: ADD ESP,0xc
// 004278be: ADD ESP,0x64
// 004278c1: POP EBP
// 004278c2: POP EDI
// 004278c3: POP EBX
// 004278c4: RET
