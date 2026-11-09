// Name: engine_mini3d.cpp_FUN_00515bd0
// Address: 00515bd0
// Address Range: [[00515bd0, 00515ff5]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_00515bd0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_00515bd0(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float local_18;
  
  iVar1 = param_2;
  iVar3 = _DAT_01d2c0c4 * 0x50;
  piVar4 = (int *)(&DAT_01d2c0c8 + iVar3);
  if (*(float *)(param_2 + 0x18) < *(float *)(param_1 + 0x18)) {
    param_2 = param_1;
    param_1 = iVar1;
  }
  *piVar4 = (int)ROUND(*(float *)(param_1 + 0x18) - _DAT_0061f600);
  *(int *)(&DAT_01d2c0cc + iVar3) = (int)ROUND(*(float *)(param_2 + 0x18) - _DAT_0061f600);
  iVar1 = *piVar4;
  if (iVar1 != *(int *)(&DAT_01d2c0cc + iVar3)) {
    if (iVar1 < _DAT_01d2c5c8) {
      _DAT_01d2c5c8 = iVar1;
    }
    if (_DAT_01d2c5cc < *(int *)(&DAT_01d2c0cc + iVar3)) {
      _DAT_01d2c5cc = *(int *)(&DAT_01d2c0cc + iVar3);
    }
    local_18 = *(float *)(param_2 + 0x18) - *(float *)(param_1 + 0x18);
    if ((int)local_18 < 0x3f800000) {
      local_18 = 0.0;
    }
    else {
      local_18 = 1.0 / local_18;
    }
    fVar2 = ((float)*piVar4 + (1.0 - *(float *)(param_1 + 0x18))) * local_18;
    *(int *)(&DAT_01d2c0d4 + iVar3) =
         (int)ROUND(_DAT_0061f608 *
                    (*(float *)(param_2 + 0x14) - *(float *)(param_1 + 0x14)) * local_18 -
                    _DAT_0061f600);
    *(int *)(&DAT_01d2c0d0 + iVar3) =
         (int)ROUND(_DAT_0061f608 *
                    ((*(float *)(param_2 + 0x14) - *(float *)(param_1 + 0x14)) * fVar2 +
                    *(float *)(param_1 + 0x14)) - _DAT_0061f600);
    *(int *)(&DAT_01d2c0e4 + iVar3) =
         (int)ROUND(_DAT_0061f60c *
                    (*(float *)(param_2 + 0x1c) - *(float *)(param_1 + 0x1c)) * local_18 -
                    _DAT_0061f600);
    *(int *)(&DAT_01d2c0e0 + iVar3) =
         (int)ROUND(_DAT_0061f60c *
                    ((*(float *)(param_2 + 0x1c) - *(float *)(param_1 + 0x1c)) * fVar2 +
                    *(float *)(param_1 + 0x1c)) - _DAT_0061f600);
    *(int *)(&DAT_01d2c0ec + iVar3) =
         (int)ROUND(_DAT_0061f60c *
                    (*(float *)(param_2 + 0x20) - *(float *)(param_1 + 0x20)) * local_18 -
                    _DAT_0061f600);
    *(int *)(&DAT_01d2c0e8 + iVar3) =
         (int)ROUND(_DAT_0061f60c *
                    ((*(float *)(param_2 + 0x20) - *(float *)(param_1 + 0x20)) * fVar2 +
                    *(float *)(param_1 + 0x20)) - _DAT_0061f600);
    *(int *)(iVar3 + 0x1d2c0dc) =
         (int)ROUND(_DAT_0061f604 *
                    (*(float *)(param_2 + 0x2c) - *(float *)(param_1 + 0x2c)) * local_18 -
                    _DAT_0061f600);
    *(int *)(&DAT_01d2c0d8 + iVar3) =
         (int)ROUND(_DAT_0061f604 *
                    ((*(float *)(param_2 + 0x2c) - *(float *)(param_1 + 0x2c)) * fVar2 +
                    *(float *)(param_1 + 0x2c)) - _DAT_0061f600);
    *(int *)(iVar3 + 0x1d2c0fc) =
         (int)ROUND(_DAT_0061f604 *
                    (*(float *)(param_2 + 0x34) - *(float *)(param_1 + 0x34)) * local_18 -
                    _DAT_0061f600);
    *(int *)(iVar3 + 0x1d2c0f8) =
         (int)ROUND(_DAT_0061f604 *
                    ((*(float *)(param_2 + 0x34) - *(float *)(param_1 + 0x34)) * fVar2 +
                    *(float *)(param_1 + 0x34)) - _DAT_0061f600);
    *(int *)(iVar3 + 0x1d2c114) =
         (int)ROUND(_DAT_0061f604 *
                    (*(float *)(param_2 + 0x30) - *(float *)(param_1 + 0x30)) * local_18 -
                    _DAT_0061f600);
    *(int *)(iVar3 + 0x1d2c110) =
         (int)ROUND(_DAT_0061f604 *
                    ((*(float *)(param_2 + 0x30) - *(float *)(param_1 + 0x30)) * fVar2 +
                    *(float *)(param_1 + 0x30)) - _DAT_0061f600);
    *(int *)(&DAT_01d2c0f4 + iVar3) =
         (int)ROUND(_DAT_0061f610 *
                    (*(float *)(param_2 + 0xc) - *(float *)(param_1 + 0xc)) * local_18 -
                    _DAT_0061f600);
    *(int *)(&DAT_01d2c0f0 + iVar3) =
         (int)ROUND(_DAT_0061f610 *
                    ((*(float *)(param_2 + 0xc) - *(float *)(param_1 + 0xc)) * fVar2 +
                    *(float *)(param_1 + 0xc)) - _DAT_0061f600);
    *(int *)(iVar3 + 0x1d2c104) =
         (int)ROUND(_DAT_0061f604 *
                    (*(float *)(param_2 + 0x28) - *(float *)(param_1 + 0x28)) * local_18 -
                    _DAT_0061f600);
    *(int *)(iVar3 + 0x1d2c100) =
         (int)ROUND(_DAT_0061f604 *
                    ((*(float *)(param_2 + 0x28) - *(float *)(param_1 + 0x28)) * fVar2 +
                    *(float *)(param_1 + 0x28)) - _DAT_0061f600);
    *(int *)(iVar3 + 0x1d2c10c) =
         (int)ROUND(_DAT_0061f604 *
                    (*(float *)(param_2 + 0x24) - *(float *)(param_1 + 0x24)) * local_18 -
                    _DAT_0061f600);
    *(int *)(iVar3 + 0x1d2c108) =
         (int)ROUND(_DAT_0061f604 *
                    ((*(float *)(param_2 + 0x24) - *(float *)(param_1 + 0x24)) * fVar2 +
                    *(float *)(param_1 + 0x24)) - _DAT_0061f600);
    _DAT_01d2c0c4 = _DAT_01d2c0c4 + 1;
  }
  return;
}
