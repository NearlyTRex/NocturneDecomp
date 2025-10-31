// Name: core_dest.cpp_FUN_0046fd50
// Address: 0046fd50
// Address Range: [[0046fd50, 0046fda2]]
// Convention: unknown
// Signature: undefined core_dest.cpp_FUN_0046fd50()
// Cross-references:
//   core_dest.cpp_FUN_0046f9b0 (0046f9b0) at 0046fa45 [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f35b0 (004f35b0) at 004f3650 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c2850 (005c2850) at 005c29f7 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0

#include "nocturne.h"

/* Signature: undefined1 actors_other_dest.cpp_FUN_0046fd50(undefined4 param_1, undefined4 param_2)
    */

undefined4 core_dest_cpp_FUN_0046fd50(void)

{
  int iVar1;
  int in_stack_00000004;
  CDemonActor *in_stack_00000008;
  
  if (*(int *)(in_stack_00000004 + 0x184) == 0) {
    if (*(char *)(in_stack_00000004 + 0x15c) == '\0') {
      if (in_stack_00000008 == *(CDemonActor **)(in_stack_00000004 + 0x158)) {
        return 1;
      }
    }
    else {
      iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0
                        (in_stack_00000008,(char *)(in_stack_00000004 + 0x15c));
      if (iVar1 != 0) {
        *(CDemonActor **)(in_stack_00000004 + 0x158) = in_stack_00000008;
        return 1;
      }
    }
  }
  return 0;
}


// Assembly code:
// 0046fd50: PUSH EBX
//   Label: core_dest.cpp_FUN_0046fd50
// 0046fd51: PUSH ESI
// 0046fd52: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0046fd56: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0046fd5a: CMP dword ptr [EBX + 0x184],0x0
// 0046fd61: JNZ 0x0046fd7c
//   XREF to: 0046fd7c (CONDITIONAL_JUMP)
// 0046fd63: CMP byte ptr [EBX + 0x15c],0x0
// 0046fd6a: JNZ 0x0046fd81
//   XREF to: 0046fd81 (CONDITIONAL_JUMP)
// 0046fd6c: CMP ESI,dword ptr [EBX + 0x158]
// 0046fd72: JNZ 0x0046fd7c
//   XREF to: 0046fd7c (CONDITIONAL_JUMP)
// 0046fd74: MOV EAX,0x1
// 0046fd79: POP ESI
// 0046fd7a: POP EBX
// 0046fd7b: RET
// 0046fd7c: XOR EAX,EAX
//   Label: LAB_0046fd7c
// 0046fd7e: POP ESI
// 0046fd7f: POP EBX
// 0046fd80: RET
// 0046fd81: LEA EAX,[EBX + 0x15c]
//   Label: LAB_0046fd81
// 0046fd87: PUSH EAX
// 0046fd88: PUSH ESI
// 0046fd89: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 0046fd8e: ADD ESP,0x8
// 0046fd91: TEST EAX,EAX
// 0046fd93: JZ 0x0046fd7c
//   XREF to: 0046fd7c (CONDITIONAL_JUMP)
// 0046fd95: MOV EAX,0x1
// 0046fd9a: MOV dword ptr [EBX + 0x158],ESI
// 0046fda0: POP ESI
// 0046fda1: POP EBX
// 0046fda2: RET
