// Name: FUN_00573b30
// Address: 00573b30
// Address Range: [[00573b30, 00573bbe]]
// Convention: unknown
// Signature: void FUN_00573b30(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00573b30(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  
  if ((param_1 < 0) || (0x1f < param_1)) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x1105;
    FUN_005030e0("setSfxChannelVol - invalid channel index: %d",param_1);
  }
  iVar1 = _DAT_02c80650;
  *(uint *)(param_1 * 4 + 0x2c7fc90) = param_2;
  if (iVar1 != 0) {
    iVar1 = FUN_00575560();
    if (0 < iVar1) {
      FUN_00575d20();
      piVar2 = (int *)0x2c745ec;
      do {
        if (((piVar2[0x19] != 0) && (piVar2[0x18] != 0)) && (param_1 == *piVar2)) {
          *(byte *)(piVar2 + 0x46) = *(byte *)(piVar2 + 0x46) | 8;
        }
        piVar2 = piVar2 + 0x47;
      } while (piVar2 != (int *)&DAT_02c78cec);
      FUN_00573e70();
      return;
    }
  }
  return;
}
