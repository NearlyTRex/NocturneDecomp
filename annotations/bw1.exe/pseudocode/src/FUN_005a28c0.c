// Name: FUN_005a28c0
// Address: 005a28c0
// Address Range: [[005a28c0, 005a2abd]]
// Convention: unknown
// Signature: void FUN_005a28c0(int param_1)

#include "nocturne.h"

void FUN_005a28c0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *unaff_ESI;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float10 fVar8;
  uint auStackY_1028 [955];
  byte auStack_130 [48];
  byte auStack_100 [48];
  uint auStack_d0 [12];
  uint auStack_a0 [12];
  uint auStack_70 [6];
  uint auStack_58 [6];
  uint uStack_40;
  uint auStack_3c [5];
  uint uStack_28;
  uint auStack_1c [3];
  float fStack_10;
  
  bVar7 = 0;
  fStack_10 = (float)FUN_005a2ae0(param_1,0);
  fVar8 = (float10)fStack_10;
  uVar1 = FUN_005c03a0();
  fStack_10 = (float)(int)ROUND(fVar8);
  iVar2 = FUN_00468900(uVar1);
  puVar5 = (uint *)(*(int *)(iVar2 + 0x350) + (int)fStack_10 * 0x18);
  puVar6 = auStack_70;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  iVar2 = FUN_00468900(param_1 + 0x584);
  if (0 < *(int *)(iVar2 + 0x110)) {
    FUN_005b5760(auStack_130,&DAT_02c8af28,param_1 + 0x578);
    FUN_005b5620(auStack_100,&DAT_02c8af28,param_1 + 0x30);
    FUN_005b5200(auStack_130,auStack_100);
    puVar5 = auStack_d0;
    puVar6 = auStack_a0;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    fStack_10 = (float)FUN_005a2ae0(param_1,1);
    fVar8 = (float10)fStack_10;
    FUN_005c03a0();
    fStack_10 = (float)(int)ROUND(fVar8);
    iVar2 = FUN_00468900(param_1 + 0x584);
    iVar4 = 0;
    puVar5 = (uint *)(*(int *)(iVar2 + 0x350) + (int)fStack_10 * 0x18);
    puVar6 = auStack_58;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    do {
      FUN_00420570(auStack_58,iVar4,auStack_a0);
      uStack_40 = uStack_28;
      auStack_3c[(uint)bVar7 * -2] = auStack_3c[(uint)bVar7 * -2 + 6];
      auStack_3c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           auStack_3c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
      FUN_005b5080(&uStack_40);
      auStack_1c[0] = auStack_3c[2];
      auStack_3c[(uint)bVar7 * -2 + 9] = auStack_3c[(uint)bVar7 * -2 + 3];
      auStack_3c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
           auStack_3c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      iVar4 = iVar4 + 1;
      FUN_00420500(auStack_70,auStack_3c + 8);
    } while (iVar4 < 8);
  }
  puVar5 = auStack_70;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar7 * -2 + 1;
  }
  return;
}
