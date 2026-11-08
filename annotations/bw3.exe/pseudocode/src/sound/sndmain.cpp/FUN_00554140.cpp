// Name: FUN_00554140
// Address: 00554140
// Address Range: [[00554140, 00554249]]
// Convention: unknown
// Signature: void FUN_00554140(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00554140(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int extraout_ECX;
  int iVar4;
  int extraout_EDX;
  int iVar5;
  float10 fVar6;
  
  if (_DAT_02cf341c < 1) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0xa6b;
    FUN_004e4330("SfxSlot::kill - must be locked!");
  }
  iVar3 = DAT_0060422c;
  if (DAT_0060422c < 2) {
    *(uint *)(param_1 + 0xb0) = 0;
  }
  else if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
    fVar1 = (1.0 / _DAT_005e4844) * DAT_00604240;
    fVar2 = (float)DAT_00604230;
    iVar5 = 99999;
    iVar4 = param_1;
    if (0 < DAT_0060422c) {
      do {
        fVar6 = (float10)*(float *)(iVar4 + 0x70) * (float10)(fVar2 * fVar1);
        FUN_005a3120();
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
      DAT_0060422c = iVar3;
      return;
    }
  }
  else {
    iVar4 = 0;
    if (0 < DAT_0060422c) {
      do {
        iVar4 = iVar4 + 1;
        *(uint *)(param_1 + 0xb0) = 0;
        param_1 = param_1 + 4;
      } while (iVar4 < DAT_0060422c);
    }
  }
  DAT_0060422c = iVar3;
  return;
}
