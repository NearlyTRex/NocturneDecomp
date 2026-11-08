// Name: FUN_00409f60
// Address: 00409f60
// Address Range: [[00409f60, 0040ac90]]
// Convention: unknown
// Signature: undefined4 FUN_00409f60(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00409f60(int param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  float10 fVar10;
  float afStackY_117c [879];
  float *pfVar11;
  float fStack_390;
  byte auStack_38c [60];
  byte auStack_350 [4];
  float fStack_34c;
  byte auStack_314 [4];
  float fStack_310;
  byte auStack_2d8 [60];
  uint auStack_29c [3];
  float fStack_290;
  uint uStack_28c;
  uint uStack_288;
  float fStack_280;
  float fStack_27c;
  uint uStack_278;
  byte auStack_260 [4];
  float fStack_25c;
  uint auStack_224 [6];
  uint auStack_20c [6];
  uint auStack_1f4 [6];
  uint auStack_1dc [6];
  uint auStack_1c4 [5];
  uint uStack_1b0;
  uint auStack_1ac [6];
  uint uStack_194;
  float afStack_190 [5];
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float afStack_140 [3];
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  float fStack_11c;
  float afStack_118 [4];
  float fStack_108;
  uint uStack_104;
  float afStack_100 [5];
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  float fStack_e0;
  float afStack_dc [4];
  float fStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  float fStack_bc;
  float afStack_b8 [4];
  float fStack_a8;
  float fStack_a4;
  float fStack_98;
  uint uStack_94;
  uint uStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint uStack_5c;
  int iStack_50;
  float fStack_4c;
  int iStack_48;
  uint uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  float *pfStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar9 = 0;
  iStack_48 = 0;
  uStack_44 = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
  puVar7 = auStack_1dc;
  puVar6 = auStack_1c4;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar7;
    puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
  }
  uStack_c0 = uStack_1b0;
  FUN_00408b80();
  iVar5 = iStack_48;
  fStack_bc = fStack_164;
  afStack_b8[(uint)bVar9 * -2] = afStack_190[(uint)bVar9 * -2 + 0xc];
  afStack_b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       afStack_190[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
  if (iVar5 == 1) {
    uStack_e4 = 0xc0400000;
    uStack_ec = 0;
    uStack_e8 = 0;
    FUN_00408b00();
    fVar2 = afStack_b8[0];
    fVar1 = fStack_bc;
    afStack_dc[2] = fStack_80;
    afStack_dc[(uint)bVar9 * -2 + 3] = afStack_b8[(uint)bVar9 * -2 + 0xf];
    afStack_dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         afStack_b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
    afStack_b8[2] = fVar1 + afStack_dc[2];
    afStack_b8[3] = fVar2 + afStack_dc[3];
    fStack_a8 = afStack_b8[1] + fStack_cc;
    fStack_170 = fVar1 + afStack_dc[2];
    afStack_190[(uint)bVar9 * -2 + 9] = afStack_b8[(uint)bVar9 * -2 + 3];
    afStack_190[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
         afStack_b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    if (afStack_118 + 2 != afStack_190 + 8) {
      afStack_118[2] = fStack_170;
      afStack_118[3] = fStack_16c;
      fStack_108 = fStack_168;
    }
  }
  iVar5 = FUN_0040c790();
  if (iVar5 != 0) {
    iStack_48 = 1;
    if (afStack_118 + 2 != (float *)(param_1 + 0x20)) {
      afStack_118[2] = *(float *)(param_1 + 0x20);
      afStack_118[3] = *(float *)(param_1 + 0x24);
      fStack_108 = *(float *)(param_1 + 0x28);
    }
    uStack_128 = 0;
    uStack_124 = 0x40000000;
    uStack_120 = 0;
    FUN_00408b00();
    fStack_158 = fStack_a4;
    afStack_190[(uint)bVar9 * -2 + 0xf] = afStack_b8[(uint)bVar9 * -2 + 6];
    afStack_190[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
         afStack_b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
    fStack_e0 = *(float *)(param_1 + 0x20) + fStack_158;
    afStack_dc[0] = *(float *)(param_1 + 0x24) + fStack_154;
    afStack_dc[1] = *(float *)(param_1 + 0x28) + fStack_150;
    fStack_8c = fStack_e0;
    afStack_b8[(uint)bVar9 * -2 + 0xc] = afStack_dc[(uint)bVar9 * -2];
    afStack_b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
         afStack_dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    if (&fStack_bc != afStack_b8 + 0xb) {
      fStack_bc = fStack_8c;
      afStack_b8[0] = fStack_88;
      afStack_b8[1] = fStack_84;
    }
  }
  uStack_30 = 0x40000000;
  uStack_134 = 0;
  uStack_12c = 0x3f800000;
  uStack_130 = 0;
  FUN_00408b00();
  afStack_140[0] = afStack_190[2];
  afStack_190[(uint)bVar9 * -2 + 0x15] = afStack_190[(uint)bVar9 * -2 + 3];
  afStack_190[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16] =
       afStack_190[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
  iStack_24 = (**(code **)(*(int *)(param_1 + 0x154) + 0x94))(param_1);
  if (iStack_48 == 0) {
    iStack_2c = iStack_48;
    for (iStack_38 = iStack_48; iStack_38 < *(int *)(0x01ED78C8 + 0x14d164);
        iStack_38 = iStack_38 + 1) {
      iVar5 = *(int *)(0x01ED78C8 + iStack_2c + 0x14d168);
      if ((iVar5 != param_1) && (iVar5 != iStack_24)) {
        iVar5 = FUN_0040c840();
        if (iVar5 == 0) {
          iStack_1c = FUN_0040c840();
          if (iStack_1c == 0) {
            iStack_50 = FUN_0040c840();
            if (iStack_50 != 0) {
              FUN_00408bf0(iStack_50,&fStack_bc,uStack_30);
              iVar5 = iStack_50;
              pfVar11 = afStack_100 + 2;
              afStack_100[2] = (float)uStack_194;
              afStack_100[(uint)bVar9 * -2 + 3] = afStack_190[(uint)bVar9 * -2];
              afStack_100[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
                   afStack_190[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
              (**(code **)(*(int *)(iVar5 + 0x154) + 0x1c))(iVar5);
              puVar7 = auStack_1f4;
              puVar6 = auStack_1ac;
              for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar6 = *puVar7;
                puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
                puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
              }
              iVar5 = FUN_0041eed0(CONCAT44(pfVar11,auStack_1ac));
              if (iVar5 != 0) {
                FUN_0042abb0(auStack_2d8);
                iVar5 = iStack_50;
                (**(code **)(*(int *)(param_1 + 0x154) + 0x7c))
                          (param_1,param_2,auStack_2d8,iStack_50);
                (**(code **)(*(int *)(param_1 + 0x154) + 0x80))(param_1,param_2,auStack_2d8,iVar5);
                iVar5 = FUN_004cc5d0(iStack_50);
                if (iVar5 != 0) {
                  FUN_004cc040();
                }
              }
            }
          }
          else {
            iVar5 = FUN_0056ede0();
            if (iVar5 != 0) {
              FUN_00408bf0(iStack_1c,&fStack_bc,uStack_30);
              iVar5 = iStack_1c;
              puVar7 = &uStack_104;
              uStack_104 = uStack_5c;
              afStack_100[(uint)bVar9 * -2] = afStack_b8[(uint)bVar9 * -2 + 0x18];
              afStack_100[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                   afStack_b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19];
              (**(code **)(*(int *)(iVar5 + 0x154) + 0x1c))(iVar5);
              puVar6 = auStack_224;
              puVar8 = auStack_20c;
              for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar8 = *puVar6;
                puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
                puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
              }
              iVar5 = FUN_0041eed0(CONCAT44(puVar7,auStack_20c));
              if (iVar5 != 0) {
                FUN_0042abb0(auStack_350);
                iVar5 = iStack_1c;
                (**(code **)(*(int *)(param_1 + 0x154) + 0x7c))
                          (param_1,param_2,auStack_350,iStack_1c);
                FUN_00441ff0(PTR_DAT_005f1690,"%s causing %5.2f damage to %s\n",param_1,
                             (double)fStack_34c,iVar5);
                FUN_0056ee20();
                (**(code **)(*(int *)(param_1 + 0x154) + 0x80))(param_1,param_2,auStack_350,iVar5);
              }
            }
          }
        }
        else if (((iStack_24 == 0) ||
                 (iVar3 = (**(code **)(*(int *)(iVar5 + 0x154) + 0xe0))(iVar5), iVar3 == 0)) ||
                (iVar3 = FUN_0040c790(), iVar3 == 0)) {
          uStack_30 = 0x40000000;
          FUN_0042abb0(auStack_260);
          (**(code **)(*(int *)(param_1 + 0x154) + 0x7c))(param_1,param_2,auStack_260,iVar5);
          (**(code **)(*(int *)(iVar5 + 0x154) + 0x100))(iVar5,&fStack_bc,0x40000000,auStack_260);
          if (0.0 < fStack_25c) {
            fVar10 = (float10)1 + (float10)fStack_25c * (float10)_DAT_005b5679;
            FUN_005a3120(*(uint *)(iVar5 + 0x27a0));
            fStack_18 = (float)(int)ROUND(fVar10);
            FUN_004ce9c0(0x01D22E44,&fStack_bc,afStack_190 + 0x14);
            (**(code **)(*(int *)(param_1 + 0x154) + 0x80))(param_1,param_2,auStack_260,iVar5);
            uStack_44 = 1;
          }
        }
      }
      iStack_2c = iStack_2c + 4;
    }
  }
  if (iStack_48 == 1) {
    FUN_0053ec90();
    FUN_0053ec10();
    FUN_0053ebd0(0x01ED78C8);
    if (iStack_24 != 0) {
      FUN_0053ec10();
    }
    iStack_34 = 0;
    pfStack_28 = (float *)(param_1 + 0x20);
    while( true ) {
      fStack_390 = (float)FUN_0053ccc0(0x01ED78C8,afStack_118 + 2,&fStack_bc);
      fStack_18 = fStack_390;
      iVar5 = FUN_0040c790();
      if ((iVar5 != 0) && ((fStack_390 < 0.0 || (1.0 < fStack_390)))) {
        if (afStack_118 + 2 != pfStack_28) {
          afStack_118[2] = *pfStack_28;
          afStack_118[3] = pfStack_28[1];
          fStack_108 = pfStack_28[2];
        }
        afStack_118[3] = afStack_118[3] + _DAT_005b5689;
        fStack_390 = (float)FUN_0053ccc0(0x01ED78C8,afStack_118 + 2,&fStack_bc);
        fStack_18 = fStack_390;
      }
      if ((fStack_390 < 0.0) || (1.0 < fStack_390)) break;
      iStack_20 = FUN_0040c840();
      if ((iStack_20 != 0) &&
         (iVar5 = (**(code **)(*(int *)(iStack_20 + 0x154) + 0x10c))(iStack_20), 0 < iVar5)) {
        iStack_20 = 0;
      }
      iVar5 = FUN_0040c840();
      iVar3 = FUN_0040c840();
      iStack_40 = iVar3;
      iStack_3c = FUN_0040c840();
      iVar4 = FUN_0040c840();
      if (iStack_20 == 0) {
        if (iVar5 == 0) {
          if (iVar3 == 0) {
            if (iStack_3c == 0) {
              if (iVar4 == 0) {
                return uStack_44;
              }
              FUN_004a7110(iVar4);
            }
            else {
              FUN_004461c0(iStack_3c);
            }
          }
          else {
            iVar5 = FUN_0056ede0();
            if (iVar5 != 0) {
              FUN_0042abb0(auStack_314);
              (**(code **)(*(int *)(param_1 + 0x154) + 0x7c))(param_1,param_2,auStack_314,iVar3);
              FUN_00441ff0(PTR_DAT_005f1690,"%s causing %5.2f damage to %s\n",param_1,
                           (double)fStack_310,iVar3);
              FUN_0056ee20();
              (**(code **)(*(int *)(param_1 + 0x154) + 0x80))(param_1,param_2,auStack_314,0);
            }
            FUN_0053ec10();
          }
        }
        else {
          FUN_0042abb0(auStack_38c);
          (**(code **)(*(int *)(param_1 + 0x154) + 0x7c))(param_1,param_2,auStack_38c,iVar5);
          (**(code **)(*(int *)(param_1 + 0x154) + 0x80))(param_1,param_2,auStack_38c,iVar5);
          iVar5 = FUN_004cc5d0(iVar5);
          if (iVar5 == 0) {
            return uStack_44;
          }
          FUN_004cc040();
        }
      }
      else if (((iStack_24 == 0) ||
               (iVar5 = (**(code **)(*(int *)(iStack_20 + 0x154) + 0xe0))(iStack_20), iVar5 == 0))
              || (iVar5 = FUN_0040c790(), iVar5 == 0)) {
        FUN_0042abb0(auStack_29c);
        auStack_29c[0] = *(uint *)(0x01ED78C8 + 0x14d148);
        (**(code **)(*(int *)(param_1 + 0x154) + 0x7c))(param_1,param_2,auStack_29c,iStack_20);
        fStack_14c = *(float *)(0x01ED78C8 + 0x14d11c) - *(float *)(0x01ED78C8 + 0x14d110);
        fStack_148 = *(float *)(0x01ED78C8 + 0x14d120) - *(float *)(0x01ED78C8 + 0x14d114);
        fStack_144 = *(float *)(0x01ED78C8 + 0x14d124) - *(float *)(0x01ED78C8 + 0x14d118);
        fStack_17c = fStack_14c;
        afStack_190[(uint)bVar9 * -2 + 6] = afStack_190[(uint)bVar9 * -2 + 0x12];
        afStack_190[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
             afStack_190[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
        fStack_4c = (float)_DAT_005b5681 /
                    SQRT(fStack_174 * fStack_174 + fStack_17c * fStack_17c + fStack_178 * fStack_178
                        );
        fStack_68 = fStack_17c * fStack_4c;
        fStack_64 = fStack_178 * fStack_4c;
        fStack_60 = fStack_174 * fStack_4c;
        fStack_98 = fStack_17c * fStack_4c;
        afStack_b8[(uint)bVar9 * -2 + 9] = afStack_b8[(uint)bVar9 * -2 + 0x15];
        afStack_b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
             afStack_b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16];
        if (&fStack_290 != afStack_b8 + 8) {
          fStack_290 = fStack_98;
          uStack_28c = uStack_94;
          uStack_288 = uStack_90;
        }
        FUN_00408bf0();
        fStack_11c = fStack_74;
        afStack_118[(uint)bVar9 * -2] = afStack_b8[(uint)bVar9 * -2 + 0x12];
        iVar5 = iStack_20;
        afStack_118[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
        if (&fStack_280 != afStack_190 + 0x1d) {
          fStack_280 = fStack_11c;
          fStack_27c = afStack_118[0];
          uStack_278 = afStack_118[1];
        }
        (**(code **)(*(int *)(iStack_20 + 0x154) + 0x108))();
        uStack_44 = 1;
        (**(code **)(*(int *)(param_1 + 0x154) + 0x80))(param_1,param_2,auStack_29c,iVar5);
        return uStack_44;
      }
      iStack_34 = iStack_34 + 1;
      if (3 < iStack_34) {
        return uStack_44;
      }
    }
  }
  return uStack_44;
}
