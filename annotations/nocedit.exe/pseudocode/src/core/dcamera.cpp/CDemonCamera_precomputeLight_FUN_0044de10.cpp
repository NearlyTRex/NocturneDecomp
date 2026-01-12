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
  BADSPACEBASE *in_ESP;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  byte bVar10;
  void *apvStackY_1858 [1523];
  CVector3i *input_ptr;
  int local_78;
  void *local_74;
  int local_70;
  int iStack_68;
  int local_64;
  CVector3i local_60;
  int local_54;
  CVector3f *local_50;
  CVector3i *local_4c;
  int local_48;
  void *local_44;
  int local_40;
  int local_3c;
  int local_38;
  CVector3i *local_34;
  CVector3i *local_30;
  CVector3i *local_2c;
  void *local_28;
  float *local_24;
  int *local_20;
  int *local_1c;
  uint *local_18;
  CVector3i *pCStack_14;
  
  bVar10 = 0;
  local_3c = 0x80;
  local_38 = 0;
  iVar1 = crt_string_c_strcmp_FUN_005fef20(light_source->filter_name,"movscrn.raw");
  if (iVar1 == 0) {
    local_38 = 1;
    local_3c = 0x100;
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
    local_78 = this_ptr->display_width + -1;
    local_74 = (void *)0x0;
    local_70 = this_ptr->display_height + -1;
    input_ptr = (CVector3i *)0x0;
  }
  else {
    piVar7 = (int *)((int)rect + (uint)bVar10 * -8 + 4);
    input_ptr = (CVector3i *)rect->left;
    piVar8 = piVar7 + (uint)bVar10 * -2 + 1;
    (&local_78)[(uint)bVar10 * -2] = *piVar7;
    (&local_74)[(uint)bVar10 * -2 + (uint)bVar10 * -2] = (void *)*piVar8;
    (&local_74 + (uint)bVar10 * -2 + (uint)bVar10 * -2)[(uint)bVar10 * -2 + 1] =
         (void *)piVar8[(uint)bVar10 * -2 + 1];
    iVar1 = 0;
    pCVar3 = light_source;
    if (0 < (int)local_74) {
      do {
        pCVar3->left_extent[0] = 999;
        iVar1 = iVar1 + 1;
        pCVar3->right_extent[0] = 0;
        pCVar3 = (CDemonLight *)&(pCVar3->base).base.position;
      } while (iVar1 < (int)local_74);
    }
    iVar1 = local_70 + 1;
    if (iVar1 < this_ptr->display_height) {
      iVar9 = (int)((light_source->base).base.rotation_matrix.m + -1) + local_70 * 4;
      do {
        *(uint *)(iVar9 + 0x14c8) = 999;
        *(uint *)(iVar9 + 0x1888) = 0;
        iVar1 = iVar1 + 1;
        iVar9 = iVar9 + 4;
      } while (iVar1 < this_ptr->display_height);
    }
  }
  local_28 = local_74;
  local_44 = local_74;
  if ((int)local_74 <= local_70) {
    local_54 = (int)input_ptr * 0xc;
    local_48 = (int)input_ptr * 4;
    local_40 = (int)local_74 * 0x500;
    local_4c = g_PrecomputedWorldPositions + (int)local_74 * 0x140;
    local_50 = g_PrecomputedSurfaceNormals + (int)local_74 * 0x140;
    local_44 = (void *)((int)(light_source->base).base.rotation_matrix.m + (int)local_74 * 4 + -0x10
                       );
    do {
      local_2c = (CVector3i *)((int)&local_4c->x + local_54);
      local_30 = (CVector3i *)0x3e7;
      local_24 = (float *)((int)&local_50->x + local_54);
      local_1c = (int *)((int)light_source->corona_visibility_buffers + local_48 + local_40);
      local_18 = (uint *)((int)light_source->corona_depth_buffer + local_48 + local_40);
      local_34 = (CVector3i *)0x0;
      local_20 = (int *)((int)light_source->corona_lightmap_indices + local_48 + local_40);
      pCStack_14 = input_ptr;
      if ((int)input_ptr <= local_78) {
        do {
          if (((((int)pCStack_14 < 1) || ((int)local_28 < 1)) ||
              ((iVar1 = (int)pCStack_14 * this_ptr->scale_factor,
               iVar9 = this_ptr->framebuffer_width + -2, iVar1 - iVar9 != 0 && iVar9 <= iVar1 ||
               (iVar9 = (int)local_28 * this_ptr->scale_factor,
               iVar1 = this_ptr->framebuffer_height + -2, iVar9 - iVar1 != 0 && iVar1 <= iVar9))))
             || ((local_38 == 0 &&
                 (local_24[2] * (float)(light_source->base).base.rotation_matrix.m[2].z +
                  *local_24 * (float)(light_source->base).base.rotation_matrix.m[0].z +
                  local_24[1] * (float)(light_source->base).base.rotation_matrix.m[1].z < 0.0)))) {
LAB_0044e06f:
            *local_1c = 0;
            *local_18 = 0;
LAB_0044e087:
            *local_20 = 0;
          }
          else {
            core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
                      (&light_source->base,local_2c,input_ptr);
            local_60.x = iStack_68;
            *(int *)((int)&local_60 + (uint)bVar10 * -8 + 4) = (&local_64)[(uint)bVar10 * -2];
            *(uint *)((int)&local_60 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                 *(uint *)((int)&local_60 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
            if (local_60.z < 1) goto LAB_0044e06f;
            *local_1c = local_60.z - local_3c;
            puVar4 = core_dlight_cpp_CDemonLight_projectLightAndMarkVisibility_FUN_00473270
                               (light_source,&local_60,(uchar)pCStack_14,(uchar)local_28);
            *local_18 = puVar4;
            if (puVar4 == (ushort *)0x0) {
              *local_1c = 0;
              *local_18 = 0;
              goto LAB_0044e087;
            }
            *local_20 = ((local_60.y >> ((byte)light_source->shadow_y_shift & 0x1f) &
                         light_source->teture_coord_mask) <<
                        ((byte)light_source->texture_row_shift & 0x1f)) +
                        (local_60.x >> ((byte)light_source->shadow_x_shift & 0x1f) &
                        light_source->teture_coord_mask);
            if ((int)local_34 < (int)pCStack_14) {
              local_34 = pCStack_14;
            }
            if ((int)pCStack_14 < (int)local_30) {
              local_30 = pCStack_14;
            }
          }
          local_24 = local_24 + 3;
          local_2c = local_2c + 1;
          local_1c = local_1c + 1;
          local_18 = local_18 + 1;
          local_20 = local_20 + 1;
          pCStack_14 = (CVector3i *)((int)&pCStack_14->x + 1);
        } while ((int)pCStack_14 <= local_78);
      }
      local_40 = local_40 + 0x500;
      local_50 = local_50 + 0x140;
      local_4c = local_4c + 0x140;
      *(CVector3i **)((int)local_44 + 0x14c8) = local_30;
      *(CVector3i **)((int)local_44 + 0x1888) = local_34;
      local_44 = (void *)((int)local_44 + 4);
      local_28 = (void *)((int)local_28 + 1);
    } while ((int)local_28 <= local_70);
  }
  return local_44;
}
