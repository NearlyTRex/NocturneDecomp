// Name: shape_superopt.cpp_FUN_005d8270
// Address: 005d8270
// Address Range: [[005d8270, 005d82ac]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d8270()

#include "nocturne.h"

double * shape_superopt_cpp_FUN_005d8270(void)

{
  double *in_stack_00000004;
  double *in_stack_00000008;
  double *in_stack_0000000c;
  
  *in_stack_00000008 =
       in_stack_00000004[1] * in_stack_0000000c[2] - in_stack_00000004[2] * in_stack_0000000c[1];
  in_stack_00000008[1] =
       in_stack_00000004[2] * *in_stack_0000000c - *in_stack_00000004 * in_stack_0000000c[2];
  in_stack_00000008[2] =
       *in_stack_00000004 * in_stack_0000000c[1] - in_stack_00000004[1] * *in_stack_0000000c;
  return in_stack_00000008;
}


// Assembly code:
// 005d8270: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_FUN_005d8270
//   XREF to: Stack[0x4] (READ)
// 005d8274: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005d8278: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 005d827c: FLD double ptr [EAX + 0x8]
// 005d827f: FMUL double ptr [EDX + 0x10]
// 005d8282: FLD double ptr [EAX + 0x10]
// 005d8285: FMUL double ptr [EDX + 0x8]
// 005d8288: FSUBP
// 005d828a: FSTP double ptr [ECX]
// 005d828c: FLD double ptr [EAX + 0x10]
// 005d828f: FMUL double ptr [EDX]
// 005d8291: FLD double ptr [EAX]
// 005d8293: FMUL double ptr [EDX + 0x10]
// 005d8296: FSUBP
// 005d8298: FSTP double ptr [ECX + 0x8]
// 005d829b: FLD double ptr [EAX]
// 005d829d: FMUL double ptr [EDX + 0x8]
// 005d82a0: FLD double ptr [EAX + 0x8]
// 005d82a3: FMUL double ptr [EDX]
// 005d82a5: FSUBP
// 005d82a7: MOV EAX,ECX
// 005d82a9: FSTP double ptr [ECX + 0x10]
// 005d82ac: RET
