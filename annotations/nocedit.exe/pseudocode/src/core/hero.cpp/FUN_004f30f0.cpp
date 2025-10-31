// Name: core_hero.cpp_FUN_004f30f0
// Address: 004f30f0
// Address Range: [[004f30f0, 004f311c]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f30f0()
// Cross-references:
//   core_colonel.cpp_FUN_0043fa00 (0043fa00) at 0043fe15 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d4041 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f0e40 (004f0e40) at 004f12a2 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f8625 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bdd20 (005bdd20) at 005be2fb [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 (005d8ba0) at 005d90dd [UNCONDITIONAL_CALL]
// Function calls:
//   core_lever.cpp_FUN_00504c90

#include "nocturne.h"

/* Signature: undefined1 actors_hero_hero.cpp_FUN_004f30f0(undefined4 param_1) */

undefined4 core_hero_cpp_FUN_004f30f0(void)

{
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x1fba8) == 0) {
    return 0;
  }
  core_lever_cpp_FUN_00504c90(0);
  *(undefined4 *)(in_stack_00000004 + 0x1fba8) = 0;
  return 1;
}


// Assembly code:
// 004f30f0: PUSH EBX
//   Label: core_hero.cpp_FUN_004f30f0
// 004f30f1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f30f5: MOV EDX,dword ptr [EBX + 0x1fba8]
// 004f30fb: XOR EAX,EAX
// 004f30fd: TEST EDX,EDX
// 004f30ff: JNZ 0x004f3103
//   XREF to: 004f3103 (CONDITIONAL_JUMP)
// 004f3101: POP EBX
// 004f3102: RET
// 004f3103: PUSH EDX
//   Label: LAB_004f3103
// 004f3104: CALL core_lever.cpp_FUN_00504c90
//   XREF to: 00504c90 (UNCONDITIONAL_CALL)
// 004f3109: MOV EAX,0x1
// 004f310e: ADD ESP,0x4
// 004f3111: MOV dword ptr [EBX + 0x1fba8],0x0
// 004f311b: POP EBX
// 004f311c: RET
