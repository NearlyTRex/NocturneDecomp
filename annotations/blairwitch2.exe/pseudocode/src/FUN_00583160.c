// Name: FUN_00583160
// Address: 00583160
// Address Range: [[00583160, 005833cd]]
// Convention: unknown
// Signature: void FUN_00583160(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00583160(int param_1,int param_2)

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
  if (*(int *)(param_1 + 0x281c) == 0) {
    if (*(int *)(param_2 + 0x28) == 7) {
      *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005edb6c;
      FUN_00408d70(param_1,param_2 + 0x1c);
      iVar2 = 0;
      uStack_30 = uStack_24;
      *(uint *)((int)&stack0xffffffd4 + (uint)bVar5 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffe0 + (uint)bVar5 * -8);
      *(uint *)(&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffe4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      do {
        iVar2 = iVar2 + 1;
        FUN_0049d090(0x01C3DEB4,&stack0xffffffd0,0,0x4000,0x4000,0,0xffff);
      } while (iVar2 < 5);
    }
    if (*(int *)(param_1 + 0xc2f3c) == 0) {
      if ((*(int *)(param_2 + 0x28) == 1) &&
         (iVar2 = FUN_0040c8f0(*(uint *)(param_2 + 0x34),_DAT_01d0557c), iVar2 != 0)) {
        FUN_00503620(param_1 + 0x2b4,10,1);
        iVar3 = (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x9c))(iVar2);
        if (iVar3 != 0) {
          (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x98))(iVar3,iVar2,0);
          iVar3 = FUN_0040c8f0(iVar3,_DAT_01cedf50);
          if (iVar3 != 0) {
            iVar4 = FUN_004db830(iVar3 + 0x2437c,iVar2);
            if (iVar4 == iVar2) {
              FUN_004db8e0(iVar3 + 0x2437c,iVar2,0);
              FUN_004fc200(0x01D182F0,iVar2);
            }
          }
        }
        FUN_00428b10(param_1,0,iVar2,0x3e4ccccd,0);
        FUN_004894f0(0x01C38BC0,"VampireBossBitesIt");
        FUN_00551050(*(uint *)(param_1 + 0xc3b7c));
        FUN_0055ae30(0x0264B290,param_1,"voicudeath.wav @ 2.5");
        *(uint *)(param_1 + 0x25a8) = 0;
        return;
      }
    }
    else {
      if (*(int *)(param_1 + 0xc2f3c) != 2) {
        *(uint *)(param_2 + 4) = 0;
        return;
      }
      fVar1 = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
      *(float *)(param_1 + 0x25a8) = fVar1;
      if (fVar1 < (float)_DAT_005edb74) {
        *(uint *)(param_1 + 0x25a8) = 0x41c7fdf4;
      }
      iVar2 = FUN_0040cfc0(0,2);
      if (iVar2 == 0) {
        uVar6 = 3;
      }
      else if (iVar2 == 1) {
        uVar6 = 4;
      }
      else {
        uVar6 = 5;
      }
      FUN_00503620(param_1 + 0x10af8,uVar6,1);
      iVar2 = FUN_00550b70(*(uint *)(param_1 + 0xc3b7c));
      if (iVar2 == 0) {
        uVar6 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"voicuhurt.wav");
        *(uint *)(param_1 + 0xc3b7c) = uVar6;
        return;
      }
    }
  }
  return;
}
