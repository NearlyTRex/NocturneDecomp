// Name: core_sound.cpp_updateListeners_FUN_00558d50
// Address: 00558d50
// Address Range: [[00558d50, 005593c4]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_updateListeners_FUN_00558d50(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_updateListeners_FUN_00558d50(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CMatrix3x3f *pCVar5;
  float *pfVar6;
  float *pfVar7;
  byte bVar8;
  float afStackY_110c [3];
  int aiStackY_1100 [3];
  float afStackY_10f4 [54];
  int aiStackY_101c [908];
  CVector3f *input;
  float local_1b8;
  float local_1b4 [10];
  float local_18c [10];
  CMatrix3x3f local_164;
  float local_13c;
  float local_138;
  float local_134;
  CVector3f local_130;
  float local_124;
  float local_120 [2];
  int local_118;
  int local_114 [2];
  float local_10c;
  float local_108 [2];
  CVector3f local_100;
  float local_f4;
  float fStack_f0;
  float fStack_ec;
  CVector3f local_e8;
  float local_dc;
  float local_d8;
  float local_d4;
  CVector3i local_d0;
  CVector3f local_c4;
  float local_b8;
  float local_b4 [2];
  CVector3f local_ac;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  CVector3f local_94;
  CVector3f local_88;
  CVector3i local_7c;
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
  CVector3i local_34;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar8 = 0;
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
    pCVar5 = &g_CDemonCameraInstance.base.rotation_matrix;
    pfVar7 = local_1b4;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar7 = pCVar5->m[0].x;
      pCVar5 = (CMatrix3x3f *)&pCVar5->m[0].y;
      pfVar7 = pfVar7 + 1;
    }
    iVar2 = 10;
    pfVar6 = local_1b4;
    pfVar7 = (float *)&local_164;
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
    pCVar5 = &g_CDemonLightInstance.base.base.rotation_matrix;
    pfVar7 = local_18c;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar7 = pCVar5->m[0].x;
      pCVar5 = (CMatrix3x3f *)&pCVar5->m[0].y;
      pfVar7 = pfVar7 + 1;
    }
    iVar2 = 10;
    pfVar7 = (float *)&local_164;
    pfVar6 = local_18c;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar7 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar7 = pfVar7 + 1;
  }
  sound_sndmain_cpp_set3DListenerPos_FUN_00551490
            ((double)local_60[2],(double)local_60[3],(double)local_50);
  local_e8.x = 1.0;
  local_e8.y = 0.0;
  local_e8.z = 0.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530(&local_164,&local_e8,&local_100);
  local_88.x = 0.0;
  local_88.y = 1.0;
  input = &local_88;
  local_88.z = 0.0;
  local_b8 = local_100.x;
  local_b4[(uint)bVar8 * -2] = *(float *)((int)&local_100 + (uint)bVar8 * -8 + 4);
  local_b4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
       *(float *)((int)&local_100 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530(&local_164,input,&local_94);
  local_130.x = 0.0;
  local_130.y = 0.0;
  local_10c = local_94.x;
  local_108[(uint)bVar8 * -2] = *(float *)((int)&local_94 + (uint)bVar8 * -8 + 4);
  local_108[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
       *(float *)((int)&local_94 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  local_130.z = 1.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530(&local_164,&local_130,&local_c4);
  local_124 = local_c4.x;
  local_120[(uint)bVar8 * -2] = *(float *)((int)&local_c4 + (uint)bVar8 * -8 + 4);
  local_120[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
       *(float *)((int)&local_c4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  sound_sndmain_cpp_set3DListenerOrient_FUN_005514f0
            (local_b8,local_b4[0],local_b4[1],local_10c,local_108[0],local_108[1],local_124,
             local_120[0],local_120[1]);
  _DAT_0264b2a8 = 0.0;
  if (g_CGamePtr->goggles_active == 0) {
    iVar2 = _strnicmp
                      (g_CDemonSetPtr->geometry_filename,"castle",6);
    if (iVar2 == 0) {
      local_20 = 1;
      do {
        iVar2 = 1;
        local_1c = local_20;
        do {
          iVar3 = g_CDemonCameraInstance.framebuffer_width * iVar2 >> 0x1f;
          iVar4 = g_CDemonCameraInstance.framebuffer_height * local_1c >> 0x1f;
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0043c6b0
                    (&g_CDemonCameraInstance,
                     (int)((g_CDemonCameraInstance.framebuffer_width * iVar2 + iVar3 * -0x20) -
                          (uint)(iVar3 << 4 < 0)) >> 5,
                     (int)((g_CDemonCameraInstance.framebuffer_height * local_1c + iVar4 * -0x20) -
                          (uint)(iVar4 << 4 < 0)) >> 5,&local_d0);
          local_7c.x = local_d0.x;
          *(uint *)((int)&local_7c + (uint)bVar8 * -8 + 4) =
               *(uint *)((int)&local_d0 + (uint)bVar8 * -8 + 4);
          *(uint *)((int)&local_7c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
               *(uint *)((int)&local_d0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          local_1b8 = 0.0;
          if (local_7c.z < 0x7fffffff) {
            local_7c.z = local_7c.z + -0x300;
            if (local_7c.z < 1) {
              local_7c.z = 1;
            }
            core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0043c780
                      (&g_CDemonCameraInstance,&local_7c,&local_34);
            local_118 = local_34.x;
            local_114[(uint)bVar8 * -2] = *(int *)((int)&local_34 + (uint)bVar8 * -8 + 4);
            local_114[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                 *(int *)((int)&local_34 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
            fVar1 = (float)_DAT_005ea704;
            local_18 = (float)local_114[1];
            local_ac.x = (float)local_118 * fVar1;
            local_ac.y = (float)local_114[0] * fVar1;
            local_64 = (float)local_118 * fVar1 - local_60[2];
            local_ac.z = (float)local_114[1] * fVar1;
            local_60[0] = (float)local_114[0] * fVar1 - local_60[3];
            local_60[1] = (float)local_114[1] * fVar1 - local_50;
            local_40 = local_64;
            local_3c[(uint)bVar8 * -2] = local_60[(uint)bVar8 * -2];
            local_3c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                 local_60[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
            fVar1 = SQRT(local_3c[1] * local_3c[1] + local_40 * local_40 + local_3c[0] * local_3c[0]
                        );
            if ((float)_DAT_005ea724 < fVar1) {
              local_1b8 = (fVar1 + (float)_DAT_005ea72c) * (float)_DAT_005ea70c + 0.0;
            }
            local_ac.y = local_ac.y + 1.0;
            local_18 = core_setcolid_cpp_CDemonSet_rayVoxelHeightQuery_FUN_00535cf0
                                 (g_CDemonSetPtr,&local_ac);
            if ((float)_DAT_005ea734 < local_18 - local_ac.y) {
              local_1b8 = ((local_18 - local_ac.y) + (float)_DAT_005ea73c) * (float)_DAT_005ea714 +
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
