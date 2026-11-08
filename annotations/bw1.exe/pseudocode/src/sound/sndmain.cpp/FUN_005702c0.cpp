// Name: FUN_005702c0
// Address: 005702c0
// Address Range: [[005702c0, 00570452]]
// Convention: unknown
// Signature: void FUN_005702c0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005702c0(int param_1,int param_2,int param_3)

{
  double dVar1;
  int iVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x160) < 0) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x8de;
    FUN_005030e0();
  }
  dVar1 = (double)FUN_005725a0(param_1,(double)param_2,0);
  fVar3 = (float10)dVar1;
  FUN_005c03a0();
  *(int *)(param_1 + 0x16c) = (int)ROUND(fVar3);
  if (*(int *)(param_1 + 0x16c) < 0) {
    *(uint *)(param_1 + 0x16c) = 0;
  }
  if ((param_3 < 0) || (*(int *)(param_1 + 0x164) <= param_3)) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x8e9;
    FUN_005030e0("SfxSample::seek - invalid destPtr");
  }
  *(int *)(param_1 + 0x170) = param_3;
  if (*(int *)(param_1 + 0x174) != 0) {
    iVar2 = FUN_0052b2b0();
    if (iVar2 != 0) {
      return;
    }
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x8f2;
    FUN_005030e0("Error seeking %s to %d",param_1,*(uint *)(param_1 + 0x16c));
    return;
  }
  iVar2 = FUN_005a0d70(param_1 + 0x17c);
  if (iVar2 != 0) {
    iVar2 = FUN_00572400(param_1,*(uint *)(param_1 + 0x16c),0);
    FUN_005a0d00(param_1 + 0x17c,iVar2 + *(int *)(param_1 + 0x178));
    return;
  }
  _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
  _DAT_01d1d404 = 0x8fd;
  FUN_005030e0();
  return;
}
