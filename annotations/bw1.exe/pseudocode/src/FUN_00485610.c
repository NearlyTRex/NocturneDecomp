// Name: FUN_00485610
// Address: 00485610
// Address Range: [[00485610, 00485a5a]]
// Convention: unknown
// Signature: void FUN_00485610(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00485610(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  uint auStackY_1054 [986];
  byte auStack_d8 [4];
  uint uStack_d4;
  int iStack_a4;
  int iStack_a0;
  uint auStack_9c [6];
  uint uStack_84;
  float fStack_80;
  float fStack_74;
  uint uStack_6c;
  uint auStack_68 [5];
  uint uStack_54;
  float fStack_50;
  uint uStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar8 = 0;
  if (*(int *)(param_1 + 0x2ec) == 0) {
    uStack_54 = *(uint *)(param_1 + 0x2f8);
    uStack_4c = *(uint *)(param_1 + 0x300);
    fStack_50 = *(float *)(param_1 + 0x2fc) + _DAT_005db5fa;
    FUN_0048b040(&DAT_01fe5c1c,param_1 + 0x2f8,auStack_68 + 5);
    auStack_68[2] = uStack_6c;
    auStack_68[(uint)bVar8 * -2 + 3] = auStack_68[(uint)bVar8 * -2];
    auStack_68[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         auStack_68[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    *(uint *)(param_1 + 0x2ec) = 1;
    *(uint *)(param_1 + 0x2f0) = auStack_68[3];
  }
  if ((*(uint *)(param_1 + 0x2dc) & 0x7fffffff) == 0) {
    fVar2 = *(float *)(param_1 + 0x308) - param_2 * (float)_DAT_005db5fe;
    *(float *)(param_1 + 0x308) = fVar2;
    *(float *)(param_1 + 0x24) = fVar2 * param_2 + *(float *)(param_1 + 0x24);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
    puVar5 = auStack_9c;
    puVar6 = &uStack_84;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    }
    if (*(float *)(param_1 + 0x24) <
        *(float *)(param_1 + 0x2f0) - (fStack_74 - fStack_80) * (float)_DAT_005db606) {
      if (*(int *)(param_1 + 0x338) != 0) {
        FUN_00555ab0(0x01E82168,0x42c80000,0,0,0x3f800000);
        (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,param_1 + 0x314);
      }
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x2f0);
      if (*(int *)(param_1 + 0x334) == 0) {
        iVar4 = 0;
        do {
          fStack_3c = (float)FUN_0040cc00(0xbf000000,0x3f000000);
          fStack_14 = fStack_3c;
          fStack_38 = (float)FUN_0040cc00(0xbf000000,0x3f000000);
          fStack_14 = fStack_38;
          fStack_14 = (float)FUN_0040cc00(0xbf000000,0x3f000000);
          fStack_3c = fStack_3c + *(float *)(param_1 + 0x20);
          fStack_38 = fStack_38 + *(float *)(param_1 + 0x24);
          fStack_34 = fStack_14 + *(float *)(param_1 + 0x28);
          FUN_004b5b30(0x01C57074,&fStack_3c,0x3f000000,0,0xffff);
          fStack_18 = (float)FUN_0040cc00(0x3f490fdb,0x3fc90fdb);
          fStack_14 = fStack_18;
          fStack_14 = (float)FUN_0040cc00(0,0x40c90fdb);
          fVar9 = (float10)fcos((float10)fStack_14);
          fVar10 = (float10)fcos((float10)fStack_18);
          fVar11 = (float10)fsin((float10)fStack_14);
          fVar12 = (float10)fsin((float10)fStack_18);
          fStack_1c = (float)fVar10;
          fStack_44 = (float)(fVar12 * (float10)_DAT_005db60e);
          fStack_48 = (float)(fVar9 * (float10)_DAT_005db60e * (float10)fStack_1c);
          fStack_40 = (float)(fVar11 * (float10)_DAT_005db60e * (float10)fStack_1c);
          uVar3 = FUN_00468900(0x1beee04);
          iVar4 = iVar4 + 1;
          FUN_004b5eb0(0x01C57074,(float *)(param_1 + 0x20),&fStack_48,uVar3);
        } while (iVar4 < 10);
      }
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x2fc);
      fStack_14 = (float)FUN_0040cc00(0,0x3f800000);
      *(float *)(param_1 + 0x20) =
           fStack_14 * *(float *)(param_1 + 0x2e8) + *(float *)(param_1 + 0x2f8);
      fStack_14 = (float)FUN_0040cc00(0,0x3f800000);
      *(float *)(param_1 + 0x28) =
           fStack_14 * *(float *)(param_1 + 0x2e8) + *(float *)(param_1 + 0x300);
      *(uint *)(param_1 + 0x30c) = 0;
      *(uint *)(param_1 + 0x308) = *(uint *)(param_1 + 0x30c);
      *(uint *)(param_1 + 0x304) = *(uint *)(param_1 + 0x308);
      fStack_14 = (float)FUN_0040cc00(*(uint *)(param_1 + 0x2e0),
                                      *(uint *)(param_1 + 0x2e4));
      *(float *)(param_1 + 0x2dc) = fStack_14;
    }
    iStack_20 = param_1 + 0x20;
    iVar4 = 0;
    iVar7 = 0;
    while( true ) {
      if (*(int *)(0x01E82168 + 0x14f0a8) <= iVar4) break;
      iVar1 = *(int *)(iVar7 + 0x14f0ac + 0x01E82168);
      FUN_0042c010(auStack_d8);
      uStack_d4 = *(uint *)(param_1 + 0x310);
      iStack_a4 = param_1;
      iStack_a0 = param_1;
      iVar7 = iVar7 + 4;
      iVar4 = iVar4 + 1;
      (**(code **)(*(int *)(iVar1 + 0x154) + 0x100))(iVar1,iStack_20,0x3f800000,auStack_d8);
    }
  }
  else if ((*(int *)(param_1 + 0x2d8) != 0) &&
          (param_2 = *(float *)(param_1 + 0x2dc) - param_2, *(float *)(param_1 + 0x2dc) = param_2,
          param_2 < 0.0)) {
    *(uint *)(param_1 + 0x2dc) = 0;
    return;
  }
  return;
}
