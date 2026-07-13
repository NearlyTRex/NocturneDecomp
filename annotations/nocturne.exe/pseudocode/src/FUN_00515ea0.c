// Name: FUN_00515ea0
// Address: 00515ea0
// Address Range: [[00515ea0, 00516614]]
// Convention: unknown
// Signature: undefined4 FUN_00515ea0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00515ea0(int param_1)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  uint *puVar8;
  float10 fVar9;
  float10 fVar10;
  uint uStack_11c;
  float fStack_118;
  uint uStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  int iStack_e8;
  uint uStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  byte auStack_c8 [12];
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  byte auStack_b0 [12];
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  byte local_8c [12];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_48;
  float fStack_44;
  int iStack_40;
  float fStack_3c;
  float fStack_38;
  int iStack_34;
  float fStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  
  uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0xd8))(param_1,local_8c);
  FUN_0040a240(param_1,&fStack_80,uVar2);
  iVar3 = FUN_00554600(param_1);
  if (iVar3 == 0) {
    FUN_0052ea60(0x02DC9450,param_1,"shotgun-noammo.wav",&fStack_80);
    return 0;
  }
  fVar9 = (float10)fptan((float10)*(float *)(param_1 + 0x570) * (float10)_DAT_00591065 *
                         (float10)_DAT_0059106d);
  fStack_44 = (float)(fVar9 * (float10)*(float *)(param_1 + 0x2e0));
  fStack_38 = (float)FUN_0040de00(10,0xf);
  iStack_40 = 0;
  if (0 < (int)fStack_38) {
    do {
      fStack_48 = (float)FUN_0040dda0(0,0x40c90fdb);
      fStack_18 = fStack_48;
      fStack_18 = (float)FUN_0040dda0(0,fStack_44);
      fVar9 = (float10)fcos((float10)fStack_48);
      fVar10 = (float10)fsin((float10)fStack_48);
      fStack_68 = (float)(fVar9 * (float10)fStack_18);
      fStack_64 = (float)(fVar10 * (float10)fStack_18);
      fStack_60 = *(float *)(param_1 + 0x2e0);
      pfVar4 = (float *)FUN_0040a200(param_1,auStack_c8,&fStack_68);
      if (&fStack_68 != pfVar4) {
        fStack_68 = *pfVar4;
        fStack_64 = pfVar4[1];
        fStack_60 = pfVar4[2];
      }
      fStack_98 = fStack_80 + fStack_68;
      fStack_94 = fStack_7c + fStack_64;
      fStack_90 = fStack_78 + fStack_60;
      fStack_3c = (float)_DAT_0059107d / *(float *)(param_1 + 0x2e0);
      fStack_d4 = fStack_68 * fStack_3c;
      fStack_d0 = fStack_64 * fStack_3c;
      fStack_cc = fStack_60 * fStack_3c;
      fStack_74 = fStack_80 - fStack_d4;
      fStack_70 = fStack_7c - fStack_d0;
      fStack_6c = fStack_78 - fStack_cc;
      FUN_00511750(0x01E57284);
      FUN_00511800(0x01E57284,1);
      FUN_00511780(0x01E57284,param_1);
      if (*(int *)(param_1 + 0x2fc) != 0) {
        FUN_00511780(0x01E57284,*(int *)(param_1 + 0x2fc));
      }
      iStack_24 = 0;
      do {
        fVar5 = (float)FUN_0050fb00(0x01E57284,&fStack_74,&fStack_98);
        dVar1 = (double)fVar5;
        fStack_18 = fVar5;
        if ((dVar1 < 0.0) || (1.0 < dVar1)) break;
        iVar3 = FUN_0040d890(*(uint *)(0x01E57284 + 0x14cd5c),DAT_00765a98,dVar1,fVar5);
        if ((iVar3 != 0) &&
           (iVar6 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0x104))(iVar3), 0 < iVar6)) {
          iVar3 = 0;
        }
        iStack_20 = FUN_0040d890(*(uint *)(0x01E57284 + 0x14cd5c),_DAT_01c78c78);
        iVar6 = FUN_0040d890(*(uint *)(0x01E57284 + 0x14cd5c),_DAT_02dd10bc);
        iStack_34 = iVar6;
        iStack_28 = FUN_0040d890(*(uint *)(0x01E57284 + 0x14cd5c),DAT_0077bd78);
        iStack_2c = FUN_0040d890(*(uint *)(0x01E57284 + 0x14cd5c),_DAT_01c7068c);
        fVar7 = (float)(**(code **)(*(int *)(param_1 + 0x14c) + 0xe4))(param_1);
        fStack_18 = fStack_38;
        fStack_30 = ((1.0 - fVar5) * fVar7) / (float)(int)fStack_38;
        if (iVar3 == 0) {
          if (iStack_20 == 0) {
            if (iVar6 == 0) {
              if (iStack_28 == 0) {
                if (iStack_2c == 0) {
                  FUN_0048ab60(0x01C08D04,0x01E57284 + 0x14cd50,0x01E57284 + 0x14cd40,
                               *(uint *)(0x01E57284 + 0x14cd4c),
                               *(uint *)(0x01E57284 + 0x14cd5c));
                  break;
                }
                FUN_0048e550(iStack_2c);
              }
              else {
                FUN_0043cdb0(iStack_28);
              }
            }
            else {
              FUN_00548580(iVar6);
              iVar3 = FUN_005485a0(iVar6,param_1);
              if (iVar3 != 0) {
                FUN_005485e0(iVar6,fStack_30);
              }
              FUN_00511780(0x01E57284,iStack_34);
            }
          }
          else {
            iVar3 = FUN_004aded0(iStack_20);
            if (iVar3 == 0) break;
            FUN_004ada20(iStack_20,0x01E57284 + 0x14cd50);
          }
        }
        else {
          iVar6 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0xd8))(iVar3);
          if (iVar6 != 0) break;
          FUN_00423ed0(&uStack_11c);
          uStack_11c = *(uint *)(0x01E57284 + 0x14cd60);
          fStack_118 = fStack_30;
          uStack_114 = 0x3ecccccd;
          fStack_e0 = *(float *)(0x01E57284 + 0x14cd34) - *(float *)(0x01E57284 + 0x14cd28);
          fStack_dc = *(float *)(0x01E57284 + 0x14cd38) - *(float *)(0x01E57284 + 0x14cd2c);
          fStack_d8 = *(float *)(0x01E57284 + 0x14cd3c) - *(float *)(0x01E57284 + 0x14cd30);
          fStack_1c = (float)_DAT_00591085 /
                      SQRT(fStack_d8 * fStack_d8 + fStack_e0 * fStack_e0 + fStack_dc * fStack_dc);
          fStack_bc = fStack_e0 * fStack_1c;
          fStack_b8 = fStack_dc * fStack_1c;
          fStack_b4 = fStack_d8 * fStack_1c;
          if (&fStack_110 != &fStack_bc) {
            fStack_110 = fStack_bc;
            fStack_10c = fStack_b8;
            fStack_108 = fStack_b4;
          }
          puVar8 = (uint *)FUN_0040a290(iVar3,auStack_b0,0x01E57284 + 0x14cd50);
          if (&uStack_100 != puVar8) {
            uStack_100 = *puVar8;
            uStack_fc = puVar8[1];
            uStack_f8 = puVar8[2];
          }
          uStack_f4 = *(uint *)(param_1 + 0x564);
          uStack_ec = 0x65;
          uStack_f0 = 0x3e19999a;
          iStack_e8 = param_1;
          uStack_e4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x8c))(param_1);
          (**(code **)(*(int *)(iVar3 + 0x14c) + 0x100))(iVar3,&uStack_11c);
          if (*(int *)(param_1 + 0x2dc) == 0) break;
          FUN_00511780(0x01E57284,*(uint *)(0x01E57284 + 0x14cd5c));
        }
        iStack_24 = iStack_24 + 1;
      } while (iStack_24 < 4);
      iStack_40 = iStack_40 + 1;
    } while (iStack_40 < (int)fStack_38);
  }
  FUN_00511750(0x01E57284);
  fStack_a4 = fStack_80;
  fStack_9c = fStack_78;
  fStack_a0 = fStack_7c + _DAT_00591075;
  FUN_0048af20(0x01C08D04,&fStack_a4,param_1 + 0x3c);
  FUN_0052ea60(0x02DC9450,param_1,"shotgun.wav",&fStack_80);
  *(uint *)(param_1 + 0x2f8) = 0x3f2a7efa;
  iVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x8c))(param_1);
  if (iVar3 == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    FUN_004940d0(0x01C70F74);
  }
  return 1;
}
