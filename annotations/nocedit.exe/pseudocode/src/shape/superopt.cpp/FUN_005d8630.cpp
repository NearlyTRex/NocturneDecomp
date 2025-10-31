// Name: shape_superopt.cpp_FUN_005d8630
// Address: 005d8630
// Address Range: [[005d8630, 005d866c]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d8630()

#include "nocturne.h"

void shape_superopt_cpp_FUN_005d8630(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined4 *unaff_ESI;
  double *pdVar2;
  double *in_stack_00000004;
  double in_stack_00000008;
  double local_20;
  double local_18;
  double local_10;
  
  local_18 = in_stack_00000004[1] * in_stack_00000008;
  local_10 = in_stack_00000004[2] * in_stack_00000008;
  local_20 = *in_stack_00000004 * in_stack_00000008;
  pdVar2 = &local_20;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *(undefined4 *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}


// Assembly code:
// 005d8630: PUSH EDI
//   Label: shape_superopt.cpp_FUN_005d8630
// 005d8631: PUSH EBP
// 005d8632: MOV EBP,ESP
// 005d8634: SUB ESP,0x18
// 005d8637: AND ESP,0xfffffff8
// 005d863a: MOV EDX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005d863d: MOV EAX,ESI
// 005d863f: FLD double ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005d8642: FLD double ptr [EDX]
// 005d8644: FMUL ST1
// 005d8646: FLD double ptr [EDX + 0x8]
// 005d8649: FMUL ST2
// 005d864b: FLD double ptr [EDX + 0x10]
// 005d864e: FMULP ST3
// 005d8650: MOV ECX,0x6
// 005d8655: MOV EDI,ESI
// 005d8657: MOV ESI,ESP
// 005d8659: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 005d865d: FXCH
// 005d865f: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (WRITE)
// 005d8663: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005d8666: MOVSD.REP ES:EDI,ESI
// 005d8668: MOV ESP,EBP
// 005d866a: POP EBP
// 005d866b: POP EDI
// 005d866c: RET
