// Name: core_sound.cpp_updateListeners_FUN_005b1870
// Address: 005b1870
// Address Range: [[005b1870, 005b1ec6]]
// Convention: __cdecl
// Signature: void core_sound.cpp_updateListeners_FUN_005b1870(void)

#include "nocturne.h"

void __cdecl core_sound_cpp_updateListeners_FUN_005b1870(void)

{
  float fVar1;
  double dVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  CMatrix3x3i *pCVar8;
  int *piVar9;
  int *piVar10;
  byte bVar11;
  float afStackY_10b4 [963];
  CDemonSet *in_stack_fffffea8;
  CVector3f *in_stack_fffffeac;
  double dStack_150;
  float fStack_148;
  ulonglong uStack_144;
  float fStack_13c;
  int local_134 [10];
  int local_10c [14];
  byte local_d4 [12];
  CVector3i local_c8;
  CVector3f local_b8;
  float local_ac;
  CVector3f local_a8 [3];
  float local_7c;
  float local_78;
  float local_74;
  int local_70;
  byte local_6c [12];
  float local_60;
  float local_5c;
  CVector3f local_58;
  int local_48;
  int local_44;
  int local_40;
  uint uStack_34;
  int local_30;
  CVector3f local_2c;
  float fStack_20;
  float local_1c [3];
  
  bVar11 = 0;
  if (g_CGamePtr->block_auto_save == 0) {
    local_48 = g_CDemonCameraInstance.base.position.x;
    local_44 = g_CDemonCameraInstance.base.position.y;
    local_40 = g_CDemonCameraInstance.base.position.z;
    if ((int *)(local_d4 + 8) != &local_48) {
      local_d4._8_4_ = g_CDemonCameraInstance.base.position.x;
      local_c8.x = g_CDemonCameraInstance.base.position.y;
      local_c8.y = g_CDemonCameraInstance.base.position.z;
    }
    local_6c._4_4_ = (float)local_c8.x - g_SoundListenerPrev.y;
    local_6c._0_4_ = (float)local_d4._8_4_ - g_SoundListenerPrev.x;
    local_6c._8_4_ = (float)local_c8.y - g_SoundListenerPrev.z;
    if (SQRT((float)local_6c._8_4_ * (float)local_6c._8_4_ +
             (float)local_6c._0_4_ * (float)local_6c._0_4_ +
             (float)local_6c._4_4_ * (float)local_6c._4_4_) < (float)0.0001) {
      return;
    }
    pCVar8 = &g_CDemonCameraInstance.base.rotation_matrix;
    piVar10 = local_10c;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar10 = pCVar8->m[0].x;
      pCVar8 = (CMatrix3x3i *)&pCVar8->m[0].y;
      piVar10 = piVar10 + 1;
    }
    iVar4 = 10;
    piVar9 = local_10c;
    piVar10 = (int *)&stack0xfffffea4;
  }
  else {
    local_a8[0].x = (float)g_CDemonLightInstance.base.base.position.x;
    local_a8[0].y = (float)g_CDemonLightInstance.base.base.position.y;
    local_a8[0].z = (float)g_CDemonLightInstance.base.base.position.z;
    if ((CVector3f *)(local_d4 + 8) != local_a8) {
      local_d4._8_4_ = g_CDemonLightInstance.base.base.position.x;
      local_c8.x = g_CDemonLightInstance.base.base.position.y;
      local_c8.y = g_CDemonLightInstance.base.base.position.z;
    }
    pCVar8 = &g_CDemonLightInstance.base.base.rotation_matrix;
    piVar10 = local_134;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar10 = pCVar8->m[0].x;
      pCVar8 = (CMatrix3x3i *)&pCVar8->m[0].y;
      piVar10 = piVar10 + 1;
    }
    iVar4 = 10;
    piVar10 = (int *)&stack0xfffffea4;
    piVar9 = local_134;
  }
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar10 = *piVar9;
    piVar9 = piVar9 + 1;
    piVar10 = piVar10 + 1;
  }
  sound_sndmain_cpp_set3DListenerPos_FUN_005aa020
            ((double)(float)local_d4._8_4_,(double)(float)local_c8.x,(double)(float)local_c8.y);
  local_d4._0_4_ = 1.0;
  local_d4._4_4_ = 0.0;
  local_d4._8_4_ = 0.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
            ((CMatrix3x3f *)&stack0xfffffea8,&local_2c,(CVector3f *)local_d4);
  local_58.y = 1.0;
  local_58.x = 0.0;
  local_58.z = 0.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
            ((CMatrix3x3f *)&stack0xfffffeac,&local_b8,&local_58);
  local_a8[0].x = 0.0;
  local_a8[0].y = 0.0;
  local_a8[0].z = 1.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
            ((CMatrix3x3f *)&dStack_150,(CVector3f *)local_6c,local_a8);
  sound_sndmain_cpp_set3DListenerOrient_FUN_005aa0a0
            ((double)fStack_20,(double)local_1c[0],(double)local_1c[1],(double)local_b8.z,
             (double)local_ac,(double)local_a8[0].x,(double)(float)local_6c._4_4_,
             (double)(float)local_6c._8_4_,(double)local_60);
  CVector3f_03f6af7c.x = 0.0;
  if (g_CGamePtr->block_auto_save == 0) {
    iVar4 = crt_string_c_strnicmp_FUN_005ff070
                      (g_CDemonSetPtr->geometry_filename,"castle",6);
    if (iVar4 == 0) {
      iVar4 = 1;
      do {
        iVar7 = 1;
        do {
          iVar5 = g_CDemonCameraInstance.framebuffer_width * iVar7 >> 0x1f;
          iVar6 = g_CDemonCameraInstance.framebuffer_height * iVar4 >> 0x1f;
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                    (&g_CDemonCameraInstance,
                     (CVector3i *)
                     ((int)((g_CDemonCameraInstance.framebuffer_width * iVar7 + iVar5 * -0x20) -
                           (uint)(iVar5 << 4 < 0)) >> 5),
                     (int)((g_CDemonCameraInstance.framebuffer_height * iVar4 + iVar6 * -0x20) -
                          (uint)(iVar6 << 4 < 0)) >> 5,(int)in_stack_fffffea8);
          local_d4._8_4_ = fStack_20;
          *(float *)((int)&local_c8 + (uint)bVar11 * -8) = local_1c[(uint)bVar11 * -2];
          *(float *)((int)&local_c8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 4) =
               local_1c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          dVar2 = uStack_144;
          uStack_144 = (double)((ulonglong)uStack_144 & 0xffffffff00000000);
          if (local_c8.z < 0x7fffffff) {
            local_c8.z = local_c8.z + -0x300;
            if (local_c8.z < 1) {
              local_c8.z = 1;
            }
            core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                      (&g_CDemonCameraInstance,&local_c8,(CVector3i *)in_stack_fffffeac);
            local_74 = (float)uStack_34;
            (&local_70)[(uint)bVar11 * -2] = (&local_30)[(uint)bVar11 * -2];
            *(uint *)(local_6c + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
                 *(uint *)((int)&local_2c + (uint)bVar11 * -8 + (uint)bVar11 * -8);
            fVar1 = (float)0.00390625;
            local_6c._8_4_ = (float)local_70 * fVar1;
            local_5c = (float)(int)local_6c._4_4_ * fVar1;
            local_78 = (float)(int)local_6c._0_4_ * fVar1 - local_a8[0].x;
            local_7c = (float)local_6c._8_4_ - local_ac;
            local_74 = local_5c - local_a8[0].y;
            fVar3 = SQRT(local_74 * local_74 + local_7c * local_7c + local_78 * local_78);
            dStack_150 = (double)fVar3;
            if ((float)50 < fVar3) {
              uStack_144 = (double)CONCAT44 /* combine 2-byte values */((fVar3 + (float)-50) *
                                            (float)0.02 + uStack_144._4_4_,
                                            (float)uStack_144);
            }
            in_stack_fffffeac = (CVector3f *)(local_6c + 8);
            local_60 = (float)(int)local_6c._0_4_ * fVar1 + 1.0;
            in_stack_fffffea8 = g_CDemonSetPtr;
            fVar3 = core_setcolid_cpp_CDemonSet_rayVoxelHeightQuery_FUN_00572340
                              (g_CDemonSetPtr,in_stack_fffffeac);
            fVar3 = fVar3 - local_5c;
            uStack_144 = (double)fVar3;
            if ((float)60 < fVar3) {
              fStack_13c = (fVar3 + (float)-60) * (float)0.016666666666666701 + fStack_13c;
            }
          }
          else {
            uStack_144._4_4_ = SUB84 /* extract 2-byte value */(dVar2,4);
            uStack_144 = (double)CONCAT44 /* combine 2-byte values */(uStack_144._4_4_,0x3f800000);
          }
          if (0.0 < fStack_148) {
            fStack_148 = fStack_148 + 0.2f;
          }
          fStack_148 = fStack_148 * fStack_148;
          if (1.0 < fStack_148) {
            fStack_148 = 1.0;
          }
          CVector3f_03f6af7c.x = fStack_148 * 0.015625f + CVector3f_03f6af7c.x;
          iVar7 = iVar7 + 2;
        } while (iVar7 != 0x21);
        iVar4 = iVar4 + 2;
      } while (iVar4 != 0x21);
    }
    CVector3f_03f6af7c.x = CVector3f_03f6af7c.x * CVector3f_03f6af7c.x;
    if (0.0 < CVector3f_03f6af7c.x) {
      CVector3f_03f6af7c.x = CVector3f_03f6af7c.x + 0.3f;
    }
    if (1.0 < CVector3f_03f6af7c.x) {
      CVector3f_03f6af7c.x = 1.0;
    }
  }
  if (&stack0x00000000 == (byte *)0x3f6b024) {
    return;
  }
  g_SoundListenerPrev.x = local_b8.y;
  g_SoundListenerPrev.y = local_b8.z;
  g_SoundListenerPrev.z = local_ac;
  return;
}
