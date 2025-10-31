// Name: shape_superopt.cpp_FUN_005d86a0
// Address: 005d86a0
// Address Range: [[005d86a0, 005d86cf]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d86a0()

#include "nocturne.h"

undefined4 shape_superopt_cpp_FUN_005d86a0(void)

{
  double *in_stack_00000004;
  double *in_stack_00000008;
  
  if (((*in_stack_00000004 == *in_stack_00000008) && (in_stack_00000004[1] == in_stack_00000008[1]))
     && (in_stack_00000004[2] == in_stack_00000008[2])) {
    return 0;
  }
  return 1;
}


// Assembly code:
// 005d86a0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_FUN_005d86a0
//   XREF to: Stack[0x4] (READ)
// 005d86a4: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005d86a8: FLD double ptr [EDX]
// 005d86aa: FCOMP double ptr [ECX]
// 005d86ac: FNSTSW AX
// 005d86ae: SAHF
// 005d86af: JZ 0x005d86b7
//   XREF to: 005d86b7 (CONDITIONAL_JUMP)
// 005d86b1: MOV EAX,0x1
//   Label: LAB_005d86b1
// 005d86b6: RET
// 005d86b7: FLD double ptr [EDX + 0x8]
//   Label: LAB_005d86b7
// 005d86ba: FCOMP double ptr [ECX + 0x8]
// 005d86bd: FNSTSW AX
// 005d86bf: SAHF
// 005d86c0: JNZ 0x005d86b1
//   XREF to: 005d86b1 (CONDITIONAL_JUMP)
// 005d86c2: FLD double ptr [EDX + 0x10]
// 005d86c5: FCOMP double ptr [ECX + 0x10]
// 005d86c8: FNSTSW AX
// 005d86ca: SAHF
// 005d86cb: JNZ 0x005d86b1
//   XREF to: 005d86b1 (CONDITIONAL_JUMP)
// 005d86cd: XOR EAX,EAX
// 005d86cf: RET
