// Name: FUN_005584c0
// Address: 005584c0
// Address Range: [[005584c0, 0055851c]]
// Convention: unknown
// Signature: void FUN_005584c0(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005584c0(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  iVar1 = FUN_00558430();
  if ((param_1 < 0) || (iVar1 <= param_1)) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x1523;
    FUN_004e4330("getSoundDeviceInfo - invalid index");
  }
  puVar2 = (uint *)(param_1 * 0x118 + 0x2cf29c0);
  for (iVar1 = 0x46; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    param_2 = param_2 + (uint)bVar3 * -2 + 1;
  }
  return;
}
