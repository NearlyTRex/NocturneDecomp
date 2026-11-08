// Name: FUN_00433cd0
// Address: 00433cd0
// Address Range: [[00433cd0, 00433d4e]]
// Convention: unknown
// Signature: undefined4 FUN_00433cd0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00433cd0(int param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
  if (iVar1 < 2) {
    if (*(char *)(param_1 + 0x24a8) != '\0') {
      uVar2 = FUN_00524a00(param_1 + 0x158,"STAND",0);
      iVar1 = FUN_00524150(uVar2);
      if (-1 < iVar1) {
        fVar3 = (float)FUN_00524a40(param_1 + 0x158,iVar1);
        if ((float)_DAT_005d5df7 < fVar3) {
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
