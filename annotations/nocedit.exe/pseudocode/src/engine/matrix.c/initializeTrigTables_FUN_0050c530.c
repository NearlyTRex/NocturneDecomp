// Name: engine_matrix.c_initializeTrigTables_FUN_0050c530
// Address: 0050c530
// Address Range: [[0050c530, 0050c5af]]
// Convention: __cdecl
// Signature: void engine_matrix.c_initializeTrigTables_FUN_0050c530(void)
// Cross-references:
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 00507bc1 [UNCONDITIONAL_CALL]
// Globals:
//   double g_PI = 3.14159265350000
//   double g_TrigTableStepSize = 0.0078125
//   double g_FixedPoint16Scale = 65536
//   int[257] g_SinTable
//   int[257] g_CosTable
// Function calls:
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl engine_matrix_c_initializeTrigTables_FUN_0050c530(void)

{
  int in_EAX;
  int iVar1;
  int extraout_ECX;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  int unaff_retaddr;
  
  iVar2 = 0;
  iVar1 = 0;
  fVar3 = (float10)g_FixedPoint16Scale;
  fVar4 = (float10)g_TrigTableStepSize;
  fVar5 = (float10)g_PI;
  do {
    fVar6 = (float10)iVar1 * fVar5 * fVar4;
    fsin(fVar6);
    fVar6 = (float10)fcos(fVar6);
    fVar6 = fVar6 * fVar3;
    dVar7 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar2 + 4,in_EAX));
    dVar7 = crt_math_c_round_FUN_005fe6b0(dVar7);
    iVar2 = (int)((ulonglong)dVar7 >> 0x20);
    in_EAX = (int)ROUND(fVar6);
    *(int *)(g_CMarqueeClassInfo.class_name + iVar2 + 0x38) = unaff_retaddr;
    iVar1 = extraout_ECX + 1;
    *(int *)((int)g_SinTable + iVar2 + 0x400) = in_EAX;
    unaff_retaddr = in_EAX;
  } while (iVar1 < 0x101);
  return;
}


// Assembly code:
// 0050c530: PUSH EBP
//   Label: engine_matrix.c_initializeTrigTables_FUN_0050c530
// 0050c531: MOV EBP,ESP
// 0050c533: SUB ESP,0xc
// 0050c536: AND ESP,0xfffffff8
// 0050c539: XOR EDX,EDX
// 0050c53b: XOR ECX,ECX
// 0050c53d: FLD double ptr [0x00635a35]
//   XREF to: 00635a35 (READ)
// 0050c543: FLD double ptr [0x00635a2d]
//   XREF to: 00635a2d (READ)
// 0050c549: FLD double ptr [0x00635a25]
//   XREF to: 00635a25 (READ)
// 0050c54f: MOV dword ptr [ESP + 0x8],ECX
//   Label: LAB_0050c54f
//   XREF to: Stack[-0x8] (WRITE)
// 0050c553: FILD dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x8] (READ)
// 0050c557: FMUL ST1
// 0050c559: FMUL ST2
// 0050c55b: FLD ST0
// 0050c55d: FSIN
// 0050c55f: FXCH
// 0050c561: FCOS
// 0050c563: FXCH
// 0050c565: FMUL ST4
// 0050c567: FXCH
// 0050c569: FMUL ST4
// 0050c56b: ADD EDX,0x4
// 0050c56e: FXCH
// 0050c570: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0050c575: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x8] (WRITE)
// 0050c579: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0050c57e: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x8] (READ)
// 0050c582: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x8] (WRITE)
// 0050c586: MOV dword ptr [EDX + 0x2f0cb58],EAX
//   XREF to: 02f0cb5c (WRITE)
// 0050c58c: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x8] (READ)
// 0050c590: INC ECX
// 0050c591: MOV dword ptr [EDX + 0x2f0cf5c],EAX
//   XREF to: 02f0cf60 (WRITE)
// 0050c597: CMP ECX,0x101
// 0050c59d: JL 0x0050c54f
//   XREF to: 0050c54f (CONDITIONAL_JUMP)
// 0050c59f: FSTP ST0
// 0050c5a1: FSTP ST0
// 0050c5a3: FSTP ST0
// 0050c5a5: MOV ESP,EBP
// 0050c5a7: POP EBP
// 0050c5a8: LEA EAX,[EAX]
// 0050c5ae: MOV EDX,EDX
