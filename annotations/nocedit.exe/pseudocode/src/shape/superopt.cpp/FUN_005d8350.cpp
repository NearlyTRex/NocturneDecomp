// Name: shape_superopt.cpp_FUN_005d8350
// Address: 005d8350
// Address Range: [[005d8350, 005d8383]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d8350()

#include "nocturne.h"

void shape_superopt_cpp_FUN_005d8350(void)

{
  double dVar1;
  double dVar2;
  double *unaff_ESI;
  double *in_stack_00000004;
  double *in_stack_00000008;
  
  dVar1 = in_stack_00000004[1];
  dVar2 = in_stack_00000008[1];
  *unaff_ESI = *in_stack_00000004 - *in_stack_00000008;
  unaff_ESI[1] = dVar1 - dVar2;
  return;
}


// Assembly code:
// 005d8350: PUSH EDI
//   Label: shape_superopt.cpp_FUN_005d8350
// 005d8351: PUSH EBP
// 005d8352: MOV EBP,ESP
// 005d8354: SUB ESP,0x10
// 005d8357: AND ESP,0xfffffff8
// 005d835a: MOV EDX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005d835d: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005d8360: MOV EAX,ESI
// 005d8362: FLD double ptr [EDX]
// 005d8364: FLD double ptr [EDX + 0x8]
// 005d8367: MOV EDI,ESI
// 005d8369: MOV ESI,ESP
// 005d836b: FSUB double ptr [ECX + 0x8]
// 005d836e: FXCH
// 005d8370: FSUB double ptr [ECX]
// 005d8372: FXCH
// 005d8374: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (WRITE)
// 005d8378: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005d837b: MOVSD ES:EDI,ESI
// 005d837c: MOVSD ES:EDI,ESI
// 005d837d: MOVSD ES:EDI,ESI
// 005d837e: MOVSD ES:EDI,ESI
// 005d837f: MOV ESP,EBP
// 005d8381: POP EBP
// 005d8382: POP EDI
// 005d8383: RET
