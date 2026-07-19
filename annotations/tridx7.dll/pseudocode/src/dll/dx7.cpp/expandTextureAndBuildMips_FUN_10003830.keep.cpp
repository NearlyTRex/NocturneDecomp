// Name: dll_dx7.cpp_expandTextureAndBuildMips_FUN_10003830
// Address: 10003830
// MANUAL RECONSTRUCTION
// Address Range: [[10003830, 10003a2e]]
// Convention: __cdecl
// Signature: void __cdecl dll_dx7_cpp_expandTextureAndBuildMips_FUN_10003830(void)

#include "nocturne.h"

void __cdecl dll_dx7_cpp_expandTextureAndBuildMips_FUN_10003830(void)

{
  uchar *puVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  int palette_index;
  int pixel_count;
  int mip_dimension;
  uint uVar10;
  uint *puVar11;
  uint *local_10;
  uint local_4;
  
  if (g_TexturePixelFormat.dwBitCount.dwRGBBitCount == 0x20) {
    g_RedShift = g_HWRedShift;
    g_GreenShift = g_HWGreenShift;
    g_BlueShift = g_HWBlueShift;
  }
  else {
    g_RedShift = 0x10;
    g_GreenShift = 8;
    g_BlueShift = 0;
  }
  pbVar4 = g_TexturePalette;
  for (palette_index = 0;
       palette_index < (int)(sizeof(g_PackedPalette) / sizeof(g_PackedPalette[0]));
       palette_index = palette_index + 1) {
    g_PackedPalette[palette_index] = (uint)pbVar4[2] << ((byte)g_BlueShift & 0x1f) |
                                     (uint)pbVar4[1] << ((byte)g_GreenShift & 0x1f) |
                                     (uint)*pbVar4 << ((byte)g_RedShift & 0x1f);
    pbVar4 = pbVar4 + 3;
  }
  puVar1 = g_TextureOpacity;
  puVar6 = g_ExpandedTexture;
  pixel_count =
       *g_ExternalRendererBridge.texture_dimension * *g_ExternalRendererBridge.texture_dimension;
  if (g_TextureOpacity == (uchar *)0x0) {
    pbVar4 = g_TextureData;
    if (0 < pixel_count) {
      do {
        uVar5 = 0;
        if (g_PackedPalette[*pbVar4] != 0) {
          uVar5 = g_PackedPalette[*pbVar4] | 0xff000000;
        }
        *puVar6 = uVar5;
        pbVar4 = pbVar4 + 1;
        puVar6 = puVar6 + 1;
        pixel_count = pixel_count + -1;
      } while (pixel_count != 0);
    }
  }
  else {
    iVar2 = 0;
    pbVar4 = g_TextureData;
    if (0 < pixel_count) {
      do {
        iVar3 = iVar2 + 1;
        *puVar6 = g_PackedPalette[*pbVar4] | (uint)puVar1[iVar2] << 0x18;
        iVar2 = iVar3;
        pbVar4 = pbVar4 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar3 < pixel_count);
    }
  }
  if ((*g_ExternalRendererBridge.agp_texture_mode == 0) || (g_MipMapFlag != 0)) {
    local_10 = g_ExpandedTexture;
    for (mip_dimension = *g_ExternalRendererBridge.texture_dimension; 1 < mip_dimension; mip_dimension = mip_dimension / 2) {
      puVar6 = local_10 + mip_dimension * mip_dimension;
      if (0 < mip_dimension) {
        uVar5 = mip_dimension + 1U >> 1;
        puVar8 = puVar6;
        local_4 = uVar5;
        do {
          puVar7 = puVar8;
          uVar10 = uVar5;
          puVar11 = local_10;
          if (0 < mip_dimension) {
            do {
              puVar8 = puVar7 + 1;
              uVar10 = uVar10 - 1;
              *puVar7 = ((((puVar11[mip_dimension + 1] & 0xfefefeff) >> 1) +
                          ((puVar11[mip_dimension] & 0xfefefeff) >> 1) & 0xfefefeff) >> 1) +
                        ((((puVar11[1] & 0xfefefeff) >> 1) + ((*puVar11 & 0xfefefeff) >> 1) &
                         0xfefefeff) >> 1);
              puVar7 = puVar8;
              puVar11 = puVar11 + 2;
            } while (uVar10 != 0);
          }
          local_10 = local_10 + mip_dimension * 2;
          local_4 = local_4 - 1;
        } while (local_4 != 0);
      }
      if ((*g_ExternalRendererBridge.agp_texture_mode == 0) && (g_MipMapFlag == 0)) {
        return;
      }
      local_10 = puVar6;
    }
  }
  return;
}
