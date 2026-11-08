// Name: FUN_0058a660
// Address: 0058a660
// Address Range: [[0058a660, 0058aa27]]
// Convention: unknown
// Signature: void FUN_0058a660(int *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058a660(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float afStackY_1018 [1011];
  float local_34;
  uint local_30;
  float local_2c;
  float local_24;
  float local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar5 = 0;
  fVar1 = *(float *)(0x01CB6900 + 0x284);
  local_24 = fVar1;
  if (param_1[9] != 0) {
    fVar2 = (float)param_1[10];
    param_1[10] = (int)(fVar2 - fVar1);
    if (0.0 <= fVar2 - fVar1) {
      iVar4 = FUN_0048e340(0x01C38BC0,"?noLightningFlash" + 1);
      if (iVar4 == 0) {
        local_14 = (float)_DAT_01fc8a20;
        local_20 = (float)_DAT_01fc8a20 * (float)_DAT_005ee572 - local_24;
        if (local_20 < (float)param_1[0xc]) {
          local_20 = (float)param_1[0xc];
          param_1[9] = 0;
          param_1[10] = 0;
        }
        FUN_00441e80(0x1fc7838,local_20);
        goto LAB_0058a68c;
      }
    }
    FUN_00441e80(0x1fc7838,param_1[0xc]);
    param_1[9] = 0;
    param_1[10] = 0;
  }
LAB_0058a68c:
  if (*param_1 == 0) {
    FUN_00551050(_DAT_02662d00);
    return;
  }
  iVar4 = 0;
  local_1c = 0;
  local_18 = 0;
  do {
    *(byte *)(local_1c + 0x2662c38) = 0;
    fVar2 = *(float *)(&DAT_02661fbc + iVar4) - (float)param_1[1] * fVar1;
    *(float *)(&DAT_02661fbc + iVar4) = fVar2;
    if ((fVar2 < *(float *)(local_18 + 0x2662918)) &&
       (*(float *)(&DAT_02661fbc + iVar4) = *(float *)(&DAT_02661fbc + iVar4) + _DAT_005ee592,
       *param_1 == 1)) {
      fVar2 = *(float *)(local_18 + 0x2662918);
      local_30 = *(uint *)(&DAT_02661fb8 + iVar4);
      (&stack0xffffffd4)[(uint)bVar5 * 0xfffffffe] =
           (float)*(uint *)(&DAT_02661fbc + (uint)bVar5 * -8 + iVar4);
      *(uint *)(&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)
            ((int)(&DAT_02661fbc + (uint)bVar5 * -8 + iVar4) + ((uint)bVar5 * -2 + 1) * 4);
      local_2c = fVar2;
      FUN_0049ea20(0x01C3DEB4,&stack0xffffffd0,0);
      FUN_0049ea20(0x01C3DEB4,&stack0xffffffd0,0);
      FUN_0049ea20(0x01C3DEB4,&stack0xffffffd0,0);
      FUN_0049ea20(0x01C3DEB4,&stack0xffffffd0,0);
    }
    iVar4 = iVar4 + 0xc;
    local_1c = local_1c + 1;
    local_18 = local_18 + 4;
  } while (local_1c < 200);
  if (*param_1 == 1) {
    fVar2 = (float)param_1[8];
    param_1[8] = (int)(fVar2 - fVar1);
    if (fVar2 - fVar1 < 0.0) {
      iVar4 = FUN_0040d060(0x3ecccccd);
      if (iVar4 == 0) {
        FUN_0058acf0(param_1);
      }
      else {
        FUN_0058aa30(param_1,0x3dcccccd,1);
      }
    }
    else {
      fVar2 = (float)param_1[0xb];
      param_1[0xb] = (int)(fVar2 - fVar1);
      if (fVar2 - fVar1 < 0.0) {
        local_14 = (float)FUN_0040cf60(0x3dcccccd,param_1[0xd]);
        param_1[0xb] = (int)local_14;
        iVar4 = FUN_0048e340(0x01C38BC0,"noLightningFlash");
        if (iVar4 == 0) {
          param_1[9] = 1;
          local_14 = (float)_DAT_01fc8a20;
          fVar3 = (float)_DAT_01fc8a20;
          fVar2 = (float)_DAT_005ee572;
          param_1[0xc] = (int)(fVar3 * fVar2);
          local_14 = (float)FUN_0040cf60(0x3dcccccd,0x3e99999a);
          local_34 = local_14 + fVar3 * fVar2;
          if (1.0 < local_34) {
            local_34 = 1.0;
          }
          local_14 = (float)FUN_0040cf60(0x3c23d70a,local_34 * (float)_DAT_005ee57a);
          param_1[10] = (int)local_14;
          FUN_00441e80(0x1fc7838,local_34);
        }
      }
    }
    if ((float)_DAT_005ee582 <= (float)param_1[0xd]) {
      param_1[0xd] = 0x41700000;
    }
    else {
      fVar8 = (float10)1;
      fVar6 = (float10)1.4426950408889634 *
              ((float10)fVar1 * (float10)_DAT_005ee58a +
              (float10)0.6931471805599453 * (float10)(float)param_1[0xd]);
      fVar7 = (float10)f2xm1(fVar6 - (fVar6 / fVar8) * fVar8);
      fVar8 = (float10)fscale(fVar7 + fVar8,fVar6);
      param_1[0xd] = (int)(float)fVar8;
    }
    iVar4 = FUN_00550b70(_DAT_02662d00);
    if (iVar4 == 0) {
      _DAT_02662d00 = FUN_0055ae30(0x0264B290,param_1,"rain.wav @ .1");
      return;
    }
  }
  return;
}
