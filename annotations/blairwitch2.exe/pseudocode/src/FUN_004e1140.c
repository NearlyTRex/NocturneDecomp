// Name: FUN_004e1140
// Address: 004e1140
// Address Range: [[004e1140, 004e1338]]
// Convention: unknown
// Signature: void FUN_004e1140(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e1140(int param_1,int param_2)

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
  fVar1 = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x25a8) = fVar1;
  if (0.0 < fVar1) {
    FUN_00551050(*(uint *)(param_1 + 0x10b00));
    iVar2 = FUN_00550b70(*(uint *)(param_1 + 0x10afc));
    if (iVar2 == 0) {
      if ((float)_DAT_005dbebe <= *(float *)(param_1 + 0x2824)) {
        if (_DAT_005dbec6 <= (double)*(float *)(param_1 + 0x2824)) {
          puVar3 = &DAT_005dbe89;
        }
        else {
          puVar3 = &DAT_005dbe85;
        }
      }
      else {
        puVar3 = &DAT_005dbe81;
      }
      FUN_005b7790(auStack_f0,"l%s-shot?.wav",puVar3);
      uVar4 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,auStack_f0);
      *(uint *)(param_1 + 0x10afc) = uVar4;
    }
    FUN_00503620(param_1 + 0x2b4,3,1);
  }
  else {
    *(uint *)(param_1 + 0x25a8) = 0;
    iVar2 = FUN_005035c0(param_1 + 0x2b4);
    if ((*(int *)(iVar2 + 0x24) != 5) && (*(int *)(iVar2 + 0x24) != 4)) {
      FUN_00503620(param_1 + 0x2b4,4,1);
    }
    FUN_00551050(*(uint *)(param_1 + 0x10afc));
    FUN_00551050(*(uint *)(param_1 + 0x10b00));
    if ((float)_DAT_005dbebe <= *(float *)(param_1 + 0x2824)) {
      if (_DAT_005dbec6 <= (double)*(float *)(param_1 + 0x2824)) {
        puVar3 = &DAT_005dbe89;
      }
      else {
        puVar3 = &DAT_005dbe85;
      }
    }
    else {
      puVar3 = &DAT_005dbe81;
    }
    FUN_005b7790(auStack_8c,"l%s-die?.wav",puVar3);
    uVar4 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,auStack_8c);
    *(uint *)(param_1 + 0x10afc) = uVar4;
  }
  FUN_00408d70(param_1,param_2 + 0x1c);
  auStack_24[2] = uStack_28;
  auStack_24[(uint)bVar5 * -2 + 3] = auStack_24[(uint)bVar5 * -2];
  auStack_24[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       auStack_24[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  FUN_004c9850(0x01CB8284,auStack_24 + 2,0,10,*(uint *)(param_1 + 0x280c));
  FUN_00488890(param_1,param_2);
  return;
}
