// Name: FUN_0046d110
// Address: 0046d110
// Address Range: [[0046d110, 0046d55a]]
// Convention: unknown
// Signature: void FUN_0046d110(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046d110(int param_1,float param_2)

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
  if (*(int *)(param_1 + 0x448) == 0) {
    uStack_54 = *(uint *)(param_1 + 0x454);
    uStack_4c = *(uint *)(param_1 + 0x45c);
    fStack_50 = *(float *)(param_1 + 0x458) + _DAT_005d1801;
    FUN_00472b50(&DAT_01fc9c68,param_1 + 0x454,auStack_68 + 5);
    auStack_68[2] = uStack_6c;
    auStack_68[(uint)bVar8 * -2 + 3] = auStack_68[(uint)bVar8 * -2];
    auStack_68[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         auStack_68[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    *(uint *)(param_1 + 0x448) = 1;
    *(uint *)(param_1 + 0x44c) = auStack_68[3];
  }
  if ((*(uint *)(param_1 + 0x438) & 0x7fffffff) == 0) {
    fVar2 = *(float *)(param_1 + 0x464) - param_2 * (float)_DAT_005d1805;
    *(float *)(param_1 + 0x464) = fVar2;
    *(float *)(param_1 + 0x24) = fVar2 * param_2 + *(float *)(param_1 + 0x24);
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
    puVar5 = auStack_9c;
    puVar6 = &uStack_84;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    }
    if (*(float *)(param_1 + 0x24) <
        *(float *)(param_1 + 0x44c) - (fStack_74 - fStack_80) * (float)_DAT_005d180d) {
      if (*(int *)(param_1 + 0x494) != 0) {
        FUN_00534800(0x01E661B8,0x42c80000,0,0,0x3f800000);
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,param_1 + 0x470);
      }
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x44c);
      if (*(int *)(param_1 + 0x490) == 0) {
        iVar4 = 0;
        do {
          fStack_3c = (float)FUN_0040cf60(0xbf000000,0x3f000000);
          fStack_14 = fStack_3c;
          fStack_38 = (float)FUN_0040cf60(0xbf000000,0x3f000000);
          fStack_14 = fStack_38;
          fStack_14 = (float)FUN_0040cf60(0xbf000000,0x3f000000);
          fStack_3c = fStack_3c + *(float *)(param_1 + 0x20);
          fStack_38 = fStack_38 + *(float *)(param_1 + 0x24);
          fStack_34 = fStack_14 + *(float *)(param_1 + 0x28);
          FUN_0049d230(0x01C3DEB4,&fStack_3c,0x3f000000,0,0xffff);
          fStack_18 = (float)FUN_0040cf60(0x3f490fdb,0x3fc90fdb);
          fStack_14 = fStack_18;
          fStack_14 = (float)FUN_0040cf60(0,0x40c90fdb);
          fVar9 = (float10)fcos((float10)fStack_14);
          fVar10 = (float10)fcos((float10)fStack_18);
          fVar11 = (float10)fsin((float10)fStack_14);
          fVar12 = (float10)fsin((float10)fStack_18);
          fStack_1c = (float)fVar10;
          fStack_44 = (float)(fVar12 * (float10)_DAT_005d1815);
          fStack_48 = (float)(fVar9 * (float10)_DAT_005d1815 * (float10)fStack_1c);
          fStack_40 = (float)(fVar11 * (float10)_DAT_005d1815 * (float10)fStack_1c);
          uVar3 = FUN_0044fd20(0x1bd3848);
          iVar4 = iVar4 + 1;
          FUN_0049d5b0(0x01C3DEB4,(float *)(param_1 + 0x20),&fStack_48,uVar3);
        } while (iVar4 < 10);
      }
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x458);
      fStack_14 = (float)FUN_0040cf60(0,0x3f800000);
      *(float *)(param_1 + 0x20) =
           fStack_14 * *(float *)(param_1 + 0x444) + *(float *)(param_1 + 0x454);
      fStack_14 = (float)FUN_0040cf60(0,0x3f800000);
      *(float *)(param_1 + 0x28) =
           fStack_14 * *(float *)(param_1 + 0x444) + *(float *)(param_1 + 0x45c);
      *(uint *)(param_1 + 0x468) = 0;
      *(uint *)(param_1 + 0x464) = *(uint *)(param_1 + 0x468);
      *(uint *)(param_1 + 0x460) = *(uint *)(param_1 + 0x464);
      fStack_14 = (float)FUN_0040cf60(*(uint *)(param_1 + 0x43c),
                                      *(uint *)(param_1 + 0x440));
      *(float *)(param_1 + 0x438) = fStack_14;
    }
    iStack_20 = param_1 + 0x20;
    iVar4 = 0;
    iVar7 = 0;
    while( true ) {
      if (*(int *)(0x01E661B8 + 0x14f0a8) <= iVar4) break;
      iVar1 = *(int *)(iVar7 + 0x14f0ac + 0x01E661B8);
      FUN_004222d0(auStack_d8);
      uStack_d4 = *(uint *)(param_1 + 0x46c);
      iStack_a4 = param_1;
      iStack_a0 = param_1;
      iVar7 = iVar7 + 4;
      iVar4 = iVar4 + 1;
      (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x108))(iVar1,iStack_20,0x3f800000,auStack_d8);
    }
  }
  else if ((*(int *)(param_1 + 0x434) != 0) &&
          (param_2 = *(float *)(param_1 + 0x438) - param_2, *(float *)(param_1 + 0x438) = param_2,
          param_2 < 0.0)) {
    *(uint *)(param_1 + 0x438) = 0;
    return;
  }
  return;
}
