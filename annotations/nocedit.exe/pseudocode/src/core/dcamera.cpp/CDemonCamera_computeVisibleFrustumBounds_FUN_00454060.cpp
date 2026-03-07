// Name: core_dcamera.cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060
// Address: 00454060
// Address Range: [[00454060, 00454441]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_dcamera_cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060(CDemonCamera *this_ptr,CVector3f *output_bounds)

#include "nocturne.h"

CVector3f * __cdecl core_dcamera_cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060(CDemonCamera *this_ptr,CVector3f *output_bounds)

{
  UVector3 *pUVar1;
  uint uVar2;
  byte bVar3;
  int aiStackY_10d4 [1015];
  CVector3i local_ec;
  CVector3i local_e0;
  CVector3i local_d4;
  int local_c8;
  int aiStack_c4 [2];
  CVector3i local_bc;
  int local_b0;
  int aiStack_ac [2];
  float local_a4;
  float local_a0;
  float local_9c;
  int local_98;
  int aiStack_94 [2];
  CVector3i local_8c;
  CVector3i local_80;
  int local_74;
  int aiStack_70 [4];
  int local_60;
  CVector3f local_5c;
  CVector3f local_50;
  CVector3i local_44;
  int local_38;
  CMatrix3x3f *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  UVector3 *local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar3 = 0;
  pUVar1 = (UVector3 *)(output_bounds + 1);
  if (pUVar1 != &g_ZeroVector) {
    (pUVar1->f).x = g_ZeroVector.f.x;
    output_bounds[1].y = g_ZeroVector.f.y;
    output_bounds[1].z = g_ZeroVector.f.z;
  }
  if (pUVar1 != (UVector3 *)output_bounds) {
    output_bounds->x = (pUVar1->f).x;
    output_bounds->y = output_bounds[1].y;
    output_bounds->z = output_bounds[1].z;
  }
  local_20 = &(this_ptr->base).position;
  local_38 = 0;
  local_34 = &(this_ptr->base).rotation_matrix;
  local_18 = 1;
  do {
    if (this_ptr->framebuffer_height + -1 <= local_18) {
      return output_bounds;
    }
    local_2c = local_18 + 1;
    local_28 = local_38;
    local_30 = local_38;
    local_1c = 0;
    local_24 = local_2c;
    for (local_14 = 1; local_14 < this_ptr->framebuffer_width + -1; local_14 = local_14 + 1) {
      core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                (this_ptr,local_14,local_18,&local_d4);
      local_80.x = local_d4.x;
      *(uint *)((int)&local_80 + (uint)bVar3 * -8 + 4) =
           *(uint *)((int)&local_d4 + (uint)bVar3 * -8 + 4);
      *(uint *)((int)&local_80 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           *(uint *)((int)&local_d4 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      if (local_80.z < 0x1f401) {
LAB_00454218:
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                  (this_ptr,&local_80,&local_e0);
        aiStack_70[2] = local_e0.x;
        aiStack_70[(uint)bVar3 * -2 + 3] = *(int *)((int)&local_e0 + (uint)bVar3 * -8 + 4);
        aiStack_70[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
             *(int *)((int)&local_e0 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
        local_a4 = (float)aiStack_70[2] * 0.00390625f;
        local_a0 = (float)aiStack_70[3] * 0.00390625f;
        local_9c = (float)local_60 * 0.00390625f;
        local_5c.x = local_a4 - (local_20->f).x;
        local_5c.y = local_a0 - (local_20->f).y;
        local_5c.z = local_9c - (local_20->f).z;
        core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                  (local_34,&local_50,&local_5c);
        core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)output_bounds,&local_50);
      }
      else {
        uVar2 = 0;
        if ((local_14 < 2) || (local_18 < 2)) {
LAB_004541c5:
          uVar2 = 1;
        }
        else {
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                    (this_ptr,local_1c,local_30,&local_bc);
          local_c8 = local_bc.x;
          aiStack_c4[(uint)bVar3 * -2] = *(int *)((int)&local_bc + (uint)bVar3 * -8 + 4);
          aiStack_c4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
               *(int *)((int)&local_bc + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
          if (0x1f400 < aiStack_c4[1]) goto LAB_004541c5;
        }
        if ((local_14 < 2) || (this_ptr->framebuffer_height + -2 <= local_18)) {
LAB_004541d4:
          uVar2 = uVar2 + 1;
        }
        else {
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                    (this_ptr,local_1c,local_2c,&local_ec);
          local_b0 = local_ec.x;
          aiStack_ac[(uint)bVar3 * -2] = *(int *)((int)&local_ec + (uint)bVar3 * -8 + 4);
          aiStack_ac[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
               *(int *)((int)&local_ec + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
          if (0x1f400 < aiStack_ac[1]) goto LAB_004541d4;
        }
        if ((local_14 < this_ptr->framebuffer_width + -2) && (1 < local_18)) {
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                    (this_ptr,local_14 + 1,local_28,&local_8c);
          local_98 = local_8c.x;
          aiStack_94[(uint)bVar3 * -2] = *(int *)((int)&local_8c + (uint)bVar3 * -8 + 4);
          aiStack_94[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
               *(int *)((int)&local_8c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
          if (0x1f400 < aiStack_94[1]) goto LAB_004541ed;
        }
        else {
LAB_004541ed:
          uVar2 = uVar2 + 1;
        }
        if ((local_14 < this_ptr->framebuffer_width + -2) &&
           (local_18 < this_ptr->framebuffer_height + -2)) {
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                    (this_ptr,local_14 + 1,local_24,&local_44);
          local_74 = local_44.x;
          aiStack_70[(uint)bVar3 * -2] = *(int *)((int)&local_44 + (uint)bVar3 * -8 + 4);
          aiStack_70[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
               *(int *)((int)&local_44 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
          if (0x1f400 < aiStack_70[1]) goto LAB_00454206;
        }
        else {
LAB_00454206:
          uVar2 = uVar2 + 1;
        }
        if (3 < uVar2) {
          local_80.z = 0x1f400;
          goto LAB_00454218;
        }
      }
      local_1c = local_1c + 1;
    }
    local_18 = local_18 + 1;
    local_38 = local_38 + 1;
  } while( true );
}
