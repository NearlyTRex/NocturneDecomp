// Name: FUN_005537c0
// Address: 005537c0
// Address Range: [[005537c0, 00553952]]
// Convention: unknown
// Signature: void FUN_005537c0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005537c0(int param_1,int param_2,int param_3)

{
  double dVar1;
  int iVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x160) < 0) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x8e0;
    FUN_004e4330();
  }
  dVar1 = (double)FUN_00555aa0(param_1,(double)param_2,0);
  fVar3 = (float10)dVar1;
  FUN_005a3120();
  *(int *)(param_1 + 0x16c) = (int)ROUND(fVar3);
  if (*(int *)(param_1 + 0x16c) < 0) {
    *(uint *)(param_1 + 0x16c) = 0;
  }
  if ((param_3 < 0) || (*(int *)(param_1 + 0x164) <= param_3)) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x8eb;
    FUN_004e4330("SfxSample::seek - invalid destPtr");
  }
  *(int *)(param_1 + 0x170) = param_3;
  if (*(int *)(param_1 + 0x174) != 0) {
    iVar2 = FUN_00502bc0();
    if (iVar2 != 0) {
      return;
    }
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x8f4;
    FUN_004e4330("Error seeking %s to %d",param_1,*(uint *)(param_1 + 0x16c));
    return;
  }
  iVar2 = FUN_00573d60(param_1 + 0x17c);
  if (iVar2 != 0) {
    iVar2 = FUN_00555900(param_1,*(uint *)(param_1 + 0x16c),0);
    FUN_00573cf0(param_1 + 0x17c,iVar2 + *(int *)(param_1 + 0x178));
    return;
  }
  _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
  _DAT_01d71de4 = 0x8ff;
  FUN_004e4330();
  return;
}
