// Name: engine_texture.cpp_CTextureCache_setupTexture_FUN_005dd200
// Address: 005dd200
// Address Range: [[005dd200, 005dd56a]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_CTextureCache_setupTexture_FUN_005dd200(CTextureCache *cache,int texture_index)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005dd2de) */

void __cdecl engine_texture_cpp_CTextureCache_setupTexture_FUN_005dd200(CTextureCache *cache,int texture_index)

{
  int iVar1;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int local_14;
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  
  g_CurrentTextureData = cache->texture_data_ptrs[texture_index];
  g_CurrentTextureOpacityData = cache->texture_opacity_ptrs[texture_index];
  g_CurrentTextureOffsetU = 0;
  g_CurrentTextureOffsetV = 0;
  g_CurrentTextureDimension = cache->texture_dimensions[texture_index];
  pbVar6 = cache->texture_palette_ptrs[texture_index];
  g_CurrentPalette = pbVar6;
  if (g_UseExternalRenderer == 0) {
    if (g_BitsPerPixel == 0x20) {
      iVar1 = 0;
      do {
        pbVar1 = pbVar6 + 1;
        bVar3 = *pbVar6;
        pbVar2 = pbVar6 + 2;
        iVar4 = iVar1 + 4;
        pbVar6 = pbVar6 + 3;
        *(uint *)((int)g_Hardware32BitPalette + iVar1) =
             (uint)*pbVar2 << (g_BlueBitPosition.bytes[0] & 0x1f) |
             (uint)*pbVar1 << (g_GreenBitPosition.bytes[0] & 0x1f) |
             (uint)bVar3 << (g_RedBitPosition.bytes[0] & 0x1f);
        iVar1 = iVar4;
      } while (iVar4 != 0x400);
    }
    else {
      local_14 = g_UseExternalRenderer;
      iVar7 = 0;
      do {
        *(ushort *)((int)g_Hardware16BitPalette + iVar7) =
             (ushort)((uint)pbVar6[1] / (uint)g_GreenScaleFactor <<
                     (g_GreenBitPosition.bytes[0] & 0x1f)) |
             (ushort)((uint)*pbVar6 / (uint)g_RedScaleFactor << (g_RedBitPosition.bytes[0] & 0x1f))
             | (ushort)((uint)pbVar6[2] / (uint)g_BlueScaleFactor <<
                       (g_BlueBitPosition.bytes[0] & 0x1f));
        if (g_BitsPerPixel == 0x20) {
          uVar5 = (uint)pbVar6[2] << (g_BlueBitPosition.bytes[0] & 0x1f) |
                  (uint)*pbVar6 << (g_RedBitPosition.bytes[0] & 0x1f) |
                  (uint)pbVar6[1] << (g_GreenBitPosition.bytes[0] & 0x1f);
        }
        else {
          uVar5 = (uint)pbVar6[1] << 8 | (uint)*pbVar6 << 0x10 | (uint)pbVar6[2];
        }
        pbVar6 = pbVar6 + 3;
        *(uint *)((int)g_Hardware32BitPalette + local_14) = uVar5;
        local_14 = local_14 + 4;
        iVar7 = iVar7 + 2;
      } while (iVar7 != 0x200);
    }
  }
  if ((uint)g_CurrentTextureDimension < 0x80) {
    if (0x1f < (uint)g_CurrentTextureDimension) {
      if ((uint)g_CurrentTextureDimension < 0x21) {
        g_TextureShift1.u32[0] = 0x13;
        g_TextureShift2.u32[0] = 0xe;
        g_TextureMask1.u32[0] = 0x1f;
        g_TextureMask2.u32[0] = 0x3e0;
        g_TextureBits = 5;
        return;
      }
      if (g_CurrentTextureDimension == 0x40) {
        g_TextureShift1.u32[0] = 0x12;
        g_TextureShift2.u32[0] = 0xc;
        g_TextureMask1.u32[0] = 0x3f;
        g_TextureMask2.u32[0] = 0xfc0;
        g_TextureBits = 6;
        return;
      }
    }
    return;
  }
  if ((uint)g_CurrentTextureDimension < 0x81) {
    g_TextureShift1.u32[0] = 0x11;
    g_TextureShift2.u32[0] = 10;
    g_TextureMask1.u32[0] = 0x7f;
    g_TextureMask2.u32[0] = 0x3f80;
    g_TextureBits = 7;
    return;
  }
  if ((uint)g_CurrentTextureDimension < 0x200) {
    if (g_CurrentTextureDimension != 0x100) {
      return;
    }
    g_TextureShift1.u32[0] = 0x10;
    g_TextureShift2.u32[0] = 8;
    g_TextureMask1.u32[0] = 0xff;
    g_TextureMask2.u32[0] = 0xff00;
    g_TextureBits = 8;
    return;
  }
  if ((uint)g_CurrentTextureDimension < 0x201) {
    g_TextureShift1.u32[0] = 0xf;
    g_TextureShift2.u32[0] = 6;
    g_TextureMask1.u32[0] = 0x1ff;
    g_TextureMask2.u32[0] = 0x3fe00;
    g_TextureBits = 9;
    return;
  }
  if (g_CurrentTextureDimension != 0x400) {
    return;
  }
  g_TextureShift1.u32[0] = 0xe;
  g_TextureShift2.u32[0] = 4;
  g_TextureMask1.u32[0] = 0x3ff;
  g_TextureMask2.u32[0] = 0xffc00;
  g_TextureBits = 10;
  return;
}
