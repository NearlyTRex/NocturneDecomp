// Name: FUN_0058a360
// Address: 0058a360
// Address Range: [[0058a360, 0058aaae]]
// Convention: unknown
// Signature: void FUN_0058a360(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058a360(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float10 fVar8;
  float afStackY_18cc [1515];
  float fVar9;
  uint *puVar10;
  uint uVar11;
  byte *puVar12;
  float local_100;
  float local_f8;
  uint local_f0;
  uint local_e0;
  uint local_d0;
  uint local_c0;
  uint local_b0;
  uint local_a0;
  uint local_90;
  uint local_80;
  uint local_70;
  uint local_60;
  uint local_50;
  float local_38;
  float local_34;
  float local_30;
  uint local_2c;
  uint local_28;
  float local_24;
  uint local_20;
  float local_1c;
  float local_18;
  
  bVar7 = 0;
  if ((*(int *)(param_1 + 0x2c98) < 0) || (0x15 < *(int *)(param_1 + 0x2c98))) {
    _DAT_01d1d400 = "..\\core\\stranger.cpp";
    _DAT_01d1d404 = 0xae2;
    FUN_005030e0("CStranger::makeDrawDecision - draw motion out of range!");
  }
  local_f8 = 1.0;
  if (*(int *)(param_1 + 0x27c8 + *(int *)(param_1 + 0x2c98) * 0x38) == 0) {
    local_f8 = *(float *)(param_1 + 0x2c9c);
  }
  if (*(int *)(param_1 + 0x27cc + *(int *)(param_1 + 0x2c98) * 0x38) == 0) {
    local_f8 = (1.0 - *(float *)(param_1 + 0x2c9c)) * local_f8;
  }
  iVar2 = param_1 + 0x158;
  local_30 = (float)FUN_00524a40(iVar2,0x35);
  local_18 = (float)FUN_00524a40(iVar2,0x36);
  local_30 = local_18 + local_30;
  local_18 = (float)FUN_00524a40(iVar2,0x31);
  local_30 = local_18 + local_30;
  local_18 = (float)FUN_00524a40(iVar2,0x2f);
  local_f8 = (1.0 - (local_18 + local_30)) * local_f8;
  if (local_f8 < 0.0) {
    local_f8 = 0.0;
  }
  if (*(int *)(param_1 + 0x2c98) != 0xe) goto LAB_0058a53a;
  fVar1 = (float)FUN_00525020(param_1 + 0x158);
  local_1c = 1.0;
  local_18 = fVar1;
  iVar2 = FUN_00524770(param_1 + 0x158);
  iVar2 = *(int *)(iVar2 + 0x24);
  if ((iVar2 == 0x22) || (iVar2 == 0x23)) {
    fVar1 = fVar1 + (float)_DAT_005f6b69;
LAB_0058a502:
    local_1c = fVar1 * (float)_DAT_005f6b61;
  }
  else if ((iVar2 == 0x24) || (iVar2 == 0x25)) {
    fVar1 = (float)_DAT_005f6b59 - fVar1;
    goto LAB_0058a502;
  }
  if ((int)local_1c < 0x3f800001) {
    if (local_1c < 0.0) {
      local_1c = 0.0;
    }
  }
  else {
    local_1c = 1.0;
  }
  local_f8 = local_f8 * local_1c;
LAB_0058a53a:
  if (local_f8 <= (float)_DAT_005f6b71) {
    return;
  }
  if (1.0 < local_f8) {
    local_f8 = 1.0;
  }
  iVar2 = param_1 + 0x158;
  uVar3 = FUN_00569f30(iVar2,param_1 + *(int *)(param_1 + 0x2c98) * 0x38 + 0x27d0,1);
  local_20 = FUN_005240c0(uVar3);
  local_24 = (float)FUN_00525110(iVar2,local_20,*(uint *)(param_1 + 0x2c9c));
  local_18 = local_24;
  if (((*(int *)(param_1 + 0x2c98) == 9) && (1.0 <= *(float *)(param_1 + 0x2c9c))) &&
     (*(int *)(param_1 + 0x2000c) != 0)) {
    uVar3 = FUN_00569f30(iVar2,param_1 + 0x2a00,1);
    uVar3 = FUN_005240c0(uVar3);
    local_20 = uVar3;
    local_18 = (float)FUN_0040cc00(0,0x3f800000);
    local_18 = (float)FUN_00525110(iVar2,uVar3,local_18);
  }
  local_24 = local_18;
  FUN_00568100(param_1 + 0x158,local_20,local_18,local_f8,_DAT_02c83644,&LAB_00567360);
  if (*(int *)(param_1 + 0x2c98) == 0) {
    local_30 = (float)(param_1 + 0x808);
    FUN_005b7940(_DAT_02c83638 * 0x10 + (int)local_30,_DAT_02c83618 * 0x10 + (int)local_30,
                 *(uint *)(param_1 + 0x2c9c));
    puVar10 = (uint *)(param_1 + 0x808 + _DAT_02c83638 * 0x10);
    puVar5 = puVar10 + (uint)bVar7 * -2 + 1;
    *puVar10 = local_c0;
    *puVar5 = *(uint *)(&stack0xffffff44 + (uint)bVar7 * -8);
    puVar5[(uint)bVar7 * -2 + 1] =
         *(uint *)(&stack0xffffff48 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    (puVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff48 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
          ((uint)bVar7 * -2 + 1) * 4);
    FUN_005b7940(_DAT_02c83634 * 0x10 + (int)local_30,_DAT_02c83614 * 0x10 + (int)local_30,
                 *(uint *)(param_1 + 0x2c9c));
    puVar10 = (uint *)(param_1 + 0x808 + _DAT_02c83634 * 0x10);
    puVar5 = puVar10 + (uint)bVar7 * -2 + 1;
    *puVar10 = local_f0;
    *puVar5 = *(uint *)(&stack0xffffff14 + (uint)bVar7 * -8);
    puVar5[(uint)bVar7 * -2 + 1] =
         *(uint *)(&stack0xffffff18 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    (puVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff18 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
          ((uint)bVar7 * -2 + 1) * 4);
  }
  if (*(int *)(param_1 + 0x2c98) == 1) {
    fVar1 = (*(float *)(param_1 + 0x1ffc8) + *(float *)(param_1 + 0x1ffe8)) * (float)_DAT_005f6b79;
    local_100 = 0.0;
    local_28 = 0x3e860a92;
    local_2c = 0x3f19999a;
    if (fVar1 < 0.0) {
      local_100 = ((fVar1 + _DAT_005f6b81) / (0xBF860A92 + _DAT_005f6b81)) * _DAT_005f6b85;
    }
    if (0.0 < fVar1) {
      local_100 = ((fVar1 - 0.2617994) / (0x3F9C61AA - 0.2617994)) * 0.6;
    }
    local_18 = (float)FUN_00434590(param_1,3);
    local_100 = (1.0 - local_18) * local_f8 * local_100;
    if (0.0 < local_100) {
      FUN_005b7af0(fVar1,local_100,_DAT_02c83644,&LAB_00585040);
      puVar10 = &stack0xffffff90;
      iVar2 = param_1 + 0x158;
      local_70 = local_90;
      *(uint *)((int)&stack0xffffff94 + (uint)bVar7 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffff74 + (uint)bVar7 * -8);
      *(uint *)(&stack0xffffff98 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
           *(uint *)(&stack0xffffff78 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      *(uint *)
       ((int)(&stack0xffffff98 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4)
           = *(uint *)
              ((int)(&stack0xffffff78 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
              ((uint)bVar7 * -2 + 1) * 4);
      FUN_005695e0(iVar2,puVar10);
    }
    FUN_0058aab0(param_1,0);
    FUN_0058aab0(param_1,1);
    puVar10 = (uint *)(param_1 + 0x808 + _DAT_02c83638 * 0x10);
    puVar5 = (uint *)(_DAT_02c83618 * 0x10 + 0x808 + param_1);
    puVar6 = puVar10 + (uint)bVar7 * -2 + 1;
    puVar4 = puVar5 + (uint)bVar7 * -2 + 1;
    *puVar10 = *puVar5;
    *puVar6 = *puVar4;
    puVar6[(uint)bVar7 * -2 + 1] = puVar4[(uint)bVar7 * -2 + 1];
    (puVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (puVar4 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
    puVar10 = (uint *)(_DAT_02c83634 * 0x10 + 0x808 + param_1);
    puVar5 = (uint *)(param_1 + 0x808 + _DAT_02c83614 * 0x10);
    puVar6 = puVar10 + (uint)bVar7 * -2 + 1;
    puVar4 = puVar5 + (uint)bVar7 * -2 + 1;
    *puVar10 = *puVar5;
    *puVar6 = *puVar4;
    puVar6[(uint)bVar7 * -2 + 1] = puVar4[(uint)bVar7 * -2 + 1];
    (puVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (puVar4 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
  }
  iVar2 = *(int *)(param_1 + 0x2c98);
  if ((((iVar2 == 3) || (iVar2 == 4)) || ((iVar2 == 9 || ((iVar2 == 6 || (iVar2 == 7)))))) ||
     (iVar2 == 8)) {
    local_18 = (float)FUN_00434590(param_1,3);
    local_38 = (1.0 - local_18) * local_f8;
    FUN_005b7af0(*(uint *)(param_1 + 0x1ffc8));
    fVar1 = local_38;
    puVar12 = &LAB_00585040;
    puVar10 = &stack0xffffff20;
    local_e0 = local_80;
    *(uint *)((int)&stack0xffffff24 + (uint)bVar7 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff84 + (uint)bVar7 * -8);
    fVar9 = (float)(param_1 + 0x158);
    uVar3 = _DAT_02c83644;
    *(uint *)(&stack0xffffff28 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
         *(uint *)(&stack0xffffff88 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    *(uint *)
     ((int)(&stack0xffffff28 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff88 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
          ((uint)bVar7 * -2 + 1) * 4);
    local_30 = (float)(param_1 + 0x158);
    FUN_005695e0(fVar9,puVar10,fVar1,uVar3,puVar12);
    FUN_005b7b30(*(uint *)(param_1 + 0x1ffcc));
    local_50 = local_60;
    *(uint *)((int)&stack0xffffffb4 + (uint)bVar7 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffa4 + (uint)bVar7 * -8);
    *(uint *)(&stack0xffffffb8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
         *(uint *)(&stack0xffffffa8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    *(uint *)
     ((int)(&stack0xffffffb8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffffa8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
          ((uint)bVar7 * -2 + 1) * 4);
    FUN_005695e0(local_30,&stack0xffffffb0,local_38,_DAT_02c83644,&LAB_00585040);
    if (*(int *)(param_1 + 0x2c98) != 0xe) {
      return;
    }
  }
  else if (*(int *)(param_1 + 0x2c98) != 0xe) {
    return;
  }
  fVar8 = (float10)fpatan((float10)*(float *)(param_1 + 0x20084) / (float10)_DAT_006060b8,(float10)1
                         );
  local_34 = (float)fVar8;
  FUN_005b7b30(local_34);
  puVar12 = &LAB_00567360;
  puVar10 = &stack0xffffff60;
  uVar11 = 0x3f800000;
  param_1 = param_1 + 0x158;
  local_a0 = local_d0;
  *(uint *)((int)&stack0xffffff64 + (uint)bVar7 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff34 + (uint)bVar7 * -8);
  iVar2 = param_1;
  uVar3 = _DAT_02c83610;
  *(uint *)(&stack0xffffff68 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)(&stack0xffffff38 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  *(uint *)
   ((int)(&stack0xffffff68 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xffffff38 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4)
  ;
  FUN_005695e0(iVar2,puVar10,uVar11,uVar3,puVar12);
  FUN_005b7b30(-local_34);
  puVar12 = &LAB_00567360;
  puVar10 = &stack0xffffff60;
  uVar11 = 0x3f800000;
  local_a0 = local_b0;
  *(uint *)((int)&stack0xffffff64 + (uint)bVar7 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff54 + (uint)bVar7 * -8);
  uVar3 = _DAT_02c8360c;
  *(uint *)(&stack0xffffff68 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)(&stack0xffffff58 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  *(uint *)
   ((int)(&stack0xffffff68 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xffffff58 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4)
  ;
  FUN_005695e0(param_1,puVar10,uVar11,uVar3,puVar12);
  return;
}
