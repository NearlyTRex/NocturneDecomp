// Name: shape_superopt.cpp_FUN_005c9100
// Address: 005c9100
// Address Range: [[005c9100, 005c91d8]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005c9100()
// Cross-references:
//   shape_superopt.cpp_FUN_005c8b50 (005c8b50) at 005c8e2b [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005c8e70 (005c8e70) at 005c9064 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00654222 = 0.5

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005c9100(undefined1 param_1, undefined4 param_2,
   undefined4 param_3) */

double shape_superopt_cpp_FUN_005c9100(void)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double dVar11;
  double dVar12;
  double *pdVar13;
  int in_stack_00000008;
  int in_stack_0000000c;
  double local_28;
  double local_20;
  double local_18;
  
  local_28 = 0.0;
  local_18 = 0.0;
  local_20 = 0.0;
  if (in_stack_0000000c != 0) {
    pdVar13 = (double *)(in_stack_00000008 + 0x10);
    do {
      pdVar1 = pdVar13 + 1;
      pdVar2 = pdVar13 + 4;
      pdVar3 = pdVar13 + 3;
      dVar11 = *pdVar13;
      pdVar4 = pdVar13 + 5;
      pdVar5 = pdVar13 + 2;
      pdVar6 = pdVar13 + 5;
      pdVar7 = pdVar13 + 2;
      dVar12 = *pdVar13;
      pdVar8 = pdVar13 + 4;
      pdVar9 = pdVar13 + 1;
      pdVar10 = pdVar13 + 3;
      pdVar13 = pdVar13 + 0xc;
      local_20 = (*pdVar3 - dVar11) * (*pdVar1 + *pdVar2) * DOUBLE_00654222 + local_20;
      local_28 = (*pdVar8 - *pdVar9) * (*pdVar5 + *pdVar6) * DOUBLE_00654222 + local_28;
      local_18 = (dVar12 + *pdVar10) * (*pdVar4 - *pdVar7) * DOUBLE_00654222 + local_18;
    } while (pdVar13 < (double *)(in_stack_0000000c * 0x60 + 0x10 + in_stack_00000008));
  }
  return SQRT(local_18 * local_18 + local_28 * local_28 + local_20 * local_20);
}


// Assembly code:
// 005c9100: PUSH EBP
//   Label: shape_superopt.cpp_FUN_005c9100
// 005c9101: MOV EBP,ESP
// 005c9103: SUB ESP,0x20
// 005c9106: AND ESP,0xfffffff8
// 005c9109: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005c910c: XOR EDX,EDX
// 005c910e: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x28] (DATA)
// 005c9111: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 005c9115: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005c9119: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005c911d: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 005c9121: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 005c9125: TEST ECX,ECX
// 005c9127: JBE 0x005c91b2
//   XREF to: 005c91b2 (CONDITIONAL_JUMP)
// 005c912d: FLD double ptr [0x00654222]
//   XREF to: 00654222 (READ)
// 005c9133: LEA EDX,[ECX*0x4 + 0x0]
// 005c913a: MOV EAX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005c913d: SUB EDX,ECX
// 005c913f: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 005c9143: SHL EDX,0x5
// 005c9146: MOV ECX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005c9149: ADD EDX,0x10
// 005c914c: ADD EAX,0x10
// 005c914f: ADD EDX,ECX
// 005c9151: FLD double ptr [EAX + 0x8]
//   Label: LAB_005c9151
// 005c9154: FADD double ptr [EAX + 0x20]
// 005c9157: FLD double ptr [EAX + 0x18]
// 005c915a: FSUB double ptr [EAX]
// 005c915c: FMULP
// 005c915e: FLD double ptr [EAX + 0x28]
// 005c9161: FLD double ptr [EAX + 0x10]
// 005c9164: FADD double ptr [EAX + 0x28]
// 005c9167: FXCH
// 005c9169: FSUB double ptr [EAX + 0x10]
// 005c916c: FLD double ptr [EAX]
// 005c916e: FLD double ptr [EAX + 0x20]
// 005c9171: FSUB double ptr [EAX + 0x8]
// 005c9174: FXCH
// 005c9176: FADD double ptr [EAX + 0x18]
// 005c9179: FXCH
// 005c917b: FMULP ST3
// 005c917d: FMULP
// 005c917f: FXCH ST2
// 005c9181: FMUL ST4
// 005c9183: FXCH
// 005c9185: FMUL ST4
// 005c9187: FXCH ST2
// 005c9189: FMUL ST4
// 005c918b: ADD EAX,0x60
// 005c918e: FXCH
// 005c9190: FADD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 005c9194: FXCH ST2
// 005c9196: FADD double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 005c9199: FXCH
// 005c919b: FADD ST0,ST3
// 005c919d: FXCH ST2
// 005c919f: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (WRITE)
// 005c91a3: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 005c91a6: FSTP ST1
// 005c91a8: CMP EAX,EDX
// 005c91aa: JC 0x005c9151
//   XREF to: 005c9151 (CONDITIONAL_JUMP)
// 005c91ac: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (WRITE)
// 005c91b0: FSTP ST0
// 005c91b2: FLD double ptr [ESP + 0x8]
//   Label: LAB_005c91b2
//   XREF to: Stack[-0x20] (READ)
// 005c91b6: FMUL ST0
// 005c91b8: FLD double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 005c91bb: FMUL ST0
// 005c91bd: FADDP
// 005c91bf: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 005c91c3: FMUL ST0
// 005c91c5: FADDP
// 005c91c7: FSQRT
// 005c91c9: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x10] (WRITE)
// 005c91cd: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x10] (READ)
// 005c91d1: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0xc] (READ)
// 005c91d5: MOV ESP,EBP
// 005c91d7: POP EBP
// 005c91d8: RET
