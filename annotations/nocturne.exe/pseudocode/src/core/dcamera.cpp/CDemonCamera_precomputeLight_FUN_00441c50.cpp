// Name: core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_00441c50
// Address: 00441c50
// Address Range: [[00441c50, 004421a4]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_00441c50(CDemonCamera *this_ptr,CDemonLight *light_source,CRect *rect)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_00441c50(CDemonCamera *this_ptr,CDemonLight *light_source,CRect *rect)

{
  int iVar1;
  char (*pacVar2) [307200];
  CDemonLight *pCVar3;
  char *pcVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  byte bVar11;
  int aiStackY_185c [1523];
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  CVector3i local_70;
  CVector3i local_64;
  int local_58;
  CVector3i *local_54;
  int local_50;
  CVector3f *local_4c;
  char *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  CVector3i *local_30;
  int local_2c;
  float *local_28;
  int *local_24;
  int *local_20;
  uint *local_1c;
  int local_18;
  
  bVar11 = 0;
  local_3c = 0x80;
  local_40 = 0;
  iVar1 = _strcmp(light_source->filter_name,"movscrn.raw");
  if (iVar1 == 0) {
    local_40 = 1;
    local_3c = 0x100;
  }
  if (rect == (CRect *)0x0) {
    g_SCoronaLightCache_01216608.count = (int)rect;
    g_INT_00b0e604 = (int)rect;
  }
  uVar7 = g_INT_00b0e604 + 1;
  pacVar2 = g_CHAR_ARRAY_ARRAY_00b0e608 + g_INT_00b0e604;
  if (0x18 < uVar7) {
    pacVar2 = (char (*) [307200])0x0;
  }
  g_INT_00b0e604 = uVar7;
  light_source->corona_visibility_buffers = (int *)pacVar2;
  uVar6 = g_INT_00b0e604 + 1;
  pacVar2 = g_CHAR_ARRAY_ARRAY_00b0e608 + uVar7;
  if (0x18 < uVar6) {
    pacVar2 = (char (*) [307200])0x0;
  }
  g_INT_00b0e604 = uVar6;
  light_source->corona_depth_buffer = (ushort **)pacVar2;
  g_INT_00b0e604 = g_INT_00b0e604 + 1;
  pacVar2 = g_CHAR_ARRAY_ARRAY_00b0e608 + uVar6;
  if (0x18 < (uint)g_INT_00b0e604) {
    pacVar2 = (char (*) [307200])0x0;
  }
  light_source->corona_lightmap_indices = (int *)pacVar2;
  if (((light_source->corona_visibility_buffers == (int *)0x0) ||
      (light_source->corona_depth_buffer == (ushort **)0x0)) ||
     (light_source->corona_lightmap_indices == (int *)0x0)) {
    g_CurrentFilename = "..\\core\\dcamera.cpp";
    g_CurrentLineNumber = 1710;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonCamera::precomputeLight - Too many lights visible from camera %s",this_ptr);
  }
  core_dlight_cpp_CDemonLight_initializeVisibilityBuffer_FUN_00451a60(light_source);
  if ((rect == (CRect *)0x0) || (this_ptr->max_distance != 6.72623e-43)) {
    local_78 = 0;
    local_80 = 0;
    local_7c = this_ptr->display_width + -1;
    local_74 = this_ptr->display_height + -1;
  }
  else {
    puVar8 = (uint *)((int)rect + (uint)bVar11 * -8 + 4);
    local_80 = rect->x_min;
    puVar9 = puVar8 + (uint)bVar11 * -2 + 1;
    *(uint *)((int)&stack0xffffff84 + (uint)bVar11 * -8) = *puVar8;
    *(uint *)((int)&stack0xffffff88 + (uint)bVar11 * -8 + (uint)bVar11 * -8) = *puVar9;
    ((uint *)((int)&stack0xffffff88 + (uint)bVar11 * -8 + (uint)bVar11 * -8))
    [(uint)bVar11 * -2 + 1] = puVar9[(uint)bVar11 * -2 + 1];
    iVar1 = 0;
    pCVar3 = light_source;
    if (0 < local_78) {
      do {
        pCVar3->left_extent[0] = 999;
        iVar1 = iVar1 + 1;
        pCVar3->right_extent[0] = 0;
        pCVar3 = (CDemonLight *)((pCVar3->base).camera_name + 4);
      } while (iVar1 < local_78);
    }
    iVar1 = local_74 + 1;
    if (iVar1 < this_ptr->display_height) {
      pcVar4 = (light_source->base).camera_name + local_74 * 4 + 4;
      do {
        *(uint *)(pcVar4 + 0x14c8) = 999;
        *(uint *)(pcVar4 + 0x1888) = 0;
        iVar1 = iVar1 + 1;
        pcVar4 = pcVar4 + 4;
      } while (iVar1 < this_ptr->display_height);
    }
  }
  local_2c = local_78;
  if (local_78 <= local_74) {
    local_58 = local_80 * 0xc;
    local_50 = local_80 * 4;
    local_44 = local_78 * 0x500;
    local_54 = g_CVector3i_ARRAY_007f7378 + local_78 * 0x140;
    local_4c = g_CVector3f_ARRAY_009bb178 + local_78 * 0x140;
    local_48 = (light_source->base).camera_name + local_78 * 4;
    do {
      local_38 = 999;
      local_30 = (CVector3i *)((int)&local_54->x + local_58);
      local_28 = (float *)((int)&local_4c->x + local_58);
      local_34 = 0;
      local_20 = (int *)((int)light_source->corona_visibility_buffers + local_50 + local_44);
      local_1c = (uint *)((int)light_source->corona_depth_buffer + local_50 + local_44);
      local_24 = (int *)((int)light_source->corona_lightmap_indices + local_50 + local_44);
      local_18 = local_80;
      if (local_80 <= local_7c) {
        do {
          if (((local_18 < 1) || (local_2c < 1)) ||
             ((iVar1 = local_18 * this_ptr->scale_factor, iVar10 = this_ptr->screen_width + -2,
              iVar1 - iVar10 != 0 && iVar10 <= iVar1 ||
              (iVar10 = local_2c * this_ptr->scale_factor, iVar1 = (int)this_ptr->max_distance + -2,
              iVar10 - iVar1 != 0 && iVar1 <= iVar10)))) {
LAB_00441e9f:
            *local_20 = 0;
            *local_1c = 0;
LAB_00441eb7:
            *local_24 = 0;
          }
          else {
            if ((local_40 != 0) ||
               (0.0 <= local_28[2] * (light_source->base).rotation_matrix.m[2].z +
                       *local_28 * (light_source->base).rotation_matrix.m[0].z +
                       local_28[1] * (light_source->base).rotation_matrix.m[1].z)) {
              core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610
                        (&light_source->base,local_30,&local_70);
              local_64.x = local_70.x;
              *(uint *)((int)&local_64 + (uint)bVar11 * -8 + 4) =
                   *(uint *)((int)&local_70 + (uint)bVar11 * -8 + 4);
              *(uint *)((int)&local_64 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
                   *(uint *)((int)&local_70 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
              if (local_64.z < 1) goto LAB_00441e9f;
              *local_20 = local_64.z - local_3c;
              puVar5 = core_dlight_cpp_CDemonLight_projectLightAndMarkVisibility_FUN_0044ec60
                                 (light_source,&local_64,(uchar)local_18,(uchar)local_2c);
              *local_1c = puVar5;
              if (puVar5 != (ushort *)0x0) {
                *local_24 = ((local_64.y >> ((byte)light_source->shadow_y_shift & 0x1f) &
                             light_source->texture_coord_mask) <<
                            ((byte)light_source->texture_row_shift & 0x1f)) +
                            (local_64.x >> ((byte)light_source->shadow_x_shift & 0x1f) &
                            light_source->texture_coord_mask);
                if (local_34 < local_18) {
                  local_34 = local_18;
                }
                if (local_18 < local_38) {
                  local_38 = local_18;
                }
                goto LAB_00441ebd;
              }
              *local_20 = 0;
              *local_1c = 0;
              goto LAB_00441eb7;
            }
            *local_20 = 0;
            *local_1c = 0;
            *local_24 = 0;
          }
LAB_00441ebd:
          local_28 = local_28 + 3;
          local_30 = local_30 + 1;
          local_20 = local_20 + 1;
          local_1c = local_1c + 1;
          local_24 = local_24 + 1;
          local_18 = local_18 + 1;
        } while (local_18 <= local_7c);
      }
      local_44 = local_44 + 0x500;
      local_2c = local_2c + 1;
      *(int *)(local_48 + 0x14c8) = local_38;
      *(int *)(local_48 + 0x1888) = local_34;
      local_4c = local_4c + 0x140;
      local_54 = local_54 + 0x140;
      local_48 = local_48 + 4;
    } while (local_2c <= local_74);
  }
  return;
}
