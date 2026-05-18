// Name: core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0
// Address: 00450ac0
// MANUAL RECONSTRUCTION
// Address Range: [[00450ac0, 00450e27] [0060c76d, 0060c78c]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0(CDemonCamera *this_ptr,CDemonLight *light_source)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0(CDemonCamera *this_ptr,CDemonLight *light_source)

{
  uint uVar2;
  int iVar1;
  uint uVar3;
  int iVar5;
  CVector3f *pCVar5;
  bool bVar9;
  CVector3i local_60;
  char (*local_40) [320];
  int (*local_3c) [320];
  CVector3f *local_38;
  CVector3i *local_34;
  int local_30;
  int *local_24;
  uint *local_20;
  CVector3i *local_1c;
  int local_18;
  char *local_14;
  float fVar1;

  g_CurrentLightForCorona = light_source;
  memcpy(&g_CoronaCameraRotationMatrix, &(light_source->base).base.rotation_matrix,
         sizeof(g_CoronaCameraRotationMatrix));
  for (iVar1 = 0; iVar1 < 256; iVar1 = iVar1 + 1) {
    uVar2 = rand();
    g_DitherPatternTable[iVar1] = uVar2 & 0xff;
  }
  iVar1 = 0;
  if (0 < this_ptr->display_height) {
    do {
      g_CoronaLeftExtent[iVar1] = this_ptr->display_width;
      g_CoronaRightExtent[iVar1] = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->display_height);
  }
  core_dlight_cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0(light_source);
  fVar1 = (light_source->base).max_distance * (float)256;
  local_30 = 0;
  g_CoronaDepthShift = (int)ROUND(ROUND((float)log((double)fVar1) / (float)log(2.0)));
  g_CoronaMaxDepth = (int)ROUND(ROUND(fVar1));
  g_CoronaDepthShift = g_CoronaDepthShift + -1;
  if (0 < this_ptr->display_height) {
    local_38 = g_PrecomputedSurfaceNormals[0];
    local_3c = g_CoronaDepthBuffer;
    local_40 = g_CoronaBlurOutputBuffer;
    local_34 = g_TempWorldPositions[0];
    do {
      if (this_ptr->display_width != g_CoronaLeftExtent[local_30]) {
        local_18 = g_CoronaLeftExtent[local_30];
        iVar1 = g_CoronaRightExtent[local_30];
        local_1c = local_34 + local_18;
        local_14 = *local_40 + local_18;
        local_24 = *local_3c + local_18;
        local_20 = g_ZBufferScanlineArray[local_30 << (g_CameraDownscaleIterations.bytes[0] & 0x1f)]
                   + (local_18 << (g_CameraDownscaleIterations.bytes[0] & 0x1f));
        pCVar5 = local_38 + local_18;
        iVar5 = local_18 - iVar1;
        while (bVar9 = SBORROW4(local_18,iVar1), bVar9 != iVar5 < 0) {
          if ((((*local_20 < (uint)*local_24) &&
               (0.0 <= pCVar5->z * (float)g_CoronaCameraRotationMatrix.m[2].z +
                       pCVar5->x * (float)g_CoronaCameraRotationMatrix.m[0].z +
                       pCVar5->y * (float)g_CoronaCameraRotationMatrix.m[1].z)) &&
              (core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
                         (&g_CurrentLightForCorona->base,local_1c,&local_60), 0 < local_60.z)) &&
             ((uVar3 = (uint)g_CurrentLightForCorona->shadow_depth_buffer
                             [(local_60.y >> 0x10) * g_CurrentLightForCorona->shadow_map_width +
                              (local_60.x >> 0x10)], (int)uVar3 < g_CoronaMaxDepth &&
              (local_60.z < (int)(uVar3 + 0x80))))) {
            *local_14 = *local_14 +
                        (char)((int)((g_CoronaMaxDepth - uVar3) *
                                    (uint)g_CurrentLightForCorona->precomputed_lighting_textures
                                          [((g_CurrentLightForCorona->texture_coord_mask &
                                            local_60.y >>
                                            ((byte)g_CurrentLightForCorona->shadow_y_shift & 0x1f))
                                           << ((byte)g_CurrentLightForCorona->texture_row_shift &
                                              0x1f)) +
                                           (local_60.x >>
                                            ((byte)g_CurrentLightForCorona->shadow_x_shift & 0x1f) &
                                           g_CurrentLightForCorona->texture_coord_mask)]) >>
                              ((byte)g_CoronaDepthShift & 0x1f));
          }
          pCVar5 = pCVar5 + 1;
          local_24 = local_24 + 1;
          local_1c = local_1c + 1;
          local_18 = local_18 + 1;
          local_20 = local_20 + (1 << (g_CameraDownscaleIterations.bytes[0] & 0x1f));
          local_14 = local_14 + 1;
          iVar5 = local_18 - iVar1;
        }
      }
      local_38 = local_38 + 0x140;
      local_3c = local_3c + 1;
      local_40 = local_40 + 1;
      local_34 = local_34 + 0x140;
      local_30 = local_30 + 1;
    } while (local_30 < this_ptr->display_height);
  }
  g_BackdropSaveActive = 1;
  return;
}
