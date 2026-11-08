// Name: FUN_0054edb0
// Address: 0054edb0
// Address Range: [[0054edb0, 0054ef90]]
// Convention: unknown
// Signature: void FUN_0054edb0(int param_1,undefined4 param_2,undefined4 param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_0054edb0(int param_1,uint param_2,uint param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_1860 [1520];
  float fStack_88;
  float fStack_84;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float afStack_64 [4];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  int iStack_28;
  float fStack_24;
  int iStack_20;
  float *pfStack_1c;
  float *pfStack_18;
  
  bVar4 = 0;
  iVar1 = FUN_0054eac0(param_1);
  iStack_20 = iVar1;
  FUN_004fcb50(param_1,param_2,param_3,&iStack_2c,&iStack_28,&stack0xffffff78);
  iVar2 = 0;
  if (0 < *(int *)(iVar1 + 0x1de78)) {
    pfStack_18 = param_4;
    pfStack_1c = param_4;
    do {
      FUN_00548140(iStack_20,iVar2,iStack_2c,iStack_28,fStack_88);
      iVar2 = iVar2 + 1;
      pfVar3 = pfStack_1c + (uint)bVar4 * -2 + 4;
      pfStack_1c[3] = fStack_84;
      *pfVar3 = *(float *)((int)&stack0xffffff80 + (uint)bVar4 * 0xfffffffe * 4);
      pfVar3[(uint)bVar4 * -2 + 1] =
           *(float *)(&stack0xffffff84 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      (pfVar3 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
           *(float *)((int)(&stack0xffffff84 + (uint)bVar4 * -8 + (uint)bVar4 * -8) +
                     ((uint)bVar4 * -2 + 1) * 4);
      pfStack_18[0x193] = 1.0;
      pfStack_18 = pfStack_18 + 1;
      pfStack_1c = pfStack_1c + 4;
    } while (iVar2 < *(int *)(iStack_20 + 0x1de78));
  }
  iVar1 = *(int *)(iStack_20 + 0x1ec94);
  fStack_74 = *(float *)(iVar1 + iStack_28 * 0xc) * fStack_88;
  fStack_70 = *(float *)(iVar1 + 4 + iStack_28 * 0xc) * fStack_88;
  fStack_6c = *(float *)(iVar1 + 8 + iStack_28 * 0xc) * fStack_88;
  afStack_64[2] = fStack_74;
  afStack_64[(uint)bVar4 * 0xfffffffe + 3] =
       (float)*(uint *)((int)&stack0xffffff90 + (uint)bVar4 * -8);
  afStack_64[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 4] =
       (float)*(uint *)((int)&stack0xffffff94 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fStack_24 = 1.0 - fStack_88;
  fStack_38 = *(float *)(iVar1 + iStack_2c * 0xc) * fStack_24;
  fStack_34 = *(float *)(iVar1 + 4 + iStack_2c * 0xc) * fStack_24;
  fStack_30 = *(float *)(iVar1 + 8 + iStack_2c * 0xc) * fStack_24;
  fStack_44 = fStack_38;
  afStack_64[(uint)bVar4 * 0xfffffffe + 9] = afStack_64[(uint)bVar4 * 0xfffffffe + 0xc];
  afStack_64[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 10] =
       afStack_64[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 0xd];
  fStack_50 = fStack_44 + afStack_64[2];
  fStack_4c = fStack_40 + afStack_64[3];
  fStack_48 = fStack_3c + fStack_54;
  fStack_68 = fStack_44 + afStack_64[2];
  *(float *)((int)afStack_64 + (uint)bVar4 * -8) = afStack_64[(uint)bVar4 * 0xfffffffe + 6];
  afStack_64[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1] =
       afStack_64[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 7];
  if (&fStack_68 != param_4) {
    *param_4 = fStack_68;
    param_4[1] = afStack_64[0];
    param_4[2] = afStack_64[1];
  }
  *param_4 = *(float *)(param_1 + 0x508) * *param_4;
  param_4[1] = *(float *)(param_1 + 0x50c) * param_4[1];
  param_4[2] = *(float *)(param_1 + 0x510) * param_4[2];
  return;
}
