// Name: FUN_00523d10
// Address: 00523d10
// Address Range: [[00523d10, 00523e93]]
// Convention: unknown
// Signature: void FUN_00523d10(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00523d10(int param_1,int param_2,int param_3)

{
  double dVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  if (*(int *)(param_1 + 0x134) < 0) {
    _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
    _DAT_01cc4804 = 0x791;
    FUN_004c8440();
  }
  dVar1 = (double)FUN_00525de0(param_1,(double)param_2,0);
  fVar4 = (float10)dVar1;
  FUN_00563a30();
  *(int *)(param_1 + 0x13c) = (int)ROUND(fVar4);
  if (*(int *)(param_1 + 0x13c) < 0) {
    *(uint *)(param_1 + 0x13c) = 0;
  }
  if ((param_3 < 0) || (*(int *)(param_1 + 0x138) <= param_3)) {
    _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
    _DAT_01cc4804 = 0x79c;
    FUN_004c8440("SfxSample::seek - invalid destPtr");
  }
  *(int *)(param_1 + 0x140) = param_3;
  iVar3 = *(int *)(param_1 + 0x144);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x14c) == 0) {
      _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
      _DAT_01cc4804 = 0x7b0;
      FUN_004c8440();
      return;
    }
    iVar2 = FUN_00525c40();
    FUN_0056582c(*(uint *)(param_1 + 0x14c),
                 iVar2 * *(int *)(param_1 + 0x13c) + *(int *)(param_1 + 0x148),iVar3);
  }
  else {
    iVar3 = FUN_004e8410();
    if (iVar3 == 0) {
      _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
      _DAT_01cc4804 = 0x7a5;
      FUN_004c8440("Error seeking %s to %d",param_1,*(uint *)(param_1 + 0x13c));
      return;
    }
  }
  return;
}
