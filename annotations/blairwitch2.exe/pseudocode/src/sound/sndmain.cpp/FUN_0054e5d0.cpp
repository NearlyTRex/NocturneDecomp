// Name: FUN_0054e5d0
// Address: 0054e5d0
// Address Range: [[0054e5d0, 0054e6d9]]
// Convention: unknown
// Signature: void FUN_0054e5d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054e5d0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int extraout_ECX;
  int iVar4;
  int extraout_EDX;
  int iVar5;
  float10 fVar6;
  
  if (_DAT_0264901c < 1) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0xa69;
    FUN_004e4500("SfxSlot::kill - must be locked!");
  }
  iVar3 = DAT_0061bc9c;
  if (DAT_0061bc9c < 2) {
    *(uint *)(param_1 + 0xb0) = 0;
  }
  else if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
    fVar1 = (1.0 / _DAT_005fbc18) * DAT_0061bcb4;
    fVar2 = (float)DAT_0061bca0;
    iVar5 = 99999;
    iVar4 = param_1;
    if (0 < DAT_0061bc9c) {
      do {
        fVar6 = (float10)*(float *)(iVar4 + 0x70) * (float10)(fVar2 * fVar1);
        FUN_005b7ff0();
        iVar4 = (int)ROUND(fVar6);
        *(int *)(extraout_EDX + 0xb0) = iVar4;
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
        *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) - iVar5;
        param_1 = param_1 + 4;
      } while (iVar4 < iVar3);
      DAT_0061bc9c = iVar3;
      return;
    }
  }
  else {
    iVar4 = 0;
    if (0 < DAT_0061bc9c) {
      do {
        iVar4 = iVar4 + 1;
        *(uint *)(param_1 + 0xb0) = 0;
        param_1 = param_1 + 4;
      } while (iVar4 < DAT_0061bc9c);
    }
  }
  DAT_0061bc9c = iVar3;
  return;
}
