// Name: core_stairs.cpp_FUN_005b92d0
// Address: 005b92d0
// Address Range: [[005b92d0, 005b93e0]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005b92d0()
// Cross-references:
//   core_dracbrid.cpp_FUN_004869a0 (004869a0) at 00486be3 [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004cc300 (004cc300) at 004cc536 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 actors_other_stairs.cpp_FUN_005b92d0(undefined4 param_1, undefined4
   param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6) */

float * core_stairs_cpp_FUN_005b92d0(void)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float *in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  float *in_stack_00000010;
  float *in_stack_00000014;
  float *in_stack_00000018;
  
  pfVar1 = in_stack_00000004 + 3;
  fVar4 = in_stack_00000018[1];
  fVar5 = *pfVar1;
  fVar6 = in_stack_00000018[2];
  fVar7 = *pfVar1;
  pfVar2 = in_stack_00000004 + 2;
  fVar8 = in_stack_00000014[1];
  fVar9 = *pfVar2;
  fVar10 = in_stack_00000014[2];
  fVar11 = *pfVar2;
  pfVar3 = in_stack_00000004 + 1;
  fVar12 = in_stack_00000010[1];
  fVar13 = *pfVar3;
  fVar14 = in_stack_00000010[2];
  fVar15 = *pfVar3;
  fVar16 = in_stack_0000000c[1];
  fVar17 = *in_stack_00000004;
  fVar18 = in_stack_0000000c[2];
  fVar19 = *in_stack_00000004;
  *in_stack_00000008 =
       *in_stack_0000000c * *in_stack_00000004 + *in_stack_00000010 * *pfVar3 +
       *in_stack_00000014 * *pfVar2 + *in_stack_00000018 * *pfVar1;
  in_stack_00000008[1] = fVar16 * fVar17 + fVar12 * fVar13 + fVar8 * fVar9 + fVar4 * fVar5;
  in_stack_00000008[2] = fVar18 * fVar19 + fVar14 * fVar15 + fVar10 * fVar11 + fVar6 * fVar7;
  return in_stack_00000008;
}


// Assembly code:
// 005b92d0: PUSH EBX
//   Label: core_stairs.cpp_FUN_005b92d0
// 005b92d1: PUSH ESI
// 005b92d2: PUSH EDI
// 005b92d3: PUSH EBP
// 005b92d4: SUB ESP,0x48
// 005b92d7: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x4] (READ)
// 005b92db: MOV ECX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x8] (READ)
// 005b92df: MOV EDI,dword ptr [ESP + 0x64]
//   XREF to: Stack[0xc] (READ)
// 005b92e3: MOV EBX,dword ptr [ESP + 0x68]
//   XREF to: Stack[0x10] (READ)
// 005b92e7: MOV ESI,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x14] (READ)
// 005b92eb: MOV EBP,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x18] (READ)
// 005b92ef: LEA EDX,[EAX + 0xc]
// 005b92f2: FLD float ptr [EBP]
// 005b92f5: FMUL float ptr [EDX]
// 005b92f7: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x34] (WRITE)
// 005b92fb: FLD float ptr [EBP + 0x4]
// 005b92fe: FMUL float ptr [EDX]
// 005b9300: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x30] (WRITE)
// 005b9304: FLD float ptr [EBP + 0x8]
// 005b9307: FMUL float ptr [EDX]
// 005b9309: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x2c] (WRITE)
// 005b930d: LEA EDX,[EAX + 0x8]
// 005b9310: FLD float ptr [ESI]
// 005b9312: FMUL float ptr [EDX]
// 005b9314: FSTP float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 005b9317: FLD float ptr [ESI + 0x4]
// 005b931a: FMUL float ptr [EDX]
// 005b931c: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x54] (WRITE)
// 005b9320: FLD float ptr [ESI + 0x8]
// 005b9323: FMUL float ptr [EDX]
// 005b9325: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x50] (WRITE)
// 005b9329: LEA EDX,[EAX + 0x4]
// 005b932c: FLD float ptr [EBX]
// 005b932e: FMUL float ptr [EDX]
// 005b9330: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x40] (WRITE)
// 005b9334: FLD float ptr [EBX + 0x4]
// 005b9337: FMUL float ptr [EDX]
// 005b9339: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x3c] (WRITE)
// 005b933d: FLD float ptr [EBX + 0x8]
// 005b9340: FMUL float ptr [EDX]
// 005b9342: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x38] (WRITE)
// 005b9346: FLD float ptr [EDI]
// 005b9348: FMUL float ptr [EAX]
// 005b934a: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x1c] (WRITE)
// 005b934e: FLD float ptr [EDI + 0x4]
// 005b9351: FMUL float ptr [EAX]
// 005b9353: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x18] (WRITE)
// 005b9357: FLD float ptr [EDI + 0x8]
// 005b935a: FMUL float ptr [EAX]
// 005b935c: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x1c] (READ)
// 005b9360: FADD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x40] (READ)
// 005b9364: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x18] (READ)
// 005b9368: FADD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x3c] (READ)
// 005b936c: FXCH ST2
// 005b936e: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x14] (WRITE)
// 005b9372: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x28] (WRITE)
// 005b9376: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x24] (WRITE)
// 005b937a: FLD float ptr [ESP + 0x44]
//   XREF to: Stack[-0x14] (READ)
// 005b937e: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x28] (READ)
// 005b9382: FLD float ptr [ESP + 0x34]
//   XREF to: Stack[-0x24] (READ)
// 005b9386: FXCH ST2
// 005b9388: FADD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x38] (READ)
// 005b938c: FXCH
// 005b938e: FADD float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 005b9391: FXCH ST2
// 005b9393: FADD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x54] (READ)
// 005b9397: FXCH
// 005b9399: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x20] (WRITE)
// 005b939d: FXCH
// 005b939f: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (WRITE)
// 005b93a3: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x48] (WRITE)
// 005b93a7: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (READ)
// 005b93ab: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x20] (READ)
// 005b93af: FADD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x50] (READ)
// 005b93b3: FXCH
// 005b93b5: FADD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x34] (READ)
// 005b93b9: FXCH
// 005b93bb: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x44] (WRITE)
// 005b93bf: FSTP float ptr [ECX]
// 005b93c1: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x48] (READ)
// 005b93c5: FADD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x30] (READ)
// 005b93c9: FSTP float ptr [ECX + 0x4]
// 005b93cc: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x44] (READ)
// 005b93d0: FADD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x2c] (READ)
// 005b93d4: MOV EAX,ECX
// 005b93d6: FSTP float ptr [ECX + 0x8]
// 005b93d9: ADD ESP,0x48
// 005b93dc: POP EBP
// 005b93dd: POP EDI
// 005b93de: POP ESI
// 005b93df: POP EBX
// 005b93e0: RET
