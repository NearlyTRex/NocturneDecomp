// Name: FUN_00556c90
// Address: 00556c90
// Address Range: [[00556c90, 00556d1e]]
// Convention: unknown
// Signature: void FUN_00556c90(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556c90(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  
  if ((param_1 < 0) || (0x1f < param_1)) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x1116;
    FUN_004e4330("setSfxChannelVol - invalid channel index: %d",param_1);
  }
  iVar1 = _DAT_02cf3280;
  *(uint *)(param_1 * 4 + 0x2cf28c0) = param_2;
  if (iVar1 != 0) {
    iVar1 = FUN_005586d0();
    if (0 < iVar1) {
      FUN_00558e90();
      piVar2 = (int *)0x2ce721c;
      do {
        if (((piVar2[0x19] != 0) && (piVar2[0x18] != 0)) && (param_1 == *piVar2)) {
          *(byte *)(piVar2 + 0x46) = *(byte *)(piVar2 + 0x46) | 8;
        }
        piVar2 = piVar2 + 0x47;
      } while (piVar2 != (int *)&DAT_02ceb91c);
      FUN_00556fd0();
      return;
    }
  }
  return;
}
