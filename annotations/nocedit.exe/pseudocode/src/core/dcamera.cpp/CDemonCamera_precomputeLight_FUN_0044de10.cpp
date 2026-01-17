// Name: core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044de10
// Address: 0044de10
// Address Range: [[0044de10, 0044e356]]
// Convention: __cdecl
// Signature: void * core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044de10(CDemonCamera * this_ptr, CDemonLight * light_source, CRect * rect)

#include "nocturne.h"

void * __cdecl
core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_0044de10
          (CDemonCamera *this_ptr,CDemonLight *light_source,CRect *rect)

{
  int iVar1;
  char (*pacVar2) [307200];
  CDemonLight *pCVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  byte bVar10;
  void *apvStackY_185c [513];
  int aiStackY_1058 [1010];
  CVector3i *input_ptr;
  int local_7c;
  void *local_78;
  int local_74;
  int local_70;
  int aiStack_6c [2];
  CVector3i local_64;
  int local_58;
  CVector3f *local_54;
  CVector3i *local_50;
  int local_4c;
  void *local_48;
  int local_44;
  int local_40;
  int local_3c;
  CVector3i *local_38;
  CVector3i *local_34;
  CVector3i *local_30;
  void *local_2c;
  float *local_28;
  int *local_24;
  int *local_20;
  uint *local_1c;
  CVector3i *local_18;
  
  bVar10 = 0;
  local_40 = 0x80;
  local_3c = 0;
  iVar1 = crt_string_c_strcmp_FUN_005fef20(light_source->filter_name,"movscrn.raw");
  if (iVar1 == 0) {
    local_3c = 1;
    local_40 = 0x100;
  }
  if (rect == (CRect *)0x0) {
    g_LightBufferPool[0x18]._0_4_ = rect;
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
  pacVar2 = g_LightBufferPool + uVar6;
  if (0x18 < uVar5) {
    pacVar2 = (char (*) [307200])0x0;
  }
  g_LightBufferPoolIndex = uVar5;
  light_source->corona_depth_buffer = (int *)pacVar2;
  g_LightBufferPoolIndex = g_LightBufferPoolIndex + 1;
  pacVar2 = g_LightBufferPool + uVar5;
  if (0x18 < (uint)g_LightBufferPoolIndex) {
    pacVar2 = (char (*) [307200])0x0;
  }
  light_source->corona_lightmap_indices = (int *)pacVar2;
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
    input_ptr = (CVector3i *)0x0;
  }
  else {
    puVar7 = (uint *)((int)rect + (uint)bVar10 * -8 + 4);
    input_ptr = (CVector3i *)rect->left;
    puVar8 = puVar7 + (uint)bVar10 * -2 + 1;
    *(uint *)((int)&stack0xffffff84 + (uint)bVar10 * -8) = *puVar7;
    (&local_78)[(uint)bVar10 * -2 + (uint)bVar10 * -2] = (void *)*puVar8;
    (&local_78 + (uint)bVar10 * -2 + (uint)bVar10 * -2)[(uint)bVar10 * -2 + 1] =
         (void *)puVar8[(uint)bVar10 * -2 + 1];
    iVar1 = 0;
    pCVar3 = light_source;
    if (0 < (int)local_78) {
      do {
        pCVar3->left_extent[0] = 999;
        iVar1 = iVar1 + 1;
        pCVar3->right_extent[0] = 0;
        pCVar3 = (CDemonLight *)&(pCVar3->base).base.position;
      } while (iVar1 < (int)local_78);
    }
    iVar1 = local_74 + 1;
    if (iVar1 < this_ptr->display_height) {
      iVar9 = (int)((light_source->base).base.rotation_matrix.m + -1) + local_74 * 4;
      do {
        *(uint *)(iVar9 + 0x14c8) = 999;
        *(uint *)(iVar9 + 0x1888) = 0;
        iVar1 = iVar1 + 1;
        iVar9 = iVar9 + 4;
      } while (iVar1 < this_ptr->display_height);
    }
  }
  local_2c = local_78;
  local_48 = local_78;
  if ((int)local_78 <= local_74) {
    local_58 = (int)input_ptr * 0xc;
    local_4c = (int)input_ptr * 4;
    local_44 = (int)local_78 * 0x500;
    local_50 = g_PrecomputedWorldPositions + (int)local_78 * 0x140;
    local_54 = g_PrecomputedSurfaceNormals + (int)local_78 * 0x140;
    local_48 = (void *)((int)(light_source->base).base.rotation_matrix.m + (int)local_78 * 4 + -0x10
                       );
    do {
      local_30 = (CVector3i *)((int)&local_50->x + local_58);
      local_34 = (CVector3i *)0x3e7;
      local_28 = (float *)((int)&local_54->x + local_58);
      local_20 = (int *)((int)light_source->corona_visibility_buffers + local_4c + local_44);
      local_1c = (uint *)((int)light_source->corona_depth_buffer + local_4c + local_44);
      local_38 = (CVector3i *)0x0;
      local_24 = (int *)((int)light_source->corona_lightmap_indices + local_4c + local_44);
      local_18 = input_ptr;
      if ((int)input_ptr <= local_7c) {
        do {
          if (((((int)local_18 < 1) || ((int)local_2c < 1)) ||
              ((iVar1 = (int)local_18 * this_ptr->scale_factor,
               iVar9 = this_ptr->framebuffer_width + -2, iVar1 - iVar9 != 0 && iVar9 <= iVar1 ||
               (iVar9 = (int)local_2c * this_ptr->scale_factor,
               iVar1 = this_ptr->framebuffer_height + -2, iVar9 - iVar1 != 0 && iVar1 <= iVar9))))
             || ((local_3c == 0 &&
                 (local_28[2] * (float)(light_source->base).base.rotation_matrix.m[2].z +
                  *local_28 * (float)(light_source->base).base.rotation_matrix.m[0].z +
                  local_28[1] * (float)(light_source->base).base.rotation_matrix.m[1].z < 0.0)))) {
LAB_0044e06f:
            *local_20 = 0;
            *local_1c = 0;
LAB_0044e087:
            *local_24 = 0;
          }
          else {
            core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
                      (&light_source->base,local_30,input_ptr);
            local_64.x = local_70;
            *(int *)((int)&local_64 + (uint)bVar10 * -8 + 4) = aiStack_6c[(uint)bVar10 * -2];
            *(int *)((int)&local_64 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                 aiStack_6c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
            if (local_64.z < 1) goto LAB_0044e06f;
            *local_20 = local_64.z - local_40;
            puVar4 = core_dlight_cpp_CDemonLight_projectLightAndMarkVisibility_FUN_00473270
                               (light_source,&local_64,(uchar)local_18,(uchar)local_2c);
            *local_1c = puVar4;
            if (puVar4 == (ushort *)0x0) {
              *local_20 = 0;
              *local_1c = 0;
              goto LAB_0044e087;
            }
            *local_24 = ((local_64.y >> ((byte)light_source->shadow_y_shift & 0x1f) &
                         light_source->teture_coord_mask) <<
                        ((byte)light_source->texture_row_shift & 0x1f)) +
                        (local_64.x >> ((byte)light_source->shadow_x_shift & 0x1f) &
                        light_source->teture_coord_mask);
            if ((int)local_38 < (int)local_18) {
              local_38 = local_18;
            }
            if ((int)local_18 < (int)local_34) {
              local_34 = local_18;
            }
          }
          local_28 = local_28 + 3;
          local_30 = local_30 + 1;
          local_20 = local_20 + 1;
          local_1c = local_1c + 1;
          local_24 = local_24 + 1;
          local_18 = (CVector3i *)((int)&local_18->x + 1);
        } while ((int)local_18 <= local_7c);
      }
      local_44 = local_44 + 0x500;
      local_54 = local_54 + 0x140;
      local_50 = local_50 + 0x140;
      *(CVector3i **)((int)local_48 + 0x14c8) = local_34;
      *(CVector3i **)((int)local_48 + 0x1888) = local_38;
      local_48 = (void *)((int)local_48 + 4);
      local_2c = (void *)((int)local_2c + 1);
    } while ((int)local_2c <= local_74);
  }
  return local_48;
}
