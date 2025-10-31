// Name: core_charactr.cpp_CCharacter_FUN_0042e840
// Address: 0042e840
// Address Range: [[0042e840, 0042e8b7]]
// Convention: unknown
// Signature: undefined core_charactr.cpp_CCharacter_FUN_0042e840()
// Cross-references:
//   core_scat.cpp_FUN_00557df0 (00557df0) at 00557e4d [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bfb60 (005bfb60) at 005bffbd [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c07b0 (005c07b0) at 005c11a5 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c1680 (005c1680) at 005c16b6 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c1fe0 (005c1fe0) at 005c1fff [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c2400 (005c2400) at 005c241f [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c2850 (005c2850) at 005c2888 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3150 (005c3150) at 005c318c [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c5270 (005c5270) at 005c55d7 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c5b90 (005c5b90) at 005c5dc6 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c5f10 (005c5f10) at 005c600b [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 actors_character.cpp_CCharacter_FUN_0042e840(undefined4 param_1, undefined4
   param_2) */

float core_charactr_cpp_CCharacter_FUN_0042e840(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 local_18;
  
  local_18 = 0.0;
  if (in_stack_00000008 ==
      *(int *)(in_stack_00000004 + 0x2630 + *(int *)(in_stack_00000004 + 0x2a8c) * 0x38)) {
    local_18 = *(float *)(in_stack_00000004 + 0x2a90);
  }
  if (in_stack_00000008 !=
      *(int *)(in_stack_00000004 + 0x262c + *(int *)(in_stack_00000004 + 0x2a8c) * 0x38)) {
    return local_18;
  }
  return (1.0 - *(float *)(in_stack_00000004 + 0x2a90)) + local_18;
}


// Assembly code:
// 0042e840: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042e840
// 0042e841: PUSH ESI
// 0042e842: PUSH EBP
// 0042e843: MOV EBP,ESP
// 0042e845: SUB ESP,0xc
// 0042e848: AND ESP,0xfffffff8
// 0042e84b: MOV EDX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0042e84e: MOV EAX,dword ptr [EDX + 0x2a8c]
// 0042e854: XOR ECX,ECX
// 0042e856: SHL EAX,0x3
// 0042e859: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x18] (DATA)
// 0042e85c: MOV ECX,EAX
// 0042e85e: SHL EAX,0x3
// 0042e861: SUB EAX,ECX
// 0042e863: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0042e866: CMP EBX,dword ptr [EDX + EAX*0x1 + 0x2630]
// 0042e86d: JZ 0x0042e894
//   XREF to: 0042e894 (CONDITIONAL_JUMP)
// 0042e86f: MOV EAX,dword ptr [EDX + 0x2a8c]
//   Label: LAB_0042e86f
// 0042e875: SHL EAX,0x3
// 0042e878: MOV ECX,EAX
// 0042e87a: SHL EAX,0x3
// 0042e87d: SUB EAX,ECX
// 0042e87f: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0042e882: CMP ESI,dword ptr [EDX + EAX*0x1 + 0x262c]
// 0042e889: JZ 0x0042e89f
//   XREF to: 0042e89f (CONDITIONAL_JUMP)
// 0042e88b: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0042e88e: MOV ESP,EBP
// 0042e890: POP EBP
// 0042e891: POP ESI
// 0042e892: POP EBX
// 0042e893: RET
// 0042e894: MOV EAX,dword ptr [EDX + 0x2a90]
//   Label: LAB_0042e894
// 0042e89a: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 0042e89d: JMP 0x0042e86f
//   XREF to: 0042e86f (UNCONDITIONAL_JUMP)
// 0042e89f: FLD float ptr [EDX + 0x2a90]
//   Label: LAB_0042e89f
// 0042e8a5: FLD1
// 0042e8a7: FSUBRP
// 0042e8a9: FADD float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0042e8ac: FSTP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0042e8af: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0042e8b2: MOV ESP,EBP
// 0042e8b4: POP EBP
// 0042e8b5: POP ESI
// 0042e8b6: POP EBX
// 0042e8b7: RET
