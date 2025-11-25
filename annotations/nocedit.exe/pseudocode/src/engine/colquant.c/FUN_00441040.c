// Name: engine_colquant.c_FUN_00441040
// Address: 00441040
// Address Range: [[00441040, 00441105]]
// Convention: unknown
// Signature: undefined engine_colquant.c_FUN_00441040()
// Cross-references:
//   engine_colquant.c_FUN_00441110 (00441110) at 00441162 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00618da1 = 0.300000000000000
//   double DOUBLE_00618da9 = 0.590000000000000
//   double DOUBLE_00618db1 = 0.110000000000000
//   double DOUBLE_00618db9 = 0.700000000000000

#include "nocturne.h"

double engine_colquant_c_FUN_00441040(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  byte *pbVar5;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  pbVar5 = (byte *)(in_stack_0000000c * 4 + *(int *)(in_stack_00000004 + 0x2004));
  in_stack_00000004 = in_stack_00000008 * 0x40 + in_stack_00000004;
  dVar4 = (double)(int)((uint)*pbVar5 - (*(int *)(in_stack_00000004 + 0x4006) >> 0x10));
  dVar3 = (double)(int)((uint)pbVar5[1] - (*(int *)(in_stack_00000004 + 0x4008) >> 0x10));
  dVar2 = (double)(int)((uint)pbVar5[2] - (*(int *)(in_stack_00000004 + 0x400a) >> 0x10));
  dVar1 = (double)(int)((uint)pbVar5[3] - (*(int *)(in_stack_00000004 + 0x400c) >> 0x10));
  return dVar1 * dVar1 * DOUBLE_00618db9 +
         dVar2 * dVar2 * DOUBLE_00618db1 +
         dVar3 * dVar3 * DOUBLE_00618da9 + dVar4 * dVar4 * DOUBLE_00618da1;
}


// Assembly code:
// 00441040: PUSH EBX
//   Label: engine_colquant.c_FUN_00441040
// 00441041: SUB ESP,0x30
// 00441044: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 00441048: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0xc] (READ)
// 0044104c: MOV EAX,dword ptr [EBX + 0x2004]
// 00441052: SHL EDX,0x2
// 00441055: ADD EDX,EAX
// 00441057: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 0044105b: SHL EAX,0x6
// 0044105e: ADD EAX,EBX
// 00441060: XOR ECX,ECX
// 00441062: MOV EBX,dword ptr [EAX + 0x4006]
// 00441068: MOV CL,byte ptr [EDX]
// 0044106a: SAR EBX,0x10
// 0044106d: SUB ECX,EBX
// 0044106f: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0xc] (WRITE)
// 00441073: XOR EBX,EBX
// 00441075: MOV ECX,dword ptr [EAX + 0x4008]
// 0044107b: MOV BL,byte ptr [EDX + 0x1]
// 0044107e: SAR ECX,0x10
// 00441081: SUB EBX,ECX
// 00441083: MOV dword ptr [ESP + 0x2c],EBX
//   XREF to: Stack[-0x8] (WRITE)
// 00441087: XOR ECX,ECX
// 00441089: MOV EBX,dword ptr [EAX + 0x400a]
// 0044108f: MOV CL,byte ptr [EDX + 0x2]
// 00441092: SAR EBX,0x10
// 00441095: FILD dword ptr [ESP + 0x28]
//   XREF to: Stack[-0xc] (READ)
// 00441099: SUB ECX,EBX
// 0044109b: FILD dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x8] (READ)
// 0044109f: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x8] (WRITE)
// 004410a3: MOV DL,byte ptr [EDX + 0x3]
// 004410a6: FILD dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x8] (READ)
// 004410aa: FLD ST2
// 004410ac: FMULP ST3
// 004410ae: FXCH ST2
// 004410b0: FMUL double ptr [0x00618da1]
//   XREF to: 00618da1 (READ)
// 004410b6: FLD ST1
// 004410b8: FMULP ST2
// 004410ba: FXCH
// 004410bc: FMUL double ptr [0x00618da9]
//   XREF to: 00618da9 (READ)
// 004410c2: AND EDX,0xff
// 004410c8: MOV EAX,dword ptr [EAX + 0x400c]
// 004410ce: FADDP
// 004410d0: SAR EAX,0x10
// 004410d3: FLD ST1
// 004410d5: FMULP ST2
// 004410d7: SUB EDX,EAX
// 004410d9: FXCH
// 004410db: FMUL double ptr [0x00618db1]
//   XREF to: 00618db1 (READ)
// 004410e1: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x8] (WRITE)
// 004410e5: FADDP
// 004410e7: FILD dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x8] (READ)
// 004410eb: FMUL ST0
// 004410ed: FMUL double ptr [0x00618db9]
//   XREF to: 00618db9 (READ)
// 004410f3: FADDP
// 004410f5: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x24] (WRITE)
// 004410f9: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x24] (READ)
// 004410fd: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (READ)
// 00441101: ADD ESP,0x30
// 00441104: POP EBX
// 00441105: RET
