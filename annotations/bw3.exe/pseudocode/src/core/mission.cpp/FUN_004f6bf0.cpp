// Name: FUN_004f6bf0
// Address: 004f6bf0
// Address Range: [[004f6bf0, 004f6c92]]
// Convention: unknown
// Signature: void FUN_004f6bf0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f6bf0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  *(uint *)(0x01ED78C8 + 0x14d164) = 0;
  for (iVar1 = param_1[0x50f]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14c)) {
    if (*param_1 == *(int *)(iVar1 + 0x2c)) {
      if (1999 < *(int *)(0x01ED78C8 + 0x14d164)) {
        _DAT_01d71de0 = "..\\core\\mission.cpp";
        _DAT_01d71de4 = 0x394;
        FUN_004e4330("CDemonMission::buildSetActorList - Too many actors in current set!");
      }
      iVar2 = 0x01ED78C8;
      *(int *)(0x01ED78C8 + 0x14d168 + *(int *)(0x01ED78C8 + 0x14d164) * 4) = iVar1;
      *(int *)(iVar2 + 0x14d164) = *(int *)(iVar2 + 0x14d164) + 1;
    }
  }
  FUN_0053eda0(0x01ED78C8);
  FUN_0053b460(0x01ED78C8);
  return;
}
