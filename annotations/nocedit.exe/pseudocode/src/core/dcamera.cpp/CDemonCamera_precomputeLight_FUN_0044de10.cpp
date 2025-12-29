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
  int *piVar3;
  CDemonLight *pCVar4;
  ushort *puVar5;
  uint uVar6;
  int *piVar7;
  CVector3i *unaff_EBX;
  BADSPACEBASE *in_ESP;
  uint *unaff_ESI;
  uint uVar8;
  int iVar9;
  byte bVar10;
  CVector3i *apCStackY_1850 [1522];
  CVector3i *input_ptr;
  int local_70;
  CVector3i *pCStack_6c;
  int iStack_68;
  uint local_60;
  uint local_5c [2];
  CVector3i local_54;
  CVector3f *local_48;
  CVector3i *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  uint local_2c;
  uint local_28;
  CVector3i *local_24;
  CVector3i *local_20;
  CVector3i *local_1c;
  int *local_18;
  uint *puStack_14;
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
  uVar8 = g_LightBufferPoolIndex + 1;
  pacVar2 = g_LightBufferPool + g_LightBufferPoolIndex;
  if (0x18 < uVar8) {
    pacVar2 = (char (*) [307200])0x0;
  }
  g_LightBufferPoolIndex = uVar8;
  light_source->corona_visibility_buffers = (int *)pacVar2;
  uVar6 = g_LightBufferPoolIndex + 1;
  pacVar2 = g_LightBufferPool + uVar8;
  if (0x18 < uVar6) {
    pacVar2 = (char (*) [307200])0x0;
  }
  g_LightBufferPoolIndex = uVar6;
  light_source->corona_depth_buffer = (int *)pacVar2;
  g_LightBufferPoolIndex = g_LightBufferPoolIndex + 1;
  pacVar2 = g_LightBufferPool + uVar6;
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
    local_70 = this_ptr->display_width + -1;
    pCStack_6c = (CVector3i *)0x0;
    iStack_68 = this_ptr->display_height + -1;
    input_ptr = (CVector3i *)0x0;
  }
  else {
    piVar7 = (int *)((int)rect + (uint)bVar10 * -8 + 4);
    input_ptr = (CVector3i *)rect->left;
    piVar3 = piVar7 + (uint)bVar10 * -2 + 1;
    (&local_70)[(uint)bVar10 * -2] = *piVar7;
    (&pCStack_6c)[(uint)bVar10 * -2 + (uint)bVar10 * -2] = (CVector3i *)*piVar3;
    (&pCStack_6c + (uint)bVar10 * -2 + (uint)bVar10 * -2)[(uint)bVar10 * -2 + 1] =
         (CVector3i *)piVar3[(uint)bVar10 * -2 + 1];
    iVar1 = 0;
    pCVar4 = light_source;
    if (0 < (int)pCStack_6c) {
      do {
        pCVar4->left_extent[0] = 999;
        iVar1 = iVar1 + 1;
        pCVar4->right_extent[0] = 0;
        pCVar4 = (CDemonLight *)&(pCVar4->base).base.position;
      } while (iVar1 < (int)pCStack_6c);
    }
    iVar1 = iStack_68 + 1;
    if (iVar1 < this_ptr->display_height) {
      iVar9 = (int)((light_source->base).base.rotation_matrix.m + -1) + iStack_68 * 4;
      do {
        *(uint *)(iVar9 + 0x14c8) = 999;
        *(uint *)(iVar9 + 0x1888) = 0;
        iVar1 = iVar1 + 1;
        iVar9 = iVar9 + 4;
      } while (iVar1 < this_ptr->display_height);
    }
  }
  local_20 = pCStack_6c;
  local_3c = (int)pCStack_6c;
  if ((int)pCStack_6c <= iStack_68) {
    local_54.z = (int)input_ptr * 0xc;
    local_40 = (int)input_ptr * 4;
    local_38 = (int)pCStack_6c * 0x500;
    local_44 = g_PrecomputedWorldPositions + (int)pCStack_6c * 0x140;
    local_48 = g_PrecomputedSurfaceNormals + (int)pCStack_6c * 0x140;
    local_3c = (int)(light_source->base).base.rotation_matrix.m + (int)pCStack_6c * 4 + -0x10;
    do {
      local_24 = (CVector3i *)((int)&local_44->x + local_54.z);
      local_28 = 999;
      local_1c = (CVector3i *)((int)&local_48->x + local_54.z);
      puStack_14 = (uint *)
                   ((int)light_source->corona_visibility_buffers + local_40 + local_38);
      piVar7 = (int *)((int)light_source->corona_depth_buffer + local_40 + local_38);
      local_2c = 0;
      local_18 = (int *)((int)light_source->corona_lightmap_indices + local_40 + local_38);
      pCVar11 = input_ptr;
      if ((int)input_ptr <= local_70) {
        do {
          if (((((int)pCVar11 < 1) || ((int)local_20 < 1)) ||
              ((iVar1 = (int)pCVar11 * this_ptr->scale_factor,
               iVar9 = this_ptr->framebuffer_width + -2, iVar1 - iVar9 != 0 && iVar9 <= iVar1 ||
               (iVar9 = (int)local_20 * this_ptr->scale_factor,
               iVar1 = this_ptr->framebuffer_height + -2, iVar9 - iVar1 != 0 && iVar1 <= iVar9))))
             || ((local_30 == 0 &&
                 ((float)local_1c->z * (float)(light_source->base).base.rotation_matrix.m[2].z +
                  (float)local_1c->x * (float)(light_source->base).base.rotation_matrix.m[0].z +
                  (float)local_1c->y * (float)(light_source->base).base.rotation_matrix.m[1].z < 0.0
                 )))) {
LAB_0044e06f:
            *puStack_14 = 0;
            *piVar7 = 0;
            piVar3 = local_18;
LAB_0044e087:
            *piVar3 = 0;
          }
          else {
            core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
                      (&light_source->base,local_24,input_ptr);
            local_5c[1] = local_60;
            *(uint *)((int)&local_54 + (uint)bVar10 * -8) = local_5c[(uint)bVar10 * -2];
            *(uint *)((int)&local_54 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 4) =
                 local_5c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
            if (local_54.z < 1) goto LAB_0044e06f;
            *piVar7 = local_54.z - local_30;
            input_ptr = local_1c;
            puVar5 = core_dlight_cpp_CDemonLight_projectLightAndMarkVisibility_FUN_00473270
                               (light_source,&local_54,(uchar)unaff_ESI,(uchar)local_1c);
            *unaff_ESI = puVar5;
            if (puVar5 == (ushort *)0x0) {
              pCVar11->x = 0;
              *unaff_ESI = 0;
              piVar3 = piVar7;
              goto LAB_0044e087;
            }
            *piVar7 = ((local_54.z >> ((byte)light_source->shadow_y_shift & 0x1f) &
                       light_source->teture_coord_mask) <<
                      ((byte)light_source->texture_row_shift & 0x1f)) +
                      (local_54.y >> ((byte)light_source->shadow_x_shift & 0x1f) &
                      light_source->teture_coord_mask);
            if ((int)local_24 < (int)unaff_EBX) {
              local_24 = unaff_EBX;
            }
            if ((int)unaff_EBX < (int)local_20) {
              local_20 = unaff_EBX;
            }
          }
          local_1c = local_1c + 1;
          local_24 = local_24 + 1;
          puStack_14 = puStack_14 + 1;
          piVar7 = piVar7 + 1;
          local_18 = local_18 + 1;
          pCVar11 = (CVector3i *)((int)&pCVar11->x + 1);
        } while ((int)pCVar11 <= local_70);
      }
      local_38 = local_38 + 0x500;
      local_48 = local_48 + 0x140;
      local_44 = local_44 + 0x140;
      *(uint *)(local_3c + 0x14c8) = local_28;
      *(uint *)(local_3c + 0x1888) = local_2c;
      local_3c = local_3c + 4;
      local_20 = (CVector3i *)((int)&local_20->x + 1);
    } while ((int)local_20 <= iStack_68);
  }
  return (CVector3i *)local_3c;
}
