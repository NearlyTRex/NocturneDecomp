// Name: FUN_0051e6d0
// Address: 0051e6d0
// Address Range: [[0051e6d0, 0051ee0d]]
// Convention: unknown
// Signature: void FUN_0051e6d0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051e6d0(int param_1)

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
  float local_e8;
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
  if ((*(int *)(param_1 + 0x2f00) < 0) || (0x20 < *(int *)(param_1 + 0x2f00))) {
    _DAT_01d71de0 = "..\\core\\prye.cpp";
    _DAT_01d71de4 = 0xe24;
    FUN_004e4330("CPrye::makeDrawDecision - draw motion out of range!");
  }
  local_e8 = 1.0;
  if (*(int *)(param_1 + 0x27c8 + *(int *)(param_1 + 0x2f00) * 0x38) == 0) {
    local_e8 = *(float *)(param_1 + 0x2f04);
  }
  if (*(int *)(param_1 + 0x27cc + *(int *)(param_1 + 0x2f00) * 0x38) == 0) {
    local_e8 = (1.0 - *(float *)(param_1 + 0x2f04)) * local_e8;
  }
  iVar2 = param_1 + 0x158;
  local_34 = (float)FUN_004fc350(iVar2,0x35);
  local_18 = (float)FUN_004fc350(iVar2,0x36);
  local_34 = local_18 + local_34;
  local_18 = (float)FUN_004fc350(iVar2,0x31);
  local_34 = local_18 + local_34;
  local_18 = (float)FUN_004fc350(iVar2,0x2f);
  local_e8 = (1.0 - (local_18 + local_34)) * local_e8;
  if (local_e8 < 0.0) {
    local_e8 = 0.0;
  }
  if (*(int *)(param_1 + 0x2f00) != 0x11) goto LAB_0051e8aa;
  fVar1 = (float)FUN_004fc930(param_1 + 0x158);
  local_1c = 1.0;
  local_18 = fVar1;
  iVar2 = FUN_004fc070(param_1 + 0x158);
  iVar2 = *(int *)(iVar2 + 0x24);
  if ((iVar2 == 0x22) || (iVar2 == 0x23)) {
    fVar1 = fVar1 + (float)_DAT_005cd44f;
LAB_0051e872:
    local_1c = fVar1 * (float)_DAT_005cd447;
  }
  else if ((iVar2 == 0x24) || (iVar2 == 0x25)) {
    fVar1 = (float)_DAT_005cd43f - fVar1;
    goto LAB_0051e872;
  }
  if ((int)local_1c < 0x3f800001) {
    if (local_1c < 0.0) {
      local_1c = 0.0;
    }
  }
  else {
    local_1c = 1.0;
  }
  local_e8 = local_e8 * local_1c;
LAB_0051e8aa:
  if ((float)_DAT_005cd457 < local_e8) {
    if (1.0 < local_e8) {
      local_e8 = 1.0;
    }
    iVar2 = param_1 + 0x158;
    uVar3 = FUN_0054eac0(iVar2,*(int *)(param_1 + 0x2f00) * 0x38 + param_1 + 0x27d0,1);
    local_20 = FUN_004fb9c0(uVar3);
    local_24 = (float)FUN_004fca20(iVar2,local_20,*(uint *)(param_1 + 0x2f04));
    local_18 = local_24;
    if (((*(int *)(param_1 + 0x2f00) == 9) && (1.0 <= *(float *)(param_1 + 0x2f04))) &&
       (*(int *)(param_1 + 0x20c2c) != 0)) {
      uVar3 = FUN_0054eac0(iVar2,param_1 + 0x2a00,1);
      uVar3 = FUN_004fb9c0(uVar3);
      local_20 = uVar3;
      local_18 = (float)FUN_0040ce40(0,0x3f800000);
      local_18 = (float)FUN_004fca20(iVar2,uVar3,local_18);
    }
    local_24 = local_18;
    FUN_0054cc90(param_1 + 0x158,local_20,local_18,local_e8,_DAT_01ed3720,&LAB_0054bef0);
    if (*(int *)(param_1 + 0x2f00) == 0) {
      local_34 = (float)(param_1 + 0x808);
      FUN_00585b20(_DAT_01ed3714 * 0x10 + (int)local_34,_DAT_01ed36f4 * 0x10 + (int)local_34,
                   *(uint *)(param_1 + 0x2f04));
      puVar9 = (uint *)(param_1 + 0x808 + _DAT_01ed3714 * 0x10);
      puVar5 = puVar9 + (uint)bVar7 * -2 + 1;
      *puVar9 = local_60;
      *puVar5 = *(uint *)(&stack0xffffffa4 + (uint)bVar7 * -8);
      puVar5[(uint)bVar7 * -2 + 1] =
           *(uint *)(&stack0xffffffa8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      (puVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffa8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
            ((uint)bVar7 * -2 + 1) * 4);
      FUN_00585b20(_DAT_01ed3710 * 0x10 + (int)local_34,_DAT_01ed36f0 * 0x10 + (int)local_34,
                   *(uint *)(param_1 + 0x2f04));
      puVar9 = (uint *)(param_1 + 0x808 + _DAT_01ed3710 * 0x10);
      puVar5 = puVar9 + (uint)bVar7 * -2 + 1;
      *puVar9 = local_50;
      *puVar5 = *(uint *)(&stack0xffffffb4 + (uint)bVar7 * -8);
      puVar5[(uint)bVar7 * -2 + 1] =
           *(uint *)(&stack0xffffffb8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      (puVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffb8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
            ((uint)bVar7 * -2 + 1) * 4);
    }
    iVar2 = *(int *)(param_1 + 0x2f00);
    if (((iVar2 == 1) || (iVar2 == 0x16)) || ((iVar2 == 0x19 || (iVar2 == 0x1a)))) {
      fVar1 = *(float *)(param_1 + 0x20be8);
      local_f0 = 0.0;
      local_2c = 0x3f19999a;
      local_28 = 0x3e860a92;
      if (fVar1 < 0.0) {
        local_f0 = ((fVar1 + _DAT_005cd45f) / (0xBF490FDB + _DAT_005cd45f)) * _DAT_005cd463;
      }
      if (0.0 < fVar1) {
        local_f0 = ((fVar1 - 0.2617994) / (0x3F490FDB - 0.2617994)) * 0.6;
      }
      local_18 = (float)FUN_00433a60(param_1,3);
      local_f0 = (1.0 - local_18) * local_e8 * local_f0;
      if (0.0 < local_f0) {
        FUN_00585cd0(fVar1,local_f0,_DAT_01ed3720,&LAB_00517ce0);
        puVar9 = &stack0xffffff20;
        iVar2 = param_1 + 0x158;
        local_e0 = local_a0;
        *(uint *)((int)&stack0xffffff24 + (uint)bVar7 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff64 + (uint)bVar7 * -8);
        *(uint *)(&stack0xffffff28 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)(&stack0xffffff68 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        *(uint *)
         ((int)(&stack0xffffff28 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4
         ) = *(uint *)
              ((int)(&stack0xffffff68 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
              ((uint)bVar7 * -2 + 1) * 4);
        FUN_0054e170(iVar2,puVar9);
      }
      local_18 = (float)FUN_00433a60(param_1,3);
      local_38 = (1.0 - local_18) * local_e8;
      FUN_00585d10(*(uint *)(param_1 + 0x20bec));
      local_80 = local_70;
      *(uint *)((int)&stack0xffffff84 + (uint)bVar7 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffff94 + (uint)bVar7 * -8);
      *(uint *)(&stack0xffffff88 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
           *(uint *)(&stack0xffffff98 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      *(uint *)
       ((int)(&stack0xffffff88 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4)
           = *(uint *)
              ((int)(&stack0xffffff98 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
              ((uint)bVar7 * -2 + 1) * 4);
      FUN_0054e170(param_1 + 0x158,&stack0xffffff80,local_38,_DAT_01ed3720,&LAB_00517ce0);
      iVar2 = FUN_0040c840(*(uint *)(param_1 + 0x25b0),DAT_007e1a50);
      if ((iVar2 != 0) && (*(int *)(param_1 + 0x20c24) != 0)) {
        FUN_0051ee10(param_1,0);
      }
      FUN_0051ee10(param_1,1);
      iVar2 = _DAT_01ed36f0;
      puVar9 = (uint *)(_DAT_01ed3714 * 0x10 + 0x808 + param_1);
      puVar5 = (uint *)(param_1 + 0x808 + _DAT_01ed36f4 * 0x10);
      puVar6 = puVar9 + (uint)bVar7 * -2 + 1;
      puVar4 = puVar5 + (uint)bVar7 * -2 + 1;
      *puVar9 = *puVar5;
      *puVar6 = *puVar4;
      puVar6[(uint)bVar7 * -2 + 1] = puVar4[(uint)bVar7 * -2 + 1];
      (puVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
           (puVar4 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
      iVar2 = param_1 + iVar2 * 0x10;
      puVar9 = (uint *)(param_1 + 0x808 + _DAT_01ed3710 * 0x10);
      puVar4 = puVar9 + (uint)bVar7 * -2 + 1;
      puVar5 = (uint *)(iVar2 + 0x80c + (uint)bVar7 * -8);
      *puVar9 = *(uint *)(iVar2 + 0x808);
      puVar9 = puVar5 + (uint)bVar7 * -2 + 1;
      *puVar4 = *puVar5;
      puVar4[(uint)bVar7 * -2 + 1] = *puVar9;
      (puVar4 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] = puVar9[(uint)bVar7 * -2 + 1];
    }
    iVar2 = *(int *)(param_1 + 0x2f00);
    if (((((iVar2 == 3) || (iVar2 == 4)) || (iVar2 == 9)) || ((iVar2 == 6 || (iVar2 == 7)))) ||
       ((iVar2 == 0x14 || ((iVar2 == 0x15 || (iVar2 == 8)))))) {
      local_18 = (float)FUN_00433a60(param_1,3);
      local_30 = (1.0 - local_18) * local_e8;
      FUN_00585cd0(*(uint *)(param_1 + 0x20be8));
      fVar1 = local_30;
      puVar10 = &LAB_00517ce0;
      puVar9 = &stack0xffffff40;
      local_c0 = local_b0;
      *(uint *)((int)&stack0xffffff44 + (uint)bVar7 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffff54 + (uint)bVar7 * -8);
      iVar2 = param_1 + 0x158;
      uVar3 = _DAT_01ed3720;
      *(uint *)(&stack0xffffff48 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
           *(uint *)(&stack0xffffff58 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      *(uint *)
       ((int)(&stack0xffffff48 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4)
           = *(uint *)
              ((int)(&stack0xffffff58 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
              ((uint)bVar7 * -2 + 1) * 4);
      local_18 = (float)(param_1 + 0x158);
      FUN_0054e170(iVar2,puVar9,fVar1,uVar3,puVar10);
      FUN_00585d10(*(uint *)(param_1 + 0x20bec));
      fVar8 = local_18;
      fVar1 = local_30;
      puVar10 = &LAB_00517ce0;
      puVar9 = &stack0xffffff30;
      local_d0 = local_90;
      *(uint *)((int)&stack0xffffff34 + (uint)bVar7 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffff74 + (uint)bVar7 * -8);
      uVar3 = _DAT_01ed3720;
      *(uint *)(&stack0xffffff38 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
           *(uint *)(&stack0xffffff78 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      *(uint *)
       ((int)(&stack0xffffff38 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4)
           = *(uint *)
              ((int)(&stack0xffffff78 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
              ((uint)bVar7 * -2 + 1) * 4);
      FUN_0054e170(fVar8,puVar9,fVar1,uVar3,puVar10);
      return;
    }
  }
  return;
}
