// Name: core_dcamera.cpp_renderCoronaProjectedTextureScanline_FUN_0044d4e0
// Address: 0044d4e0
// Address Range: [[0044d4e0, 0044d6e2]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_renderCoronaProjectedTextureScanline_FUN_0044d4e0(int scanline_y,int x_start,int x_end)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_renderCoronaProjectedTextureScanline_FUN_0044d4e0(int scanline_y,int x_start,int x_end)

{
  uint uVar1;
  CVector3f *pCVar2;
  byte bVar3;
  int aiStackY_1028 [1016];
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  CVector3i CStack_34;
  uint uStack_28;
  CVector3i *pCStack_24;
  uint *puStack_20;
  int *piStack_1c;
  char *pcStack_18;
  
  bVar3 = 0;
  pCStack_24 = g_TempWorldPositions[scanline_y] + x_start;
  pcStack_18 = g_CoronaBlurOutputBuffer[scanline_y] + x_start;
  piStack_1c = g_CoronaDepthBuffer[scanline_y] + x_start;
  puStack_20 = g_ZBufferScanlineArray[scanline_y << (g_CameraDownscaleIterations.bytes[0] & 0x1f)] +
               (x_start << (g_CameraDownscaleIterations.bytes[0] & 0x1f));
  pCVar2 = g_PrecomputedSurfaceNormals[scanline_y] + x_start;
  for (; x_start < x_end; x_start = x_start + 1) {
    if ((*puStack_20 < (uint)*piStack_1c) &&
       (0.0 <= pCVar2->z * (float)g_CoronaCameraRotationMatrix.m[2].z +
               pCVar2->x * (float)g_CoronaCameraRotationMatrix.m[0].z +
               pCVar2->y * (float)g_CoronaCameraRotationMatrix.m[1].z)) {
      core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044a3e0
                (&g_CurrentLightForCorona->base,pCStack_24,&CStack_34);
      iStack_40 = CStack_34.x;
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8) =
           *(uint *)((int)&CStack_34 + (uint)bVar3 * -8 + 4);
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&CStack_34 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      if ((0 < iStack_38) &&
         ((uVar1 = (uint)g_CurrentLightForCorona->shadow_depth_buffer
                         [(iStack_40 >> 0x10) +
                          (iStack_3c >> 0x10) * g_CurrentLightForCorona->shadow_map_width],
          (int)uVar1 < g_CoronaMaxDepth && (iStack_38 < (int)(uVar1 + 0x80))))) {
        uStack_28 = g_CurrentLightForCorona->texture_coord_mask &
                    iStack_40 >> ((byte)g_CurrentLightForCorona->shadow_x_shift & 0x1f);
        *pcStack_18 = *pcStack_18 +
                      (char)((int)((g_CoronaMaxDepth - uVar1) *
                                  (uint)g_CurrentLightForCorona->precomputed_lighting_textures
                                        [((iStack_3c >>
                                           ((byte)g_CurrentLightForCorona->shadow_y_shift & 0x1f) &
                                          g_CurrentLightForCorona->texture_coord_mask) <<
                                         ((byte)g_CurrentLightForCorona->texture_row_shift & 0x1f))
                                         + uStack_28]) >> ((byte)g_CoronaDepthShift & 0x1f));
      }
    }
    pCVar2 = pCVar2 + 1;
    piStack_1c = piStack_1c + 1;
    pCStack_24 = pCStack_24 + 1;
    puStack_20 = puStack_20 + (1 << (g_CameraDownscaleIterations.bytes[0] & 0x1f));
    pcStack_18 = pcStack_18 + 1;
  }
  return;
}
