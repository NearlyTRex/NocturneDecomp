// Name: shape_superopt.cpp_FUN_005d8410
// Address: 005d8410
// Address Range: [[005d8410, 005d8434]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d8410()

#include "nocturne.h"

undefined4 shape_superopt_cpp_FUN_005d8410(void)

{
  double *in_stack_00000004;
  double *in_stack_00000008;
  
  if ((*in_stack_00000004 == *in_stack_00000008) && (in_stack_00000004[1] == in_stack_00000008[1]))
  {
    return 1;
  }
  return 0;
}


// Assembly code:
// 005d8410: MOV EDX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_FUN_005d8410
//   XREF to: Stack[0x4] (READ)
// 005d8414: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005d8418: FLD double ptr [EDX]
// 005d841a: FCOMP double ptr [ECX]
// 005d841c: FNSTSW AX
// 005d841e: SAHF
// 005d841f: JZ 0x005d8424
//   XREF to: 005d8424 (CONDITIONAL_JUMP)
// 005d8421: XOR EAX,EAX
//   Label: LAB_005d8421
// 005d8423: RET
// 005d8424: FLD double ptr [EDX + 0x8]
//   Label: LAB_005d8424
// 005d8427: FCOMP double ptr [ECX + 0x8]
// 005d842a: FNSTSW AX
// 005d842c: SAHF
// 005d842d: JNZ 0x005d8421
//   XREF to: 005d8421 (CONDITIONAL_JUMP)
// 005d842f: MOV EAX,0x1
// 005d8434: RET
