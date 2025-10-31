// Name: shape_superopt.cpp_FUN_005d85f0
// Address: 005d85f0
// Address Range: [[005d85f0, 005d862e]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d85f0()

#include "nocturne.h"

void shape_superopt_cpp_FUN_005d85f0(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined4 *unaff_ESI;
  double *pdVar2;
  double *in_stack_00000004;
  double *in_stack_00000008;
  double local_20;
  double local_18;
  double local_10;
  
  local_18 = in_stack_00000004[1] * in_stack_00000008[1];
  local_10 = in_stack_00000004[2] * in_stack_00000008[2];
  local_20 = *in_stack_00000004 * *in_stack_00000008;
  pdVar2 = &local_20;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *(undefined4 *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}


// Assembly code:
// 005d85f0: PUSH EDI
//   Label: shape_superopt.cpp_FUN_005d85f0
// 005d85f1: PUSH EBP
// 005d85f2: MOV EBP,ESP
// 005d85f4: SUB ESP,0x18
// 005d85f7: AND ESP,0xfffffff8
// 005d85fa: MOV ECX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005d85fd: MOV EDX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005d8600: MOV EAX,ESI
// 005d8602: FLD double ptr [ECX]
// 005d8604: FMUL double ptr [EDX]
// 005d8606: FLD double ptr [ECX + 0x8]
// 005d8609: FMUL double ptr [EDX + 0x8]
// 005d860c: FLD double ptr [ECX + 0x10]
// 005d860f: FMUL double ptr [EDX + 0x10]
// 005d8612: MOV EDI,ESI
// 005d8614: MOV ECX,0x6
// 005d8619: MOV ESI,ESP
// 005d861b: FXCH
// 005d861d: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 005d8621: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (WRITE)
// 005d8625: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005d8628: MOVSD.REP ES:EDI,ESI
// 005d862a: MOV ESP,EBP
// 005d862c: POP EBP
// 005d862d: POP EDI
// 005d862e: RET
