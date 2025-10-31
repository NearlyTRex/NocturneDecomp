// Name: shape_superopt.cpp_FUN_005d8670
// Address: 005d8670
// Address Range: [[005d8670, 005d869f]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d8670()

#include "nocturne.h"

undefined4 shape_superopt_cpp_FUN_005d8670(void)

{
  double *in_stack_00000004;
  double *in_stack_00000008;
  
  if (((*in_stack_00000004 == *in_stack_00000008) && (in_stack_00000004[1] == in_stack_00000008[1]))
     && (in_stack_00000004[2] == in_stack_00000008[2])) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 005d8670: MOV EDX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_FUN_005d8670
//   XREF to: Stack[0x4] (READ)
// 005d8674: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005d8678: FLD double ptr [EDX]
// 005d867a: FCOMP double ptr [ECX]
// 005d867c: FNSTSW AX
// 005d867e: SAHF
// 005d867f: JZ 0x005d8684
//   XREF to: 005d8684 (CONDITIONAL_JUMP)
// 005d8681: XOR EAX,EAX
//   Label: LAB_005d8681
// 005d8683: RET
// 005d8684: FLD double ptr [EDX + 0x8]
//   Label: LAB_005d8684
// 005d8687: FCOMP double ptr [ECX + 0x8]
// 005d868a: FNSTSW AX
// 005d868c: SAHF
// 005d868d: JNZ 0x005d8681
//   XREF to: 005d8681 (CONDITIONAL_JUMP)
// 005d868f: FLD double ptr [EDX + 0x10]
// 005d8692: FCOMP double ptr [ECX + 0x10]
// 005d8695: FNSTSW AX
// 005d8697: SAHF
// 005d8698: JNZ 0x005d8681
//   XREF to: 005d8681 (CONDITIONAL_JUMP)
// 005d869a: MOV EAX,0x1
// 005d869f: RET
