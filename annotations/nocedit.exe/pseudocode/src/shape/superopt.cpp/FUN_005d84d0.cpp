// Name: shape_superopt.cpp_FUN_005d84d0
// Address: 005d84d0
// Address Range: [[005d84d0, 005d8512]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d84d0()

#include "nocturne.h"

void shape_superopt_cpp_FUN_005d84d0(void)

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
  
  local_18 = in_stack_00000004[1] - in_stack_00000008[1];
  local_10 = in_stack_00000004[2] - in_stack_00000008[2];
  local_20 = *in_stack_00000004 - *in_stack_00000008;
  pdVar2 = &local_20;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *(undefined4 *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}


// Assembly code:
// 005d84d0: PUSH EDI
//   Label: shape_superopt.cpp_FUN_005d84d0
// 005d84d1: PUSH EBP
// 005d84d2: MOV EBP,ESP
// 005d84d4: SUB ESP,0x18
// 005d84d7: AND ESP,0xfffffff8
// 005d84da: MOV ECX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005d84dd: MOV EDX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005d84e0: MOV EAX,ESI
// 005d84e2: FLD double ptr [ECX + 0x8]
// 005d84e5: FLD double ptr [ECX + 0x10]
// 005d84e8: FLD double ptr [ECX]
// 005d84ea: MOV EDI,ESI
// 005d84ec: MOV ECX,0x6
// 005d84f1: MOV ESI,ESP
// 005d84f3: FSUB double ptr [EDX]
// 005d84f5: FXCH ST2
// 005d84f7: FSUB double ptr [EDX + 0x8]
// 005d84fa: FXCH
// 005d84fc: FSUB double ptr [EDX + 0x10]
// 005d84ff: FXCH
// 005d8501: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 005d8505: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (WRITE)
// 005d8509: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005d850c: MOVSD.REP ES:EDI,ESI
// 005d850e: MOV ESP,EBP
// 005d8510: POP EBP
// 005d8511: POP EDI
// 005d8512: RET
