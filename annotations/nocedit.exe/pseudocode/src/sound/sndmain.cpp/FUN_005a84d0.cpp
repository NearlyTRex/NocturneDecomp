// Name: sound_sndmain.cpp_FUN_005a84d0
// Address: 005a84d0
// Address Range: [[005a84d0, 005a8514]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a84d0()
// Cross-references:
//   core_sound.cpp_CSound_FUN_005b3ba0 (005b3ba0) at 005b3c1f [UNCONDITIONAL_CALL]

#include "nocturne.h"

double sound_sndmain_cpp_FUN_005a84d0(void)

{
  int in_stack_00000004;
  
  if (0 < *(int *)(in_stack_00000004 + 0x10c)) {
    return (double)*(int *)(in_stack_00000004 + 0x110) / (double)*(int *)(in_stack_00000004 + 0x10c)
    ;
  }
  return 0.0;
}


// Assembly code:
// 005a84d0: PUSH EBP
//   Label: sound_sndmain.cpp_FUN_005a84d0
// 005a84d1: MOV EBP,ESP
// 005a84d3: SUB ESP,0x8
// 005a84d6: AND ESP,0xfffffff8
// 005a84d9: MOV EAX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a84dc: CMP dword ptr [EAX + 0x10c],0x0
// 005a84e3: JLE 0x005a8501
//   XREF to: 005a8501 (CONDITIONAL_JUMP)
// 005a84e5: FILD dword ptr [EAX + 0x110]
// 005a84eb: FILD dword ptr [EAX + 0x10c]
// 005a84f1: FDIVP
// 005a84f3: FSTP double ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 005a84f6: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 005a84f9: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xc] (READ)
// 005a84fd: MOV ESP,EBP
// 005a84ff: POP EBP
// 005a8500: RET
// 005a8501: XOR ECX,ECX
//   Label: LAB_005a8501
// 005a8503: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x10] (DATA)
// 005a8506: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0xc] (WRITE)
// 005a850a: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 005a850d: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xc] (READ)
// 005a8511: MOV ESP,EBP
// 005a8513: POP EBP
// 005a8514: RET
