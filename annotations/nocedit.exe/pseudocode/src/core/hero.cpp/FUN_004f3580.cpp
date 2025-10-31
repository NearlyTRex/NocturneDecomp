// Name: core_hero.cpp_FUN_004f3580
// Address: 004f3580
// Address Range: [[004f3580, 004f35af]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f3580()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bce69 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c48b0 (005c48b0) at 005c48e4 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 actors_hero_hero.cpp_FUN_004f3580(undefined4 param_1) */

void core_hero_cpp_FUN_004f3580(void)

{
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x1fbb0) == 0) {
    return;
  }
  (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x1fbb0) + 0x154) + 0x9c))();
  *(undefined4 *)(in_stack_00000004 + 0x1fbb0) = 0;
  return;
}


// Assembly code:
// 004f3580: PUSH EBX
//   Label: core_hero.cpp_FUN_004f3580
// 004f3581: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f3585: MOV EDX,dword ptr [EBX + 0x1fbb0]
// 004f358b: TEST EDX,EDX
// 004f358d: JNZ 0x004f3591
//   XREF to: 004f3591 (CONDITIONAL_JUMP)
// 004f358f: POP EBX
// 004f3590: RET
// 004f3591: PUSH EBX
//   Label: LAB_004f3591
// 004f3592: MOV EAX,EDX
// 004f3594: PUSH EAX
// 004f3595: MOV EDX,dword ptr [EDX + 0x154]
// 004f359b: CALL dword ptr [EDX + 0x9c]
// 004f35a1: ADD ESP,0x8
// 004f35a4: MOV dword ptr [EBX + 0x1fbb0],0x0
// 004f35ae: POP EBX
// 004f35af: RET
