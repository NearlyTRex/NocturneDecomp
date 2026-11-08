// Name: FUN_004d4390
// Address: 004d4390
// Address Range: [[004d4390, 004d4557]]
// Convention: unknown
// Signature: void FUN_004d4390(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d4390(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint auStackY_1010 [1009];
  uint uVar5;
  uint uStack_28;
  uint uStack_1c;
  
  bVar4 = 0;
  FUN_00551050(*(uint *)(param_1 + 0x10af8));
  if (*(int *)(param_2 + 0x28) == 8) {
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005da6b1;
    FUN_00408d70(param_1,param_2 + 0x1c);
    iVar2 = 0;
    uStack_28 = uStack_1c;
    *(uint *)((int)&stack0xffffffdc + (uint)bVar4 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffe8 + (uint)bVar4 * -8);
    *(uint *)(&stack0xffffffe0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    do {
      iVar2 = iVar2 + 1;
      FUN_0049d090(0x01C3DEB4,&stack0xffffffd8,0,0x4000,0x4000,0,0xffff);
    } while (iVar2 < 5);
  }
  fVar1 = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
  iVar2 = param_1 + 0x2b4;
  *(float *)(param_1 + 0x25a8) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x25a8) = 0;
    iVar3 = FUN_005035c0(iVar2);
    iVar3 = *(int *)(iVar3 + 0x24);
    if ((((iVar3 != 4) && (iVar3 != 5)) && (iVar3 != 10)) && (iVar3 != 0xb)) {
      if (iVar3 < 6) {
        uVar5 = 4;
      }
      else {
        uVar5 = 10;
      }
      FUN_00503620(iVar2,uVar5,1);
      FUN_00551050(*(uint *)(param_1 + 0x10afc));
      uVar5 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"hotdemon-die.wav");
      *(uint *)(param_1 + 0x10afc) = uVar5;
      FUN_00488890(param_1,param_2);
      return;
    }
  }
  else {
    iVar2 = FUN_005035c0(iVar2);
    if ((*(int *)(iVar2 + 0x24) < 6) || (*(int *)(iVar2 + 0x24) == 0xf)) {
      uVar5 = 3;
    }
    else {
      uVar5 = 9;
    }
    FUN_00503620(param_1 + 0x2b4,uVar5,1);
    iVar2 = FUN_00550b70(*(uint *)(param_1 + 0x10afc));
    if (iVar2 == 0) {
      uVar5 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"hotdemon-hurt?.wav");
      *(uint *)(param_1 + 0x10afc) = uVar5;
      FUN_00488890(param_1,param_2);
      return;
    }
  }
  FUN_00488890(param_1,param_2);
  return;
}
