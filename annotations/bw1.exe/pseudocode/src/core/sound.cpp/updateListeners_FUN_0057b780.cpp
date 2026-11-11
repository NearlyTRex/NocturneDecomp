// Name: core_sound.cpp_updateListeners_FUN_0057b780
// Address: 0057b780
// Address Range: [[0057b780, 0057bdf4]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_updateListeners_FUN_0057b780(void)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_updateListeners_FUN_0057b780(void)

{
  float fVar1;
  int iVar2;
  CMatrix3x3f *pCVar3;
  uint *puVar4;
  float *pfVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_110c [968];
  float local_1b8;
  uint local_164 [10];
  float local_13c;
  float local_138;
  float local_134;
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
  CVector3f local_ac;
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
  
  bVar7 = 0;
  if (g_CGamePtr->goggles_active == 0) {
    local_f4 = g_CDemonCameraInstance.base.position.f.x;
    fStack_f0 = g_CDemonCameraInstance.base.position.f.y;
    fStack_ec = g_CDemonCameraInstance.base.position.f.z;
    local_4c = g_CDemonCameraInstance.base.position.f.x;
    local_48 = g_CDemonCameraInstance.base.position.f.y;
    local_44 = g_CDemonCameraInstance.base.position.f.z;
    if (local_60 + 2 != &local_4c) {
      local_60[2] = g_CDemonCameraInstance.base.position.f.x;
      local_60[3] = g_CDemonCameraInstance.base.position.f.y;
      local_50 = g_CDemonCameraInstance.base.position.f.z;
    }
    local_dc = local_60[2] - _DAT_02c82a6c;
    local_d8 = local_60[3] - _DAT_02c82a70;
    local_d4 = local_50 - _DAT_02c82a74;
    local_70 = local_dc;
    local_6c = local_d8;
    local_68 = local_d4;
    if (SQRT(local_d4 * local_d4 + local_dc * local_dc + local_d8 * local_d8) < (float)_DAT_005f58f6
       ) {
      return;
    }
    pCVar3 = &g_CDemonCameraInstance.base.rotation_matrix;
    pfVar5 = (float *)&stack0xfffffe4c;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar5 = pCVar3->m[0].x;
      pCVar3 = (CMatrix3x3f *)&pCVar3->m[0].y;
      pfVar5 = pfVar5 + 1;
    }
    iVar2 = 10;
    puVar4 = (uint *)&stack0xfffffe4c;
    puVar6 = local_164;
  }
  else {
    local_a0 = g_CDemonLightInstance.base.base.position.f.x;
    fStack_9c = g_CDemonLightInstance.base.base.position.f.y;
    fStack_98 = g_CDemonLightInstance.base.base.position.f.z;
    local_13c = g_CDemonLightInstance.base.base.position.f.x;
    local_138 = g_CDemonLightInstance.base.base.position.f.y;
    local_134 = g_CDemonLightInstance.base.base.position.f.z;
    if (local_60 + 2 != &local_13c) {
      local_60[2] = g_CDemonLightInstance.base.base.position.f.x;
      local_60[3] = g_CDemonLightInstance.base.base.position.f.y;
      local_50 = g_CDemonLightInstance.base.base.position.f.z;
    }
    pCVar3 = &g_CDemonLightInstance.base.base.rotation_matrix;
    pfVar5 = (float *)&stack0xfffffe74;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar5 = pCVar3->m[0].x;
      pCVar3 = (CMatrix3x3f *)&pCVar3->m[0].y;
      pfVar5 = pfVar5 + 1;
    }
    iVar2 = 10;
    puVar6 = local_164;
    puVar4 = (uint *)&stack0xfffffe74;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  sound_sndmain_cpp_FUN_00573ec0((double)local_60[2],(double)local_60[3],(double)local_50);
  local_e8 = 0x3f800000;
  local_e4 = 0;
  local_e0 = 0;
  core_dirmat_cpp_FUN_0045f690(local_164);
  afStack_90[2] = 0.0;
  afStack_90[3] = 1.0;
  afStack_90[4] = 0.0;
  local_b8 = local_100;
  afStack_cc[(uint)bVar7 * -2 + 6] = (&local_114)[(uint)bVar7 * -2 + 6];
  afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       (&local_114)[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  core_dirmat_cpp_FUN_0045f690(local_164);
  local_130 = 0;
  local_12c = 0;
  local_10c = local_94;
  (&local_114)[(uint)bVar7 * -2 + 3] = afStack_90[(uint)bVar7 * -2];
  (&local_114)[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_90[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  local_128 = 0x3f800000;
  core_dirmat_cpp_FUN_0045f690(local_164);
  local_124 = afStack_cc[2];
  *(float *)((int)local_120 + (uint)bVar7 * 0xfffffff8) = afStack_cc[(uint)bVar7 * -2 + 3];
  (&local_114)[(uint)bVar7 * -2 + (uint)bVar7 * -2 + -2] =
       afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  sound_sndmain_cpp_FUN_00573f20
            (local_b8,local_b4,local_b0,local_10c,local_108,local_104,local_124,local_120[0]);
  _DAT_02c82a78 = 0.0;
  if (g_CGamePtr->goggles_active == 0) {
    iVar2 = _strnicmp
                      (g_CDemonSetPtr->geometry_filename,"castle",6);
    if (iVar2 == 0) {
      local_20 = 1;
      do {
        iVar2 = 1;
        local_1c = local_20;
        do {
          core_dcamera_cpp_FUN_0044dd70();
          afStack_90[5] = (float)local_d0;
          (&fStack_78)[(uint)bVar7 * -2] = afStack_cc[(uint)bVar7 * -2];
          (&fStack_78)[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          local_1b8 = 0.0;
          if (local_74 < 0x7fffffff) {
            local_74 = local_74 + -0x300;
            if (local_74 < 1) {
              local_74 = 1;
            }
            core_dcamera_cpp_FUN_0044de40(&g_CDemonCameraInstance);
            local_118 = local_34;
            (&local_114)[(uint)bVar7 * -2] = afStack_30[(uint)bVar7 * -2];
            (&local_114)[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 afStack_30[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            fVar1 = (float)_DAT_005f58fe;
            local_18 = (float)local_110;
            local_ac.x = (float)local_118 * fVar1;
            local_ac.y = (float)(int)local_114 * fVar1;
            local_64 = (float)local_118 * fVar1 - local_60[2];
            local_ac.z = (float)local_110 * fVar1;
            local_60[0] = (float)(int)local_114 * fVar1 - local_60[3];
            local_60[1] = (float)local_110 * fVar1 - local_50;
            local_40 = local_64;
            local_3c[(uint)bVar7 * -2] = local_60[(uint)bVar7 * -2];
            local_3c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 local_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            fVar1 = SQRT(local_3c[1] * local_3c[1] + local_40 * local_40 + local_3c[0] * local_3c[0]
                        );
            if ((float)_DAT_005f591e < fVar1) {
              local_1b8 = (fVar1 + (float)_DAT_005f5926) * (float)_DAT_005f5906 + 0.0;
            }
            local_ac.y = local_ac.y + 1.0;
            local_18 = core_setcolid_cpp_CDemonSet_rayVoxelHeightQuery_FUN_00557110
                                 (g_CDemonSetPtr,&local_ac);
            if ((float)_DAT_005f592e < local_18 - local_ac.y) {
              local_1b8 = ((local_18 - local_ac.y) + (float)_DAT_005f5936) * (float)_DAT_005f590e +
                          local_1b8;
            }
          }
          else {
            local_1b8 = 1.0;
          }
          if (0.0 < local_1b8) {
            local_1b8 = local_1b8 + _DAT_005f593e;
          }
          local_1b8 = local_1b8 * local_1b8;
          if (1.0 < local_1b8) {
            local_1b8 = 1.0;
          }
          _DAT_02c82a78 = local_1b8 * _DAT_005f5916 + _DAT_02c82a78;
          iVar2 = iVar2 + 2;
        } while (iVar2 != 0x21);
        local_20 = local_20 + 2;
      } while (local_20 != 0x21);
    }
    _DAT_02c82a78 = _DAT_02c82a78 * _DAT_02c82a78;
    if (0.0 < _DAT_02c82a78) {
      _DAT_02c82a78 = _DAT_02c82a78 + _DAT_005f591a;
    }
    if (1.0 < _DAT_02c82a78) {
      _DAT_02c82a78 = 1.0;
    }
  }
  if (&stack0x00000000 == (byte *)0x2c82ac4) {
    return;
  }
  _DAT_02c82a6c = local_60[2];
  _DAT_02c82a70 = local_60[3];
  _DAT_02c82a74 = local_50;
  return;
}
