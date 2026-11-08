// Name: FUN_004fc4c0
// Address: 004fc4c0
// Address Range: [[004fc4c0, 004fc562]]
// Convention: unknown
// Signature: void FUN_004fc4c0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fc4c0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  *(uint *)(0x01E661B8 + 0x14d164) = 0;
  for (iVar1 = param_1[0x445]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14c)) {
    if (*param_1 == *(int *)(iVar1 + 0x2c)) {
      if (1999 < *(int *)(0x01E661B8 + 0x14d164)) {
        _DAT_01d046a0 = "..\\core\\mission.cpp";
        _DAT_01d046a4 = 0x391;
        FUN_004e4500("CDemonMission::buildSetActorList - Too many actors in current set!");
      }
      iVar2 = 0x01E661B8;
      *(int *)(0x01E661B8 + 0x14d168 + *(int *)(0x01E661B8 + 0x14d164) * 4) = iVar1;
      *(int *)(iVar2 + 0x14d164) = *(int *)(iVar2 + 0x14d164) + 1;
    }
  }
  FUN_00537fc0(0x01E661B8);
  FUN_00534820(0x01E661B8);
  return;
}
