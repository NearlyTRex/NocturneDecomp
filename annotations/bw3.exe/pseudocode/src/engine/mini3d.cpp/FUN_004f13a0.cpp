// Name: engine_mini3d.cpp_FUN_004f13a0
// Address: 004f13a0
// Address Range: [[004f13a0, 004f17c5]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f13a0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f13a0(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float local_18;
  
  iVar1 = param_2;
  iVar3 = _DAT_01d80844 * 0x50;
  piVar4 = (int *)(&DAT_01d80848 + iVar3);
  if (*(float *)(param_2 + 0x18) < *(float *)(param_1 + 0x18)) {
    param_2 = param_1;
    param_1 = iVar1;
  }
  *piVar4 = (int)ROUND(*(float *)(param_1 + 0x18) - _DAT_006004e0);
  *(int *)(&DAT_01d8084c + iVar3) = (int)ROUND(*(float *)(param_2 + 0x18) - _DAT_006004e0);
  iVar1 = *piVar4;
  if (iVar1 != *(int *)(&DAT_01d8084c + iVar3)) {
    if (iVar1 < _DAT_01d80d48) {
      _DAT_01d80d48 = iVar1;
    }
    if (_DAT_01d80d4c < *(int *)(&DAT_01d8084c + iVar3)) {
      _DAT_01d80d4c = *(int *)(&DAT_01d8084c + iVar3);
    }
    local_18 = *(float *)(param_2 + 0x18) - *(float *)(param_1 + 0x18);
    if ((int)local_18 < 0x3f800000) {
      local_18 = 0.0;
    }
    else {
      local_18 = 1.0 / local_18;
    }
    fVar2 = ((float)*piVar4 + (1.0 - *(float *)(param_1 + 0x18))) * local_18;
    *(int *)(&DAT_01d80854 + iVar3) =
         (int)ROUND(_DAT_006004e8 *
                    (*(float *)(param_2 + 0x14) - *(float *)(param_1 + 0x14)) * local_18 -
                    _DAT_006004e0);
    *(int *)(&DAT_01d80850 + iVar3) =
         (int)ROUND(_DAT_006004e8 *
                    ((*(float *)(param_2 + 0x14) - *(float *)(param_1 + 0x14)) * fVar2 +
                    *(float *)(param_1 + 0x14)) - _DAT_006004e0);
    *(int *)(&DAT_01d80864 + iVar3) =
         (int)ROUND(_DAT_006004ec *
                    (*(float *)(param_2 + 0x1c) - *(float *)(param_1 + 0x1c)) * local_18 -
                    _DAT_006004e0);
    *(int *)(&DAT_01d80860 + iVar3) =
         (int)ROUND(_DAT_006004ec *
                    ((*(float *)(param_2 + 0x1c) - *(float *)(param_1 + 0x1c)) * fVar2 +
                    *(float *)(param_1 + 0x1c)) - _DAT_006004e0);
    *(int *)(&DAT_01d8086c + iVar3) =
         (int)ROUND(_DAT_006004ec *
                    (*(float *)(param_2 + 0x20) - *(float *)(param_1 + 0x20)) * local_18 -
                    _DAT_006004e0);
    *(int *)(&DAT_01d80868 + iVar3) =
         (int)ROUND(_DAT_006004ec *
                    ((*(float *)(param_2 + 0x20) - *(float *)(param_1 + 0x20)) * fVar2 +
                    *(float *)(param_1 + 0x20)) - _DAT_006004e0);
    *(int *)(iVar3 + 0x1d8085c) =
         (int)ROUND(_DAT_006004e4 *
                    (*(float *)(param_2 + 0x2c) - *(float *)(param_1 + 0x2c)) * local_18 -
                    _DAT_006004e0);
    *(int *)(&DAT_01d80858 + iVar3) =
         (int)ROUND(_DAT_006004e4 *
                    ((*(float *)(param_2 + 0x2c) - *(float *)(param_1 + 0x2c)) * fVar2 +
                    *(float *)(param_1 + 0x2c)) - _DAT_006004e0);
    *(int *)(iVar3 + 0x1d8087c) =
         (int)ROUND(_DAT_006004e4 *
                    (*(float *)(param_2 + 0x34) - *(float *)(param_1 + 0x34)) * local_18 -
                    _DAT_006004e0);
    *(int *)(iVar3 + 0x1d80878) =
         (int)ROUND(_DAT_006004e4 *
                    ((*(float *)(param_2 + 0x34) - *(float *)(param_1 + 0x34)) * fVar2 +
                    *(float *)(param_1 + 0x34)) - _DAT_006004e0);
    *(int *)(iVar3 + 0x1d80894) =
         (int)ROUND(_DAT_006004e4 *
                    (*(float *)(param_2 + 0x30) - *(float *)(param_1 + 0x30)) * local_18 -
                    _DAT_006004e0);
    *(int *)(iVar3 + 0x1d80890) =
         (int)ROUND(_DAT_006004e4 *
                    ((*(float *)(param_2 + 0x30) - *(float *)(param_1 + 0x30)) * fVar2 +
                    *(float *)(param_1 + 0x30)) - _DAT_006004e0);
    *(int *)(&DAT_01d80874 + iVar3) =
         (int)ROUND(_DAT_006004f0 *
                    (*(float *)(param_2 + 0xc) - *(float *)(param_1 + 0xc)) * local_18 -
                    _DAT_006004e0);
    *(int *)(&DAT_01d80870 + iVar3) =
         (int)ROUND(_DAT_006004f0 *
                    ((*(float *)(param_2 + 0xc) - *(float *)(param_1 + 0xc)) * fVar2 +
                    *(float *)(param_1 + 0xc)) - _DAT_006004e0);
    *(int *)(iVar3 + 0x1d80884) =
         (int)ROUND(_DAT_006004e4 *
                    (*(float *)(param_2 + 0x28) - *(float *)(param_1 + 0x28)) * local_18 -
                    _DAT_006004e0);
    *(int *)(iVar3 + 0x1d80880) =
         (int)ROUND(_DAT_006004e4 *
                    ((*(float *)(param_2 + 0x28) - *(float *)(param_1 + 0x28)) * fVar2 +
                    *(float *)(param_1 + 0x28)) - _DAT_006004e0);
    *(int *)(iVar3 + 0x1d8088c) =
         (int)ROUND(_DAT_006004e4 *
                    (*(float *)(param_2 + 0x24) - *(float *)(param_1 + 0x24)) * local_18 -
                    _DAT_006004e0);
    *(int *)(iVar3 + 0x1d80888) =
         (int)ROUND(_DAT_006004e4 *
                    ((*(float *)(param_2 + 0x24) - *(float *)(param_1 + 0x24)) * fVar2 +
                    *(float *)(param_1 + 0x24)) - _DAT_006004e0);
    _DAT_01d80844 = _DAT_01d80844 + 1;
  }
  return;
}
