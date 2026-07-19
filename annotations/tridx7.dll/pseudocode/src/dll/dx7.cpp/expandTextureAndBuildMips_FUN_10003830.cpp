// Name: dll_dx7.cpp_expandTextureAndBuildMips_FUN_10003830
// Address: 10003830
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
  int iVar9;
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
  puVar6 = g_PackedPalette;
  do {
    puVar8 = puVar6 + 1;
    *puVar6 = (uint)pbVar4[2] << ((byte)g_BlueShift & 0x1f) |
              (uint)pbVar4[1] << ((byte)g_GreenShift & 0x1f) |
              (uint)*pbVar4 << ((byte)g_RedShift & 0x1f);
    puVar1 = g_TextureOpacity;
    pbVar4 = pbVar4 + 3;
    puVar6 = puVar8;
  } while (puVar8 != g_PackedPalette + sizeof(g_PackedPalette) / sizeof(g_PackedPalette[0]));
  puVar6 = g_ExpandedTexture;
  iVar9 = *g_ExternalRendererBridge.texture_dimension * *g_ExternalRendererBridge.texture_dimension;
  if (g_TextureOpacity == (uchar *)0x0) {
    pbVar4 = g_TextureData;
    if (0 < iVar9) {
      do {
        uVar5 = 0;
        if (g_PackedPalette[*pbVar4] != 0) {
          uVar5 = g_PackedPalette[*pbVar4] | 0xff000000;
        }
        *puVar6 = uVar5;
        pbVar4 = pbVar4 + 1;
        puVar6 = puVar6 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  else {
    iVar2 = 0;
    pbVar4 = g_TextureData;
    if (0 < iVar9) {
      do {
        iVar3 = iVar2 + 1;
        *puVar6 = g_PackedPalette[*pbVar4] | (uint)puVar1[iVar2] << 0x18;
        iVar2 = iVar3;
        pbVar4 = pbVar4 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar3 < iVar9);
    }
  }
  if ((*g_ExternalRendererBridge.agp_texture_mode == 0) || (g_MipMapFlag != 0)) {
    local_10 = g_ExpandedTexture;
    for (iVar9 = *g_ExternalRendererBridge.texture_dimension; 1 < iVar9; iVar9 = iVar9 / 2) {
      puVar6 = local_10 + iVar9 * iVar9;
      if (0 < iVar9) {
        uVar5 = iVar9 + 1U >> 1;
        puVar8 = puVar6;
        local_4 = uVar5;
        do {
          puVar7 = puVar8;
          uVar10 = uVar5;
          puVar11 = local_10;
          if (0 < iVar9) {
            do {
              puVar8 = puVar7 + 1;
              uVar10 = uVar10 - 1;
              *puVar7 = ((((puVar11[iVar9 + 1] & 0xfefefeff) >> 1) +
                          ((puVar11[iVar9] & 0xfefefeff) >> 1) & 0xfefefeff) >> 1) +
                        ((((puVar11[1] & 0xfefefeff) >> 1) + ((*puVar11 & 0xfefefeff) >> 1) &
                         0xfefefeff) >> 1);
              puVar7 = puVar8;
              puVar11 = puVar11 + 2;
            } while (uVar10 != 0);
          }
          local_10 = local_10 + iVar9 * 2;
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
