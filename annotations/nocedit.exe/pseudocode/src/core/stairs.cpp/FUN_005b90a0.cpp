// Name: core_stairs.cpp_FUN_005b90a0
// Address: 005b90a0
// Address Range: [[005b90a0, 005b922b]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005b90a0()
// Cross-references:
//   core_dracbrid.cpp_FUN_004869a0 (004869a0) at 00486bbb [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004cc300 (004cc300) at 004cc3ad [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00652fc6
//   undefined4 DAT_00652fce
//   undefined4 DAT_00652fd2
//   undefined4 DAT_00652fd6
//   undefined4 DAT_00652fda
//   undefined4 DAT_00652fde

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_stairs.cpp_FUN_005b90a0(undefined4 param_1, undefined4
   param_2, undefined4 param_3) */

void core_stairs_cpp_FUN_005b90a0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  fVar1 = in_stack_00000008 * in_stack_00000008;
  fVar3 = (1.0 - in_stack_0000000c) * (float)_DAT_00652fc6;
  fVar2 = fVar1 * in_stack_00000008;
  fVar4 = fVar3 * _DAT_00652fce;
  fVar7 = fVar3 * _DAT_00652fd2;
  fVar6 = _DAT_00652fce - fVar3;
  fVar5 = fVar3 + _DAT_00652fd2;
  fVar9 = _DAT_00652fd6 - fVar4;
  in_stack_00000004[1] = fVar5 * fVar1 + fVar6 * fVar2 + 1.0;
  fVar8 = fVar3 * _DAT_00652fde;
  fVar10 = fVar3 + _DAT_00652fda;
  in_stack_00000004[3] = fVar3 * fVar2 - fVar3 * fVar1;
  fVar11 = fVar3 * _DAT_00652fd6;
  fVar6 = fVar6 * _DAT_00652fd6;
  in_stack_00000004[4] = (fVar8 * in_stack_00000008 + fVar7 * fVar1) - fVar3;
  fVar7 = fVar9 * _DAT_00652fce;
  in_stack_00000004[5] = fVar5 * _DAT_00652fce * in_stack_00000008 + fVar6 * fVar1;
  fVar5 = fVar10 * _DAT_00652fd6;
  in_stack_00000004[7] = fVar11 * fVar1 - fVar4 * in_stack_00000008;
  *in_stack_00000004 = (-fVar3 * fVar2 + fVar4 * fVar1) - fVar3 * in_stack_00000008;
  in_stack_00000004[2] = fVar9 * fVar1 + fVar10 * fVar2 + fVar3 * in_stack_00000008;
  in_stack_00000004[6] = fVar5 * fVar1 + fVar7 * in_stack_00000008 + fVar3;
  return;
}


// Assembly code:
// 005b90a0: SUB ESP,0x24
//   Label: core_stairs.cpp_FUN_005b90a0
// 005b90a3: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005b90a7: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[0xc] (READ)
// 005b90ab: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 005b90af: FLD1
// 005b90b1: FSUBRP ST2,ST0
// 005b90b3: FMUL float ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 005b90b7: FXCH
// 005b90b9: FMUL double ptr [0x00652fc6]
//   XREF to: 00652fc6 (READ)
// 005b90bf: FXCH
// 005b90c1: FST float ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (WRITE)
// 005b90c5: FMUL float ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 005b90c9: FXCH
// 005b90cb: FST float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 005b90ce: FXCH
// 005b90d0: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (WRITE)
// 005b90d4: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 005b90d8: FLD float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 005b90db: FMUL float ptr [0x00652fce]
//   XREF to: 00652fce (READ)
// 005b90e1: FLD float ptr [0x00652fd2]
//   XREF to: 00652fd2 (READ)
// 005b90e7: FLD float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 005b90ea: FMUL ST1
// 005b90ec: FLD float ptr [0x00652fce]
//   XREF to: 00652fce (READ)
// 005b90f2: FSUB float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 005b90f5: FXCH
// 005b90f7: FMUL float ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 005b90fb: FXCH
// 005b90fd: FST float ptr [ESP + 0x14]
//   XREF to: Stack[-0x10] (WRITE)
// 005b9101: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 005b9105: FXCH ST3
// 005b9107: FST float ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (WRITE)
// 005b910b: FMUL float ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 005b910f: FLD float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 005b9112: FLD ST0
// 005b9114: FCHS
// 005b9116: FXCH
// 005b9118: FADDP ST4,ST0
// 005b911a: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 005b911e: FXCH ST3
// 005b9120: FST float ptr [ESP + 0x18]
//   XREF to: Stack[-0xc] (WRITE)
// 005b9124: FXCH ST3
// 005b9126: FADDP
// 005b9128: FXCH ST2
// 005b912a: FMUL float ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 005b912e: FLD float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 005b9131: FMUL float ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 005b9135: FLD float ptr [0x00652fd6]
//   XREF to: 00652fd6 (READ)
// 005b913b: FXCH ST2
// 005b913d: FADDP ST5,ST0
// 005b913f: FLD float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 005b9142: FXCH ST2
// 005b9144: FSUB float ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 005b9148: FXCH ST2
// 005b914a: FMUL float ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 005b914e: FXCH ST2
// 005b9150: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x8] (WRITE)
// 005b9154: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (WRITE)
// 005b9158: FLD1
// 005b915a: FADDP ST4,ST0
// 005b915c: FXCH ST2
// 005b915e: FSUB float ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 005b9162: FXCH ST3
// 005b9164: FSTP float ptr [EAX + 0x4]
// 005b9167: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x8] (READ)
// 005b916b: FMUL float ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 005b916f: FLD float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 005b9172: FMUL float ptr [0x00652fde]
//   XREF to: 00652fde (READ)
// 005b9178: FLD float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 005b917b: FADD float ptr [0x00652fda]
//   XREF to: 00652fda (READ)
// 005b9181: FXCH ST4
// 005b9183: FSUBP ST6,ST0
// 005b9185: FXCH ST3
// 005b9187: FST float ptr [ESP + 0x20]
//   XREF to: Stack[-0x4] (WRITE)
// 005b918b: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 005b918f: FXCH ST5
// 005b9191: FSTP float ptr [EAX + 0xc]
// 005b9194: FLD float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 005b9197: FMUL float ptr [0x00652fd6]
//   XREF to: 00652fd6 (READ)
// 005b919d: FXCH ST3
// 005b919f: FMUL float ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 005b91a3: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x10] (READ)
// 005b91a7: FXCH
// 005b91a9: FADDP ST3,ST0
// 005b91ab: FMUL float ptr [0x00652fd6]
//   XREF to: 00652fd6 (READ)
// 005b91b1: FXCH ST2
// 005b91b3: FSUB float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 005b91b6: FXCH ST2
// 005b91b8: FMUL float ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 005b91bc: FXCH ST2
// 005b91be: FSTP float ptr [EAX + 0x10]
// 005b91c1: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0xc] (READ)
// 005b91c5: FMUL float ptr [0x00652fce]
//   XREF to: 00652fce (READ)
// 005b91cb: FXCH ST3
// 005b91cd: FMUL float ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 005b91d1: FXCH ST3
// 005b91d3: FMUL float ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 005b91d7: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x8] (READ)
// 005b91db: FMUL float ptr [0x00652fce]
//   XREF to: 00652fce (READ)
// 005b91e1: FXCH
// 005b91e3: FADDP ST3,ST0
// 005b91e5: FMUL float ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 005b91e9: FXCH ST2
// 005b91eb: FSTP float ptr [EAX + 0x14]
// 005b91ee: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 005b91f2: FMUL float ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 005b91f6: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x4] (READ)
// 005b91fa: FMUL float ptr [0x00652fd6]
//   XREF to: 00652fd6 (READ)
// 005b9200: FXCH
// 005b9202: FSUBP ST4,ST0
// 005b9204: FMUL float ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 005b9208: FXCH ST3
// 005b920a: FSTP float ptr [EAX + 0x1c]
// 005b920d: FADDP ST4,ST0
// 005b920f: FXCH ST2
// 005b9211: FSTP float ptr [EAX]
// 005b9213: FADDP
// 005b9215: FXCH
// 005b9217: FADD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 005b921b: FXCH
// 005b921d: FADD float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 005b9220: FXCH
// 005b9222: FSTP float ptr [EAX + 0x8]
// 005b9225: FSTP float ptr [EAX + 0x18]
// 005b9228: ADD ESP,0x24
// 005b922b: RET
