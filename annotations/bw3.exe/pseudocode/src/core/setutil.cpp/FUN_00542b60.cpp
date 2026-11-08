// Name: FUN_00542b60
// Address: 00542b60
// Address Range: [[00542b60, 00542d1e]]
// Convention: unknown
// Signature: void FUN_00542b60(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00542b60(int param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    _DAT_01d71de0 = "..\\core\\setutil.cpp";
    _DAT_01d71de4 = 0x351;
    FUN_004e4330("C3DSLight::process - NULL CDemonLight pointer!");
  }
  if (*(int *)(param_1 + 0x11ec) != 0) {
    if (0.0 < *(float *)(param_1 + 0x16f4 + *(int *)(param_1 + 0x1890) * 4)) {
      *(float *)(param_1 + 0x1894) = *(float *)(0x01D2130C + 0x314) + *(float *)(param_1 + 0x1894)
      ;
      iVar2 = *(int *)(param_1 + 0x1890) * 4 + param_1;
      if (*(float *)(iVar2 + 0x16f4) < *(float *)(param_1 + 0x1894)) {
        iVar3 = *(int *)(param_1 + 0x1890) + 1;
        *(float *)(param_1 + 0x1894) = *(float *)(param_1 + 0x1894) - *(float *)(iVar2 + 0x16f4);
        *(int *)(param_1 + 0x1890) = iVar3;
        if (*(int *)(param_1 + 0x11ec) <= iVar3) {
          *(uint *)(param_1 + 0x1890) = 0;
        }
      }
    }
    iVar2 = _DAT_01c5fad0;
    lVar1 = (longlong)_DAT_01c5fad0 * (longlong)*(int *)(param_1 + 0x17f8);
    *(uint *)(param_1 + 0x1800) =
         *(int *)(param_1 + 0x1800) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar2 * (longlong)*(int *)(param_1 + 0x17fc);
    iVar2 = *(int *)(param_1 + 0x1804) +
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    *(int *)(param_1 + 0x1804) = iVar2;
    if (param_3 != 0) {
      FUN_0045db40(param_2,*(uint *)(param_1 + 0x1810 + *(int *)(param_1 + 0x1890) * 4),
                   *(uint *)(param_1 + 0x1774 + *(int *)(param_1 + 0x1890) * 4),
                   *(uint *)(param_1 + 0x1800),iVar2);
    }
  }
  if (*(float *)(param_1 + 0x11e0) < 1.0) {
    *(float *)(param_1 + 0x11e8) = *(float *)(0x01D2130C + 0x314) + *(float *)(param_1 + 0x11e8);
    if (*(float *)(param_1 + 0x11e4) < *(float *)(param_1 + 0x11e8)) {
      *(float *)(param_1 + 0x11e8) = *(float *)(param_1 + 0x11e8) - *(float *)(param_1 + 0x11e4);
    }
    if (*(float *)(param_1 + 0x11e8) <= *(float *)(param_1 + 0x11e0)) {
      *(uint *)(param_2 + 0x1cb4) = 1;
    }
    else {
      *(uint *)(param_2 + 0x1cb4) = 0;
    }
  }
  if (*(int *)(0x01ED78C8 + 0x15aeb4) != 0) {
    return;
  }
  *(uint *)(param_2 + 0x1cb4) = 0;
  return;
}
