// Name: shape_superopt.cpp_FUN_005d63d0
// Address: 005d63d0
// Address Range: [[005d63d0, 005d6492]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d63d0()
// Cross-references:
//   shape_superopt.cpp_FUN_005d5800 (005d5800) at 005d59f9 [UNCONDITIONAL_CALL]
// Function calls:
//   shape_superopt.cpp_FUN_005d6500

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d63d0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

undefined4 * shape_superopt_cpp_FUN_005d63d0(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  undefined4 *unaff_ESI;
  double *pdVar5;
  undefined4 *puVar6;
  byte bVar7;
  double *in_stack_00000004;
  double *in_stack_0000000c;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_18;
  
  bVar7 = 0;
  local_18 = (double)shape_superopt_cpp_FUN_005d6500();
  dVar1 = -*in_stack_0000000c;
  dVar2 = -in_stack_0000000c[1];
  dVar3 = -in_stack_0000000c[2];
  local_18 = local_18 / SQRT(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
  local_40 = dVar1 * local_18;
  local_38 = dVar2 * local_18;
  local_30 = dVar3 * local_18;
  local_58 = *in_stack_00000004 + dVar1 * local_18;
  local_50 = in_stack_00000004[1] + dVar2 * local_18;
  local_48 = in_stack_00000004[2] + dVar3 * local_18;
  pdVar5 = &local_58;
  puVar6 = unaff_ESI;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *(undefined4 *)pdVar5;
    pdVar5 = (double *)((int)pdVar5 + (uint)bVar7 * -8 + 4);
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  return unaff_ESI;
}


// Assembly code:
// 005d63d0: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d63d0
// 005d63d1: PUSH EDI
// 005d63d2: PUSH EBP
// 005d63d3: MOV EBP,ESP
// 005d63d5: SUB ESP,0x64
// 005d63d8: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005d63db: MOV dword ptr [EBP + -0x4],ESI
//   XREF to: Stack[-0x10] (WRITE)
// 005d63de: MOV ESI,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005d63e1: FLD double ptr [EBX]
// 005d63e3: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005d63e6: LEA EAX,[EBP + -0x64]
//   XREF to: Stack[-0x70] (DATA)
// 005d63e9: PUSH EBX
// 005d63ea: FCHS
// 005d63ec: FSTP double ptr [EBP + -0x64]
//   XREF to: Stack[-0x70] (WRITE)
// 005d63ef: PUSH EDX
// 005d63f0: FLD double ptr [EBX + 0x8]
// 005d63f3: FCHS
// 005d63f5: FSTP double ptr [EBP + -0x5c]
//   XREF to: Stack[-0x68] (WRITE)
// 005d63f8: PUSH EAX
// 005d63f9: FLD double ptr [EBX + 0x10]
// 005d63fc: FCHS
// 005d63fe: PUSH ESI
// 005d63ff: FSTP double ptr [EBP + -0x54]
//   XREF to: Stack[-0x60] (WRITE)
// 005d6402: CALL shape_superopt.cpp_FUN_005d6500
//   XREF to: 005d6500 (UNCONDITIONAL_CALL)
// 005d6407: FLD double ptr [EBX]
// 005d6409: FCHS
// 005d640b: FSTP double ptr [EBP + -0x34]
//   XREF to: Stack[-0x40] (WRITE)
// 005d640e: FLD double ptr [EBX + 0x8]
// 005d6411: FCHS
// 005d6413: FST double ptr [EBP + -0x2c]
//   XREF to: Stack[-0x38] (WRITE)
// 005d6416: FMUL double ptr [EBP + -0x2c]
//   XREF to: Stack[-0x38] (READ)
// 005d6419: FLD double ptr [EBP + -0x34]
//   XREF to: Stack[-0x40] (READ)
// 005d641c: FMUL ST0
// 005d641e: FLD double ptr [EBX + 0x10]
// 005d6421: FCHS
// 005d6423: FXCH
// 005d6425: FADDP ST2,ST0
// 005d6427: FST double ptr [EBP + -0x24]
//   XREF to: Stack[-0x30] (WRITE)
// 005d642a: FMUL double ptr [EBP + -0x24]
//   XREF to: Stack[-0x30] (READ)
// 005d642d: FADDP
// 005d642f: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005d6432: FSQRT
// 005d6434: MOV dword ptr [EBP + -0x8],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005d6437: FLD double ptr [EBP + -0xc]
//   XREF to: Stack[-0x18] (READ)
// 005d643a: FLD double ptr [EBP + -0x34]
//   XREF to: Stack[-0x40] (READ)
// 005d643d: FXCH ST2
// 005d643f: FDIVP
// 005d6441: FXCH
// 005d6443: FMUL ST1
// 005d6445: FLD double ptr [EBP + -0x2c]
//   XREF to: Stack[-0x38] (READ)
// 005d6448: FMUL ST2
// 005d644a: FLD double ptr [EBP + -0x24]
//   XREF to: Stack[-0x30] (READ)
// 005d644d: FMULP ST3
// 005d644f: MOV EDI,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x10] (READ)
// 005d6452: MOV ECX,0x6
// 005d6457: ADD ESP,0x10
// 005d645a: FXCH
// 005d645c: FSTP double ptr [EBP + -0x34]
//   XREF to: Stack[-0x40] (WRITE)
// 005d645f: FSTP double ptr [EBP + -0x2c]
//   XREF to: Stack[-0x38] (WRITE)
// 005d6462: FSTP double ptr [EBP + -0x24]
//   XREF to: Stack[-0x30] (WRITE)
// 005d6465: FLD double ptr [ESI + 0x8]
// 005d6468: FLD double ptr [ESI + 0x10]
// 005d646b: FLD double ptr [ESI]
// 005d646d: LEA ESI,[EBP + -0x4c]
//   XREF to: Stack[-0x58] (DATA)
// 005d6470: FADD double ptr [EBP + -0x34]
//   XREF to: Stack[-0x40] (READ)
// 005d6473: FXCH ST2
// 005d6475: FADD double ptr [EBP + -0x2c]
//   XREF to: Stack[-0x38] (READ)
// 005d6478: FXCH
// 005d647a: FADD double ptr [EBP + -0x24]
//   XREF to: Stack[-0x30] (READ)
// 005d647d: FXCH ST2
// 005d647f: FSTP double ptr [EBP + -0x4c]
//   XREF to: Stack[-0x58] (WRITE)
// 005d6482: FSTP double ptr [EBP + -0x44]
//   XREF to: Stack[-0x50] (WRITE)
// 005d6485: FSTP double ptr [EBP + -0x3c]
//   XREF to: Stack[-0x48] (WRITE)
// 005d6488: MOVSD.REP ES:EDI,ESI
// 005d648a: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x10] (READ)
// 005d648d: MOV ESP,EBP
// 005d648f: POP EBP
// 005d6490: POP EDI
// 005d6491: POP EBX
// 005d6492: RET
