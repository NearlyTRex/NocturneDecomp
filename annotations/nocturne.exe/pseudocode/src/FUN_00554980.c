// Name: FUN_00554980
// Address: 00554980
// Address Range: [[00554980, 00554d3e]]
// Convention: unknown
// Signature: void FUN_00554980(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00554980(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  fVar2 = *(float *)(0x01C775EC + 0x264);
  local_1c = fVar2;
  if (param_1[9] != 0) {
    fVar1 = (float)param_1[10];
    param_1[10] = (int)(fVar1 - fVar2);
    if (0.0 <= fVar1 - fVar2) {
      iVar5 = FUN_0047dc30(0x01C03A10,"?noLightningFlash" + 1);
      if (iVar5 == 0) {
        local_14 = (float)_DAT_01fb96f0;
        local_18 = (float)_DAT_01fb96f0 * (float)_DAT_00597c49 - local_1c;
        if (local_18 < (float)param_1[0xc]) {
          local_18 = (float)param_1[0xc];
          param_1[9] = 0;
          param_1[10] = 0;
        }
        FUN_00446740(0x1fb8508,local_18);
        goto LAB_005549ac;
      }
    }
    FUN_00446740(0x1fb8508,param_1[0xc]);
    param_1[9] = 0;
    param_1[10] = 0;
  }
LAB_005549ac:
  if (*param_1 == 0) {
    FUN_00527230(_DAT_02de0770);
    return;
  }
  iVar6 = 0;
  iVar7 = 0;
  iVar5 = 0;
  do {
    *(byte *)(iVar6 + 0x2de06a8) = 0;
    fVar1 = *(float *)(&DAT_02ddfa2c + iVar5) - (float)param_1[1] * fVar2;
    *(float *)(&DAT_02ddfa2c + iVar5) = fVar1;
    if ((fVar1 < *(float *)(iVar7 + 0x2de0388)) &&
       (*(float *)(&DAT_02ddfa2c + iVar5) = *(float *)(&DAT_02ddfa2c + iVar5) + _DAT_00597c69,
       *param_1 == 1)) {
      local_28 = *(uint *)(&DAT_02ddfa28 + iVar5);
      local_20 = *(uint *)(&DAT_02ddfa30 + iVar5);
      local_24 = *(uint *)(iVar7 + 0x2de0388);
      FUN_0048c760(0x01C08D04,&local_28,0);
      FUN_0048c760(0x01C08D04,&local_28,0);
      FUN_0048c760(0x01C08D04,&local_28,0);
      FUN_0048c760(0x01C08D04,&local_28,0);
    }
    iVar5 = iVar5 + 0xc;
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + 4;
  } while (iVar6 < 200);
  if (*param_1 == 1) {
    fVar1 = (float)param_1[8];
    param_1[8] = (int)(fVar1 - fVar2);
    if (fVar1 - fVar2 < 0.0) {
      iVar5 = FUN_0040dea0(0x3ecccccd);
      if (iVar5 == 0) {
        FUN_00554fd0(param_1);
      }
      else {
        FUN_00554d40(param_1,0x3dcccccd,1);
      }
    }
    else {
      fVar1 = (float)param_1[0xb];
      param_1[0xb] = (int)(fVar1 - fVar2);
      if (fVar1 - fVar2 < 0.0) {
        local_14 = (float)FUN_0040dda0(0x3dcccccd,param_1[0xd]);
        uVar4 = 0x01C03A10;
        param_1[0xb] = (int)local_14;
        iVar5 = FUN_0047dc30(uVar4,"noLightningFlash");
        if (iVar5 == 0) {
          param_1[9] = 1;
          local_14 = (float)_DAT_01fb96f0;
          fVar3 = (float)_DAT_01fb96f0;
          fVar1 = (float)_DAT_00597c49;
          param_1[0xc] = (int)(fVar3 * fVar1);
          local_14 = (float)FUN_0040dda0(0x3dcccccd,0x3e99999a);
          local_2c = local_14 + fVar3 * fVar1;
          if (1.0 < local_2c) {
            local_2c = 1.0;
          }
          local_14 = (float)FUN_0040dda0(0x3c23d70a,local_2c * (float)_DAT_00597c51);
          param_1[10] = (int)local_14;
          FUN_00446740(0x1fb8508,local_2c);
        }
      }
    }
    if ((float)_DAT_00597c59 <= (float)param_1[0xd]) {
      param_1[0xd] = 0x41700000;
    }
    else {
      fVar10 = (float10)1;
      fVar8 = (float10)1.4426950408889634 *
              ((float10)fVar2 * (float10)_DAT_00597c61 +
              (float10)0.6931471805599453 * (float10)(float)param_1[0xd]);
      fVar9 = (float10)f2xm1(fVar8 - (fVar8 / fVar10) * fVar10);
      fVar10 = (float10)fscale(fVar9 + fVar10,fVar8);
      param_1[0xd] = (int)(float)fVar10;
    }
    iVar5 = FUN_00526c50(_DAT_02de0770);
    if (iVar5 == 0) {
      _DAT_02de0770 = FUN_0052ea40(0x02DC9450,param_1,"rain.wav @ .1");
      return;
    }
  }
  return;
}
