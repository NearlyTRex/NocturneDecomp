// Name: FUN_005a6da0
// Address: 005a6da0
// Address Range: [[005a6da0, 005a700d]]
// Convention: unknown
// Signature: void FUN_005a6da0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a6da0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint auStackY_1018 [1011];
  uint uVar6;
  uint uStack_30;
  uint uStack_24;
  
  bVar5 = 0;
  if (*(int *)(param_1 + 0x27b0) == 0) {
    if (*(int *)(param_2 + 0x28) == 7) {
      *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005f8ec8;
      FUN_00408b40(param_1,param_2 + 0x1c);
      iVar2 = 0;
      uStack_30 = uStack_24;
      *(uint *)((int)&stack0xffffffd4 + (uint)bVar5 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffe0 + (uint)bVar5 * -8);
      *(uint *)(&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffe4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      do {
        iVar2 = iVar2 + 1;
        FUN_004b59e0(0x01C57074,&stack0xffffffd0,0,0x4000,0x4000,0,0xffff);
      } while (iVar2 < 5);
    }
    if (*(int *)(param_1 + 0xbe79c) == 0) {
      if ((*(int *)(param_2 + 0x28) == 1) &&
         (iVar2 = FUN_0040c600(*(uint *)(param_2 + 0x34),_DAT_01d1e2dc), iVar2 != 0)) {
        FUN_005247c0(param_1 + 0x158,10,1);
        iVar3 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x94))(iVar2);
        if (iVar3 != 0) {
          (**(code **)(*(int *)(iVar3 + 0x154) + 0x90))(iVar3,iVar2,0);
          iVar3 = FUN_0040c600(iVar3,_DAT_01d06b10);
          if (iVar3 != 0) {
            iVar4 = FUN_004f8c40(iVar3 + 0x1fae8,iVar2);
            if (iVar4 == iVar2) {
              FUN_004f8d00(iVar3 + 0x1fae8,iVar2,0);
              FUN_0051b160(0x01D2C900,iVar2);
            }
          }
        }
        FUN_004325b0(param_1,0,iVar2,0x3e4ccccd,0);
        FUN_004a1b70(0x01C51D80,"VampireBossBitesIt");
        FUN_00573a80(*(uint *)(param_1 + 0xbf3dc));
        FUN_0057d880(0x02C82A60,param_1,"voicudeath.wav @ 2.5");
        *(uint *)(param_1 + 0x2538) = 0;
        return;
      }
    }
    else {
      if (*(int *)(param_1 + 0xbe79c) != 2) {
        *(uint *)(param_2 + 4) = 0;
        return;
      }
      fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
      *(float *)(param_1 + 0x2538) = fVar1;
      if (fVar1 < (float)_DAT_005f8ed0) {
        *(uint *)(param_1 + 0x2538) = 0x41c7fdf4;
      }
      iVar2 = FUN_0040cc60(0,2);
      if (iVar2 == 0) {
        uVar6 = 3;
      }
      else if (iVar2 == 1) {
        uVar6 = 4;
      }
      else {
        uVar6 = 5;
      }
      FUN_005247c0(param_1 + 0xc268,uVar6,1);
      iVar2 = FUN_005735a0(*(uint *)(param_1 + 0xbf3dc));
      if (iVar2 == 0) {
        uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"voicuhurt.wav");
        *(uint *)(param_1 + 0xbf3dc) = uVar6;
        return;
      }
    }
  }
  return;
}
