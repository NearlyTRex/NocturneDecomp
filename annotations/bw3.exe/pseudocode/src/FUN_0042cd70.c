// Name: FUN_0042cd70
// Address: 0042cd70
// Address Range: [[0042cd70, 0042d381]]
// Convention: unknown
// Signature: undefined4 FUN_0042cd70(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0042cd70(int param_1,float param_2)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  uint auStackY_18b0 [1511];
  byte *puVar9;
  uint auStack_104 [6];
  uint auStack_ec [6];
  uint local_d4;
  uint auStack_d0 [3];
  uint local_c4;
  uint auStack_c0 [7];
  uint local_a4;
  uint local_94;
  uint local_84;
  uint auStack_80 [3];
  uint local_74;
  uint auStack_70 [3];
  uint local_64;
  uint auStack_60 [7];
  float local_44;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28 [2];
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar8 = 0;
  fVar1 = *(float *)(param_1 + 0x324c) - param_2;
  bVar2 = false;
  *(float *)(param_1 + 0x324c) = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)(param_1 + 0x324c) = 0;
  }
  if (0.0 < *(float *)(param_1 + 0x3254)) {
    if ((*(int *)(param_1 + 0x3258) == 0) &&
       (iVar3 = FUN_00556700(*(uint *)(param_1 + 0x325c)), iVar3 == 0)) {
      uVar5 = FUN_005609d0(0x02CF5680,param_1,"wp_bindevil_loop.wav",param_1 + 0x20);
      *(uint *)(param_1 + 0x325c) = uVar5;
    }
    if ((*(int *)(param_1 + 0x3258) == 1) || (*(int *)(param_1 + 0x3258) == 2)) {
      FUN_0054c130(param_1 + 0x158);
      local_1c = param_1 + 0x808;
      local_18 = param_1;
      local_20 = param_1 + 0x158;
      for (iVar3 = 0; iVar4 = FUN_0054eac0(local_20), iVar3 < *(int *)(iVar4 + 0x1de78);
          iVar3 = iVar3 + 1) {
        FUN_00585de0(local_1c);
        local_2c = local_44;
        *(uint *)((int)local_28 + (uint)bVar8 * 0xfffffff8) =
             *(uint *)((int)auStack_60 + ((uint)bVar8 * -2 + 8) * 4);
        *(uint *)((int)local_28 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 1) * 4) =
             *(uint *)((int)auStack_60 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 9) * 4);
        if (&local_38 != &local_2c) {
          local_38 = local_2c;
          local_34 = local_28[0];
          local_30 = local_28[1];
        }
        local_14 = (float)FUN_0040ce40(0xbe20d97c,0x3e20d97c);
        local_34 = local_14 + local_34;
        local_14 = (float)FUN_0040ce40(0xbe20d97c,0x3e20d97c);
        local_38 = local_14 + local_38;
        local_14 = (float)FUN_0040ce40(0xbe20d97c,0x3e20d97c);
        local_30 = local_14 + local_30;
        FUN_00585d10(local_34);
        puVar9 = (byte *)&local_64;
        local_64 = auStack_60[3];
        *(uint *)((int)auStack_60 + (uint)bVar8 * 0xfffffff8) =
             *(uint *)((int)auStack_60 + ((uint)bVar8 * -2 + 4) * 4);
        *(uint *)((int)auStack_60 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 1) * 4) =
             *(uint *)((int)auStack_60 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 5) * 4);
        ((uint *)((int)auStack_60 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 1) * 4))
        [(uint)bVar8 * -2 + 1] =
             ((uint *)((int)auStack_60 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 5) * 4))
             [(uint)bVar8 * -2 + 1];
        FUN_00585cd0(local_38,puVar9);
        puVar9 = (byte *)&local_c4;
        local_c4 = local_a4;
        *(uint *)((int)auStack_c0 + (uint)bVar8 * 0xfffffff8) =
             *(uint *)((int)auStack_c0 + ((uint)bVar8 * -2 + 8) * 4);
        *(uint *)((int)auStack_c0 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 1) * 4) =
             *(uint *)((int)auStack_c0 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 9) * 4);
        ((uint *)((int)auStack_c0 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 1) * 4))
        [(uint)bVar8 * -2 + 1] =
             ((uint *)((int)auStack_c0 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 9) * 4))
             [(uint)bVar8 * -2 + 1];
        FUN_00585d50(local_30,puVar9);
        local_74 = local_94;
        *(uint *)((int)auStack_70 + (uint)bVar8 * 0xfffffff8) =
             *(uint *)((int)auStack_c0 + ((uint)bVar8 * -2 + 0xc) * 4);
        *(uint *)((int)auStack_70 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 1) * 4) =
             *(uint *)((int)auStack_c0 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd) * 4);
        ((uint *)((int)auStack_70 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 1) * 4))
        [(uint)bVar8 * -2 + 1] =
             ((uint *)((int)auStack_c0 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd) * 4))
             [(uint)bVar8 * -2 + 1];
        FUN_00585990(&local_74);
        local_84 = local_d4;
        *(uint *)((int)auStack_80 + (uint)bVar8 * 0xfffffff8) =
             *(uint *)((int)auStack_d0 + (uint)bVar8 * 0xfffffff8);
        *(uint *)((int)auStack_80 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 1) * 4) =
             *(uint *)((int)auStack_c0 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + -3) * 4);
        ((uint *)((int)auStack_80 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 1) * 4))
        [(uint)bVar8 * -2 + 1] =
             ((uint *)((int)auStack_c0 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + -3) * 4))
             [(uint)bVar8 * -2 + 1];
        FUN_00585990(&local_84);
        puVar6 = (uint *)(local_18 + 0x80c + (uint)bVar8 * -8);
        *(uint *)(local_18 + 0x808) = auStack_c0[3];
        puVar7 = puVar6 + (uint)bVar8 * -2 + 1;
        *puVar6 = *(uint *)((int)auStack_c0 + ((uint)bVar8 * -2 + 4) * 4);
        *puVar7 = *(uint *)((int)auStack_c0 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 5) * 4);
        puVar7[(uint)bVar8 * -2 + 1] =
             ((uint *)((int)auStack_c0 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 5) * 4))
             [(uint)bVar8 * -2 + 1];
        local_1c = local_1c + 0x10;
        local_18 = local_18 + 0x10;
      }
    }
    if ((*(int *)(param_1 + 0x3258) == 3) || (*(int *)(param_1 + 0x3258) == 4)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    *(float *)(param_1 + 0x3254) = *(float *)(param_1 + 0x3254) - param_2;
    if (0.0 <= *(float *)(param_1 + 0x3254)) {
      if (*(int *)(param_1 + 0x3258) != 0) {
        FUN_00556be0(*(uint *)(param_1 + 0x325c));
        *(uint *)(param_1 + 0x325c) = 0;
      }
    }
    else {
      if (*(int *)(param_1 + 0x3258) == 0) {
        FUN_00556be0(*(uint *)(param_1 + 0x325c));
        *(uint *)(param_1 + 0x325c) = 0;
      }
      *(uint *)(param_1 + 0x3258) = 0;
      *(uint *)(param_1 + 0x3254) = 0;
    }
  }
  FUN_0042e8c0(param_1,param_2);
  FUN_00432220(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0xbc70) - param_2;
  *(float *)(param_1 + 0xbc70) = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)(param_1 + 0xbc70) = 0;
  }
  if ((0.0 < *(float *)(param_1 + 0x27b4)) &&
     (fVar1 = *(float *)(param_1 + 0x27b4) - param_2, *(float *)(param_1 + 0x27b4) = fVar1,
     uVar5 = 0x01ED73E0, fVar1 < 0.0)) {
    *(uint *)(param_1 + 0x27b4) = 0;
    FUN_00530390(uVar5,param_1);
  }
  if (*(int *)(param_1 + 0x2540) == 2) {
    FUN_004bd930(0x01D2130C,param_1 + 0x2544,
                 *(float *)(param_1 + 0x2538) / *(float *)(param_1 + 0x253c),0x40000000);
  }
  if (*(int *)(param_1 + 0x24fc) != 0) {
    return 0;
  }
  if (*(float *)(param_1 + 0x2504) == _DAT_005dd234) {
    iVar4 = 0;
    iVar3 = param_1;
    do {
      while ((*(int *)(iVar3 + 0x25b0) != 0 && (*(int *)(iVar3 + 0x25ec) == 0))) {
        FUN_00431ab0(param_1,iVar4,0,0);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x78;
        if (1 < iVar4) goto LAB_0042d163;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x78;
    } while (iVar4 < 2);
  }
LAB_0042d163:
  fVar1 = *(float *)(param_1 + 0xe4);
  *(uint *)(param_1 + 0xe4) = 0;
  *(float *)(param_1 + 0x24) = fVar1 + *(float *)(param_1 + 0x24);
  if ((*(float *)(param_1 + 0x2504) == _DAT_005dd234) || (*(int *)(param_1 + 0xdc) != 0)) {
    local_14 = (float)(**(code **)(*(int *)(param_1 + 0x154) + 0x40))
                                (param_1,*(uint *)(param_1 + 0x326c),0);
    *(float *)(param_1 + 0x2504) = local_14;
  }
  *(uint *)(param_1 + 0x2500) =
       (uint)(*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x2504) + (float)_DAT_005b826e);
  *(uint *)(param_1 + 0x2514) = 0;
  *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = 0;
  if (((*(int *)(param_1 + 0xdc) == 0) && (*(int *)(param_1 + 0x2704) == 0)) &&
     (iVar3 = FUN_004d23f0(param_1 + 0x20,*(uint *)(param_1 + 0x3278),
                           *(uint *)(param_1 + 0x3274)), iVar3 == 0)) {
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
    puVar6 = auStack_ec;
    puVar7 = auStack_104;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    iVar3 = FUN_0041daf0(auStack_104);
    if (iVar3 == 0) {
      FUN_00556be0(*(uint *)(param_1 + 0xbc64));
      return 0;
    }
  }
  if (!bVar2) {
    return 1;
  }
  FUN_00433350(param_1,param_2);
  return 0;
}
