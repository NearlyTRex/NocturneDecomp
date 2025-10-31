// Name: shape_meshlod.cpp_FUN_0051a567
// Address: 0051a567
// Address Range: [[0051a567, 0051a597]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051a567()
// Cross-references:
//   shape_meshlod.cpp_FUN_0051a400 (0051a400) at 0051a4b1 [COMPUTED_JUMP]

#include "nocturne.h"

double shape_meshlod_cpp_FUN_0051a567(undefined4 param_1,undefined4 param_2,float *unaff_EBX)

{
  float *in_stack_00000068;
  
  return (double)((unaff_EBX[2] - in_stack_00000068[2]) * (unaff_EBX[2] - in_stack_00000068[2]) +
                 (unaff_EBX[1] - in_stack_00000068[1]) * (unaff_EBX[1] - in_stack_00000068[1]) +
                 (*unaff_EBX - *in_stack_00000068) * (*unaff_EBX - *in_stack_00000068));
}


// Assembly code:
// 0051a567: MOV EAX,dword ptr [ESP + 0x68]
//   Label: shape_meshlod.cpp_FUN_0051a567
//   XREF to: Stack[0x68] (READ)
// 0051a56b: FLD float ptr [EBX]
// 0051a56d: FSUB float ptr [EAX]
// 0051a56f: FMUL ST0
// 0051a571: FLD float ptr [EBX + 0x4]
// 0051a574: FSUB float ptr [EAX + 0x4]
// 0051a577: FMUL ST0
// 0051a579: FLD float ptr [EBX + 0x8]
// 0051a57c: FXCH
// 0051a57e: FADDP ST2,ST0
// 0051a580: FSUB float ptr [EAX + 0x8]
// 0051a583: FMUL ST0
// 0051a585: FADDP
// 0051a587: FSTP double ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 0051a58a: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 0051a58d: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0051a591: MOV ESP,EBP
// 0051a593: POP EBP
// 0051a594: POP EDI
// 0051a595: POP ESI
// 0051a596: POP EBX
// 0051a597: RET
