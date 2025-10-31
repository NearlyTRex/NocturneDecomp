// Name: core_bugs.cpp_FUN_00427a60
// Address: 00427a60
// Address Range: [[00427a60, 00427ac6]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00427a60()

#include "nocturne.h"

void core_bugs_cpp_FUN_00427a60(void)

{
  float fVar1;
  float *in_stack_00000004;
  
  fVar1 = SQRT(in_stack_00000004[2] * in_stack_00000004[2] +
               *in_stack_00000004 * *in_stack_00000004 + in_stack_00000004[1] * in_stack_00000004[1]
              );
  if (0.0 < fVar1) {
    fVar1 = 1.0 / fVar1;
    *in_stack_00000004 = *in_stack_00000004 * fVar1;
    in_stack_00000004[1] = in_stack_00000004[1] * fVar1;
    in_stack_00000004[2] = in_stack_00000004[2] * fVar1;
    return;
  }
  in_stack_00000004[2] = 0.0;
  in_stack_00000004[1] = in_stack_00000004[2];
  *in_stack_00000004 = in_stack_00000004[1];
  return;
}


// Assembly code:
// 00427a60: PUSH EBP
//   Label: core_bugs.cpp_FUN_00427a60
// 00427a61: MOV EBP,ESP
// 00427a63: SUB ESP,0x8
// 00427a66: AND ESP,0xfffffff8
// 00427a69: MOV EDX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00427a6c: FLD float ptr [EDX + 0x4]
// 00427a6f: FMUL ST0
// 00427a71: FLD float ptr [EDX]
// 00427a73: FMUL ST0
// 00427a75: FADDP
// 00427a77: FLD float ptr [EDX + 0x8]
// 00427a7a: FMUL ST0
// 00427a7c: FADDP
// 00427a7e: FSQRT
// 00427a80: FST float ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 00427a83: FLDZ
// 00427a85: FCOMPP
// 00427a87: FNSTSW AX
// 00427a89: SAHF
// 00427a8a: JNC 0x00427ab1
//   XREF to: 00427ab1 (CONDITIONAL_JUMP)
// 00427a8c: FLD1
// 00427a8e: FLD float ptr [EDX]
// 00427a90: FXCH
// 00427a92: FDIV float ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 00427a95: FXCH
// 00427a97: FMUL ST1
// 00427a99: FLD float ptr [EDX + 0x4]
// 00427a9c: FMUL ST2
// 00427a9e: FLD float ptr [EDX + 0x8]
// 00427aa1: FMULP ST3
// 00427aa3: FXCH
// 00427aa5: FSTP float ptr [EDX]
// 00427aa7: FSTP float ptr [EDX + 0x4]
// 00427aaa: FSTP float ptr [EDX + 0x8]
// 00427aad: MOV ESP,EBP
// 00427aaf: POP EBP
// 00427ab0: RET
// 00427ab1: MOV dword ptr [EDX + 0x8],0x0
//   Label: LAB_00427ab1
// 00427ab8: MOV EAX,dword ptr [EDX + 0x8]
// 00427abb: MOV dword ptr [EDX + 0x4],EAX
// 00427abe: MOV EAX,dword ptr [EDX + 0x4]
// 00427ac1: MOV dword ptr [EDX],EAX
// 00427ac3: MOV ESP,EBP
// 00427ac5: POP EBP
// 00427ac6: RET
