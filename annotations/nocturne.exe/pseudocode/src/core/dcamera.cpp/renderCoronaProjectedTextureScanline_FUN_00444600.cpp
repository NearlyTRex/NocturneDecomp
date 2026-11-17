// Name: core_dcamera.cpp_renderCoronaProjectedTextureScanline_FUN_00444600
// Address: 00444600
// Address Range: [[00444600, 00444802]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_renderCoronaProjectedTextureScanline_FUN_00444600(int scanline_y,int x_start,int x_end)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_renderCoronaProjectedTextureScanline_FUN_00444600(int scanline_y,int x_start,int x_end)

{
  uint uVar1;
  CVector3f *pCVar2;
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
  local_24 = g_CVector3i_ARRAY_ARRAY_008d9278[scanline_y] + x_start;
  local_18 = g_CHAR_ARRAY_ARRAY_00a9d078[scanline_y] + x_start;
  local_1c = g_INT_ARRAY_ARRAY_0146ba10[scanline_y] + x_start;
  local_20 = g_ZBufferScanlineArray[scanline_y << (g_BIT_INTEGER32_012b0660.bytes[0] & 0x1f)] +
             (x_start << (g_BIT_INTEGER32_012b0660.bytes[0] & 0x1f));
  pCVar2 = g_CVector3f_ARRAY_009bb178 + scanline_y * 0x140 + x_start;
  for (; x_start < x_end; x_start = x_start + 1) {
    if ((*local_20 < (uint)*local_1c) &&
       (0.0 <= pCVar2->z * (float)g_CMatrix3x3i_012b0638.m[2].z +
               pCVar2->x * (float)g_CMatrix3x3i_012b0638.m[0].z +
               pCVar2->y * (float)g_CMatrix3x3i_012b0638.m[1].z)) {
      core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610
                (&g_CDemonLight_PTR_012b0634->base,local_24,&local_34);
      local_40 = local_34.x;
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8) =
           *(uint *)((int)&local_34 + (uint)bVar3 * -8 + 4);
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&local_34 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      if ((0 < local_38) &&
         ((uVar1 = (uint)g_CDemonLight_PTR_012b0634->shadow_depth_buffer
                         [(local_40 >> 0x10) +
                          (local_3c >> 0x10) * g_CDemonLight_PTR_012b0634->shadow_map_width],
          (int)uVar1 < g_INT_00b0e5fc && (local_38 < (int)(uVar1 + 0x80))))) {
        local_28 = g_CDemonLight_PTR_012b0634->texture_coord_mask &
                   local_40 >> ((byte)g_CDemonLight_PTR_012b0634->shadow_x_shift & 0x1f);
        *local_18 = *local_18 +
                    (char)((int)((g_INT_00b0e5fc - uVar1) *
                                (uint)g_CDemonLight_PTR_012b0634->precomputed_lighting_textures
                                      [((local_3c >>
                                         ((byte)g_CDemonLight_PTR_012b0634->shadow_y_shift & 0x1f) &
                                        g_CDemonLight_PTR_012b0634->texture_coord_mask) <<
                                       ((byte)g_CDemonLight_PTR_012b0634->texture_row_shift & 0x1f))
                                       + local_28]) >> ((byte)g_INT_00b0e600 & 0x1f));
      }
    }
    pCVar2 = pCVar2 + 1;
    local_1c = local_1c + 1;
    local_24 = local_24 + 1;
    local_20 = local_20 + (1 << (g_BIT_INTEGER32_012b0660.bytes[0] & 0x1f));
    local_18 = local_18 + 1;
  }
  return;
}
