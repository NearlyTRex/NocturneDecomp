// Name: FUN_00524520
// Address: 00524520
// Address Range: [[00524520, 00524627]]
// Convention: unknown
// Signature: void FUN_00524520(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00524520(int param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int extraout_ECX;
  int iVar4;
  int extraout_EDX;
  int iVar5;
  float10 fVar6;
  
  if (_DAT_02dc84bc < 1) {
    _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
    _DAT_01cc4804 = 0x8e8;
    FUN_004c8440("SfxSlot::kill - must be locked!");
  }
  iVar3 = DAT_005bea68;
  if (DAT_005bea68 < 2) {
    *(uint *)(param_1 + 0xbc) = 0;
  }
  else if ((*(byte *)(param_1 + 0x5c) & 1) == 0) {
    dVar1 = _DAT_005bea80 / _DAT_005a2150;
    dVar2 = (double)DAT_005bea6c;
    iVar5 = 99999;
    iVar4 = param_1;
    if (0 < DAT_005bea68) {
      do {
        fVar6 = (float10)*(float *)(iVar4 + 0x7c) * (float10)(dVar2 * dVar1);
        FUN_00563a30();
        iVar4 = (int)ROUND(fVar6);
        *(int *)(extraout_EDX + 0xbc) = iVar4;
        if (iVar4 < iVar5) {
          iVar5 = iVar4;
        }
        iVar4 = extraout_EDX + 4;
      } while (extraout_ECX + 1 < iVar3);
    }
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        iVar4 = iVar4 + 1;
        *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) - iVar5;
        param_1 = param_1 + 4;
      } while (iVar4 < iVar3);
      DAT_005bea68 = iVar3;
      return;
    }
  }
  else {
    iVar4 = 0;
    if (0 < DAT_005bea68) {
      do {
        iVar4 = iVar4 + 1;
        *(uint *)(param_1 + 0xbc) = 0;
        param_1 = param_1 + 4;
      } while (iVar4 < DAT_005bea68);
    }
  }
  DAT_005bea68 = iVar3;
  return;
}
