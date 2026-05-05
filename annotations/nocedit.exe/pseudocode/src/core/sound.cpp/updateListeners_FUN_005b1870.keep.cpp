// Name: core_sound.cpp_updateListeners_FUN_005b1870
// Address: 005b1870
// MANUAL RECONSTRUCTION
// Address Range: [[005b1870, 005b1ec6] [0060c6f0, 0060c72e] [03fc3169, 03fc3212]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_updateListeners_FUN_005b1870(void)

#include "nocturne.h"

void __cdecl core_sound_cpp_updateListeners_FUN_005b1870(void)

{
  float fVar3;
  int iVar6;
  int iVar4;
  int iVar5;
  float *pfVar7;
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
  float local_9c;
  float local_98;
  float local_94;
  CVector3f local_84;
  CVector3f local_78;
  CVector3f local_60;
  CVector3i local_54;
  float local_48;
  CVector3i local_3c;
  CVector3f local_30;
  int local_1c;
  float fVar2;
  float fVar1;
  float local_a4;
  float local_a0;
  float local_44;
  float local_40;
  
  if (g_CGamePtr->block_auto_save == 0) {
    local_48 = g_CDemonCameraInstance.base.position.f.x;
    local_44 = g_CDemonCameraInstance.base.position.f.y;
    local_40 = g_CDemonCameraInstance.base.position.f.z;
    if (&local_cc != &local_48) {
      local_cc = g_CDemonCameraInstance.base.position.f.x;
      local_c8 = g_CDemonCameraInstance.base.position.f.y;
      local_c4 = g_CDemonCameraInstance.base.position.f.z;
    }
    if (SQRT((local_c4 - g_SoundListenerPrev.z) * (local_c4 - g_SoundListenerPrev.z) +
             (local_cc - g_SoundListenerPrev.x) * (local_cc - g_SoundListenerPrev.x) +
             (local_c8 - g_SoundListenerPrev.y) * (local_c8 - g_SoundListenerPrev.y)) <
        (float)0.0001) {
      return;
    }
    local_10c[0] = g_CDemonCameraInstance.base.rotation_matrix.m[0].x;
    local_10c[1] = g_CDemonCameraInstance.base.rotation_matrix.m[0].y;
    local_10c[2] = g_CDemonCameraInstance.base.rotation_matrix.m[0].z;
    local_10c[3] = g_CDemonCameraInstance.base.rotation_matrix.m[1].x;
    local_10c[4] = g_CDemonCameraInstance.base.rotation_matrix.m[1].y;
    local_10c[5] = g_CDemonCameraInstance.base.rotation_matrix.m[1].z;
    local_10c[6] = g_CDemonCameraInstance.base.rotation_matrix.m[2].x;
    local_10c[7] = g_CDemonCameraInstance.base.rotation_matrix.m[2].y;
    local_10c[8] = g_CDemonCameraInstance.base.rotation_matrix.m[2].z;
    pfVar7 = local_10c;
  }
  else {
    local_a8 = g_CDemonLightInstance.base.base.position.f.x;
    local_a4 = g_CDemonLightInstance.base.base.position.f.y;
    local_a0 = g_CDemonLightInstance.base.base.position.f.z;
    if (&local_cc != &local_a8) {
      local_cc = g_CDemonLightInstance.base.base.position.f.x;
      local_c8 = g_CDemonLightInstance.base.base.position.f.y;
      local_c4 = g_CDemonLightInstance.base.base.position.f.z;
    }
    local_134[0] = g_CDemonLightInstance.base.base.rotation_matrix.m[0].x;
    local_134[1] = g_CDemonLightInstance.base.base.rotation_matrix.m[0].y;
    local_134[2] = g_CDemonLightInstance.base.base.rotation_matrix.m[0].z;
    local_134[3] = g_CDemonLightInstance.base.base.rotation_matrix.m[1].x;
    local_134[4] = g_CDemonLightInstance.base.base.rotation_matrix.m[1].y;
    local_134[5] = g_CDemonLightInstance.base.base.rotation_matrix.m[1].z;
    local_134[6] = g_CDemonLightInstance.base.base.rotation_matrix.m[2].x;
    local_134[7] = g_CDemonLightInstance.base.base.rotation_matrix.m[2].y;
    local_134[8] = g_CDemonLightInstance.base.base.rotation_matrix.m[2].z;
    pfVar7 = local_134;
  }
  memcpy(&local_15c,pfVar7,sizeof(local_15c));
  sound_sndmain_cpp_set3DListenerPos_FUN_005aa020
            ((double)local_cc,(double)local_c8,(double)local_c4);
  local_d8.x = 1.0;
  local_d8.y = 0.0;
  local_d8.z = 0.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&local_15c,&local_30,&local_d8);
  local_60.y = 1.0;
  local_60.x = 0.0;
  local_60.z = 0.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&local_15c,&local_c0,&local_60);
  local_b4.x = 0.0;
  local_b4.y = 0.0;
  local_b4.z = 1.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&local_15c,&local_78,&local_b4);
  sound_sndmain_cpp_set3DListenerOrient_FUN_005aa0a0
            ((double)local_30.x,(double)local_30.y,(double)local_30.z,(double)local_c0.x,
             (double)local_c0.y,(double)local_c0.z,(double)local_78.x,(double)local_78.y,
             (double)local_78.z);
  CVector3f_03f6af7c.x = 0.0;
  if (g_CGamePtr->block_auto_save == 0) {
    iVar6 = _strnicmp
                      (g_CDemonSetPtr->geometry_filename,"castle",6);
    if (iVar6 == 0) {
      local_1c = 1;
      do {
        iVar6 = 1;
        do {
          iVar4 = g_CDemonCameraInstance.framebuffer_width * iVar6 >> 0x1f;
          iVar5 = g_CDemonCameraInstance.framebuffer_height * local_1c >> 0x1f;
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                    (&g_CDemonCameraInstance,
                     (int)((g_CDemonCameraInstance.framebuffer_width * iVar6 + iVar4 * -0x20) -
                          (uint)(iVar4 << 4 < 0)) >> 5,
                     (int)((g_CDemonCameraInstance.framebuffer_height * local_1c + iVar5 * -0x20) -
                          (uint)(iVar5 << 4 < 0)) >> 5,&local_3c);
          local_e4.z = local_3c.z;
          local_160 = 0.0;
          if (local_3c.z < 0x7fffffff) {
            local_e4.z = local_3c.z + -0x300;
            if (local_e4.z < 1) {
              local_e4.z = 1;
            }
            core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                      (&g_CDemonCameraInstance,&local_e4,&local_54);
            fVar2 = (float)0.00390625;
            local_84.x = (float)local_54.x * fVar2;
            local_84.z = (float)local_54.z * fVar2;
            local_98 = (float)local_54.y * fVar2 - local_c8;
            local_9c = local_84.x - local_cc;
            local_94 = local_84.z - local_c4;
            fVar1 = SQRT(local_94 * local_94 + local_9c * local_9c + local_98 * local_98);
            if ((float)50 < fVar1) {
              local_160 = (fVar1 + (float)-50) * (float)0.02 + 0.0;
            }
            local_84.y = (float)local_54.y * fVar2 + 1.0;
            fVar3 = core_setcolid_cpp_CDemonSet_rayVoxelHeightQuery_FUN_00572340
                              (g_CDemonSetPtr,&local_84);
            if ((float)60 < fVar3 - local_84.y) {
              local_160 = ((fVar3 - local_84.y) + (float)-60) * (float)0.016666666666666701 +
                          local_160;
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
          CVector3f_03f6af7c.x = local_160 * 0.015625f + CVector3f_03f6af7c.x;
          iVar6 = iVar6 + 2;
        } while (iVar6 != 0x21);
        local_1c = local_1c + 2;
      } while (local_1c != 0x21);
    }
    CVector3f_03f6af7c.x = CVector3f_03f6af7c.x * CVector3f_03f6af7c.x;
    if (0.0 < CVector3f_03f6af7c.x) {
      CVector3f_03f6af7c.x = CVector3f_03f6af7c.x + 0.3f;
    }
    if (1.0 < CVector3f_03f6af7c.x) {
      CVector3f_03f6af7c.x = 1.0;
    }
  }
  g_SoundListenerPrev.x = local_cc;
  g_SoundListenerPrev.y = local_c8;
  g_SoundListenerPrev.z = local_c4;
  return;
}
