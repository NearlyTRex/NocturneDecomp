// Name: FUN_005a0380
// Address: 005a0380
// Address Range: [[005a0380, 005a0772]]
// Convention: unknown
// Signature: void FUN_005a0380(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a0380(int param_1,float param_2)

{
  int iVar1;
  float *pfVar2;
  byte bVar3;
  float afStackY_10bc [990];
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
  byte auStack_110 [4];
  float fStack_10c;
  uint uStack_dc;
  uint uStack_d8;
  float fStack_d4;
  float afStack_d0 [4];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  uint uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float afStack_a4 [3];
  float afStack_98 [3];
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float afStack_80 [3];
  float afStack_74 [3];
  float fStack_68;
  float fStack_64;
  uint uStack_60;
  uint uStack_5c;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  uint uStack_44;
  uint uStack_38;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float *pfStack_18;
  float fStack_14;
  
  bVar3 = 0;
  if (0.0 < *(float *)(param_1 + 0x11430)) {
    *(float *)(param_1 + 0x11430) = *(float *)(param_1 + 0x11430) - param_2;
    FUN_004222d0(auStack_110);
    fStack_10c = *(float *)(param_1 + 0x11440) * param_2;
    uStack_dc = *(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    uStack_d8 = uStack_dc;
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x110))(param_1,auStack_110);
    iStack_20 = 0;
    iStack_24 = 0;
    iStack_1c = param_1 + 0x1134;
    pfStack_18 = (float *)(param_1 + 0x11434);
    iStack_28 = param_1 + 0x264;
    *(uint *)(param_1 + 0x113d0) = 0;
    pfVar2 = (float *)(param_1 + 0x11430);
    for (; iStack_20 < *(int *)(*(int *)(param_1 + 0x113b0) + 0x1d1f8); iStack_20 = iStack_20 + 1) {
      iVar1 = FUN_005a7ed0();
      if (iVar1 != 0) {
        iVar1 = FUN_005ba9e0(*(int *)(param_1 + 0x113b0) + 0x1d1fc + iStack_24,"Bip01");
        if (iVar1 != 0) {
          fStack_14 = (float)FUN_0040cf60(0,0x3f800000);
          if ((float)_DAT_005efb87 < fStack_14) {
            FUN_00591530(&DAT_0265370c,iStack_1c);
            afStack_74[0] = (float)uStack_5c;
            afStack_d0[(uint)bVar3 * -2 + 0x18] = afStack_d0[(uint)bVar3 * -2 + 0x1e];
            afStack_d0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x19] =
                 afStack_d0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x1f];
            FUN_00408cf0(param_1,afStack_d0 + 0x17);
            pfVar11 = pfStack_18;
            afStack_80[0] = (float)uStack_44;
            afStack_d0[(uint)bVar3 * -2 + 0x15] = afStack_d0[(uint)bVar3 * -2 + 0x24];
            afStack_d0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x16] =
                 afStack_d0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x25];
            fStack_50 = *pfVar11 * *pfVar2;
            fStack_4c = pfVar11[1] * *pfVar2;
            fStack_48 = pfVar11[2] * *pfVar2;
            afStack_d0[2] = *pfVar11 * *pfVar2;
            afStack_d0[(uint)bVar3 * -2 + 3] = afStack_d0[(uint)bVar3 * -2 + 0x21];
            afStack_d0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
                 afStack_d0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x22];
            fStack_b0 = afStack_d0[2] * _DAT_005efb7f;
            fStack_ac = afStack_d0[3] * _DAT_005efb7f;
            fStack_a8 = fStack_c0 * _DAT_005efb7f;
            fStack_14 = (float)FUN_0040cf60(0x3f4ccccd,0x3fc00000);
            fStack_bc = fStack_b0;
            afStack_d0[(uint)bVar3 * -2 + 6] = afStack_d0[(uint)bVar3 * -2 + 9];
            afStack_d0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
                 afStack_d0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10];
            uVar13 = 2;
            fStack_68 = fStack_bc;
            puVar12 = &DAT_0265370c;
            uStack_60 = uStack_b4;
            pfVar11 = afStack_d0 + 0xb;
            pfVar10 = afStack_d0 + 0x14;
            uVar9 = 0x3f800000;
            uVar8 = 0x3f800000;
            uVar7 = 0x3f800000;
            uVar6 = 0;
            uVar5 = 0x3f800000;
            fStack_64 = fStack_14 + fStack_b8;
            uVar4 = 0x3f000000;
            afStack_a4[0] = fStack_bc;
            afStack_d0[(uint)bVar3 * -2 + 0xc] = afStack_d0[(uint)bVar3 * -2 + 0x1b];
            afStack_d0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd] =
                 afStack_d0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x1c];
            fStack_14 = (float)FUN_0040cf60(uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,pfVar10,pfVar11,
                                            puVar12,uVar13);
            fStack_14 = (float)FUN_0040cf60(0x3f4ccccd,0x3f800000,0x3f000000,0,fStack_14);
            FUN_005a8300(iStack_28,fStack_14);
            iVar1 = FUN_0040cfc0(0,0x32);
            if (iVar1 == 0) {
              pfVar11 = afStack_d0 + 0x14;
              fStack_8c = *pfStack_18 * *pfVar2;
              fStack_88 = pfStack_18[1] * *pfVar2;
              fStack_84 = pfStack_18[2] * *pfVar2;
              fStack_d4 = *pfStack_18 * *pfVar2;
              afStack_d0[(uint)bVar3 * -2] = afStack_d0[(uint)bVar3 * -2 + 0x12];
              afStack_d0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
                   afStack_d0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x13];
              FUN_00408d70(param_1,pfVar11);
              afStack_98[0] = (float)uStack_38;
              afStack_d0[(uint)bVar3 * -2 + 0xf] = afStack_d0[(uint)bVar3 * -2 + 0x27];
              afStack_d0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x10] =
                   afStack_d0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x28];
              FUN_004c9850(0x01CB8284,afStack_d0 + 0xe,&fStack_d4,1,
                           *(uint *)(param_1 + 0x280c));
            }
          }
        }
      }
      iStack_1c = iStack_1c + 0x30;
      iStack_24 = iStack_24 + 0x24;
    }
    return;
  }
  *(uint *)(param_1 + 0x11430) = 0;
  FUN_0059d880(param_1 + 0x10af8,"BurnComplete");
  return;
}
