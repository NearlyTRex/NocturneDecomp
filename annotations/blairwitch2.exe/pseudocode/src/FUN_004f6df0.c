// Name: FUN_004f6df0
// Address: 004f6df0
// Address Range: [[004f6df0, 004f7215]]
// Convention: unknown
// Signature: void FUN_004f6df0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f6df0(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float local_18;
  
  iVar1 = param_2;
  iVar3 = _DAT_01d17ab4 * 0x50;
  piVar4 = (int *)(&DAT_01d17ab8 + iVar3);
  if (*(float *)(param_2 + 0x18) < *(float *)(param_1 + 0x18)) {
    param_2 = param_1;
    param_1 = iVar1;
  }
  *piVar4 = (int)ROUND(*(float *)(param_1 + 0x18) - _DAT_00618118);
  *(int *)(&DAT_01d17abc + iVar3) = (int)ROUND(*(float *)(param_2 + 0x18) - _DAT_00618118);
  iVar1 = *piVar4;
  if (iVar1 != *(int *)(&DAT_01d17abc + iVar3)) {
    if (iVar1 < _DAT_01d17fb8) {
      _DAT_01d17fb8 = iVar1;
    }
    if (_DAT_01d17fbc < *(int *)(&DAT_01d17abc + iVar3)) {
      _DAT_01d17fbc = *(int *)(&DAT_01d17abc + iVar3);
    }
    local_18 = *(float *)(param_2 + 0x18) - *(float *)(param_1 + 0x18);
    if ((int)local_18 < 0x3f800000) {
      local_18 = 0.0;
    }
    else {
      local_18 = 1.0 / local_18;
    }
    fVar2 = ((float)*piVar4 + (1.0 - *(float *)(param_1 + 0x18))) * local_18;
    *(int *)(&DAT_01d17ac4 + iVar3) =
         (int)ROUND(_DAT_00618120 *
                    (*(float *)(param_2 + 0x14) - *(float *)(param_1 + 0x14)) * local_18 -
                    _DAT_00618118);
    *(int *)(&DAT_01d17ac0 + iVar3) =
         (int)ROUND(_DAT_00618120 *
                    ((*(float *)(param_2 + 0x14) - *(float *)(param_1 + 0x14)) * fVar2 +
                    *(float *)(param_1 + 0x14)) - _DAT_00618118);
    *(int *)(&DAT_01d17ad4 + iVar3) =
         (int)ROUND(_DAT_00618124 *
                    (*(float *)(param_2 + 0x1c) - *(float *)(param_1 + 0x1c)) * local_18 -
                    _DAT_00618118);
    *(int *)(&DAT_01d17ad0 + iVar3) =
         (int)ROUND(_DAT_00618124 *
                    ((*(float *)(param_2 + 0x1c) - *(float *)(param_1 + 0x1c)) * fVar2 +
                    *(float *)(param_1 + 0x1c)) - _DAT_00618118);
    *(int *)(&DAT_01d17adc + iVar3) =
         (int)ROUND(_DAT_00618124 *
                    (*(float *)(param_2 + 0x20) - *(float *)(param_1 + 0x20)) * local_18 -
                    _DAT_00618118);
    *(int *)(&DAT_01d17ad8 + iVar3) =
         (int)ROUND(_DAT_00618124 *
                    ((*(float *)(param_2 + 0x20) - *(float *)(param_1 + 0x20)) * fVar2 +
                    *(float *)(param_1 + 0x20)) - _DAT_00618118);
    *(int *)(iVar3 + 0x1d17acc) =
         (int)ROUND(_DAT_0061811c *
                    (*(float *)(param_2 + 0x2c) - *(float *)(param_1 + 0x2c)) * local_18 -
                    _DAT_00618118);
    *(int *)(&DAT_01d17ac8 + iVar3) =
         (int)ROUND(_DAT_0061811c *
                    ((*(float *)(param_2 + 0x2c) - *(float *)(param_1 + 0x2c)) * fVar2 +
                    *(float *)(param_1 + 0x2c)) - _DAT_00618118);
    *(int *)(iVar3 + 0x1d17aec) =
         (int)ROUND(_DAT_0061811c *
                    (*(float *)(param_2 + 0x34) - *(float *)(param_1 + 0x34)) * local_18 -
                    _DAT_00618118);
    *(int *)(iVar3 + 0x1d17ae8) =
         (int)ROUND(_DAT_0061811c *
                    ((*(float *)(param_2 + 0x34) - *(float *)(param_1 + 0x34)) * fVar2 +
                    *(float *)(param_1 + 0x34)) - _DAT_00618118);
    *(int *)(iVar3 + 0x1d17b04) =
         (int)ROUND(_DAT_0061811c *
                    (*(float *)(param_2 + 0x30) - *(float *)(param_1 + 0x30)) * local_18 -
                    _DAT_00618118);
    *(int *)(iVar3 + 0x1d17b00) =
         (int)ROUND(_DAT_0061811c *
                    ((*(float *)(param_2 + 0x30) - *(float *)(param_1 + 0x30)) * fVar2 +
                    *(float *)(param_1 + 0x30)) - _DAT_00618118);
    *(int *)(&DAT_01d17ae4 + iVar3) =
         (int)ROUND(_DAT_00618128 *
                    (*(float *)(param_2 + 0xc) - *(float *)(param_1 + 0xc)) * local_18 -
                    _DAT_00618118);
    *(int *)(&DAT_01d17ae0 + iVar3) =
         (int)ROUND(_DAT_00618128 *
                    ((*(float *)(param_2 + 0xc) - *(float *)(param_1 + 0xc)) * fVar2 +
                    *(float *)(param_1 + 0xc)) - _DAT_00618118);
    *(int *)(iVar3 + 0x1d17af4) =
         (int)ROUND(_DAT_0061811c *
                    (*(float *)(param_2 + 0x28) - *(float *)(param_1 + 0x28)) * local_18 -
                    _DAT_00618118);
    *(int *)(iVar3 + 0x1d17af0) =
         (int)ROUND(_DAT_0061811c *
                    ((*(float *)(param_2 + 0x28) - *(float *)(param_1 + 0x28)) * fVar2 +
                    *(float *)(param_1 + 0x28)) - _DAT_00618118);
    *(int *)(iVar3 + 0x1d17afc) =
         (int)ROUND(_DAT_0061811c *
                    (*(float *)(param_2 + 0x24) - *(float *)(param_1 + 0x24)) * local_18 -
                    _DAT_00618118);
    *(int *)(iVar3 + 0x1d17af8) =
         (int)ROUND(_DAT_0061811c *
                    ((*(float *)(param_2 + 0x24) - *(float *)(param_1 + 0x24)) * fVar2 +
                    *(float *)(param_1 + 0x24)) - _DAT_00618118);
    _DAT_01d17ab4 = _DAT_01d17ab4 + 1;
  }
  return;
}
