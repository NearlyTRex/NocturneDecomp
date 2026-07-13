// Name: FUN_0043d1c0
// Address: 0043d1c0
// Address Range: [[0043d1c0, 0043d809]]
// Convention: unknown
// Signature: undefined4 FUN_0043d1c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0043d1c0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  float fStack_f8;
  uint uStack_f4;
  float fStack_f0;
  uint uStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  int iStack_c0;
  uint uStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  byte local_64 [12];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  byte auStack_34 [12];
  float fStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0xd8))(param_1,local_64);
  FUN_0040a240(param_1,&fStack_40,uVar1);
  iVar2 = FUN_00554600(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  uStack_68 = *(uint *)(param_1 + 0x2e0);
  uStack_70 = 0;
  uStack_6c = 0;
  FUN_0040a200(param_1,&fStack_a0,&uStack_70);
  fStack_ac = fStack_40 + fStack_a0;
  fStack_a8 = fStack_3c + fStack_9c;
  fStack_a4 = fStack_38 + fStack_98;
  fStack_28 = (float)_DAT_0057b496 / *(float *)(param_1 + 0x2e0);
  fStack_7c = fStack_a0 * fStack_28;
  fStack_78 = fStack_9c * fStack_28;
  fStack_74 = fStack_98 * fStack_28;
  fStack_94 = fStack_40 - fStack_7c;
  fStack_90 = fStack_3c - fStack_78;
  fStack_8c = fStack_38 - fStack_74;
  FUN_00511750(0x01E57284);
  FUN_00511800(0x01E57284,1);
  FUN_00511780(0x01E57284,param_1);
  if (*(int *)(param_1 + 0x2fc) != 0) {
    FUN_00511780(0x01E57284,*(int *)(param_1 + 0x2fc));
  }
  iStack_20 = 0;
  do {
    fStack_f8 = (float)FUN_0050fb00(0x01E57284,&fStack_94,&fStack_ac);
    fStack_14 = fStack_f8;
    if ((fStack_f8 < 0.0) || (1.0 < fStack_f8)) break;
    iVar2 = FUN_0040d890(*(uint *)(0x01E57284 + 0x14cd5c),DAT_00765a98);
    if ((iVar2 != 0) && (iVar3 = (**(code **)(*(int *)(iVar2 + 0x14c) + 0x104))(iVar2), 0 < iVar3))
    {
      iVar2 = 0;
    }
    iStack_18 = FUN_0040d890(*(uint *)(0x01E57284 + 0x14cd5c),_DAT_01c78c78);
    iVar3 = FUN_0040d890(*(uint *)(0x01E57284 + 0x14cd5c),_DAT_02dd10bc);
    iStack_24 = iVar3;
    if (iVar2 == 0) {
      if (iStack_18 == 0) {
        if (iVar3 == 0) {
          FUN_0048b070(0x01C08D04,0x01E57284 + 0x14cd50,param_1 + 0x30,0x01E57284 + 0x14cd40,
                       *(uint *)(0x01E57284 + 0x14cd4c));
          break;
        }
        FUN_00548580(iVar3);
        iVar2 = FUN_005485a0(iVar3,param_1);
        if (iVar2 != 0) {
          fStack_14 = (float)(**(code **)(*(int *)(param_1 + 0x14c) + 0xe4))(param_1);
          FUN_005485e0(iVar3,fStack_14);
        }
        FUN_00511780(0x01E57284,iStack_24);
      }
      else {
        iVar2 = FUN_004aded0(iStack_18);
        if (iVar2 == 0) break;
        FUN_004ada20(iStack_18,0x01E57284 + 0x14cd50);
      }
    }
    else {
      iVar4 = (**(code **)(*(int *)(iVar2 + 0x14c) + 0xd8))(iVar2);
      iVar3 = 0x01E57284;
      if (iVar4 != 0) {
        if (iStack_20 == 0) {
          *(int *)(param_1 + 0x560) = *(int *)(param_1 + 0x560) + 1;
          FUN_00511750(iVar3);
          return 0;
        }
        break;
      }
      FUN_00423ed0(&uStack_f4);
      uStack_f4 = *(uint *)(0x01E57284 + 0x14cd60);
      fStack_f0 = (float)(**(code **)(*(int *)(param_1 + 0x14c) + 0xe4))(param_1);
      uStack_ec = 0x3ecccccd;
      fStack_b8 = *(float *)(0x01E57284 + 0x14cd34) - *(float *)(0x01E57284 + 0x14cd28);
      fStack_b4 = *(float *)(0x01E57284 + 0x14cd38) - *(float *)(0x01E57284 + 0x14cd2c);
      fStack_b0 = *(float *)(0x01E57284 + 0x14cd3c) - *(float *)(0x01E57284 + 0x14cd30);
      fStack_1c = (float)_DAT_0057b49e /
                  SQRT(fStack_b0 * fStack_b0 + fStack_b8 * fStack_b8 + fStack_b4 * fStack_b4);
      fStack_58 = fStack_b8 * fStack_1c;
      fStack_54 = fStack_b4 * fStack_1c;
      fStack_50 = fStack_b0 * fStack_1c;
      if (&fStack_e8 != &fStack_58) {
        fStack_e8 = fStack_58;
        fStack_e4 = fStack_54;
        fStack_e0 = fStack_50;
      }
      fStack_14 = fStack_f0;
      puVar5 = (uint *)FUN_0040a290(iVar2,auStack_34,0x01E57284 + 0x14cd50);
      if (&uStack_d8 != puVar5) {
        uStack_d8 = *puVar5;
        uStack_d4 = puVar5[1];
        uStack_d0 = puVar5[2];
      }
      uStack_cc = *(uint *)(param_1 + 0x564);
      uStack_c4 = 0x68;
      iStack_c0 = param_1;
      uStack_c8 = 0x3e19999a;
      uStack_bc = (**(code **)(*(int *)(param_1 + 0x14c) + 0x8c))(param_1);
      (**(code **)(*(int *)(iVar2 + 0x14c) + 0x100))(iVar2,&uStack_f4);
      if (*(int *)(param_1 + 0x2dc) == 0) break;
      FUN_00511780(0x01E57284,*(uint *)(0x01E57284 + 0x14cd5c));
    }
    iStack_20 = iStack_20 + 1;
  } while (iStack_20 < 4);
  FUN_00511750(0x01E57284);
  if (1.0 < fStack_f8) {
    fStack_f8 = 1.0;
  }
  fStack_4c = fStack_a0 * fStack_f8;
  fStack_48 = fStack_9c * fStack_f8;
  fStack_44 = fStack_98 * fStack_f8;
  fStack_88 = fStack_94 + fStack_4c;
  fStack_84 = fStack_90 + fStack_48;
  fStack_80 = fStack_8c + fStack_44;
  FUN_0052ea60(0x02DC9450,param_1,"bow-!.wav",&fStack_40);
  *(uint *)(param_1 + 0x2f8) = 0x3f2a7efa;
  iVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x8c))(param_1);
  if (iVar2 == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    FUN_004940d0(0x01C70F74);
  }
  return 1;
}
