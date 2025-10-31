// Name: core_hero.cpp_FUN_004f3890
// Address: 004f3890
// Address Range: [[004f3890, 004f38c2]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f3890()
// Cross-references:
//   core_gabriela.cpp_FUN_004d4890 (004d4890) at 004d496e [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bdd20 (005bdd20) at 005bdf6a [UNCONDITIONAL_CALL]
// Function calls:
//   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_hero.cpp_FUN_004f3890(undefined4 param_1, undefined4 param_2)
    */

void core_hero_cpp_FUN_004f3890(void)

{
  CCharacter *in_stack_00000004;
  
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54c0) == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(in_stack_00000004);
  in_stack_00000004[2].cloth_data[0x54c0] = '\0';
  in_stack_00000004[2].cloth_data[0x54c1] = '\0';
  in_stack_00000004[2].cloth_data[0x54c2] = '\0';
  in_stack_00000004[2].cloth_data[0x54c3] = '\0';
  return;
}


// Assembly code:
// 004f3890: PUSH EBX
//   Label: core_hero.cpp_FUN_004f3890
// 004f3891: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f3895: MOV EDX,dword ptr [EBX + 0x1fba0]
// 004f389b: TEST EDX,EDX
// 004f389d: JNZ 0x004f38a1
//   XREF to: 004f38a1 (CONDITIONAL_JUMP)
// 004f389f: POP EBX
// 004f38a0: RET
// 004f38a1: PUSH ESI
//   Label: LAB_004f38a1
// 004f38a2: PUSH 0x3dcccccd
// 004f38a7: PUSH EDX
// 004f38a8: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f38ac: PUSH ESI
// 004f38ad: PUSH EBX
// 004f38ae: CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
//   XREF to: 0042cdb0 (UNCONDITIONAL_CALL)
// 004f38b3: ADD ESP,0x10
// 004f38b6: MOV dword ptr [EBX + 0x1fba0],0x0
// 004f38c0: POP ESI
// 004f38c1: POP EBX
// 004f38c2: RET
