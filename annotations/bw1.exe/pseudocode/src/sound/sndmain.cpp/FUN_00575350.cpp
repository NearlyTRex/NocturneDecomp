// Name: FUN_00575350
// Address: 00575350
// Address Range: [[00575350, 005753ac]]
// Convention: unknown
// Signature: void FUN_00575350(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00575350(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  iVar1 = FUN_005752c0();
  if ((param_1 < 0) || (iVar1 <= param_1)) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x1510;
    FUN_005030e0("getSoundDeviceInfo - invalid index");
  }
  puVar2 = (uint *)(param_1 * 0x118 + 0x2c7fd90);
  for (iVar1 = 0x46; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    param_2 = param_2 + (uint)bVar3 * -2 + 1;
  }
  return;
}
