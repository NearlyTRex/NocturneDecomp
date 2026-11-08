// Name: FUN_0054dc50
// Address: 0054dc50
// Address Range: [[0054dc50, 0054dde2]]
// Convention: unknown
// Signature: void FUN_0054dc50(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054dc50(int param_1,int param_2,int param_3)

{
  double dVar1;
  int iVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x160) < 0) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x8de;
    FUN_004e4500();
  }
  dVar1 = (double)FUN_0054ff30(param_1,(double)param_2,0);
  fVar3 = (float10)dVar1;
  FUN_005b7ff0();
  *(int *)(param_1 + 0x16c) = (int)ROUND(fVar3);
  if (*(int *)(param_1 + 0x16c) < 0) {
    *(uint *)(param_1 + 0x16c) = 0;
  }
  if ((param_3 < 0) || (*(int *)(param_1 + 0x164) <= param_3)) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x8e9;
    FUN_004e4500("SfxSample::seek - invalid destPtr");
  }
  *(int *)(param_1 + 0x170) = param_3;
  if (*(int *)(param_1 + 0x174) != 0) {
    iVar2 = FUN_0050a0e0();
    if (iVar2 != 0) {
      return;
    }
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x8f2;
    FUN_004e4500("Error seeking %s to %d",param_1,*(uint *)(param_1 + 0x16c));
    return;
  }
  iVar2 = FUN_0057d130(param_1 + 0x17c);
  if (iVar2 != 0) {
    iVar2 = FUN_0054fd90(param_1,*(uint *)(param_1 + 0x16c),0);
    FUN_0057d0c0(param_1 + 0x17c,iVar2 + *(int *)(param_1 + 0x178));
    return;
  }
  _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
  _DAT_01d046a4 = 0x8fd;
  FUN_004e4500();
  return;
}
