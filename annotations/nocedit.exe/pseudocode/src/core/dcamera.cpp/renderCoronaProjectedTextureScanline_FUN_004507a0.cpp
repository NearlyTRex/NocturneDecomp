// Name: core_dcamera.cpp_renderCoronaProjectedTextureScanline_FUN_004507a0
// Address: 004507a0
// Address Range: [[004507a0, 004509a2]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_renderCoronaProjectedTextureScanline_FUN_004507a0(int scanline_y, int x_start, int x_end)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_renderCoronaProjectedTextureScanline_FUN_004507a0
          (int scanline_y,int x_start,int x_end)

{
  uint uVar1;
  CVector3f *pCVar2;
  BADSPACEBASE *in_ESP;
  byte bVar3;
  uint auStackY_1024 [1016];
  CVector3i *in_stack_ffffffc4;
  int local_38;
  int local_34;
  CVector3i *pCStack_2c;
  uint local_28 [2];
  CVector3i *local_20;
  uint *local_1c;
  int *local_18;
  char *pcStack_14;
  
  bVar3 = 0;
  local_20 = g_TempWorldPositionRow + scanline_y * 0x140 + x_start;
  pcStack_14 = g_CoronaBlurOutputBuffer[scanline_y] + x_start;
  local_18 = g_CoronaDepthBuffer[scanline_y] + x_start;
  local_1c = g_ZBufferScanlineArray[scanline_y << ((byte)g_CameraDownscaleIterations & 0x1f)] +
             (x_start << ((byte)g_CameraDownscaleIterations & 0x1f));
  pCVar2 = g_PrecomputedSurfaceNormals + scanline_y * 0x140 + x_start;
  for (; x_start < x_end; x_start = x_start + 1) {
    if ((*local_1c < (uint)*local_18) &&
       (0.0 <= pCVar2->z * (float)g_CoronaCameraRotationMatrix.m[2].z +
               pCVar2->x * (float)g_CoronaCameraRotationMatrix.m[0].z +
               pCVar2->y * (float)g_CoronaCameraRotationMatrix.m[1].z)) {
      core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
                (&g_CurrentLightForCorona->base,local_20,in_stack_ffffffc4);
      in_stack_ffffffc4 = pCStack_2c;
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar3 * -8) = local_28[(uint)bVar3 * -2];
      *(uint *)((int)&stack0xffffffcc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           local_28[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      if ((0 < local_34) &&
         ((uVar1 = (uint)g_CurrentLightForCorona->shadow_depth_buffer
                         [((int)in_stack_ffffffc4 >> 0x10) +
                          (local_38 >> 0x10) * g_CurrentLightForCorona->shadow_map_width],
          (int)uVar1 < g_CoronaMaxDepth && (local_34 < (int)(uVar1 + 0x80))))) {
        local_28[1] = g_CurrentLightForCorona->teture_coord_mask &
                      (int)in_stack_ffffffc4 >>
                      ((byte)g_CurrentLightForCorona->shadow_x_shift & 0x1f);
        *pcStack_14 = *pcStack_14 +
                      (char)((int)((g_CoronaMaxDepth - uVar1) *
                                  (uint)g_CurrentLightForCorona->precomputed_lighting_textures
                                        [((local_38 >>
                                           ((byte)g_CurrentLightForCorona->shadow_y_shift & 0x1f) &
                                          g_CurrentLightForCorona->teture_coord_mask) <<
                                         ((byte)g_CurrentLightForCorona->texture_row_shift & 0x1f))
                                         + local_28[1]]) >> ((byte)g_CoronaDepthShift & 0x1f));
      }
    }
    pCVar2 = pCVar2 + 1;
    local_18 = local_18 + 1;
    local_20 = local_20 + 1;
    local_1c = local_1c + (1 << ((byte)g_CameraDownscaleIterations & 0x1f));
    pcStack_14 = pcStack_14 + 1;
  }
  return;
}
