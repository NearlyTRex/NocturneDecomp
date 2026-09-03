// Name: core_sound.cpp_updateListeners_FUN_0052c9d0
// Address: 0052c9d0
// Address Range: [[0052c9d0, 0052d026]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_updateListeners_FUN_0052c9d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_updateListeners_FUN_0052c9d0(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CMatrix3x3f *pCVar6;
  float *pfVar7;
  float *pfVar8;
  byte bVar9;
  int aiStackY_10cc [965];
  float local_160;
  CMatrix3x3f local_15c;
  float local_134 [10];
  float local_10c [10];
  CVector3i local_e4;
  CVector3f local_d8;
  float local_cc;
  float local_c8;
  float local_c4;
  CVector3f local_c0;
  CVector3f local_b4;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  int local_90;
  int local_8c [2];
  CVector3f local_84;
  CVector3f local_78;
  float local_6c;
  float local_68;
  float local_64;
  CVector3f local_60;
  CVector3i local_54;
  float local_48;
  float local_44;
  float local_40;
  CVector3i local_3c;
  CVector3f local_30;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar9 = 0;
  if (g_CGame_PTR_005b9354->goggles_active == 0) {
    local_48 = g_CDemonCamera_01fb8508.position.x;
    local_44 = g_CDemonCamera_01fb8508.position.y;
    local_40 = g_CDemonCamera_01fb8508.position.z;
    if (&local_cc != &local_48) {
      local_cc = g_CDemonCamera_01fb8508.position.x;
      local_c8 = g_CDemonCamera_01fb8508.position.y;
      local_c4 = g_CDemonCamera_01fb8508.position.z;
    }
    local_68 = local_c8 - _DAT_02dc9460;
    local_6c = local_cc - _DAT_02dc945c;
    local_64 = local_c4 - _DAT_02dc9464;
    if (SQRT(local_64 * local_64 + local_6c * local_6c + local_68 * local_68) <
        (float)0.0001) {
      return;
    }
    pCVar6 = &g_CDemonCamera_01fb8508.rotation_matrix;
    pfVar8 = local_10c;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar8 = pCVar6->m[0].x;
      pCVar6 = (CMatrix3x3f *)&pCVar6->m[0].y;
      pfVar8 = pfVar8 + 1;
    }
    iVar3 = 10;
    pfVar7 = local_10c;
    pfVar8 = (float *)&local_15c;
  }
  else {
    local_a8 = g_CDemonLight_01c74640.base.position.x;
    local_a4 = g_CDemonLight_01c74640.base.position.y;
    local_a0 = g_CDemonLight_01c74640.base.position.z;
    if (&local_cc != &local_a8) {
      local_cc = g_CDemonLight_01c74640.base.position.x;
      local_c8 = g_CDemonLight_01c74640.base.position.y;
      local_c4 = g_CDemonLight_01c74640.base.position.z;
    }
    pCVar6 = &g_CDemonLight_01c74640.base.rotation_matrix;
    pfVar8 = local_134;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar8 = pCVar6->m[0].x;
      pCVar6 = (CMatrix3x3f *)&pCVar6->m[0].y;
      pfVar8 = pfVar8 + 1;
    }
    iVar3 = 10;
    pfVar8 = (float *)&local_15c;
    pfVar7 = local_134;
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar8 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    pfVar8 = pfVar8 + 1;
  }
  sound_sndmain_cpp_set3DListenerPos_FUN_00527610
            ((double)local_cc,(double)local_c8,(double)local_c4);
  local_d8.x = 1.0;
  local_d8.y = 0.0;
  local_d8.z = 0.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(&local_15c,&local_30,&local_d8);
  local_60.y = 1.0;
  local_60.x = 0.0;
  local_60.z = 0.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(&local_15c,&local_c0,&local_60);
  local_b4.x = 0.0;
  local_b4.y = 0.0;
  local_b4.z = 1.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(&local_15c,&local_78,&local_b4);
  sound_sndmain_cpp_set3DListenerOrient_FUN_00527690
            ((double)local_30.x,(double)local_30.y,(double)local_30.z,(double)local_c0.x,
             (double)local_c0.y,(double)local_c0.z,(double)local_78.x,(double)local_78.y,
             (double)local_78.z);
  _DAT_02dc9468 = 0.0;
  if (g_CGame_PTR_005b9354->goggles_active == 0) {
    iVar3 = _strnicmp
                      (g_CDemonSet_PTR_005be368->geometry_filename,"castle",6);
    if (iVar3 == 0) {
      local_1c = 1;
      do {
        iVar3 = 1;
        local_18 = local_1c;
        do {
          iVar4 = g_CDemonCamera_01fb8508.screen_width * iVar3 >> 0x1f;
          iVar5 = (int)g_CDemonCamera_01fb8508.max_distance * local_18 >> 0x1f;
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0
                    (&g_CDemonCamera_01fb8508,
                     (int)((g_CDemonCamera_01fb8508.screen_width * iVar3 + iVar4 * -0x20) -
                          (uint)(iVar4 << 4 < 0)) >> 5,
                     (int)(((int)g_CDemonCamera_01fb8508.max_distance * local_18 + iVar5 * -0x20) -
                          (uint)(iVar5 << 4 < 0)) >> 5,&local_3c);
          local_e4.x = local_3c.x;
          *(uint *)((int)&local_e4 + (uint)bVar9 * -8 + 4) =
               *(uint *)((int)&local_3c + (uint)bVar9 * -8 + 4);
          *(uint *)((int)&local_e4 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
               *(uint *)((int)&local_3c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
          local_160 = 0.0;
          if (local_e4.z < 0x7fffffff) {
            local_e4.z = local_e4.z + -0x300;
            if (local_e4.z < 1) {
              local_e4.z = 1;
            }
            core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0
                      (&g_CDemonCamera_01fb8508,&local_e4,&local_54);
            local_90 = local_54.x;
            local_8c[(uint)bVar9 * -2] = *(int *)((int)&local_54 + (uint)bVar9 * -8 + 4);
            local_8c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                 *(int *)((int)&local_54 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
            fVar2 = (float)0.00390625;
            local_84.x = (float)local_90 * fVar2;
            local_14 = (float)local_8c[1];
            local_84.z = (float)local_8c[1] * fVar2;
            local_98 = (float)local_8c[0] * fVar2 - local_c8;
            local_9c = local_84.x - local_cc;
            local_94 = local_84.z - local_c4;
            fVar1 = SQRT(local_94 * local_94 + local_9c * local_9c + local_98 * local_98);
            if ((float)50 < fVar1) {
              local_160 = (fVar1 + (float)-50) * (float)0.02 + 0.0;
            }
            local_84.y = (float)local_8c[0] * fVar2 + 1.0;
            local_14 = core_setcolid_cpp_CDemonSet_rayVoxelHeightQuery_FUN_0050f910
                                 (g_CDemonSet_PTR_005be368,&local_84);
            if ((float)60 < local_14 - local_84.y) {
              local_160 = ((local_14 - local_84.y) + (float)-60) *
                          (float)0.016666666666666701 + local_160;
            }
          }
          else {
            local_160 = 1.0;
          }
          if (0.0 < local_160) {
            local_160 = local_160 + 0.2f;
          }
          local_160 = local_160 * local_160;
          if (1.0 < local_160) {
            local_160 = 1.0;
          }
          _DAT_02dc9468 = local_160 * 0.015625f + _DAT_02dc9468;
          iVar3 = iVar3 + 2;
        } while (iVar3 != 0x21);
        local_1c = local_1c + 2;
      } while (local_1c != 0x21);
    }
    _DAT_02dc9468 = _DAT_02dc9468 * _DAT_02dc9468;
    if (0.0 < _DAT_02dc9468) {
      _DAT_02dc9468 = _DAT_02dc9468 + 0.3f;
    }
    if (1.0 < _DAT_02dc9468) {
      _DAT_02dc9468 = 1.0;
    }
  }
  if (&stack0x00000000 == (byte *)0x2dc9528) {
    return;
  }
  _DAT_02dc945c = local_cc;
  _DAT_02dc9460 = local_c8;
  _DAT_02dc9464 = local_c4;
  return;
}
