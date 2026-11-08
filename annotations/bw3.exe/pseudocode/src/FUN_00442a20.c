// Name: FUN_00442a20
// Address: 00442a20
// Address Range: [[00442a20, 00443c82]]
// Convention: unknown
// Signature: void FUN_00442a20(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00442a20(int param_1,float param_2)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  float afStackY_1a80 [1503];
  uint uVar9;
  byte auStack_2e0 [4];
  float fStack_2dc;
  int iStack_2ac;
  int iStack_2a8;
  uint uStack_2a4;
  float afStack_2a0 [7];
  uint uStack_284;
  float fStack_278;
  uint uStack_26c;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  uint uStack_254;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  uint uStack_23c;
  float afStack_230 [4];
  float afStack_220 [4];
  float fStack_210;
  float fStack_20c;
  uint uStack_208;
  uint uStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  uint uStack_1e8;
  uint uStack_1e4;
  float fStack_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  uint uStack_1d4;
  float fStack_1d0;
  float afStack_1cc [5];
  float fStack_1b8;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  uint uStack_188;
  float fStack_17c;
  uint uStack_178;
  uint uStack_174;
  uint uStack_170;
  float afStack_16c [5];
  float fStack_158;
  uint uStack_14c;
  uint uStack_140;
  float fStack_13c;
  float fStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  float fStack_11c;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  uint uStack_a4;
  uint uStack_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float afStack_80 [3];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  int iStack_48;
  float fStack_44;
  int iStack_40;
  uint uStack_3c;
  int iStack_38;
  uint uStack_34;
  uint uStack_30;
  int iStack_2c;
  float *pfStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float *pfStack_18;
  float fStack_14;
  
  bVar8 = 0;
  iVar3 = FUN_004fc070(param_1 + 0x158);
  iStack_38 = *(int *)(iVar3 + 0x24);
  iVar3 = FUN_00491aa0();
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0x2538) = 0;
    *(uint *)(param_1 + 0xcdd0) = 1;
    *(uint *)(param_1 + 0xd850) = 0;
    if (*(int *)(param_1 + 0xd844) == 0) {
      FUN_00444110(param_1);
      FUN_0048c150();
    }
    *(uint *)(param_1 + 0xd844) = 1;
    FUN_004fc420(param_1 + 0x158,0xb,0);
    *(uint *)(param_1 + 0xd848) = 0xffffffff;
  }
  uStack_34 = 0x3e800000;
  uStack_3c = 0x3f800000;
  uStack_30 = 0x3f800000;
  if (*(int *)(param_1 + 0xcdd0) == 0) {
    if (*(int *)(param_1 + 0xd844) == 0) {
      if (iStack_38 != 0xc) {
        iVar3 = FUN_00556700(*(uint *)(param_1 + 0xd0f4));
        if (iVar3 == 0) {
          uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
          *(uint *)(param_1 + 0xd0f4) = uVar4;
          uStack_30 = 0x3f800000;
          uStack_34 = 0x3ecccccd;
        }
        fStack_14 = (float)(param_1 + 0x158);
        FUN_0054dcc0();
        uStack_284 = uStack_128;
        afStack_2a0[(uint)bVar8 * -2 + 8] = afStack_16c[(uint)bVar8 * -2 + 0x12];
        afStack_2a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 9] =
             afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13];
        FUN_00408b80();
        fStack_ec = fStack_11c;
        afStack_16c[(uint)bVar8 * -2 + 0x21] = afStack_16c[(uint)bVar8 * -2 + 0x15];
        afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x22] =
             afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16];
        FUN_0054dcc0();
        afStack_1cc[2] = (float)uStack_170;
        afStack_1cc[(uint)bVar8 * -2 + 3] = afStack_16c[(uint)bVar8 * -2];
        afStack_1cc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
             afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        FUN_00408b80();
        fVar1 = fStack_ec;
        fStack_8c = fStack_158;
        afStack_16c[(uint)bVar8 * -2 + 0x39] = afStack_16c[(uint)bVar8 * -2 + 6];
        afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x3a] =
             afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
        fStack_f8 = fVar1 + fStack_8c;
        fStack_f4 = fStack_e8 + fStack_88;
        fStack_f0 = fStack_e4 + fStack_84;
        afStack_220[2] = fVar1 + fStack_8c;
        afStack_220[(uint)bVar8 * -2 + 3] = afStack_16c[(uint)bVar8 * -2 + 0x1e];
        afStack_220[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
             afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1f];
        fStack_200 = afStack_220[2] * _DAT_005b9679;
        fStack_1fc = afStack_220[3] * _DAT_005b9679;
        fStack_1f8 = fStack_210 * _DAT_005b9679;
        fStack_278 = afStack_220[2] * _DAT_005b9679;
        afStack_2a0[(uint)bVar8 * -2 + 0xb] = afStack_220[(uint)bVar8 * -2 + 9];
        afStack_2a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xc] =
             afStack_220[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
        iVar3 = *(int *)(param_1 + 0xd85c);
joined_r0x00442ebf:
        if (((iVar3 == 1) || (iVar3 == 2)) || (iVar3 == 3)) {
          FUN_004a3cf0();
        }
      }
    }
    else if (*(int *)(param_1 + 0xd844) == 1) {
      iVar3 = FUN_00556700(*(uint *)(param_1 + 0xd0f4));
      if (iVar3 == 0) {
        uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
        *(uint *)(param_1 + 0xd0f4) = uVar4;
        uStack_34 = 0x3ecccccd;
      }
      iVar3 = *(int *)(param_1 + 0xd1c8 + *(int *)(param_1 + 0xd848) * 0x48);
      if (iVar3 != 0) {
        if (afStack_1cc + 0x14 != (float *)(iVar3 + 0x20)) {
          fStack_17c = *(float *)(iVar3 + 0x20);
          uStack_178 = *(uint *)(iVar3 + 0x24);
          uStack_174 = *(uint *)(iVar3 + 0x28);
        }
        iVar3 = *(int *)(param_1 + 0xd85c);
        goto joined_r0x00442ebf;
      }
    }
  }
  iVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x148))();
  if (iVar3 == 0) {
    FUN_00556be0(*(uint *)(param_1 + 0xd0f0));
    return;
  }
  if ((0.0 < *(float *)(param_1 + 0x2538)) && (0 < *(int *)(param_1 + 0xd848))) {
    iStack_40 = *(int *)(param_1 + 0xd1c8 + *(int *)(param_1 + 0xd848) * 0x48);
    if ((iStack_40 != 0) &&
       (iVar3 = (**(code **)(*(int *)(iStack_40 + 0x154) + 0x94))(iStack_40),
       iVar3 == *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04))) {
      FUN_0048c150();
      FUN_0048c150();
      iVar3 = FUN_00556700(*(uint *)(param_1 + 0xd104));
      if (iVar3 == 0) {
        uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
        *(uint *)(param_1 + 0xd104) = uVar4;
      }
      iVar7 = iStack_40 + 0x20;
      iVar3 = 0;
      uStack_1dc = 0;
      uStack_1d8 = 0x3f800000;
      uStack_1d4 = 0;
      FUN_004a2560(0x01C73654,iVar7,0x3f000000,&uStack_1dc,0x4000);
      do {
        afStack_230[1] = 1.0;
        afStack_230[0] = 0.0;
        afStack_230[2] = 0.0;
        iVar3 = iVar3 + 1;
        FUN_004a29d0(0x01C73654,iVar7,afStack_2a0 + 0x1c,4000,0xffdc,1,35000,0x3f800000,0x3e4ccccd
                    );
      } while (iVar3 < 10);
      FUN_00431ce0(*(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04));
      *(uint *)(iStack_40 + 0x70) = 2;
      *(uint *)(param_1 + 0xd844) = 3;
      return;
    }
  }
  if ((*(int *)(param_1 + 0xd844) == 1) && (0.0 < *(float *)(param_1 + 0x2538))) {
    param_2 = *(float *)(param_1 + 0xd850) + param_2;
    *(float *)(param_1 + 0xd850) = param_2;
    if (param_2 <= *(float *)(param_1 + 0xd178)) {
      return;
    }
    FUN_004443d0(param_1);
    return;
  }
  if (*(int *)(param_1 + 0xd844) == 2) {
    iVar3 = *(int *)(*(int *)(param_1 + 0xd848) * 0x48 + param_1 + 0xd1c8);
    if (iVar3 != 0) {
      iVar7 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x94))(iVar3);
      iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      if (iVar7 == iVar3) {
        FUN_00431ce0(iVar3);
      }
    }
    fVar1 = param_2 / _DAT_005dd6f8 + *(float *)(param_1 + 0xd850);
    *(float *)(param_1 + 0xd850) = fVar1;
    if (fVar1 < 1.0) {
      iStack_1c = 0;
      if (*(int *)(param_1 + 0xd180) < 1) {
        return;
      }
      iStack_2c = param_1 + 0xd184;
      pfStack_28 = (float *)(param_1 + 0xd850);
      iStack_24 = param_1 + 0xd19c;
      iStack_20 = param_1 + 0xd1ac;
      pfStack_18 = (float *)(param_1 + 0xd1bc);
      do {
        pfVar2 = pfStack_18;
        pfVar5 = (float *)(iStack_1c * 0x48 + iStack_2c);
        fStack_44 = pfVar5[0x11];
        fStack_b0 = *pfVar5 - *pfStack_18;
        fStack_ac = pfVar5[1] - pfStack_18[1];
        fStack_a8 = pfVar5[2] - pfStack_18[2];
        fStack_260 = *pfVar5 - *pfStack_18;
        afStack_2a0[(uint)bVar8 * -2 + 0x11] = afStack_16c[(uint)bVar8 * -2 + 0x30];
        afStack_2a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x12] =
             afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x31];
        fStack_68 = fStack_260 * *pfStack_28;
        fStack_64 = fStack_25c * *pfStack_28;
        fStack_60 = fStack_258 * *pfStack_28;
        fStack_c8 = fStack_260 * *pfStack_28;
        afStack_16c[(uint)bVar8 * -2 + 0x2a] = afStack_16c[(uint)bVar8 * -2 + 0x42];
        afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x2b] =
             afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x43];
        fStack_1a0 = *pfVar2 + fStack_c8;
        fStack_19c = pfVar2[1] + fStack_c4;
        fStack_198 = pfVar2[2] + fStack_c0;
        fStack_134 = *pfVar2 + fStack_c8;
        afStack_16c[(uint)bVar8 * -2 + 0xf] = afStack_1cc[(uint)bVar8 * -2 + 0xc];
        afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
             afStack_1cc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
        FUN_00585b20(iStack_24,iStack_20,*(uint *)(param_1 + 0xd850));
        afStack_2a0[3] = (float)uStack_2a4;
        afStack_2a0[(uint)bVar8 * -2 + 4] = afStack_2a0[(uint)bVar8 * -2];
        afStack_2a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 5] =
             afStack_2a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        (afStack_2a0 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 5)[(uint)bVar8 * -2 + 1] =
             (afStack_2a0 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
        FUN_00585de0(afStack_2a0 + 3);
        fStack_20c = fStack_1d0;
        afStack_220[(uint)bVar8 * -2 + 6] = afStack_1cc[(uint)bVar8 * -2];
        afStack_220[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
             afStack_1cc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        fStack_20c = *(float *)(param_1 + 0xd850) * (float)_DAT_005b969d + fStack_20c;
        *(float *)((int)fStack_44 + 0x20) = fStack_134;
        *(uint *)((int)fStack_44 + 0x24) = uStack_130;
        *(uint *)((int)fStack_44 + 0x28) = uStack_12c;
        if ((float *)((int)fStack_44 + 0x30) != afStack_220 + 5) {
          *(float *)((int)fStack_44 + 0x30) = fStack_20c;
          *(uint *)((int)fStack_44 + 0x34) = uStack_208;
          *(uint *)((int)fStack_44 + 0x38) = uStack_204;
        }
        if ((float *)((int)fStack_44 + 0xcd0) != afStack_16c + 0xe) {
          *(float *)((int)fStack_44 + 0xcd0) = fStack_134;
          *(uint *)((int)fStack_44 + 0xcd4) = uStack_130;
          *(uint *)((int)fStack_44 + 0xcd8) = uStack_12c;
        }
        if ((float *)((int)fStack_44 + 0xcdc) != afStack_220 + 5) {
          *(float *)((int)fStack_44 + 0xcdc) = fStack_20c;
          *(uint *)((int)fStack_44 + 0xce0) = uStack_208;
          *(uint *)((int)fStack_44 + 0xce4) = uStack_204;
        }
        iStack_1c = iStack_1c + 1;
        iStack_24 = iStack_24 + 0x48;
        iStack_20 = iStack_20 + 0x48;
        pfStack_18 = pfStack_18 + 0x12;
      } while (iStack_1c < *(int *)(param_1 + 0xd180));
      return;
    }
    iVar7 = 0;
    FUN_0054e670(param_1 + 0x158);
    iVar3 = param_1;
    if (0 < *(int *)(param_1 + 0xd180)) {
      do {
        FUN_004f6f10(0x01D81080,*(uint *)(iVar3 + 0xd1c8),1);
        *(uint *)(iVar3 + 0xd1c8) = 0;
        iVar7 = iVar7 + 1;
        iVar3 = iVar3 + 0x48;
      } while (iVar7 < *(int *)(param_1 + 0xd180));
    }
    *(uint *)(param_1 + 0xd844) = 0;
    *(float *)(param_1 + 0x2538) = (float)*(int *)(param_1 + 0xd17c);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_54 = param_2 * *(float *)(param_1 + 0xcdcc) * *(float *)(param_1 + 0xd858);
  while (0.0 < fStack_54) {
    uVar6 = FUN_004fbb70();
    if (uVar6 == 0) {
LAB_0044335d:
      FUN_00433fb0();
    }
    else {
      if (uVar6 < 2) {
        iVar3 = FUN_00556700(*(uint *)(param_1 + 0xd0f8));
        if (iVar3 == 0) {
          uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
          *(uint *)(param_1 + 0xd0f8) = uVar4;
        }
LAB_0044337c:
        iVar3 = FUN_00556700(*(uint *)(param_1 + 0xd0fc));
        if (iVar3 == 0) {
          uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
          *(uint *)(param_1 + 0xd0fc) = uVar4;
        }
        goto LAB_0044335d;
      }
      if (uVar6 == 7) goto LAB_0044337c;
      FUN_00433fb0();
    }
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00434850();
  iVar3 = FUN_00431660();
  if (iVar3 == 0) {
    switch(iStack_38) {
    case 0:
    case 1:
    case 2:
      iVar3 = FUN_00489ff0();
      if (iVar3 == 0) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x144))();
        if (*(int *)(param_1 + 0xcde4) != 0) {
          FUN_004fc0d0(param_1 + 0x158,3,1);
        }
      }
      else {
        FUN_004fc0d0(param_1 + 0x158,3,1);
      }
      break;
    case 3:
    case 4:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))();
      iStack_48 = param_1 + 0x158;
      if (*(int *)(param_1 + 0xcde4) == 0) {
        iVar3 = FUN_00489ff0();
        if (iVar3 == 0) {
          FUN_004fc0d0(iStack_48,0,1);
        }
      }
      else {
        uStack_1e8 = 0;
        fStack_1e0 = 0x40400000;
        uStack_1e4 = 0;
        fStack_50 = 0x40400000 + (float)_DAT_005b968d;
        (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xc4))();
        iVar3 = FUN_0042b9e0();
        if (iVar3 < 0) {
          FUN_00441ff0(PTR_DAT_005f1690,"%s gave up chase - I'm confused\n",param_1);
          FUN_004fc0d0(iStack_48,0,1);
        }
        else {
          iVar3 = *(int *)(param_1 + 0xcde4);
          fStack_194 = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20);
          fStack_190 = *(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24);
          fStack_18c = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
          afStack_16c[2] = fStack_194;
          afStack_16c[(uint)bVar8 * -2 + 3] = afStack_1cc[(uint)bVar8 * -2 + 0xf];
          afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
               afStack_1cc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10];
          fStack_4c = SQRT(afStack_16c[4] * afStack_16c[4] + afStack_16c[2] * afStack_16c[2]);
          afStack_16c[3] = 0.0;
          if ((*(float *)(param_1 + 0xcde0) <= 0.0) && (fStack_4c <= fStack_50)) {
            fStack_104 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
            fStack_100 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
            fStack_fc = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
            afStack_80[0] = fStack_104;
            afStack_16c[(uint)bVar8 * -2 + 0x3c] = afStack_16c[(uint)bVar8 * -2 + 0x1b];
            afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x3d] =
                 afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1c];
            FUN_00576250(afStack_16c + 0x3b);
            uStack_140 = uStack_188;
            afStack_16c[(uint)bVar8 * -2 + 0xc] = afStack_1cc[(uint)bVar8 * -2 + 0x12];
            afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
                 afStack_1cc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13];
            fStack_14 = (float)FUN_0040cfa0(fStack_13c - *(float *)(param_1 + 0x34));
            if (ABS(fStack_14) < (float)_DAT_005b9695) {
              iVar3 = FUN_0040cea0(0,1,1);
              FUN_004fc0d0(iStack_48,iVar3 + 5);
              *(uint *)(param_1 + 0xcde0) = 0x40200000;
              iVar3 = FUN_00556700(*(uint *)(param_1 + 0xd108));
              if (iVar3 == 0) {
                uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
                *(uint *)(param_1 + 0xd108) = uVar4;
              }
            }
          }
        }
      }
      break;
    case 5:
    case 6:
      FUN_0042abb0(auStack_2e0);
      fStack_2dc = (float)FUN_0040ce40();
      fStack_2dc = fStack_2dc * *(float *)(param_1 + 0xd858);
      iStack_2ac = param_1;
      iStack_2a8 = param_1;
      fStack_14 = (float)(param_1 + 0xfd8);
      FUN_00583260();
      uStack_bc = afStack_230[3];
      afStack_16c[(uint)bVar8 * -2 + 0x2d] = afStack_220[(uint)bVar8 * -2];
      afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x2e] =
           afStack_220[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      FUN_00408b80();
      uStack_a4 = uStack_26c;
      afStack_16c[(uint)bVar8 * -2 + 0x33] = afStack_2a0[(uint)bVar8 * -2 + 0xe];
      afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x34] =
           afStack_2a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xf];
      FUN_004893f0();
      FUN_00583260();
      uStack_98 = uStack_254;
      afStack_16c[(uint)bVar8 * -2 + 0x36] = afStack_2a0[(uint)bVar8 * -2 + 0x14];
      afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x37] =
           afStack_2a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x15];
      FUN_00408b80();
      uStack_14c = uStack_23c;
      afStack_16c[(uint)bVar8 * -2 + 9] = afStack_2a0[(uint)bVar8 * -2 + 0x1a];
      afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
           afStack_2a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1b];
      FUN_004893f0();
      break;
    case 0xb:
      if (*(int *)(param_1 + 0xd854) == 0) {
        uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
        *(uint *)(param_1 + 0xd854) = 1;
        *(uint *)(param_1 + 0xd104) = uVar4;
      }
      break;
    case 0xc:
      iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_110 = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20);
      fStack_10c = *(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24);
      fStack_108 = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
      fStack_e0 = fStack_110;
      afStack_16c[(uint)bVar8 * -2 + 0x24] = afStack_16c[(uint)bVar8 * -2 + 0x18];
      afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x25] =
           afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x19];
      if ((SQRT(fStack_d8 * fStack_d8 + fStack_e0 * fStack_e0 + fStack_dc * fStack_dc) <
           *(float *)(param_1 + 0xcddc) * _DAT_005b9685) &&
         (((**(code **)(*(int *)(param_1 + 0x154) + 0x144))(), *(int *)(param_1 + 0xcde4) != 0 ||
          (iVar3 = FUN_00491aa0(), iVar3 != 0)))) {
        FUN_004fc0d0(param_1 + 0x158,0xe,1);
        iVar3 = FUN_00556700(*(uint *)(param_1 + 0xd104));
        if ((iVar3 == 0) &&
           (((iVar3 = FUN_00556700(*(uint *)(param_1 + 0xd108)), iVar3 == 0 &&
             (iVar3 = FUN_00556700(*(uint *)(param_1 + 0xd100)), iVar3 == 0)) &&
            (iVar3 = FUN_00556700(*(uint *)(param_1 + 0xd100)), iVar3 == 0)))) {
          uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
          *(uint *)(param_1 + 0xd100) = uVar4;
        }
      }
      break;
    case 0xe:
      if (*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x2504) + (float)_DAT_005b967d) {
        FUN_004fc0d0(param_1 + 0x158,0xf,1);
      }
      break;
    case 0xf:
      iVar3 = FUN_00556700(*(uint *)(param_1 + 0xd10c));
      if (iVar3 == 0) {
        uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
        *(uint *)(param_1 + 0xd10c) = uVar4;
      }
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))();
    }
    goto switchD_00443c5c_caseD_7;
  }
  uVar6 = *(uint *)(param_1 + 0x273c);
  if (uVar6 < 2) {
    if (uVar6 == 1) {
LAB_0044342f:
      uVar9 = 1;
      uVar4 = 3;
    }
    else {
LAB_00443674:
      uVar9 = 1;
      uVar4 = FUN_0040cea0(0,2,1);
    }
    FUN_004fc0d0(param_1 + 0x158,uVar4,uVar9);
  }
  else {
    if (uVar6 < 3) goto LAB_0044342f;
    if (uVar6 != 3) goto LAB_00443674;
    FUN_004fc0d0(param_1 + 0x158,0,1);
    FUN_00441ff0(PTR_DAT_005f1690,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
switchD_00443c5c_caseD_7:
  if (0.0 < *(float *)(param_1 + 0xcde0)) {
    *(float *)(param_1 + 0xcde0) = *(float *)(param_1 + 0xcde0) - param_2;
  }
  iVar3 = FUN_0042ccf0(param_1);
  if ((iVar3 != 0) && (iStack_38 != 0xc)) {
    FUN_0042c1e0();
    fStack_74 = *(float *)(param_1 + 0x2518) * param_2;
    fStack_70 = *(float *)(param_1 + 0x251c) * param_2;
    fStack_6c = *(float *)(param_1 + 0x2520) * param_2;
    fStack_1ac = fStack_74;
    afStack_1cc[(uint)bVar8 * -2 + 9] = afStack_16c[(uint)bVar8 * -2 + 0x3f];
    afStack_1cc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
         afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x40];
    fStack_248 = fStack_1ac + *(float *)(param_1 + 0x250c);
    fStack_244 = fStack_1a8 + *(float *)(param_1 + 0x2510);
    fStack_240 = fStack_1a4 + *(float *)(param_1 + 0x2514);
    fStack_d4 = fStack_248;
    afStack_16c[(uint)bVar8 * -2 + 0x27] = afStack_2a0[(uint)bVar8 * -2 + 0x17];
    afStack_16c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x28] =
         afStack_2a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x18];
    fStack_1f4 = fStack_d4 + *(float *)(param_1 + 0x249c);
    fStack_1f0 = fStack_d0 + *(float *)(param_1 + 0x24a0);
    fStack_1ec = fStack_cc + *(float *)(param_1 + 0x24a4);
    fStack_1b8 = fStack_1f4;
    afStack_1cc[(uint)bVar8 * -2 + 6] = afStack_220[(uint)bVar8 * -2 + 0xc];
    afStack_1cc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
         afStack_220[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(float *)(param_1 + 0x24a0) = *(float *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a4);
    FUN_0042c230();
  }
  FUN_0042cd30(param_1);
  FUN_0054c130(param_1 + 0x158);
  FUN_00433350();
  if (((iStack_38 == 3) || (iStack_38 == 4)) &&
     (iVar3 = FUN_00557170((double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
                           (double)*(float *)(param_1 + 0x28),0x42c80000), iVar3 != 0)) {
    iVar3 = FUN_00556700(*(uint *)(param_1 + 0xd0f0));
    if ((iVar3 == 0) && (iVar3 = FUN_0040cf40(0x3e99999a), iVar3 != 0)) {
      uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
      *(uint *)(param_1 + 0xd0f0) = uVar4;
      return;
    }
    return;
  }
  FUN_00556be0(*(uint *)(param_1 + 0xd0f0));
  return;
}
