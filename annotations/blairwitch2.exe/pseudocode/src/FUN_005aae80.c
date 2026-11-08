// Name: FUN_005aae80
// Address: 005aae80
// Address Range: [[005aae80, 005ab250]]
// Convention: unknown
// Signature: void FUN_005aae80(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005aae80(int param_1,float param_2)

{
  int iVar1;
  float *pfVar2;
  byte bVar3;
  float afStackY_10b8 [990];
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float *pfVar10;
  float *pfVar11;
  byte *puVar12;
  uint uVar13;
  byte auStack_10c [4];
  float fStack_108;
  uint uStack_d8;
  uint uStack_d4;
  float fStack_d0;
  float afStack_cc [4];
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float afStack_a0 [3];
  uint uStack_94;
  uint uStack_88;
  float afStack_7c [3];
  float afStack_70 [3];
  float afStack_64 [3];
  uint uStack_58;
  float fStack_4c;
  float fStack_48;
  uint uStack_44;
  float afStack_40 [3];
  float fStack_34;
  float fStack_30;
  uint uStack_2c;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar3 = 0;
  if (0.0 < *(float *)(param_1 + 0x11430)) {
    *(float *)(param_1 + 0x11430) = *(float *)(param_1 + 0x11430) - param_2;
    FUN_004222d0(auStack_10c);
    fStack_108 = *(float *)(param_1 + 0x11440) * param_2;
    iStack_20 = 0;
    iStack_1c = 0;
    pfVar2 = (float *)(param_1 + 0x11430);
    uStack_d8 = *(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    iStack_18 = param_1 + 0x264;
    iStack_24 = param_1 + 0x1134;
    *(uint *)(param_1 + 0x113d0) = 0;
    uStack_d4 = uStack_d8;
    for (; iStack_20 < *(int *)(*(int *)(param_1 + 0x113b0) + 0x1d1f8); iStack_20 = iStack_20 + 1) {
      iVar1 = FUN_005a7ed0();
      if (iVar1 != 0) {
        iVar1 = FUN_005ba9e0(*(int *)(param_1 + 0x113b0) + 0x1d1fc + iStack_1c,"Bip01");
        if (iVar1 != 0) {
          FUN_00591530(&DAT_0265370c,iStack_24);
          afStack_64[0] = (float)uStack_94;
          afStack_cc[(uint)bVar3 * -2 + 0x1b] = afStack_cc[(uint)bVar3 * -2 + 0xf];
          afStack_cc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x1c] =
               afStack_cc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x10];
          FUN_00408cf0(param_1,afStack_cc + 0x1a);
          afStack_70[0] = (float)uStack_58;
          afStack_cc[(uint)bVar3 * -2 + 0x18] = afStack_cc[(uint)bVar3 * -2 + 0x1e];
          afStack_cc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x19] =
               afStack_cc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x1f];
          afStack_cc[2] = *(float *)(param_1 + 0x11434) * *pfVar2;
          afStack_cc[3] = *(float *)(param_1 + 0x11438) * *pfVar2;
          fStack_bc = *(float *)(param_1 + 0x1143c) * *pfVar2;
          fStack_b8 = afStack_cc[2];
          afStack_cc[(uint)bVar3 * -2 + 6] = afStack_cc[(uint)bVar3 * -2 + 3];
          afStack_cc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
               afStack_cc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
          fStack_ac = fStack_b8 * _DAT_005f0c3e;
          fStack_a8 = fStack_b4 * _DAT_005f0c3e;
          fStack_a4 = fStack_b0 * _DAT_005f0c3e;
          fStack_14 = (float)FUN_0040cf60(0x3f4ccccd,0x3fc00000);
          fStack_4c = fStack_ac;
          afStack_cc[(uint)bVar3 * -2 + 0x21] = afStack_cc[(uint)bVar3 * -2 + 9];
          afStack_cc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x22] =
               afStack_cc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10];
          uVar13 = 2;
          fStack_34 = fStack_4c;
          puVar12 = &DAT_0265370c;
          uStack_2c = uStack_44;
          pfVar11 = afStack_cc + 0x14;
          pfVar10 = afStack_cc + 0x17;
          uVar9 = 0x3f800000;
          uVar8 = 0x3f800000;
          uVar7 = 0x3f800000;
          uVar6 = 0;
          uVar5 = 0x3f800000;
          fStack_30 = fStack_14 + fStack_48;
          uVar4 = 0x3f000000;
          afStack_7c[0] = fStack_4c;
          afStack_cc[(uint)bVar3 * -2 + 0x15] = afStack_cc[(uint)bVar3 * -2 + 0x27];
          afStack_cc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x16] =
               afStack_cc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x28];
          fStack_14 = (float)FUN_0040cf60(uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,pfVar10,pfVar11,
                                          puVar12,uVar13);
          fStack_14 = (float)FUN_0040cf60(0x3f800000,0x3fc00000,0x3f000000,0,fStack_14);
          FUN_005a8300(iStack_18,fStack_14);
          iVar1 = FUN_0040cfc0(0,0x32);
          if (iVar1 == 0) {
            fStack_d0 = *(float *)(param_1 + 0x11434) * *pfVar2;
            pfVar11 = afStack_cc + 0x17;
            afStack_cc[0] = *(float *)(param_1 + 0x11438) * *pfVar2;
            afStack_cc[1] = *(float *)(param_1 + 0x1143c) * *pfVar2;
            afStack_a0[0] = fStack_d0;
            afStack_cc[(uint)bVar3 * -2 + 0xc] = afStack_cc[(uint)bVar3 * -2];
            afStack_cc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd] =
                 afStack_cc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
            FUN_00408d70(param_1,pfVar11);
            afStack_40[0] = (float)uStack_88;
            afStack_cc[(uint)bVar3 * -2 + 0x24] = afStack_cc[(uint)bVar3 * -2 + 0x12];
            afStack_cc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x25] =
                 afStack_cc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x13];
            FUN_004c9850(0x01CB8284,afStack_cc + 0x23,afStack_cc + 0xb,1,
                         *(uint *)(param_1 + 0x280c));
          }
        }
      }
      iStack_24 = iStack_24 + 0x30;
      iStack_1c = iStack_1c + 0x24;
    }
    return;
  }
  *(uint *)(param_1 + 0x11430) = 0;
  FUN_0059d880(param_1 + 0x10af8,"BurnComplete");
  return;
}
