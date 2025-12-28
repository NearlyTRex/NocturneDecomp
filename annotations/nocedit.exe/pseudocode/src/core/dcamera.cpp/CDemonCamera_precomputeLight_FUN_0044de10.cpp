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
  CVector3i *unaff_ESI;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  uint *unaff_EDI;
  byte bVar10;
  CVector3i *apCStackY_1854 [1523];
  CVector3i *input_ptr;
  int local_74;
  CVector3i *local_70;
  int iStack_6c;
  uint local_64;
  uint local_60 [2];
  CVector3i local_58;
  CVector3f *local_4c;
  CVector3i *local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  CVector3i *local_28;
  CVector3i *local_24;
  CVector3i *local_20;
  int *local_1c;
  uint *local_18;
  int *piStack_14;
  CVector3i *pCVar11;
  
  bVar10 = 0;
  local_40 = 0x80;
  local_3c = 0;
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
    local_74 = this_ptr->display_width + -1;
    local_70 = (CVector3i *)0x0;
    iStack_6c = this_ptr->display_height + -1;
    input_ptr = (CVector3i *)0x0;
  }
  else {
    piVar7 = (int *)((int)rect + (uint)bVar10 * -8 + 4);
    input_ptr = (CVector3i *)rect->left;
    piVar8 = piVar7 + (uint)bVar10 * -2 + 1;
    (&local_74)[(uint)bVar10 * -2] = *piVar7;
    (&local_70)[(uint)bVar10 * -2 + (uint)bVar10 * -2] = (CVector3i *)*piVar8;
    (&local_70 + (uint)bVar10 * -2 + (uint)bVar10 * -2)[(uint)bVar10 * -2 + 1] =
         (CVector3i *)piVar8[(uint)bVar10 * -2 + 1];
    iVar1 = 0;
    pCVar3 = light_source;
    if (0 < (int)local_70) {
      do {
        pCVar3->left_extent[0] = 999;
        iVar1 = iVar1 + 1;
        pCVar3->right_extent[0] = 0;
        pCVar3 = (CDemonLight *)&(pCVar3->base).base.position;
      } while (iVar1 < (int)local_70);
    }
    iVar1 = iStack_6c + 1;
    if (iVar1 < this_ptr->display_height) {
      iVar9 = (int)((light_source->base).base.rotation_matrix.m + -1) + iStack_6c * 4;
      do {
        *(uint *)(iVar9 + 0x14c8) = 999;
        *(uint *)(iVar9 + 0x1888) = 0;
        iVar1 = iVar1 + 1;
        iVar9 = iVar9 + 4;
      } while (iVar1 < this_ptr->display_height);
    }
  }
  local_24 = local_70;
  local_40 = (int)local_70;
  if ((int)local_70 <= iStack_6c) {
    local_58.z = (int)input_ptr * 0xc;
    local_44 = (int)input_ptr * 4;
    local_3c = (int)local_70 * 0x500;
    local_48 = g_PrecomputedWorldPositions + (int)local_70 * 0x140;
    local_4c = g_PrecomputedSurfaceNormals + (int)local_70 * 0x140;
    local_40 = (int)(light_source->base).base.rotation_matrix.m + (int)local_70 * 4 + -0x10;
    do {
      local_28 = (CVector3i *)((int)&local_48->x + local_58.z);
      local_2c = 999;
      local_20 = (CVector3i *)((int)&local_4c->x + local_58.z);
      local_18 = (uint *)((int)light_source->corona_visibility_buffers + local_44 + local_3c);
      piStack_14 = (int *)((int)light_source->corona_depth_buffer + local_44 + local_3c);
      local_30 = 0;
      local_1c = (int *)((int)light_source->corona_lightmap_indices + local_44 + local_3c);
      pCVar11 = input_ptr;
      if ((int)input_ptr <= local_74) {
        do {
          if (((((int)pCVar11 < 1) || ((int)local_24 < 1)) ||
              ((iVar1 = (int)pCVar11 * this_ptr->scale_factor,
               iVar9 = this_ptr->framebuffer_width + -2, iVar1 - iVar9 != 0 && iVar9 <= iVar1 ||
               (iVar9 = (int)local_24 * this_ptr->scale_factor,
               iVar1 = this_ptr->framebuffer_height + -2, iVar9 - iVar1 != 0 && iVar1 <= iVar9))))
             || ((local_34 == 0 &&
                 ((float)local_20->z * (float)(light_source->base).base.rotation_matrix.m[2].z +
                  (float)local_20->x * (float)(light_source->base).base.rotation_matrix.m[0].z +
                  (float)local_20->y * (float)(light_source->base).base.rotation_matrix.m[1].z < 0.0
                 )))) {
LAB_0044e06f:
            *local_18 = 0;
            *piStack_14 = 0;
            piVar7 = local_1c;
LAB_0044e087:
            *piVar7 = 0;
          }
          else {
            core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
                      (&light_source->base,local_28,input_ptr);
            local_60[1] = local_64;
            *(uint *)((int)&local_58 + (uint)bVar10 * -8) = local_60[(uint)bVar10 * -2];
            *(uint *)((int)&local_58 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 4) =
                 local_60[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
            if (local_58.z < 1) goto LAB_0044e06f;
            *piStack_14 = local_58.z - local_34;
            input_ptr = local_20;
            puVar4 = core_dlight_cpp_CDemonLight_projectLightAndMarkVisibility_FUN_00473270
                               (light_source,&local_58,(uchar)unaff_EDI,(uchar)local_20);
            *unaff_EDI = puVar4;
            if (puVar4 == (ushort *)0x0) {
              pCVar11->x = 0;
              *unaff_EDI = 0;
              piVar7 = piStack_14;
              goto LAB_0044e087;
            }
            *piStack_14 = ((local_58.z >> ((byte)light_source->shadow_y_shift & 0x1f) &
                           light_source->teture_coord_mask) <<
                          ((byte)light_source->texture_row_shift & 0x1f)) +
                          (local_58.y >> ((byte)light_source->shadow_x_shift & 0x1f) &
                          light_source->teture_coord_mask);
            if ((int)local_28 < (int)unaff_ESI) {
              local_28 = unaff_ESI;
            }
            if ((int)unaff_ESI < (int)local_24) {
              local_24 = unaff_ESI;
            }
          }
          local_20 = local_20 + 1;
          local_28 = local_28 + 1;
          local_18 = local_18 + 1;
          piStack_14 = piStack_14 + 1;
          local_1c = local_1c + 1;
          pCVar11 = (CVector3i *)((int)&pCVar11->x + 1);
        } while ((int)pCVar11 <= local_74);
      }
      local_3c = local_3c + 0x500;
      local_4c = local_4c + 0x140;
      local_48 = local_48 + 0x140;
      *(uint *)(local_40 + 0x14c8) = local_2c;
      *(uint *)(local_40 + 0x1888) = local_30;
      local_40 = local_40 + 4;
      local_24 = (CVector3i *)((int)&local_24->x + 1);
    } while ((int)local_24 <= iStack_6c);
  }
  return (CVector3i *)local_40;
}
