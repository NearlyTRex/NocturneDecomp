// Name: FUN_004331a0
// Address: 004331a0
// Address Range: [[004331a0, 0043321e]]
// Convention: unknown
// Signature: undefined4 FUN_004331a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004331a0(int param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
  if (iVar1 < 2) {
    if (*(char *)(param_1 + 0x24a8) != '\0') {
      uVar2 = FUN_004fc310(param_1 + 0x158,"STAND",0);
      iVar1 = FUN_004fba50(uVar2);
      if (-1 < iVar1) {
        fVar3 = (float)FUN_004fc350(param_1 + 0x158,iVar1);
        if ((float)_DAT_005b873e < fVar3) {
          return 0;
        }
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
