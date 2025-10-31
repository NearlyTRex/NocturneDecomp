// Name: core_flies.cpp_FUN_004ccaa0
// Address: 004ccaa0
// Address Range: [[004ccaa0, 004ccae0]]
// Convention: unknown
// Signature: undefined core_flies.cpp_FUN_004ccaa0()
// Globals:
//   TerminatedCString s_flyCount_0062a472
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e220
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

/* Signature: undefined1 actors_other_flies.cpp_FUN_004ccaa0(undefined4 param_1, undefined4 param_2)
    */

void core_flies_cpp_FUN_004ccaa0(void)

{
  int extraout_EAX;
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  CActorPropertyList *in_stack_0000000c;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e220(in_stack_0000000c);
  *(undefined4 *)(extraout_EAX + 0x58) = 1;
  return;
}


// Assembly code:
// 004ccaa0: PUSH EBX
//   Label: core_flies.cpp_FUN_004ccaa0
// 004ccaa1: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004ccaa5: PUSH EDX
// 004ccaa6: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004ccaaa: PUSH ECX
// 004ccaab: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 004ccab0: ADD ESP,0x8
// 004ccab3: PUSH 0x0
// 004ccab5: PUSH 0xc8
// 004ccaba: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004ccabe: PUSH 0x0
// 004ccac0: ADD EAX,0x164
// 004ccac5: PUSH EAX
// 004ccac6: PUSH 0x62a472
//   XREF to: 0062a472 (DATA)
// 004ccacb: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 004ccacf: PUSH EBX
// 004ccad0: CALL core_actor.cpp_CActorPropertyList_FUN_0040e220
//   XREF to: 0040e220 (UNCONDITIONAL_CALL)
// 004ccad5: ADD ESP,0x18
// 004ccad8: MOV dword ptr [EAX + 0x58],0x1
// 004ccadf: POP EBX
// 004ccae0: RET
