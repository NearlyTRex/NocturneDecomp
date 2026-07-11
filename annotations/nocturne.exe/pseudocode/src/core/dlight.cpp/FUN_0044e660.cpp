// Name: FUN_0044e660
// Address: 0044e660
// Address Range: [[0044e660, 0044e71c]]
// Convention: unknown
// Signature: void FUN_0044e660(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e660(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x2f9c) == 0) {
    _DAT_01cc4800 = "..\\core\\dlight.cpp";
    _DAT_01cc4804 = 0x147;
    FUN_004c8440("CDemonLight::blitZBuffer - No master Z buffer");
  }
  if ((((*(int *)(param_1 + 0x11d4) < param_2[1]) && (*(int *)(param_1 + 0x11d8) < param_2[3])) &&
      (*param_2 < *(int *)(param_1 + 0x11dc))) &&
     ((iVar2 = param_2[2], iVar2 < *(int *)(param_1 + 0x11e0) && (iVar2 <= param_2[3])))) {
    do {
      iVar1 = (*(int *)(param_1 + 0x1cc0) * iVar2 + *param_2) * 2;
      iVar2 = iVar2 + 1;
      FUN_00465341(*(int *)(param_1 + 0x2f94) + iVar1,*(int *)(param_1 + 0x2f9c) + iVar1,
                   (param_2[1] - *param_2) * 2 + 2);
    } while (iVar2 <= param_2[3]);
  }
  return;
}
