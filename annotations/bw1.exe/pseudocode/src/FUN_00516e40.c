// Name: FUN_00516e40
// Address: 00516e40
// Address Range: [[00516e40, 00516f7e]]
// Convention: unknown
// Signature: void FUN_00516e40(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00516e40(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float local_18;
  
  iVar2 = param_2;
  iVar3 = _DAT_01d2c0c4 * 0x50;
  piVar4 = (int *)(&DAT_01d2c0c8 + iVar3);
  if (*(float *)(param_2 + 0x18) < *(float *)(param_1 + 0x18)) {
    param_2 = param_1;
    param_1 = iVar2;
  }
  *piVar4 = (int)ROUND(*(float *)(param_1 + 0x18) - _DAT_0061f600);
  *(int *)(&DAT_01d2c0cc + iVar3) = (int)ROUND(*(float *)(param_2 + 0x18) - _DAT_0061f600);
  iVar2 = *piVar4;
  if (iVar2 != *(int *)(&DAT_01d2c0cc + iVar3)) {
    if (iVar2 < _DAT_01d2c5c8) {
      _DAT_01d2c5c8 = iVar2;
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
    fVar1 = *(float *)(param_1 + 0x18);
    *(int *)(&DAT_01d2c0d4 + iVar3) =
         (int)ROUND(_DAT_0061f608 *
                    (*(float *)(param_2 + 0x14) - *(float *)(param_1 + 0x14)) * local_18 -
                    _DAT_0061f600);
    *(int *)(&DAT_01d2c0d0 + iVar3) =
         (int)ROUND(_DAT_0061f608 *
                    ((*(float *)(param_2 + 0x14) - *(float *)(param_1 + 0x14)) *
                     ((float)*piVar4 + (1.0 - fVar1)) * local_18 + *(float *)(param_1 + 0x14)) -
                    _DAT_0061f600);
    _DAT_01d2c0c4 = _DAT_01d2c0c4 + 1;
  }
  return;
}
