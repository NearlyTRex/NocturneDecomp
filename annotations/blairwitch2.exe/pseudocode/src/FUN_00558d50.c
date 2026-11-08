// Name: FUN_00558d50
// Address: 00558d50
// Address Range: [[00558d50, 005593c4]]
// Convention: unknown
// Signature: void FUN_00558d50(void)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00558d50(void)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_110c [968];
  float *pfVar6;
  float local_1b8;
  float local_13c;
  float local_138;
  float local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  float local_120;
  uint local_11c;
  int local_118;
  int local_114;
  int local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  float local_f4;
  float fStack_f0;
  float fStack_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  uint local_d0;
  float afStack_cc [5];
  uint local_b8;
  uint local_b4;
  uint local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  uint local_94;
  float afStack_90 [6];
  float fStack_78;
  int local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60 [4];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c [2];
  int local_34;
  float afStack_30 [4];
  int local_20;
  int local_1c;
  float local_18;
  
  bVar5 = 0;
  if (*(int *)(0x01CB6900 + 0x25c) == 0) {
    local_f4 = _DAT_01fc783c;
    fStack_f0 = _DAT_01fc7840;
    fStack_ec = _DAT_01fc7844;
    local_4c = _DAT_01fc783c;
    local_48 = _DAT_01fc7840;
    local_44 = _DAT_01fc7844;
    if (local_60 + 2 != &local_4c) {
      local_60[2] = _DAT_01fc783c;
      local_60[3] = _DAT_01fc7840;
      local_50 = _DAT_01fc7844;
    }
    local_dc = local_60[2] - _DAT_0264b29c;
    local_d8 = local_60[3] - _DAT_0264b2a0;
    local_d4 = local_50 - _DAT_0264b2a4;
    local_70 = local_dc;
    local_6c = local_d8;
    local_68 = local_d4;
    if (SQRT(local_d4 * local_d4 + local_dc * local_dc + local_d8 * local_d8) < (float)_DAT_005ea6fc
       ) {
      return;
    }
    puVar3 = (uint *)&DAT_01fc7848;
    puVar4 = (uint *)&stack0xfffffe4c;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar2 = 10;
    puVar4 = (uint *)&stack0xfffffe4c;
    puVar3 = (uint *)&stack0xfffffe9c;
  }
  else {
    local_a0 = _DAT_01cb3954;
    fStack_9c = _DAT_01cb3958;
    fStack_98 = _DAT_01cb395c;
    local_13c = _DAT_01cb3954;
    local_138 = _DAT_01cb3958;
    local_134 = _DAT_01cb395c;
    if (local_60 + 2 != &stack0xfffffec4) {
      local_60[2] = _DAT_01cb3954;
      local_60[3] = _DAT_01cb3958;
      local_50 = _DAT_01cb395c;
    }
    puVar3 = (uint *)&DAT_01cb3960;
    puVar4 = (uint *)&stack0xfffffe74;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar2 = 10;
    puVar3 = (uint *)&stack0xfffffe9c;
    puVar4 = (uint *)&stack0xfffffe74;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00551490((double)local_60[2],(double)local_60[3],(double)local_50);
  local_e8 = 0x3f800000;
  local_e4 = 0;
  local_e0 = 0;
  FUN_00449530(&stack0xfffffe9c,&local_e8);
  afStack_90[2] = 0.0;
  afStack_90[3] = 1.0;
  pfVar6 = afStack_90 + 2;
  afStack_90[4] = 0.0;
  local_b8 = local_100;
  afStack_cc[(uint)bVar5 * -2 + 6] = (&stack0xfffffee0)[(uint)bVar5 * -2 + 9];
  afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
       (&stack0xfffffee0)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
  FUN_00449530(&stack0xfffffe9c,pfVar6);
  local_130 = 0;
  local_12c = 0;
  local_10c = local_94;
  (&stack0xfffffee0)[(uint)bVar5 * -2 + 6] = afStack_90[(uint)bVar5 * -2];
  (&stack0xfffffee0)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
       afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  local_128 = 0x3f800000;
  FUN_00449530(&stack0xfffffe9c,&stack0xfffffed0);
  local_124 = afStack_cc[2];
  (&stack0xfffffee0)[(uint)bVar5 * 0xfffffffe] = afStack_cc[(uint)bVar5 * -2 + 3];
  (&stack0xfffffee0)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  FUN_005514f0(local_b8,local_b4,local_b0,local_10c,local_108,local_104,local_124,local_120,
               local_11c);
  _DAT_0264b2a8 = 0.0;
  if (*(int *)(0x01CB6900 + 0x25c) == 0) {
    iVar2 = FUN_005b8da0();
    if (iVar2 == 0) {
      local_20 = 1;
      do {
        iVar2 = 1;
        local_1c = local_20;
        do {
          FUN_0043c6b0();
          afStack_90[5] = (float)local_d0;
          (&fStack_78)[(uint)bVar5 * -2] = afStack_cc[(uint)bVar5 * -2];
          (&fStack_78)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
               afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          local_1b8 = 0.0;
          if (local_74 < 0x7fffffff) {
            local_74 = local_74 + -0x300;
            if (local_74 < 1) {
              local_74 = 1;
            }
            FUN_0043c780(0x1fc7838,afStack_90 + 5);
            local_118 = local_34;
            (&stack0xfffffee0)[(uint)bVar5 * -2 + 3] = afStack_30[(uint)bVar5 * -2];
            (&stack0xfffffee0)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
                 afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
            fVar1 = (float)_DAT_005ea704;
            local_18 = (float)local_110;
            local_ac = (float)local_118 * fVar1;
            local_a8 = (float)local_114 * fVar1;
            local_64 = (float)local_118 * fVar1 - local_60[2];
            local_a4 = (float)local_110 * fVar1;
            local_60[0] = (float)local_114 * fVar1 - local_60[3];
            local_60[1] = (float)local_110 * fVar1 - local_50;
            local_40 = local_64;
            local_3c[(uint)bVar5 * -2] = local_60[(uint)bVar5 * -2];
            local_3c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
                 local_60[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
            fVar1 = SQRT(local_3c[1] * local_3c[1] + local_40 * local_40 + local_3c[0] * local_3c[0]
                        );
            if ((float)_DAT_005ea724 < fVar1) {
              local_1b8 = (fVar1 + (float)_DAT_005ea72c) * (float)_DAT_005ea70c + 0.0;
            }
            local_a8 = local_a8 + 1.0;
            local_18 = (float)FUN_00535cf0(0x01E661B8);
            if ((float)_DAT_005ea734 < local_18 - local_a8) {
              local_1b8 = ((local_18 - local_a8) + (float)_DAT_005ea73c) * (float)_DAT_005ea714 +
                          local_1b8;
            }
          }
          else {
            local_1b8 = 1.0;
          }
          if (0.0 < local_1b8) {
            local_1b8 = local_1b8 + _DAT_005ea744;
          }
          local_1b8 = local_1b8 * local_1b8;
          if (1.0 < local_1b8) {
            local_1b8 = 1.0;
          }
          _DAT_0264b2a8 = local_1b8 * _DAT_005ea71c + _DAT_0264b2a8;
          iVar2 = iVar2 + 2;
        } while (iVar2 != 0x21);
        local_20 = local_20 + 2;
      } while (local_20 != 0x21);
    }
    _DAT_0264b2a8 = _DAT_0264b2a8 * _DAT_0264b2a8;
    if (0.0 < _DAT_0264b2a8) {
      _DAT_0264b2a8 = _DAT_0264b2a8 + _DAT_005ea720;
    }
    if (1.0 < _DAT_0264b2a8) {
      _DAT_0264b2a8 = 1.0;
    }
  }
  if (&stack0x00000000 == (byte *)0x264b2f4) {
    return;
  }
  _DAT_0264b29c = local_60[2];
  _DAT_0264b2a0 = local_60[3];
  _DAT_0264b2a4 = local_50;
  return;
}
