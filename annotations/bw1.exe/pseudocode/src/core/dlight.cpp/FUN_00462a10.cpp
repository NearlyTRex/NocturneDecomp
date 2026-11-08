// Name: FUN_00462a10
// Address: 00462a10
// Address Range: [[00462a10, 00462acc]]
// Convention: unknown
// Signature: void FUN_00462a10(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00462a10(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x2f9c) == 0) {
    _DAT_01d1d400 = "..\\core\\dlight.cpp";
    _DAT_01d1d404 = 0x147;
    FUN_005030e0("CDemonLight::blitZBuffer - No master Z buffer");
  }
  if ((((*(int *)(param_1 + 0x11d4) < param_2[1]) && (*(int *)(param_1 + 0x11d8) < param_2[3])) &&
      (*param_2 < *(int *)(param_1 + 0x11dc))) &&
     ((iVar2 = param_2[2], iVar2 < *(int *)(param_1 + 0x11e0) && (iVar2 <= param_2[3])))) {
    do {
      iVar1 = (*(int *)(param_1 + 0x1cc0) * iVar2 + *param_2) * 2;
      iVar2 = iVar2 + 1;
      FUN_004886f1(*(int *)(param_1 + 0x2f94) + iVar1,*(int *)(param_1 + 0x2f9c) + iVar1,
                   (param_2[1] - *param_2) * 2 + 2);
    } while (iVar2 <= param_2[3]);
  }
  return;
}
