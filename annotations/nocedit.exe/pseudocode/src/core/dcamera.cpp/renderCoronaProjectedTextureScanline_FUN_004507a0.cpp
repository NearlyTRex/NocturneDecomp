// Name: core_dcamera.cpp_renderCoronaProjectedTextureScanline_FUN_004507a0
// Address: 004507a0
// Address Range: [[004507a0, 004509a2]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_renderCoronaProjectedTextureScanline_FUN_004507a0(int scanline_y, int x_start, int x_end)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl
core_dcamera_cpp_renderCoronaProjectedTextureScanline_FUN_004507a0
          (int scanline_y,int x_start,int x_end)

{
  uint uVar1;
  CVector3f *pCVar2;
  BADSPACEBASE *in_ESP;
  byte bVar3;
  int aiStackY_1028 [4];
  CVector3i *apCStackY_1018 [1012];
  CVector3i *in_stack_ffffffc0;
  int local_3c [3];
  CVector3i *pCStack_30;
  CVector3i *apCStack_2c [3];
  uint *local_20;
  int *local_1c;
  char *local_18;
  char *pcStack_14;
  
  bVar3 = 0;
  apCStack_2c[2] = g_TempWorldPositionRow + scanline_y * 0x140 + x_start;
  local_18 = g_CoronaBlurOutputBuffer[scanline_y] + x_start;
  local_1c = g_CoronaDepthBuffer[scanline_y] + x_start;
  local_20 = g_ZBufferScanlineArray[scanline_y << ((byte)g_CameraDownscaleIterations & 0x1f)] +
             (x_start << ((byte)g_CameraDownscaleIterations & 0x1f));
  pCVar2 = g_PrecomputedSurfaceNormals + scanline_y * 0x140 + x_start;
  for (; x_start < x_end; x_start = x_start + 1) {
    if ((*local_20 < (uint)*local_1c) &&
       (0.0 <= pCVar2->z * (float)g_CoronaCameraRotationMatrix.m[2].z +
               pCVar2->x * (float)g_CoronaCameraRotationMatrix.m[0].z +
               pCVar2->y * (float)g_CoronaCameraRotationMatrix.m[1].z)) {
      core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
                (&g_CurrentLightForCorona->base,apCStack_2c[2],in_stack_ffffffc0);
      in_stack_ffffffc0 = pCStack_30;
      local_3c[(uint)bVar3 * -2] = (int)apCStack_2c[(uint)bVar3 * -2];
      local_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
           (int)apCStack_2c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      if ((0 < local_3c[2]) &&
         ((uVar1 = (uint)g_CurrentLightForCorona->shadow_depth_buffer
                         [(local_3c[0] >> 0x10) +
                          (local_3c[1] >> 0x10) * g_CurrentLightForCorona->shadow_map_width],
          (int)uVar1 < g_CoronaMaxDepth && (local_3c[2] < (int)(uVar1 + 0x80))))) {
        apCStack_2c[2] =
             (CVector3i *)
             (g_CurrentLightForCorona->teture_coord_mask &
             local_3c[0] >> ((byte)g_CurrentLightForCorona->shadow_x_shift & 0x1f));
        *pcStack_14 = *pcStack_14 +
                      (char)((int)((g_CoronaMaxDepth - uVar1) *
                                  (uint)g_CurrentLightForCorona->precomputed_lighting_textures
                                        [(int)&apCStack_2c[2]->x +
                                         ((local_3c[1] >>
                                           ((byte)g_CurrentLightForCorona->shadow_y_shift & 0x1f) &
                                          g_CurrentLightForCorona->teture_coord_mask) <<
                                         ((byte)g_CurrentLightForCorona->texture_row_shift & 0x1f))]
                                  ) >> ((byte)g_CoronaDepthShift & 0x1f));
      }
    }
    pCVar2 = pCVar2 + 1;
    local_1c = local_1c + 1;
    apCStack_2c[2] = apCStack_2c[2] + 1;
    local_20 = local_20 + (1 << ((byte)g_CameraDownscaleIterations & 0x1f));
    local_18 = local_18 + 1;
  }
  return;
}
