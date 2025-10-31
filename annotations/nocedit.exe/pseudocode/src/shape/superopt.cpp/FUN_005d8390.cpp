// Name: shape_superopt.cpp_FUN_005d8390
// Address: 005d8390
// Address Range: [[005d8390, 005d83c3]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d8390()

#include "nocturne.h"

void shape_superopt_cpp_FUN_005d8390(void)

{
  double dVar1;
  double dVar2;
  double *unaff_ESI;
  double *in_stack_00000004;
  double *in_stack_00000008;
  
  dVar1 = in_stack_00000004[1];
  dVar2 = in_stack_00000008[1];
  *unaff_ESI = *in_stack_00000004 + *in_stack_00000008;
  unaff_ESI[1] = dVar1 + dVar2;
  return;
}


// Assembly code:
// 005d8390: PUSH EDI
//   Label: shape_superopt.cpp_FUN_005d8390
// 005d8391: PUSH EBP
// 005d8392: MOV EBP,ESP
// 005d8394: SUB ESP,0x10
// 005d8397: AND ESP,0xfffffff8
// 005d839a: MOV EDX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005d839d: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005d83a0: MOV EAX,ESI
// 005d83a2: FLD double ptr [EDX]
// 005d83a4: FLD double ptr [EDX + 0x8]
// 005d83a7: MOV EDI,ESI
// 005d83a9: MOV ESI,ESP
// 005d83ab: FADD double ptr [ECX + 0x8]
// 005d83ae: FXCH
// 005d83b0: FADD double ptr [ECX]
// 005d83b2: FXCH
// 005d83b4: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (WRITE)
// 005d83b8: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005d83bb: MOVSD ES:EDI,ESI
// 005d83bc: MOVSD ES:EDI,ESI
// 005d83bd: MOVSD ES:EDI,ESI
// 005d83be: MOVSD ES:EDI,ESI
// 005d83bf: MOV ESP,EBP
// 005d83c1: POP EBP
// 005d83c2: POP EDI
// 005d83c3: RET
