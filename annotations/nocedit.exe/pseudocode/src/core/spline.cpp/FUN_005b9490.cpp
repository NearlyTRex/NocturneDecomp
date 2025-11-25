// Name: core_spline.cpp_FUN_005b9490
// Address: 005b9490
// Address Range: [[005b9490, 005b95a3]]
// Convention: unknown
// Signature: undefined core_spline.cpp_FUN_005b9490()
// Cross-references:
//   core_dracbrid.cpp_FUN_004869a0 (004869a0) at 00486c63 [UNCONDITIONAL_CALL]

#include "nocturne.h"

float * core_spline_cpp_FUN_005b9490(void)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
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
  float fVar20;
  int in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  float *in_stack_00000010;
  float *in_stack_00000014;
  float *in_stack_00000018;
  
  pfVar1 = (float *)(in_stack_00000004 + 0x1c);
  fVar5 = in_stack_00000018[1];
  fVar6 = *pfVar1;
  fVar7 = in_stack_00000018[2];
  fVar8 = *pfVar1;
  pfVar2 = (float *)(in_stack_00000004 + 0x18);
  fVar9 = in_stack_00000014[1];
  fVar10 = *pfVar2;
  fVar11 = in_stack_00000014[2];
  fVar12 = *pfVar2;
  pfVar3 = (float *)(in_stack_00000004 + 0x14);
  fVar13 = in_stack_00000010[1];
  fVar14 = *pfVar3;
  fVar15 = in_stack_00000010[2];
  fVar16 = *pfVar3;
  pfVar4 = (float *)(in_stack_00000004 + 0x10);
  fVar17 = in_stack_0000000c[1];
  fVar18 = *pfVar4;
  fVar19 = in_stack_0000000c[2];
  fVar20 = *pfVar4;
  *in_stack_00000008 =
       *in_stack_0000000c * *pfVar4 + *in_stack_00000010 * *pfVar3 + *in_stack_00000014 * *pfVar2 +
       *in_stack_00000018 * *pfVar1;
  in_stack_00000008[1] = fVar17 * fVar18 + fVar13 * fVar14 + fVar9 * fVar10 + fVar5 * fVar6;
  in_stack_00000008[2] = fVar19 * fVar20 + fVar15 * fVar16 + fVar11 * fVar12 + fVar7 * fVar8;
  return in_stack_00000008;
}


// Assembly code:
// 005b9490: PUSH EBX
//   Label: core_spline.cpp_FUN_005b9490
// 005b9491: PUSH ESI
// 005b9492: PUSH EDI
// 005b9493: PUSH EBP
// 005b9494: SUB ESP,0x48
// 005b9497: MOV ECX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x4] (READ)
// 005b949b: MOV EDX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x8] (READ)
// 005b949f: MOV EDI,dword ptr [ESP + 0x64]
//   XREF to: Stack[0xc] (READ)
// 005b94a3: MOV ESI,dword ptr [ESP + 0x68]
//   XREF to: Stack[0x10] (READ)
// 005b94a7: MOV EBX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x14] (READ)
// 005b94ab: MOV EBP,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x18] (READ)
// 005b94af: LEA EAX,[ECX + 0x1c]
// 005b94b2: FLD float ptr [EBP]
// 005b94b5: FMUL float ptr [EAX]
// 005b94b7: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x34] (WRITE)
// 005b94bb: FLD float ptr [EBP + 0x4]
// 005b94be: FMUL float ptr [EAX]
// 005b94c0: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x30] (WRITE)
// 005b94c4: FLD float ptr [EBP + 0x8]
// 005b94c7: FMUL float ptr [EAX]
// 005b94c9: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x2c] (WRITE)
// 005b94cd: LEA EAX,[ECX + 0x18]
// 005b94d0: FLD float ptr [EBX]
// 005b94d2: FMUL float ptr [EAX]
// 005b94d4: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x28] (WRITE)
// 005b94d8: FLD float ptr [EBX + 0x4]
// 005b94db: FMUL float ptr [EAX]
// 005b94dd: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x24] (WRITE)
// 005b94e1: FLD float ptr [EBX + 0x8]
// 005b94e4: FMUL float ptr [EAX]
// 005b94e6: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x20] (WRITE)
// 005b94ea: LEA EAX,[ECX + 0x14]
// 005b94ed: FLD float ptr [ESI]
// 005b94ef: FMUL float ptr [EAX]
// 005b94f1: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x40] (WRITE)
// 005b94f5: FLD float ptr [ESI + 0x4]
// 005b94f8: FMUL float ptr [EAX]
// 005b94fa: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x3c] (WRITE)
// 005b94fe: FLD float ptr [ESI + 0x8]
// 005b9501: FMUL float ptr [EAX]
// 005b9503: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x38] (WRITE)
// 005b9507: LEA EAX,[ECX + 0x10]
// 005b950a: FLD float ptr [EDI]
// 005b950c: FMUL float ptr [EAX]
// 005b950e: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (WRITE)
// 005b9512: FLD float ptr [EDI + 0x4]
// 005b9515: FMUL float ptr [EAX]
// 005b9517: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x48] (WRITE)
// 005b951b: FLD float ptr [EDI + 0x8]
// 005b951e: FMUL float ptr [EAX]
// 005b9520: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (READ)
// 005b9524: FADD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x40] (READ)
// 005b9528: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x48] (READ)
// 005b952c: FADD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x3c] (READ)
// 005b9530: FXCH ST2
// 005b9532: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x44] (WRITE)
// 005b9536: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x1c] (WRITE)
// 005b953a: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x18] (WRITE)
// 005b953e: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x44] (READ)
// 005b9542: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x1c] (READ)
// 005b9546: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x18] (READ)
// 005b954a: FXCH ST2
// 005b954c: FADD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x38] (READ)
// 005b9550: FXCH
// 005b9552: FADD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x28] (READ)
// 005b9556: FXCH ST2
// 005b9558: FADD float ptr [ESP + 0x34]
//   XREF to: Stack[-0x24] (READ)
// 005b955c: FXCH
// 005b955e: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x14] (WRITE)
// 005b9562: FXCH
// 005b9564: FSTP float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 005b9567: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x54] (WRITE)
// 005b956b: FLD float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 005b956e: FLD float ptr [ESP + 0x44]
//   XREF to: Stack[-0x14] (READ)
// 005b9572: FADD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x20] (READ)
// 005b9576: FXCH
// 005b9578: FADD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x34] (READ)
// 005b957c: FXCH
// 005b957e: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x50] (WRITE)
// 005b9582: FSTP float ptr [EDX]
// 005b9584: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x54] (READ)
// 005b9588: FADD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x30] (READ)
// 005b958c: FSTP float ptr [EDX + 0x4]
// 005b958f: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x50] (READ)
// 005b9593: FADD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x2c] (READ)
// 005b9597: MOV EAX,EDX
// 005b9599: FSTP float ptr [EDX + 0x8]
// 005b959c: ADD ESP,0x48
// 005b959f: POP EBP
// 005b95a0: POP EDI
// 005b95a1: POP ESI
// 005b95a2: POP EBX
// 005b95a3: RET
