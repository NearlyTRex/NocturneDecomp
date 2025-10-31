// Name: shape_superopt.cpp_FUN_005d85a0
// Address: 005d85a0
// Address Range: [[005d85a0, 005d85e2]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d85a0()

#include "nocturne.h"

void shape_superopt_cpp_FUN_005d85a0(void)

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
  
  local_18 = in_stack_00000004[1] + in_stack_00000008[1];
  local_10 = in_stack_00000004[2] + in_stack_00000008[2];
  local_20 = *in_stack_00000004 + *in_stack_00000008;
  pdVar2 = &local_20;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *(undefined4 *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}


// Assembly code:
// 005d85a0: PUSH EDI
//   Label: shape_superopt.cpp_FUN_005d85a0
// 005d85a1: PUSH EBP
// 005d85a2: MOV EBP,ESP
// 005d85a4: SUB ESP,0x18
// 005d85a7: AND ESP,0xfffffff8
// 005d85aa: MOV ECX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005d85ad: MOV EDX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005d85b0: MOV EAX,ESI
// 005d85b2: FLD double ptr [ECX + 0x8]
// 005d85b5: FLD double ptr [ECX + 0x10]
// 005d85b8: FLD double ptr [ECX]
// 005d85ba: MOV EDI,ESI
// 005d85bc: MOV ECX,0x6
// 005d85c1: MOV ESI,ESP
// 005d85c3: FADD double ptr [EDX]
// 005d85c5: FXCH ST2
// 005d85c7: FADD double ptr [EDX + 0x8]
// 005d85ca: FXCH
// 005d85cc: FADD double ptr [EDX + 0x10]
// 005d85cf: FXCH
// 005d85d1: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 005d85d5: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (WRITE)
// 005d85d9: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005d85dc: MOVSD.REP ES:EDI,ESI
// 005d85de: MOV ESP,EBP
// 005d85e0: POP EBP
// 005d85e1: POP EDI
// 005d85e2: RET
