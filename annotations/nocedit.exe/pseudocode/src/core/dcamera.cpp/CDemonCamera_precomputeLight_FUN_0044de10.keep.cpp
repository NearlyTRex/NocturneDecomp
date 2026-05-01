// Name: core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044de10
// Address: 0044de10
// MANUAL RECONSTRUCTION
// Address Range: [[0044de10, 0044e356] [006048c4, 006048e8] [0060c74e, 0060c76c]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_0044de10(CDemonCamera *this_ptr,CDemonLight *light_source,CRect *rect)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_0044de10(CDemonCamera *this_ptr,CDemonLight *light_source,CRect *rect)

{
  int iVar1;
  char (*pacVar2) [307200];
  char (*pacVar1) [307200];
  CVector3i *input_ptr;
  CVector3f *pCVar2;
  CDemonLight *pCVar3;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  int *piVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar6;
  int iVar7;
  int *piVar7;
  int *piVar8;
  int iVar8;
  int iVar9;
  int iVar10;
  byte bVar10;
  int local_80;
  int local_7c;
  void *local_78;
  int local_74;
  CVector3i local_70;
  CVector3i local_64;
  int local_58;
  CVector3f *local_54;
  CVector3i *local_50;
  int local_4c;
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

  local_40 = 0x80;
  iVar1 = _strcmp(light_source->filter_name,"movscrn.raw");
  if (iVar1 == 0) {
    local_40 = 0x100;
  }
  if (rect == (CRect *)0x0) {
    g_CoronaLightCache.count = (int)rect;
    g_LightBufferPoolIndex = (int)rect;
  }
  uVar6 = g_LightBufferPoolIndex + 1;
  pacVar2 = g_LightBufferPool + g_LightBufferPoolIndex;
  if (0x18 < uVar6) {
    pacVar2 = (char (*) [307200])0x0;
  }
  g_LightBufferPoolIndex = uVar6;
  light_source->corona_visibility_buffers = (int *)pacVar2;
  uVar5 = g_LightBufferPoolIndex + 1;
  pacVar1 = g_LightBufferPool + uVar6;
  if (0x18 < uVar5) {
    pacVar1 = (char (*) [307200])0x0;
  }
  g_LightBufferPoolIndex = uVar5;
  light_source->corona_depth_buffer = (int *)pacVar1;
  g_LightBufferPoolIndex = g_LightBufferPoolIndex + 1;
  pacVar1 = g_LightBufferPool + uVar5;
  if (0x18 < (uint)g_LightBufferPoolIndex) {
    pacVar1 = (char (*) [307200])0x0;
  }
  light_source->corona_lightmap_indices = (int *)pacVar1;
  if (((light_source->corona_visibility_buffers == (int *)0x0) ||
      (light_source->corona_depth_buffer == (int *)0x0)) ||
     (light_source->corona_lightmap_indices == (int *)0x0)) {
    g_CurrentFilename = "..\\core\\dcamera.cpp";
    g_CurrentLineNumber = 0x6ba;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CDemonCamera::precomputeLight - Too many lights visible from camera %s",this_ptr->camera_name);
  }
  core_dlight_cpp_CDemonLight_initializeVisibilityBuffer_FUN_00475fc0(light_source);
  if ((rect == (CRect *)0x0) || (this_ptr->framebuffer_height != 0x1e0)) {
    local_7c = this_ptr->display_width + -1;
    local_78 = (void *)0x0;
    local_74 = this_ptr->display_height + -1;
    local_80 = 0;
  }
  else {
    local_80 = rect->left;
    local_7c = rect->top;
    local_78 = (void *)rect->right;
    local_74 = rect->bottom;
    for (iVar8 = 0; iVar8 < (int)local_78; iVar8++) {
      light_source->left_extent[iVar8] = 999;
      light_source->right_extent[iVar8] = 0;
    }
    for (iVar8 = local_74 + 1; iVar8 < this_ptr->display_height; iVar8++) {
      light_source->left_extent[iVar8] = 999;
      light_source->right_extent[iVar8] = 0;
    }
  }
  local_2c = (int)local_78;
  if ((int)local_78 <= local_74) {
    for (; local_2c <= local_74; local_2c++) {
      local_50 = g_PrecomputedWorldPositions + local_2c * 0x140;
      local_54 = g_PrecomputedSurfaceNormals[local_2c];
      input_ptr = local_50 + local_80;
      local_34 = 999;
      pCVar2 = local_54 + local_80;
      piVar4 = light_source->corona_visibility_buffers + local_2c * 0x140 + local_80;
      puVar5 = (uint *)(light_source->corona_depth_buffer + local_2c * 0x140 + local_80);
      local_38 = 0;
      piVar6 = light_source->corona_lightmap_indices + local_2c * 0x140 + local_80;
      for (iVar7 = local_80; iVar7 <= local_7c; iVar7 = iVar7 + 1) {
        if ((((iVar7 < 1) || ((int)local_2c < 1)) ||
            ((iVar3 = iVar7 * this_ptr->scale_factor, iVar9 = this_ptr->framebuffer_width + -2,
             iVar3 - iVar9 != 0 && iVar9 <= iVar3 ||
             (iVar10 = (int)local_2c * this_ptr->scale_factor,
             iVar3 = this_ptr->framebuffer_height + -2, iVar10 - iVar3 != 0 && iVar3 <= iVar10))))
           || ((iVar1 != 0 &&
               (pCVar2->z * (light_source->base).base.rotation_matrix.m[2].z +
                pCVar2->x * (light_source->base).base.rotation_matrix.m[0].z +
                pCVar2->y * (light_source->base).base.rotation_matrix.m[1].z < 0.0)))) {
LAB_0044e06f:
          *piVar4 = 0;
          *puVar5 = 0;
LAB_0044e087:
          *piVar6 = 0;
        }
        else {
          core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
                    (&light_source->base,input_ptr,&local_70);
          local_64.x = local_70.x;
          local_64.y = local_70.y;
          if (local_70.z < 1) goto LAB_0044e06f;
          *piVar4 = local_70.z - local_40;
          puVar4 = core_dlight_cpp_CDemonLight_projectLightAndMarkVisibility_FUN_00473270
                             (light_source,&local_64,(uchar)iVar7,(uchar)local_2c);
          *puVar5 = (uint)puVar4;
          if (puVar4 == (ushort *)0x0) {
            *piVar4 = 0;
            *puVar5 = 0;
            goto LAB_0044e087;
          }
          *piVar6 = ((local_64.y >> ((byte)light_source->shadow_y_shift & 0x1f) &
                     light_source->texture_coord_mask) <<
                    ((byte)light_source->texture_row_shift & 0x1f)) +
                    (local_64.x >> ((byte)light_source->shadow_x_shift & 0x1f) &
                    light_source->texture_coord_mask);
          if (local_38 < iVar7) {
            local_38 = iVar7;
          }
          if (iVar7 < local_34) {
            local_34 = iVar7;
          }
        }
        pCVar2 = pCVar2 + 1;
        input_ptr = input_ptr + 1;
        piVar4 = piVar4 + 1;
        puVar5 = puVar5 + 1;
        piVar6 = piVar6 + 1;
      }
      light_source->left_extent[local_2c] = local_34;
      light_source->right_extent[local_2c] = local_38;
    }
  }
}
