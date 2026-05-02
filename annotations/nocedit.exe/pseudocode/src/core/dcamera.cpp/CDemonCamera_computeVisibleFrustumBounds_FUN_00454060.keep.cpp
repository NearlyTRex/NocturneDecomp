// Name: core_dcamera.cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060
// Address: 00454060
// MANUAL RECONSTRUCTION
// Address Range: [[00454060, 00454441] [00609f20, 00609fee]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_dcamera_cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060(CDemonCamera *this_ptr,CVector3f *output_bounds)

#include "nocturne.h"

CVector3f * __cdecl core_dcamera_cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060(CDemonCamera *this_ptr,CVector3f *output_bounds)

{
  UVector3 *pUVar1;
  uint uVar2;
  CVector3i local_ec;
  CVector3i local_e0;
  CVector3i local_d4;
  CVector3i local_bc;
  CVector3i local_8c;
  CVector3i local_80;
  CVector3f local_5c;
  CVector3f local_50;
  CVector3i local_44;
  int local_38;
  int local_1c;
  int local_18;
  int local_14;
  
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
  local_38 = 0;
  local_18 = 1;
  do {
    if (this_ptr->framebuffer_height + -1 <= local_18) {
      return output_bounds;
    }
    local_1c = 0;
    for (local_14 = 1; local_14 < this_ptr->framebuffer_width + -1; local_14 = local_14 + 1) {
      core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                (this_ptr,local_14,local_18,&local_d4);
      local_80.x = local_d4.x;
      local_80.y = local_d4.y;
      local_80.z = local_d4.z;
      if (local_d4.z < 0x1f401) {
LAB_00454218:
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                  (this_ptr,&local_80,&local_e0);
        local_5c.x = (float)local_e0.x * 0.00390625f - (this_ptr->base).position.f.x;
        local_5c.y = (float)local_e0.y * 0.00390625f - (this_ptr->base).position.f.y;
        local_5c.z = (float)local_e0.z * 0.00390625f - (this_ptr->base).position.f.z;
        core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                  (&(this_ptr->base).rotation_matrix,&local_50,&local_5c);
        core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)output_bounds,&local_50);
      }
      else {
        uVar2 = 0;
        if (((local_14 < 2) || (local_18 < 2)) ||
           (core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                      (this_ptr,local_1c,local_38,&local_bc), 0x1f400 < local_bc.z)) {
          uVar2 = 1;
        }
        if (((local_14 < 2) || (this_ptr->framebuffer_height + -2 <= local_18)) ||
           (core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                      (this_ptr,local_1c,local_18 + 1,&local_ec), 0x1f400 < local_ec.z)) {
          uVar2 = uVar2 + 1;
        }
        if (((this_ptr->framebuffer_width + -2 <= local_14) || (local_18 < 2)) ||
           (core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                      (this_ptr,local_14 + 1,local_38,&local_8c), 0x1f400 < local_8c.z)) {
          uVar2 = uVar2 + 1;
        }
        if (((this_ptr->framebuffer_width + -2 <= local_14) ||
            (this_ptr->framebuffer_height + -2 <= local_18)) ||
           (core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                      (this_ptr,local_14 + 1,local_18 + 1,&local_44), 0x1f400 < local_44.z)) {
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
