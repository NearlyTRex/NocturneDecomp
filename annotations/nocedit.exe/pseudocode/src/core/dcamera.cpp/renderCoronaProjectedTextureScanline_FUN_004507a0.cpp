// Name: core_dcamera.cpp_renderCoronaProjectedTextureScanline_FUN_004507a0
// Address: 004507a0
// Address Range: [[004507a0, 004509a2]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_renderCoronaProjectedTextureScanline_FUN_004507a0(int scanline_y,int x_start,int x_end)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_renderCoronaProjectedTextureScanline_FUN_004507a0(int scanline_y,int x_start,int x_end)

{
  int iVar1;
  char *pcVar2;
  uint *puVar3;
  uint uVar1;
  CVector3f *pCVar2;
  int *piVar4;
  CVector3i *input_ptr;
  byte bVar3;
  int aiStackY_1028 [1016];
  int local_40;
  int local_3c;
  int local_38;
  CVector3i local_34;
  uint local_28;
  CVector3i *local_24;
  uint *local_20;
  int *local_1c;
  char *local_18;
  
  bVar3 = 0;
  input_ptr = g_TempWorldPositions[scanline_y] + x_start;
  pcVar2 = g_CoronaBlurOutputBuffer[scanline_y] + x_start;
  piVar4 = g_CoronaDepthBuffer[scanline_y] + x_start;
  puVar3 = g_ZBufferScanlineArray[scanline_y << (g_CameraDownscaleIterations.bytes[0] & 0x1f)] +
           (x_start << (g_CameraDownscaleIterations.bytes[0] & 0x1f));
  pCVar2 = g_PrecomputedSurfaceNormals[scanline_y] + x_start;
  for (; x_start < x_end; x_start = x_start + 1) {
    if ((*puVar3 < (uint)*piVar4) &&
       (0.0 <= pCVar2->z * (float)g_CoronaCameraRotationMatrix.m[2].z +
               pCVar2->x * (float)g_CoronaCameraRotationMatrix.m[0].z +
               pCVar2->y * (float)g_CoronaCameraRotationMatrix.m[1].z)) {
      core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
                (&g_CurrentLightForCorona->base,input_ptr,&local_34);
      iVar1 = local_34.x;
      (&local_3c)[(uint)bVar3 * -2] = *(int *)((int)&local_34 + (uint)bVar3 * -8 + 4);
      (&local_38)[(uint)bVar3 * -2 + (uint)bVar3 * -2] =
           *(int *)((int)&local_34 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      if ((0 < local_38) &&
         ((uVar1 = (uint)g_CurrentLightForCorona->shadow_depth_buffer
                         [(iVar1 >> 0x10) +
                          (local_3c >> 0x10) * g_CurrentLightForCorona->shadow_map_width],
          (int)uVar1 < g_CoronaMaxDepth && (local_38 < (int)(uVar1 + 0x80))))) {
        *pcVar2 = *pcVar2 + (char)((int)((g_CoronaMaxDepth - uVar1) *
                                        (uint)g_CurrentLightForCorona->precomputed_lighting_textures
                                              [((local_3c >>
                                                 ((byte)g_CurrentLightForCorona->shadow_y_shift &
                                                 0x1f) & g_CurrentLightForCorona->texture_coord_mask
                                                ) << ((byte)g_CurrentLightForCorona->
                                                            texture_row_shift & 0x1f)) +
                                               (g_CurrentLightForCorona->texture_coord_mask &
                                               iVar1 >> ((byte)g_CurrentLightForCorona->
                                                               shadow_x_shift & 0x1f))]) >>
                                  ((byte)g_CoronaDepthShift & 0x1f));
      }
    }
    pCVar2 = pCVar2 + 1;
    piVar4 = piVar4 + 1;
    input_ptr = input_ptr + 1;
    puVar3 = puVar3 + (1 << (g_CameraDownscaleIterations.bytes[0] & 0x1f));
    pcVar2 = pcVar2 + 1;
  }
  return;
}
