// Name: core_path.cpp_FUN_004f16d0
// Address: 004f16d0
// Address Range: [[004f16d0, 004f18b9]]
// Convention: unknown
// Signature: void core_path_cpp_FUN_004f16d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_path_cpp_FUN_004f16d0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int **ppiVar10;
  uint uVar11;
  byte **ppuVar12;
  int *local_44;
  byte *local_40;
  int local_3c;
  float local_38;
  float local_30;
  float local_2c;
  int *local_24;
  float local_20;
  float local_1c;
  
  piVar1 = DAT_005ae704;
  local_24 = (int *)(_DAT_01fba96c * _DAT_0058ce1f);
  local_20 = _DAT_01fba970 * _DAT_0058ce1f;
  local_1c = _DAT_01fba974 * _DAT_0058ce1f;
  fVar5 = (float10)_DAT_0058ce27;
  fVar6 = (float10)_DAT_01fba94c;
  fVar9 = (float10)local_20;
  fVar8 = (float10)local_1c;
  local_38 = 7.263381e-39;
  fVar7 = (float10)round
                             ((float10)in_stack_00000004 * (float10)(float)local_24);
  local_3c = 0x4f1761;
  fVar8 = (float10)round((float10)in_stack_0000000c * fVar8);
  local_38 = (float)(int)ROUND(fVar7);
  local_30 = (float)(int)ROUND(fVar8);
  local_44 = (int *)0x4f1777;
  local_40 = (byte *)&local_30;
  fVar9 = (float10)round
                             (fVar5 + fVar6 * fVar5 + (float10)in_stack_00000008 * fVar9);
  local_38 = (float)(int)ROUND(fVar9);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*piVar1);
  piVar1 = DAT_005ae704;
  local_1c = (float)local_3c;
  local_44 = &local_3c;
  uVar11 = 0x4f17aa;
  fVar9 = (float10)round((float10)local_3c + (float10)local_30);
  local_40 = (byte *)(int)ROUND(fVar9);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*piVar1 + 0x30,uVar11);
  piVar1 = DAT_005ae704;
  local_20 = local_38;
  ppuVar12 = &local_40;
  uVar11 = 0x4f17e0;
  fVar9 = (float10)round((float10)(int)local_38 + (float10)local_2c);
  local_3c = (int)ROUND(fVar9);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*piVar1 + 0x60,uVar11,ppuVar12);
  piVar1 = DAT_005ae704;
  local_24 = local_44;
  ppiVar10 = &local_44;
  uVar11 = 0x4f1816;
  fVar9 = (float10)round((float10)(int)local_44 - (float10)local_38);
  iVar2 = in_stack_00000010 << 8;
  iVar3 = in_stack_00000014 << 8;
  iVar4 = in_stack_00000018 << 8;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (*piVar1 + 0x90,uVar11,ppiVar10,(int)ROUND(fVar9));
  piVar1 = DAT_005ae704;
  *(int *)(*DAT_005ae704 + 0x20) = iVar2;
  *(int *)(*piVar1 + 0x24) = iVar3;
  *(int *)(*piVar1 + 0x28) = iVar4;
  *(int *)(*piVar1 + 0x2c) = in_stack_00000004;
  *(int *)(*piVar1 + 0x50) = iVar2;
  *(int *)(*piVar1 + 0x54) = iVar3;
  *(int *)(*piVar1 + 0x58) = iVar4;
  *(int *)(*piVar1 + 0x5c) = in_stack_00000004;
  *(int *)(*piVar1 + 0x80) = iVar2;
  *(int *)(*piVar1 + 0x84) = iVar3;
  *(int *)(*piVar1 + 0x88) = iVar4;
  *(int *)(*piVar1 + 0x8c) = in_stack_00000004;
  *(int *)(*piVar1 + 0xb0) = iVar2;
  *(int *)(*piVar1 + 0xb4) = iVar3;
  *(int *)(*piVar1 + 0xb8) = iVar4;
  *(int *)(*piVar1 + 0xbc) = in_stack_00000004;
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00460150(piVar1,0x1e42810);
  return;
}
