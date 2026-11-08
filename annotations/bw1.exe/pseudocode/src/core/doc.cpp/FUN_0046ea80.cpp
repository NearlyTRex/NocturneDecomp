// Name: FUN_0046ea80
// Address: 0046ea80
// Address Range: [[0046ea80, 0046f1f0]]
// Convention: unknown
// Signature: void FUN_0046ea80(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046ea80(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_18bc [1515];
  float fVar8;
  uint *puVar9;
  byte *puVar10;
  float local_f0;
  float local_ec;
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
  float local_28;
  uint local_24;
  uint local_20;
  float local_1c;
  float local_18;
  
  bVar7 = 0;
  if ((*(int *)(param_1 + 0x2c98) < 0) || (0x15 < *(int *)(param_1 + 0x2c98))) {
    _DAT_01d1d400 = "..\\core\\doc.cpp";
    _DAT_01d1d404 = 0xc50;
    FUN_005030e0("CDoc::makeDrawDecision - draw motion out of range!");
  }
  local_f0 = 1.0;
  if (*(int *)(param_1 + 0x27c8 + *(int *)(param_1 + 0x2c98) * 0x38) == 0) {
    local_f0 = *(float *)(param_1 + 0x2c9c);
  }
  if (*(int *)(param_1 + 0x27cc + *(int *)(param_1 + 0x2c98) * 0x38) == 0) {
    local_f0 = (1.0 - *(float *)(param_1 + 0x2c9c)) * local_f0;
  }
  iVar2 = param_1 + 0x158;
  local_30 = (float)FUN_00524a40(iVar2,0x2d);
  local_18 = (float)FUN_00524a40(iVar2,0x2e);
  local_30 = local_18 + local_30;
  local_18 = (float)FUN_00524a40(iVar2,0x29);
  local_30 = local_18 + local_30;
  local_18 = (float)FUN_00524a40(iVar2,0x7e);
  local_30 = local_18 + local_30;
  local_18 = (float)FUN_00524a40(iVar2,0x80);
  local_30 = local_18 + local_30;
  local_18 = (float)FUN_00524a40(iVar2,0x6f);
  local_30 = local_18 + local_30;
  local_18 = (float)FUN_00524a40(iVar2,0x27);
  local_f0 = (1.0 - (local_18 + local_30)) * local_f0;
  if (local_f0 < 0.0) {
    local_f0 = 0.0;
  }
  if (*(int *)(param_1 + 0x2c98) != 0xe) goto LAB_0046ecd2;
  fVar1 = (float)FUN_00525020(param_1 + 0x158);
  local_1c = 1.0;
  local_18 = fVar1;
  iVar2 = FUN_00524770(param_1 + 0x158);
  iVar2 = *(int *)(iVar2 + 0x24);
  if ((iVar2 == 0x1a) || (iVar2 == 0x1b)) {
    fVar1 = fVar1 + (float)_DAT_005da07c;
LAB_0046ec9a:
    local_1c = fVar1 * (float)_DAT_005da074;
  }
  else if ((iVar2 == 0x1c) || (iVar2 == 0x1d)) {
    fVar1 = (float)_DAT_005da06c - fVar1;
    goto LAB_0046ec9a;
  }
  if ((int)local_1c < 0x3f800001) {
    if (local_1c < 0.0) {
      local_1c = 0.0;
    }
  }
  else {
    local_1c = 1.0;
  }
  local_f0 = local_f0 * local_1c;
LAB_0046ecd2:
  if ((float)_DAT_005da084 < local_f0) {
    if (1.0 < local_f0) {
      local_f0 = 1.0;
    }
    iVar2 = param_1 + 0x158;
    uVar3 = FUN_00569f30(iVar2,*(int *)(param_1 + 0x2c98) * 0x38 + param_1 + 0x27d0,1);
    local_24 = FUN_005240c0(uVar3);
    local_28 = (float)FUN_00525110(iVar2,local_24,*(uint *)(param_1 + 0x2c9c));
    local_18 = local_28;
    if (((*(int *)(param_1 + 0x2c98) == 9) && (1.0 <= *(float *)(param_1 + 0x2c9c))) &&
       (*(int *)(param_1 + 0x2000c) != 0)) {
      uVar3 = FUN_00569f30(iVar2,param_1 + 0x2a00,1);
      uVar3 = FUN_005240c0(uVar3);
      local_24 = uVar3;
      local_18 = (float)FUN_0040cc00(0,0x3f800000);
      local_18 = (float)FUN_00525110(iVar2,uVar3,local_18);
    }
    local_28 = local_18;
    FUN_00568100(param_1 + 0x158,local_24,local_18,local_f0,_DAT_01b68858,&LAB_00567360);
    if (*(int *)(param_1 + 0x2c98) == 0) {
      local_30 = (float)(param_1 + 0x808);
      FUN_005b7940(_DAT_01b6884c * 0x10 + (int)local_30,_DAT_01b6882c * 0x10 + (int)local_30,
                   *(uint *)(param_1 + 0x2c9c));
      iVar2 = _DAT_01b68828;
      puVar9 = (uint *)(_DAT_01b6884c * 0x10 + 0x808 + param_1);
      puVar5 = puVar9 + (uint)bVar7 * -2 + 1;
      *puVar9 = local_50;
      *puVar5 = *(uint *)(&stack0xffffffb4 + (uint)bVar7 * -8);
      puVar5[(uint)bVar7 * -2 + 1] =
           *(uint *)(&stack0xffffffb8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      (puVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffb8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
            ((uint)bVar7 * -2 + 1) * 4);
      FUN_005b7940(_DAT_01b68848 * 0x10 + (int)local_30,iVar2 * 0x10 + (int)local_30,
                   *(uint *)(param_1 + 0x2c9c));
      puVar9 = (uint *)(param_1 + 0x808 + _DAT_01b68848 * 0x10);
      puVar5 = puVar9 + (uint)bVar7 * -2 + 1;
      *puVar9 = local_d0;
      *puVar5 = *(uint *)(&stack0xffffff34 + (uint)bVar7 * -8);
      puVar5[(uint)bVar7 * -2 + 1] =
           *(uint *)(&stack0xffffff38 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      (puVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffff38 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
            ((uint)bVar7 * -2 + 1) * 4);
    }
    if ((*(int *)(param_1 + 0x2c98) == 1) || (*(int *)(param_1 + 0x2c98) == 0x13)) {
      fVar1 = *(float *)(param_1 + 0x1ffc8);
      local_ec = 0.0;
      local_20 = 0x3e860a92;
      local_2c = 0x3f19999a;
      if (fVar1 < 0.0) {
        local_ec = ((fVar1 + _DAT_005da08c) / (0xBF860A92 + _DAT_005da08c)) * _DAT_005da090;
      }
      if (0.0 < fVar1) {
        local_ec = ((fVar1 - 0.2617994) / (0x3F9C61AA - 0.2617994)) * 0.6;
      }
      local_18 = (float)FUN_00434590(param_1,3);
      local_ec = (1.0 - local_18) * local_f0 * local_ec;
      if (0.0 < local_ec) {
        FUN_005b7af0(fVar1,local_ec,_DAT_01b68858,&LAB_00468a20);
        puVar9 = &stack0xffffff80;
        iVar2 = param_1 + 0x158;
        local_80 = local_70;
        *(uint *)((int)&stack0xffffff84 + (uint)bVar7 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff94 + (uint)bVar7 * -8);
        *(uint *)(&stack0xffffff88 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)(&stack0xffffff98 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        *(uint *)
         ((int)(&stack0xffffff88 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4
         ) = *(uint *)
              ((int)(&stack0xffffff98 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
              ((uint)bVar7 * -2 + 1) * 4);
        FUN_005695e0(iVar2,puVar9);
      }
      local_18 = (float)FUN_00434590(param_1,3);
      local_38 = (1.0 - local_18) * local_f0;
      FUN_005b7b30(*(uint *)(param_1 + 0x1ffcc));
      fVar1 = local_38;
      puVar10 = &LAB_00468a20;
      puVar9 = &stack0xffffff50;
      iVar2 = param_1 + 0x158;
      local_b0 = local_60;
      *(uint *)((int)&stack0xffffff54 + (uint)bVar7 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffa4 + (uint)bVar7 * -8);
      uVar3 = _DAT_01b68858;
      *(uint *)(&stack0xffffff58 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
           *(uint *)(&stack0xffffffa8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      *(uint *)
       ((int)(&stack0xffffff58 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4)
           = *(uint *)
              ((int)(&stack0xffffffa8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
              ((uint)bVar7 * -2 + 1) * 4);
      FUN_005695e0(iVar2,puVar9,fVar1,uVar3,puVar10);
      FUN_0046f200(param_1,1);
      iVar2 = _DAT_01b68828;
      puVar9 = (uint *)(_DAT_01b6884c * 0x10 + 0x808 + param_1);
      puVar5 = (uint *)(param_1 + 0x808 + _DAT_01b6882c * 0x10);
      puVar6 = puVar9 + (uint)bVar7 * -2 + 1;
      puVar4 = puVar5 + (uint)bVar7 * -2 + 1;
      *puVar9 = *puVar5;
      *puVar6 = *puVar4;
      puVar6[(uint)bVar7 * -2 + 1] = puVar4[(uint)bVar7 * -2 + 1];
      (puVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
           (puVar4 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
      iVar2 = param_1 + iVar2 * 0x10;
      puVar9 = (uint *)(param_1 + 0x808 + _DAT_01b68848 * 0x10);
      puVar4 = puVar9 + (uint)bVar7 * -2 + 1;
      puVar5 = (uint *)(iVar2 + 0x80c + (uint)bVar7 * -8);
      *puVar9 = *(uint *)(iVar2 + 0x808);
      puVar9 = puVar5 + (uint)bVar7 * -2 + 1;
      *puVar4 = *puVar5;
      puVar4[(uint)bVar7 * -2 + 1] = *puVar9;
      (puVar4 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] = puVar9[(uint)bVar7 * -2 + 1];
    }
    iVar2 = *(int *)(param_1 + 0x2c98);
    if (((iVar2 == 3) || (iVar2 == 4)) ||
       ((iVar2 == 9 ||
        ((((iVar2 == 6 || (iVar2 == 7)) || (iVar2 == 0x11)) || ((iVar2 == 0x12 || (iVar2 == 8)))))))
       ) {
      local_18 = (float)FUN_00434590(param_1,3);
      local_34 = (1.0 - local_18) * local_f0;
      FUN_005b7af0(*(uint *)(param_1 + 0x1ffc8));
      fVar1 = local_34;
      puVar10 = &LAB_00468a20;
      puVar9 = &stack0xffffff70;
      local_90 = local_c0;
      *(uint *)((int)&stack0xffffff74 + (uint)bVar7 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffff44 + (uint)bVar7 * -8);
      iVar2 = param_1 + 0x158;
      uVar3 = _DAT_01b68858;
      *(uint *)(&stack0xffffff78 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
           *(uint *)(&stack0xffffff48 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      *(uint *)
       ((int)(&stack0xffffff78 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4)
           = *(uint *)
              ((int)(&stack0xffffff48 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
              ((uint)bVar7 * -2 + 1) * 4);
      local_30 = (float)(param_1 + 0x158);
      FUN_005695e0(iVar2,puVar9,fVar1,uVar3,puVar10);
      FUN_005b7b30(*(uint *)(param_1 + 0x1ffcc));
      fVar8 = local_30;
      fVar1 = local_34;
      puVar10 = &LAB_00468a20;
      puVar9 = &stack0xffffff20;
      local_e0 = local_a0;
      *(uint *)((int)&stack0xffffff24 + (uint)bVar7 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffff64 + (uint)bVar7 * -8);
      uVar3 = _DAT_01b68858;
      *(uint *)(&stack0xffffff28 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
           *(uint *)(&stack0xffffff68 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      *(uint *)
       ((int)(&stack0xffffff28 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4)
           = *(uint *)
              ((int)(&stack0xffffff68 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
              ((uint)bVar7 * -2 + 1) * 4);
      FUN_005695e0(fVar8,puVar9,fVar1,uVar3,puVar10);
      return;
    }
  }
  return;
}
