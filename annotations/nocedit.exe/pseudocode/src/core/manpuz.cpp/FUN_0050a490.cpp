// Name: core_manpuz.cpp_FUN_0050a490
// Address: 0050a490
// Address Range: [[0050a490, 0050a4e2]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050a490()

#include "nocturne.h"

undefined4 core_manpuz_cpp_FUN_0050a490(void)

{
  float *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  if (in_stack_00000008 - *in_stack_00000004 < -in_stack_0000000c) {
    in_stack_0000000c = *in_stack_00000004 - in_stack_0000000c;
  }
  else {
    if (in_stack_00000008 - *in_stack_00000004 <= in_stack_0000000c) {
      *in_stack_00000004 = in_stack_00000008;
      return 1;
    }
    in_stack_0000000c = *in_stack_00000004 + in_stack_0000000c;
  }
  *in_stack_00000004 = in_stack_0000000c;
  return 0;
}


// Assembly code:
// 0050a490: SUB ESP,0x4
//   Label: core_manpuz.cpp_FUN_0050a490
// 0050a493: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0050a497: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0050a49b: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0050a49f: FSUB float ptr [EDX]
// 0050a4a1: FXCH
// 0050a4a3: FCHS
// 0050a4a5: FXCH
// 0050a4a7: FSTP float ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 0050a4aa: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 0050a4ad: FNSTSW AX
// 0050a4af: SAHF
// 0050a4b0: JA 0x0050a4cc
//   XREF to: 0050a4cc (CONDITIONAL_JUMP)
// 0050a4b2: FLD float ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 0050a4b5: FCOMP float ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0050a4b9: FNSTSW AX
// 0050a4bb: SAHF
// 0050a4bc: JBE 0x0050a4d4
//   XREF to: 0050a4d4 (CONDITIONAL_JUMP)
// 0050a4be: FLD float ptr [EDX]
// 0050a4c0: FADD float ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0050a4c4: FSTP float ptr [EDX]
//   Label: LAB_0050a4c4
// 0050a4c6: XOR EAX,EAX
// 0050a4c8: ADD ESP,0x4
// 0050a4cb: RET
// 0050a4cc: FLD float ptr [EDX]
//   Label: LAB_0050a4cc
// 0050a4ce: FSUB float ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0050a4d2: JMP 0x0050a4c4
//   XREF to: 0050a4c4 (UNCONDITIONAL_JUMP)
// 0050a4d4: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_0050a4d4
//   XREF to: Stack[0x8] (READ)
// 0050a4d8: MOV dword ptr [EDX],EAX
// 0050a4da: MOV EAX,0x1
// 0050a4df: ADD ESP,0x4
// 0050a4e2: RET
