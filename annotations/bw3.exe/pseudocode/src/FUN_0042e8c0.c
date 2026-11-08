// Name: FUN_0042e8c0
// Address: 0042e8c0
// Address Range: [[0042e8c0, 0042f009]]
// Convention: unknown
// Signature: void FUN_0042e8c0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042e8c0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  float afStackY_106c [999];
  float *pfVar9;
  byte auStack_c0 [4];
  float fStack_bc;
  uint uStack_90;
  uint local_84;
  float local_80 [5];
  uint local_6c;
  uint local_60;
  float local_50;
  int local_4c;
  int local_48;
  int local_44;
  float fStack_40;
  int local_3c;
  int local_38;
  int local_34;
  int iStack_30;
  int local_2c;
  int local_28;
  uint *local_24;
  int *local_20;
  int *piStack_1c;
  int *piStack_18;
  int local_14;
  
  bVar8 = 0;
  iVar4 = param_1 + 0x158;
  local_14 = FUN_0054eac0(iVar4);
  if (*(int *)(param_1 + 0xbc68) == 0) {
    if (0 < *(int *)(param_1 + 0x33a0)) {
      iVar3 = FUN_0054eac0(iVar4);
      local_3c = iVar3;
      iVar4 = FUN_0054ea40(iVar4);
      iVar5 = 0;
      if (0 < *(int *)(iVar3 + 0x1de78)) {
        iVar3 = 0;
        do {
          *(uint *)((int)&DAT_007e2cf4 + iVar3) = 0;
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar5 < *(int *)(local_3c + 0x1de78));
      }
      fVar1 = 0x40400000;
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0x33a0)) {
        fVar2 = (float)_DAT_005b833e;
        iVar5 = param_1;
        do {
          iVar3 = iVar3 + 1;
          (&DAT_007e2cf4)[*(int *)(iVar5 + 0x33b0)] =
               (float)(&DAT_007e2cf4)[*(int *)(iVar5 + 0x33b0)] +
               (*(float *)(iVar5 + 0x33c0) * fVar2) / fVar1;
          iVar5 = iVar5 + 0x18;
        } while (iVar3 < *(int *)(param_1 + 0x33a0));
      }
      iVar3 = 0;
      local_34 = 0;
      if (0 < *(int *)(local_3c + 0x1de78)) {
        local_44 = param_1 + 0x158;
        iVar5 = 0;
        local_38 = iVar4;
        do {
          if ((float)_DAT_005b833e <= *(float *)((int)&DAT_007e2cf4 + iVar5)) {
            iVar3 = iVar3 + 1;
          }
          if (*(int *)(local_38 + 0x33cc) == -1) {
            iVar3 = iVar3 + 1;
          }
          iVar4 = FUN_0054ea40(local_44);
          if (*(int *)(param_1 + 0x2298 + *(int *)(iVar5 + 0x323c + iVar4) * 4) == 0) {
            iVar3 = iVar3 + 1;
          }
          iVar5 = iVar5 + 4;
          local_38 = local_38 + 4;
          local_34 = local_34 + 1;
        } while (local_34 < *(int *)(local_3c + 0x1de78));
      }
      if ((iVar3 == *(int *)(local_3c + 0x1de78)) && (*(int *)(param_1 + 0x2538) < 0x40a00000)) {
        *(uint *)(param_1 + 0xbc6c) = 0x3f800000;
        *(uint *)(param_1 + 0xbc68) = 1;
      }
      local_50 = (float)*(int *)(param_1 + 0x33a0) * (float)_DAT_005b8346 * (float)_DAT_005b834e +
                 (float)_DAT_005b8356;
      iVar4 = FUN_00556ab0(*(uint *)(param_1 + 0xbc64),local_50);
      if (iVar4 == 0) {
        FUN_00555fd0();
        FUN_00555df0(local_50);
        uVar6 = (**(code **)(*(int *)(param_1 + 0x154) + 0x30))
                          (param_1,"character-onfire-loop.wav");
        *(uint *)(param_1 + 0xbc64) = uVar6;
        FUN_00556050();
      }
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0xbc6c) - param_2;
    *(float *)(param_1 + 0xbc6c) = fVar1;
    if (fVar1 < 0.0) {
      FUN_00556be0(*(uint *)(param_1 + 0xbc64));
      (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                (param_1,"?character-onfire-fallapart.wav" + 1);
      FUN_004300e0(param_1,0,0xbf800000,1);
    }
  }
  local_2c = 0;
  if (0 < *(int *)(param_1 + 0x33a0)) {
    local_48 = param_1 + 0xfd8;
    local_4c = param_1 + 0x385c;
    local_20 = (int *)(param_1 + 0x33ac);
    local_28 = param_1;
    local_24 = (uint *)(param_1 + 0x387c);
    do {
      if (*(int *)(param_1 + 0x2298 + *local_20 * 4) != 0) {
        *(uint *)(param_1 + 0xfc) = 1;
        FUN_00583260(local_20 + 2,local_20[1] * 0x30 + local_48);
        pfVar9 = local_80 + 2;
        local_80[2] = (float)local_60;
        local_80[(uint)bVar8 * -2 + 3] = local_80[(uint)bVar8 * -2 + 9];
        local_80[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
             local_80[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
        FUN_00408b80(param_1,pfVar9);
        iVar4 = local_4c;
        iVar3 = local_2c * 0x2a4;
        local_84 = local_6c;
        local_80[(uint)bVar8 * -2] = local_80[(uint)bVar8 * -2 + 6];
        local_80[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             local_80[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
        iVar3 = iVar3 + iVar4;
        *local_24 = local_84;
        local_24[1] = local_80[0];
        local_24[2] = local_80[1];
        fVar1 = (float)_DAT_005b835e;
        *(float *)(local_28 + 0x39b4) = (float)local_20[5] * fVar1;
        *(int *)(local_28 + 0x39b8) = local_20[5];
        *(float *)(local_28 + 0x39bc) = fVar1 * (float)local_20[5];
        (**(code **)(*(int *)(iVar3 + 0x154) + 0xc))(iVar3,param_2);
      }
      local_20 = local_20 + 6;
      local_28 = local_28 + 0x2a4;
      local_24 = local_24 + 0xa9;
      local_2c = local_2c + 1;
    } while (local_2c < *(int *)(param_1 + 0x33a0));
  }
  if ((*(int *)(param_1 + 0x27a4) == 0) && (iStack_30 = 0, 0 < *(int *)(param_1 + 0x33a0))) {
    piStack_1c = (int *)(param_1 + 0x33ac);
    fStack_40 = param_2 * _DAT_005dd22c;
    iStack_30 = 0;
    do {
      piStack_18 = piStack_1c;
      if (*(int *)(param_1 + 0x2298 + *piStack_1c * 4) != 0) {
        if ((*(uint *)(param_1 + 0x3260) & 0x7fffffff) == 0) {
          fVar1 = (float)piStack_1c[5] - fStack_40 * *(float *)(param_1 + 0x33a8);
        }
        else {
          fVar1 = fStack_40 * *(float *)(param_1 + 0x33a8) + (float)piStack_1c[5];
        }
        piStack_1c[5] = (int)fVar1;
        if ((float)piStack_1c[5] <= 0.0) {
          piStack_1c[5] = 0;
        }
        if (0x40400000 < (float)piStack_1c[5]) {
          piStack_1c[5] = (int)0x40400000;
          iVar3 = 0;
          iVar4 = local_14;
          if (0 < *(int *)(local_14 + 0x1de78)) {
            do {
              if (*(uint *)(iVar4 + 0x1de9c) == piStack_18[1]) {
                uVar7 = *(uint *)(iVar4 + 0x1de9c) ^ piStack_18[1];
                iVar5 = param_1;
                if (0 < *(int *)(param_1 + 0x33a0)) {
                  do {
                    if (iVar3 == *(int *)(iVar5 + 0x33b0)) break;
                    uVar7 = uVar7 + 1;
                    iVar5 = iVar5 + 0x18;
                  } while ((int)uVar7 < *(int *)(param_1 + 0x33a0));
                }
                if (uVar7 == *(uint *)(param_1 + 0x33a0)) {
                  FUN_0042e4b0(param_1,local_14,iVar3);
                }
              }
              iVar3 = iVar3 + 1;
              iVar4 = iVar4 + 0x24;
            } while (iVar3 < *(int *)(local_14 + 0x1de78));
          }
          iVar4 = 0;
          if (0 < *(int *)(param_1 + 0x33a0)) {
            iVar3 = param_1;
            do {
              if (*(int *)(piStack_18[1] * 0x24 + local_14 + 0x1de9c) == *(int *)(iVar3 + 0x33b0))
              break;
              iVar4 = iVar4 + 1;
              iVar3 = iVar3 + 0x18;
            } while (iVar4 < *(int *)(param_1 + 0x33a0));
          }
          if (iVar4 == *(int *)(param_1 + 0x33a0)) {
            FUN_0042e4b0(param_1,local_14,*(uint *)(piStack_18[1] * 0x24 + local_14 + 0x1de9c)
                        );
          }
        }
      }
      piStack_1c = piStack_1c + 6;
      iStack_30 = iStack_30 + 1;
    } while (iStack_30 < *(int *)(param_1 + 0x33a0));
  }
  if (((*(uint *)(param_1 + 0x3260) & 0x7fffffff) == 0) &&
     (iVar4 = *(int *)(param_1 + 0x33a0) + -1, -1 < iVar4)) {
    iVar3 = iVar4 * 0x18 + param_1;
    do {
      while (((*(uint *)(iVar3 + 0x33c0) & 0x7fffffff) != 0 ||
             (iVar5 = *(int *)(param_1 + 0x33a0) + -1, *(int *)(param_1 + 0x33a0) = iVar5,
             iVar5 != 0))) {
        iVar4 = iVar4 + -1;
        iVar3 = iVar3 + -0x18;
        if (iVar4 < 0) goto LAB_0042ec67;
      }
      FUN_00556be0(*(uint *)(param_1 + 0xbc64));
      iVar4 = iVar4 + -1;
      iVar3 = iVar3 + -0x18;
    } while (-1 < iVar4);
  }
LAB_0042ec67:
  if ((0.0 < *(float *)(param_1 + 0x3260)) &&
     ((0x40a00000 < *(int *)(param_1 + 0x2538) || (*(float *)(param_1 + 0x2538) <= 0.0)))) {
    *(float *)(param_1 + 0x3260) = *(float *)(param_1 + 0x3260) - param_2;
    FUN_0042abb0(auStack_c0);
    fStack_bc = param_2 * (float)_DAT_005b8366;
    uStack_90 = 0x66;
    (**(code **)(*(int *)(param_1 + 0x154) + 0x108))(param_1,auStack_c0);
    if (*(float *)(param_1 + 0x3260) < 0.0) {
      *(uint *)(param_1 + 0x3260) = 0;
      return;
    }
  }
  return;
}
