// Name: shape_superopt.cpp_FUN_005d83d0
// Address: 005d83d0
// Address Range: [[005d83d0, 005d8400]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d83d0()

#include "nocturne.h"

void shape_superopt_cpp_FUN_005d83d0(void)

{
  double dVar1;
  double *unaff_ESI;
  double *in_stack_00000004;
  double in_stack_00000008;
  
  dVar1 = in_stack_00000004[1];
  *unaff_ESI = *in_stack_00000004 * in_stack_00000008;
  unaff_ESI[1] = dVar1 * in_stack_00000008;
  return;
}


// Assembly code:
// 005d83d0: PUSH EDI
//   Label: shape_superopt.cpp_FUN_005d83d0
// 005d83d1: PUSH EBP
// 005d83d2: MOV EBP,ESP
// 005d83d4: SUB ESP,0x10
// 005d83d7: AND ESP,0xfffffff8
// 005d83da: MOV EDX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005d83dd: MOV EAX,ESI
// 005d83df: FLD double ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005d83e2: FLD double ptr [EDX]
// 005d83e4: FMUL ST1
// 005d83e6: FLD double ptr [EDX + 0x8]
// 005d83e9: FMULP ST2
// 005d83eb: MOV EDI,ESI
// 005d83ed: MOV ESI,ESP
// 005d83ef: FXCH
// 005d83f1: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (WRITE)
// 005d83f5: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005d83f8: MOVSD ES:EDI,ESI
// 005d83f9: MOVSD ES:EDI,ESI
// 005d83fa: MOVSD ES:EDI,ESI
// 005d83fb: MOVSD ES:EDI,ESI
// 005d83fc: MOV ESP,EBP
// 005d83fe: POP EBP
// 005d83ff: POP EDI
// 005d8400: RET
