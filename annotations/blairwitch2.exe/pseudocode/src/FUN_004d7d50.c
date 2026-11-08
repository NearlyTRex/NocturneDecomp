// Name: FUN_004d7d50
// Address: 004d7d50
// Address Range: [[004d7d50, 004d7e8c]]
// Convention: unknown
// Signature: void FUN_004d7d50(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d7d50(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint auStackY_1010 [1009];
  char *pcVar6;
  uint uStack_28;
  uint uStack_1c;
  
  bVar5 = 0;
  FUN_00551050(*(uint *)(param_1 + 0x10af8));
  if (*(int *)(param_2 + 0x28) == 8) {
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005dab79;
    FUN_00408d70(param_1,param_2 + 0x1c);
    iVar4 = 0;
    uStack_1c = uStack_28;
    *(uint *)((int)&stack0xffffffe8 + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffdc + (uint)bVar5 * -8);
    *(uint *)(&stack0xffffffec + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xffffffe0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    do {
      iVar4 = iVar4 + 1;
      FUN_0049d090(0x01C3DEB4,&stack0xffffffe4,0,0x4000,0x4000,0,0xffff);
    } while (iVar4 < 5);
  }
  FUN_004d7ab0(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
  iVar4 = param_1 + 0x2b4;
  *(float *)(param_1 + 0x25a8) = fVar1;
  if (0.0 < fVar1) {
    FUN_00503620(iVar4,5,1);
    iVar4 = FUN_00550b70(*(uint *)(param_1 + 0x10afc));
    if (iVar4 != 0) goto LAB_004d7e52;
    pcVar6 = "imp-hurt?.wav";
  }
  else {
    *(uint *)(param_1 + 0x25a8) = 0;
    iVar2 = FUN_005035c0(iVar4);
    if ((*(int *)(iVar2 + 0x24) == 6) || (*(int *)(iVar2 + 0x24) == 7)) goto LAB_004d7e52;
    FUN_00503620(iVar4,6,1);
    FUN_00551050(*(uint *)(param_1 + 0x10afc));
    pcVar6 = "@imp-die?.wav" + 1;
  }
  uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,pcVar6);
  *(uint *)(param_1 + 0x10afc) = uVar3;
LAB_004d7e52:
  FUN_00488890(param_1,param_2);
  return;
}
