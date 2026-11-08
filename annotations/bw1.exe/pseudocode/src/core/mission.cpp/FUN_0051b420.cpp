// Name: FUN_0051b420
// Address: 0051b420
// Address Range: [[0051b420, 0051b4c2]]
// Convention: unknown
// Signature: void FUN_0051b420(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051b420(int *param_1)

{
  int iVar1;
  int iVar2;
  
  *(uint *)(0x01E82168 + 0x14d164) = 0;
  for (iVar1 = param_1[0x446]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14c)) {
    if (*param_1 == *(int *)(iVar1 + 0x2c)) {
      if (1999 < *(int *)(0x01E82168 + 0x14d164)) {
        _DAT_01d1d400 = "..\\core\\mission.cpp";
        _DAT_01d1d404 = 0x394;
        FUN_005030e0("CDemonMission::buildSetActorList - Too many actors in current set!");
      }
      iVar2 = 0x01E82168;
      *(int *)(0x01E82168 + 0x14d168 + *(int *)(0x01E82168 + 0x14d164) * 4) = iVar1;
      *(int *)(iVar2 + 0x14d164) = *(int *)(iVar2 + 0x14d164) + 1;
    }
  }
  FUN_005593e0(0x01E82168);
  FUN_00555ad0(0x01E82168);
  return;
}
