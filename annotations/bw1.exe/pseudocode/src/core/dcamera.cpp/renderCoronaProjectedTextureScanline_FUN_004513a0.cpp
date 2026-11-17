// Name: core_dcamera.cpp_renderCoronaProjectedTextureScanline_FUN_004513a0
// Address: 004513a0
// Address Range: [[004513a0, 004515a2]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_renderCoronaProjectedTextureScanline_FUN_004513a0(int scanline_y,int x_start,int x_end)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_renderCoronaProjectedTextureScanline_FUN_004513a0(int scanline_y,int x_start,int x_end)

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
  uint *puStack_1c;
  char *pcStack_18;
  
  bVar3 = 0;
  pCStack_24 = g_CVector3i_ARRAY_00939bd8 + scanline_y * 0x140 + x_start;
  pcStack_18 = g_CHAR_ARRAY_00b10718 + x_start + scanline_y * 0x140;
  puStack_1c = (uint *)(g_INT_ARRAY_014df1d0 + scanline_y * 0x140 + x_start);
  puStack_20 = g_UINT_PTR_ARRAY_01c4480c[scanline_y << (g_BIT_INTEGER32_01323d00.bytes[0] & 0x1f)] +
               (x_start << (g_BIT_INTEGER32_01323d00.bytes[0] & 0x1f));
  pCVar2 = g_CVector3f_ARRAY_00a1bad8 + scanline_y * 0x140 + x_start;
  for (; x_start < x_end; x_start = x_start + 1) {
    if ((*puStack_20 < *puStack_1c) &&
       (0.0 <= pCVar2->z * (float)g_CMatrix3x3i_01323cd8.m[2].z +
               pCVar2->x * (float)g_CMatrix3x3i_01323cd8.m[0].z +
               pCVar2->y * (float)g_CMatrix3x3i_01323cd8.m[1].z)) {
      core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044e2a0
                (&g_CDemonLight_PTR_01323cd4->base,pCStack_24,&CStack_34);
      iStack_40 = CStack_34.x;
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8) =
           *(uint *)((int)&CStack_34 + (uint)bVar3 * -8 + 4);
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&CStack_34 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      if ((0 < iStack_38) &&
         ((uVar1 = (uint)g_CDemonLight_PTR_01323cd4->shadow_depth_buffer
                         [(iStack_40 >> 0x10) +
                          (iStack_3c >> 0x10) * g_CDemonLight_PTR_01323cd4->shadow_map_width],
          (int)uVar1 < g_INT_00b81c9c && (iStack_38 < (int)(uVar1 + 0x80))))) {
        uStack_28 = g_CDemonLight_PTR_01323cd4->texture_coord_mask &
                    iStack_40 >> ((byte)g_CDemonLight_PTR_01323cd4->shadow_x_shift & 0x1f);
        *pcStack_18 = *pcStack_18 +
                      (char)((int)((g_INT_00b81c9c - uVar1) *
                                  (uint)g_CDemonLight_PTR_01323cd4->precomputed_lighting_textures
                                        [((iStack_3c >>
                                           ((byte)g_CDemonLight_PTR_01323cd4->shadow_y_shift & 0x1f)
                                          & g_CDemonLight_PTR_01323cd4->texture_coord_mask) <<
                                         ((byte)g_CDemonLight_PTR_01323cd4->texture_row_shift & 0x1f
                                         )) + uStack_28]) >> ((byte)g_INT_00b81ca0 & 0x1f));
      }
    }
    pCVar2 = pCVar2 + 1;
    puStack_1c = puStack_1c + 1;
    pCStack_24 = pCStack_24 + 1;
    puStack_20 = puStack_20 + (1 << (g_BIT_INTEGER32_01323d00.bytes[0] & 0x1f));
    pcStack_18 = pcStack_18 + 1;
  }
  return;
}
