// Name: shape_superopt.cpp_FUN_005d8520
// Address: 005d8520
// Address Range: [[005d8520, 005d8562]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d8520()

#include "nocturne.h"

void shape_superopt_cpp_FUN_005d8520(void)

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
// 005d8520: PUSH EDI
//   Label: shape_superopt.cpp_FUN_005d8520
// 005d8521: PUSH EBP
// 005d8522: MOV EBP,ESP
// 005d8524: SUB ESP,0x18
// 005d8527: AND ESP,0xfffffff8
// 005d852a: MOV ECX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005d852d: MOV EDX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005d8530: MOV EAX,ESI
// 005d8532: FLD double ptr [ECX + 0x8]
// 005d8535: FLD double ptr [ECX + 0x10]
// 005d8538: FLD double ptr [ECX]
// 005d853a: MOV EDI,ESI
// 005d853c: MOV ECX,0x6
// 005d8541: MOV ESI,ESP
// 005d8543: FADD double ptr [EDX]
// 005d8545: FXCH ST2
// 005d8547: FADD double ptr [EDX + 0x8]
// 005d854a: FXCH
// 005d854c: FADD double ptr [EDX + 0x10]
// 005d854f: FXCH
// 005d8551: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 005d8555: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (WRITE)
// 005d8559: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005d855c: MOVSD.REP ES:EDI,ESI
// 005d855e: MOV ESP,EBP
// 005d8560: POP EBP
// 005d8561: POP EDI
// 005d8562: RET
