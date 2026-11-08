// Name: FUN_004fe510
// Address: 004fe510
// Address Range: [[004fe510, 004fe708]]
// Convention: unknown
// Signature: void FUN_004fe510(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fe510(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  byte *puVar3;
  uint uVar4;
  byte bVar5;
  uint auStackY_1010 [957];
  byte auStack_f0 [100];
  byte auStack_8c [100];
  uint uStack_28;
  uint auStack_24 [5];
  
  bVar5 = 0;
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2538) = fVar1;
  if (0.0 < fVar1) {
    FUN_00573a80(*(uint *)(param_1 + 0xc270));
    iVar2 = FUN_005735a0(*(uint *)(param_1 + 0xc26c));
    if (iVar2 == 0) {
      if ((float)_DAT_005e6ccb <= *(float *)(param_1 + 0x27b8)) {
        if (_DAT_005e6cd3 <= (double)*(float *)(param_1 + 0x27b8)) {
          puVar3 = &DAT_005e6c96;
        }
        else {
          puVar3 = &DAT_005e6c92;
        }
      }
      else {
        puVar3 = &DAT_005e6c8e;
      }
      FUN_005bfb40(auStack_f0,"l%s-shot?.wav",puVar3);
      uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,auStack_f0);
      *(uint *)(param_1 + 0xc26c) = uVar4;
    }
    FUN_005247c0(param_1 + 0x158,3,1);
  }
  else {
    *(uint *)(param_1 + 0x2538) = 0;
    iVar2 = FUN_00524770(param_1 + 0x158);
    if ((*(int *)(iVar2 + 0x24) != 5) && (*(int *)(iVar2 + 0x24) != 4)) {
      FUN_005247c0(param_1 + 0x158,4,1);
    }
    FUN_00573a80(*(uint *)(param_1 + 0xc26c));
    FUN_00573a80(*(uint *)(param_1 + 0xc270));
    if ((float)_DAT_005e6ccb <= *(float *)(param_1 + 0x27b8)) {
      if (_DAT_005e6cd3 <= (double)*(float *)(param_1 + 0x27b8)) {
        puVar3 = &DAT_005e6c96;
      }
      else {
        puVar3 = &DAT_005e6c92;
      }
    }
    else {
      puVar3 = &DAT_005e6c8e;
    }
    FUN_005bfb40(auStack_8c,"l%s-die?.wav",puVar3);
    uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,auStack_8c);
    *(uint *)(param_1 + 0xc26c) = uVar4;
  }
  FUN_00408b40(param_1,param_2 + 0x1c);
  auStack_24[2] = uStack_28;
  auStack_24[(uint)bVar5 * -2 + 3] = auStack_24[(uint)bVar5 * -2];
  auStack_24[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       auStack_24[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  FUN_004e6060(0x01CD0E3C,auStack_24 + 2,0,10,*(uint *)(param_1 + 0x27a0));
  FUN_004a0f00(param_1,param_2);
  return;
}
