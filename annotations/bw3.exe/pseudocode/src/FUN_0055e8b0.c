// Name: FUN_0055e8b0
// Address: 0055e8b0
// Address Range: [[0055e8b0, 0055ef24]]
// Convention: unknown
// Signature: void FUN_0055e8b0(void)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055e8b0(void)

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
  if (*(int *)(0x01D2130C + 0x264) == 0) {
    local_f4 = _DAT_02038f50;
    fStack_f0 = _DAT_02038f54;
    fStack_ec = _DAT_02038f58;
    local_4c = _DAT_02038f50;
    local_48 = _DAT_02038f54;
    local_44 = _DAT_02038f58;
    if (local_60 + 2 != &local_4c) {
      local_60[2] = _DAT_02038f50;
      local_60[3] = _DAT_02038f54;
      local_50 = _DAT_02038f58;
    }
    local_dc = local_60[2] - _DAT_02cf568c;
    local_d8 = local_60[3] - _DAT_02cf5690;
    local_d4 = local_50 - _DAT_02cf5694;
    local_70 = local_dc;
    local_6c = local_d8;
    local_68 = local_d4;
    if (SQRT(local_d4 * local_d4 + local_dc * local_dc + local_d8 * local_d8) < (float)_DAT_005d514f
       ) {
      return;
    }
    puVar3 = (uint *)&DAT_02038f5c;
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
    local_a0 = _DAT_01d1e364;
    fStack_9c = _DAT_01d1e368;
    fStack_98 = _DAT_01d1e36c;
    local_13c = _DAT_01d1e364;
    local_138 = _DAT_01d1e368;
    local_134 = _DAT_01d1e36c;
    if (local_60 + 2 != &stack0xfffffec4) {
      local_60[2] = _DAT_01d1e364;
      local_60[3] = _DAT_01d1e368;
      local_50 = _DAT_01d1e36c;
    }
    puVar3 = (uint *)&DAT_01d1e370;
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
  FUN_00557020((double)local_60[2],(double)local_60[3],(double)local_50);
  local_e8 = 0x3f800000;
  local_e4 = 0;
  local_e0 = 0;
  FUN_0045b800(&stack0xfffffe9c,&local_e8);
  afStack_90[2] = 0.0;
  afStack_90[3] = 1.0;
  pfVar6 = afStack_90 + 2;
  afStack_90[4] = 0.0;
  local_b8 = local_100;
  afStack_cc[(uint)bVar5 * -2 + 6] = (&stack0xfffffee0)[(uint)bVar5 * -2 + 9];
  afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
       (&stack0xfffffee0)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
  FUN_0045b800(&stack0xfffffe9c,pfVar6);
  local_130 = 0;
  local_12c = 0;
  local_10c = local_94;
  (&stack0xfffffee0)[(uint)bVar5 * -2 + 6] = afStack_90[(uint)bVar5 * -2];
  (&stack0xfffffee0)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
       afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  local_128 = 0x3f800000;
  FUN_0045b800(&stack0xfffffe9c,&stack0xfffffed0);
  local_124 = afStack_cc[2];
  (&stack0xfffffee0)[(uint)bVar5 * 0xfffffffe] = afStack_cc[(uint)bVar5 * -2 + 3];
  (&stack0xfffffee0)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  FUN_00557080(local_b8,local_b4,local_b0,local_10c,local_108,local_104,local_124,local_120,
               local_11c);
  _DAT_02cf5698 = 0.0;
  if (*(int *)(0x01D2130C + 0x264) == 0) {
    iVar2 = FUN_005a3f90();
    if (iVar2 == 0) {
      local_20 = 1;
      do {
        iVar2 = 1;
        local_1c = local_20;
        do {
          FUN_00449eb0();
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
            FUN_00449f80(0x2038f4c,afStack_90 + 5);
            local_118 = local_34;
            (&stack0xfffffee0)[(uint)bVar5 * -2 + 3] = afStack_30[(uint)bVar5 * -2];
            (&stack0xfffffee0)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
                 afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
            fVar1 = (float)_DAT_005d5157;
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
            if ((float)_DAT_005d5177 < fVar1) {
              local_1b8 = (fVar1 + (float)_DAT_005d517f) * (float)_DAT_005d515f + 0.0;
            }
            local_a8 = local_a8 + 1.0;
            local_18 = (float)FUN_0053cad0(0x01ED78C8);
            if ((float)_DAT_005d5187 < local_18 - local_a8) {
              local_1b8 = ((local_18 - local_a8) + (float)_DAT_005d518f) * (float)_DAT_005d5167 +
                          local_1b8;
            }
          }
          else {
            local_1b8 = 1.0;
          }
          if (0.0 < local_1b8) {
            local_1b8 = local_1b8 + _DAT_005d5197;
          }
          local_1b8 = local_1b8 * local_1b8;
          if (1.0 < local_1b8) {
            local_1b8 = 1.0;
          }
          _DAT_02cf5698 = local_1b8 * _DAT_005d516f + _DAT_02cf5698;
          iVar2 = iVar2 + 2;
        } while (iVar2 != 0x21);
        local_20 = local_20 + 2;
      } while (local_20 != 0x21);
    }
    _DAT_02cf5698 = _DAT_02cf5698 * _DAT_02cf5698;
    if (0.0 < _DAT_02cf5698) {
      _DAT_02cf5698 = _DAT_02cf5698 + _DAT_005d5173;
    }
    if (1.0 < _DAT_02cf5698) {
      _DAT_02cf5698 = 1.0;
    }
  }
  if (&stack0x00000000 == (byte *)0x2cf56e4) {
    return;
  }
  _DAT_02cf568c = local_60[2];
  _DAT_02cf5690 = local_60[3];
  _DAT_02cf5694 = local_50;
  return;
}
