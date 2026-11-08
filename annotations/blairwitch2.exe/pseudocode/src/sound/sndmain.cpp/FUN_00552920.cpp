// Name: FUN_00552920
// Address: 00552920
// Address Range: [[00552920, 0055297c]]
// Convention: unknown
// Signature: void FUN_00552920(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00552920(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  iVar1 = FUN_00552890();
  if ((param_1 < 0) || (iVar1 <= param_1)) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x1519;
    FUN_004e4500("getSoundDeviceInfo - invalid index");
  }
  puVar2 = (uint *)(param_1 * 0x118 + 0x26485c0);
  for (iVar1 = 0x46; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    param_2 = param_2 + (uint)bVar3 * -2 + 1;
  }
  return;
}
