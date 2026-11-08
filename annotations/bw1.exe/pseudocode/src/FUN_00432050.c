// Name: FUN_00432050
// Address: 00432050
// Address Range: [[00432050, 0043219d]]
// Convention: unknown
// Signature: void FUN_00432050(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00432050(int param_1,int param_2,uint param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  float local_10;
  
  if (param_2 == 0) {
    if (((*(int *)(param_1 + 0x273c) != 0) && (*(int *)(param_1 + 0x2704) != 0)) &&
       (*(char *)(param_1 + 0x24a8) != '\0')) {
      uVar4 = FUN_00524a00(param_1 + 0x158,"?STAND" + 1,0);
      iVar5 = FUN_00524150(uVar4);
      if (-1 < iVar5) {
        FUN_00524850(param_1 + 0x158,"STAND",1);
      }
    }
    *(uint *)(param_1 + 0x273c) = 0;
    (**(code **)(*(int *)(param_1 + 0x154) + 0x138))(param_1,0xbf800000);
  }
  else {
    *(uint *)(param_1 + 0x273c) = 1;
    iVar5 = FUN_0040c550(param_2,"CCharacter");
    if (iVar5 == 0) {
      fVar1 = *(float *)(param_1 + 0x20) - *(float *)(param_2 + 0x20);
      fVar3 = *(float *)(param_1 + 0x24) - *(float *)(param_2 + 0x24);
      fVar2 = *(float *)(param_1 + 0x28) - *(float *)(param_2 + 0x28);
      local_10 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) * (float)_DAT_005d5b67;
      if (_DAT_005d5b6f <= local_10) {
        if (_DAT_005d5b73 < local_10) {
          local_10 = 60.0;
        }
      }
      else {
        local_10 = 5.0;
      }
      (**(code **)(*(int *)(param_1 + 0x154) + 0x138))(param_1,local_10);
    }
    else {
      (**(code **)(*(int *)(param_1 + 0x154) + 0x138))(param_1,0xbf800000);
    }
  }
  *(int *)(param_1 + 0x2704) = param_2;
  *(uint *)(param_1 + 0x2708) = param_3;
  *(uint *)(param_1 + 0x270c) = param_4;
  return;
}
