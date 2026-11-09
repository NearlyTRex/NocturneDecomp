// Name: core_sound.cpp_updateListeners_FUN_0055e8b0
// Address: 0055e8b0
// Address Range: [[0055e8b0, 0055ef24]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_updateListeners_FUN_0055e8b0(void)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_updateListeners_FUN_0055e8b0(void)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_110c [968];
  float local_1b8;
  uint local_164 [10];
  float local_13c [3];
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  float local_120 [2];
  int local_118;
  float local_114;
  int local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_f4;
  uint uStack_f0;
  uint uStack_ec;
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
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
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
  float local_4c [3];
  float local_40;
  float local_3c [2];
  int local_34;
  float afStack_30 [4];
  int local_20;
  int local_1c;
  float local_18;
  
  bVar5 = 0;
  if (*(int *)&g_CGamePtr->field_0x264 == 0) {
    local_f4 = g_CDemonCameraInstance._4_4_;
    uStack_f0 = g_CDemonCameraInstance._8_4_;
    uStack_ec = g_CDemonCameraInstance._12_4_;
    local_4c[0] = (float)g_CDemonCameraInstance._4_4_;
    local_4c[1] = (float)g_CDemonCameraInstance._8_4_;
    local_4c[2] = (float)g_CDemonCameraInstance._12_4_;
    if (local_60 + 2 != local_4c) {
      local_60[2] = (float)g_CDemonCameraInstance._4_4_;
      local_60[3] = (float)g_CDemonCameraInstance._8_4_;
      local_50 = (float)g_CDemonCameraInstance._12_4_;
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
    puVar3 = (uint *)&g_CDemonCameraInstance.field_0x10;
    puVar4 = (uint *)&stack0xfffffe4c;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar2 = 10;
    puVar4 = (uint *)&stack0xfffffe4c;
    puVar3 = local_164;
  }
  else {
    local_a0 = g_CDemonLightInstance._4_4_;
    uStack_9c = g_CDemonLightInstance._8_4_;
    uStack_98 = g_CDemonLightInstance._12_4_;
    local_13c[0] = (float)g_CDemonLightInstance._4_4_;
    local_13c[1] = (float)g_CDemonLightInstance._8_4_;
    local_13c[2] = (float)g_CDemonLightInstance._12_4_;
    if (local_60 + 2 != local_13c) {
      local_60[2] = (float)g_CDemonLightInstance._4_4_;
      local_60[3] = (float)g_CDemonLightInstance._8_4_;
      local_50 = (float)g_CDemonLightInstance._12_4_;
    }
    puVar3 = (uint *)&g_CDemonLightInstance.field_0x10;
    puVar4 = (uint *)&stack0xfffffe74;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar2 = 10;
    puVar3 = local_164;
    puVar4 = (uint *)&stack0xfffffe74;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  sound_sndmain_cpp_FUN_00557020((double)local_60[2],(double)local_60[3],(double)local_50);
  local_e8 = 0x3f800000;
  local_e4 = 0;
  local_e0 = 0;
  core_dirmat_cpp_FUN_0045b800(local_164);
  afStack_90[2] = 0.0;
  afStack_90[3] = 1.0;
  afStack_90[4] = 0.0;
  local_b8 = local_100;
  afStack_cc[(uint)bVar5 * -2 + 6] = (&local_114)[(uint)bVar5 * -2 + 6];
  afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
       (&local_114)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  core_dirmat_cpp_FUN_0045b800(local_164);
  local_130 = 0;
  local_12c = 0;
  local_10c = local_94;
  (&local_114)[(uint)bVar5 * -2 + 3] = afStack_90[(uint)bVar5 * -2];
  (&local_114)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  local_128 = 0x3f800000;
  core_dirmat_cpp_FUN_0045b800(local_164);
  local_124 = afStack_cc[2];
  *(float *)((int)local_120 + (uint)bVar5 * 0xfffffff8) = afStack_cc[(uint)bVar5 * -2 + 3];
  (&local_114)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -2] =
       afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  sound_sndmain_cpp_FUN_00557080
            (local_b8,local_b4,local_b0,local_10c,local_108,local_104,local_124,local_120[0]);
  _DAT_02cf5698 = 0.0;
  if (*(int *)&g_CGamePtr->field_0x264 == 0) {
    iVar2 = _strnicmp(&g_CDemonSetPtr->field_0x14d0f0,"castle",6)
    ;
    if (iVar2 == 0) {
      local_20 = 1;
      do {
        iVar2 = 1;
        local_1c = local_20;
        do {
          core_dcamera_cpp_FUN_00449eb0();
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
            core_dcamera_cpp_FUN_00449f80(&g_CDemonCameraInstance,afStack_90 + 5);
            local_118 = local_34;
            (&local_114)[(uint)bVar5 * -2] = afStack_30[(uint)bVar5 * -2];
            (&local_114)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
                 afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
            fVar1 = (float)_DAT_005d5157;
            local_18 = (float)local_110;
            local_ac = (float)local_118 * fVar1;
            local_a8 = (float)(int)local_114 * fVar1;
            local_64 = (float)local_118 * fVar1 - local_60[2];
            local_a4 = (float)local_110 * fVar1;
            local_60[0] = (float)(int)local_114 * fVar1 - local_60[3];
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
            local_18 = (float)core_setcolid_cpp_FUN_0053cad0(g_CDemonSetPtr);
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
