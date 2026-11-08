// Name: FUN_005a7cf0
// Address: 005a7cf0
// Address Range: [[005a7cf0, 005a7e04]]
// Convention: unknown
// Signature: void FUN_005a7cf0(int param_1,int param_2)

#include "nocturne.h"

void FUN_005a7cf0(int param_1,int param_2)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  int aiStackY_1010 [964];
  int *piVar5;
  byte auStack_64 [48];
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  int iStack_28;
  int aiStack_24 [5];
  int iStack_10;
  
  bVar4 = 0;
  iStack_10 = param_1 + param_2 * 0x78;
  iVar1 = FUN_0040c8f0(*(uint *)(iStack_10 + 0x2620),DAT_007bc9e8);
  if (iVar1 != 0) {
    iStack_28 = FUN_005b8c30(iVar1 + 0x32c,"BROOM.KFM");
    if (iStack_28 == 0) {
      piVar5 = aiStack_24 + 2;
      aiStack_24[1] = 0x3fc7ae14;
      aiStack_24[0] = 0x3fc7ae14;
      uStack_34 = 0x3d8f5c29;
      aiStack_24[2] = iStack_28;
      aiStack_24[(uint)bVar4 * -2 + 3] = aiStack_24[(uint)bVar4 * -2];
      aiStack_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           aiStack_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      uStack_30 = 0xbe19999a;
      uStack_2c = 0;
      FUN_00591c10(auStack_64,&uStack_34,piVar5);
      FUN_005916b0(auStack_64,*(int *)(iStack_10 + 0x2618) * 0x30 + param_1 + 0x1134);
      puVar2 = (uint *)&stack0xffffff3c;
      goto LAB_005a7d6b;
    }
  }
  FUN_00429120(param_1,param_2);
  puVar2 = (uint *)&stack0xffffff0c;
LAB_005a7d6b:
  puVar3 = (uint *)&stack0xffffff6c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  puVar2 = (uint *)&stack0xffffff6c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar4 * -2 + 1;
  }
  return;
}
