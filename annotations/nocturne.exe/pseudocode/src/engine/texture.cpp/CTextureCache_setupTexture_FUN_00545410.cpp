// Name: engine_texture.cpp_CTextureCache_setupTexture_FUN_00545410
// Address: 00545410
// Address Range: [[00545410, 005456ed]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_CTextureCache_setupTexture_FUN_00545410(CTextureCache *this_ptr,int texture_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_texture_cpp_CTextureCache_setupTexture_FUN_00545410(CTextureCache *this_ptr,int texture_index)

{
  int iVar1;
  int iVar2;
  SRGBColor *pSVar3;
  uint uVar4;
  uint uVar5;
  
  g_CurrentTextureData = this_ptr->texture_data_ptrs[texture_index];
  g_CurrentTextureDimension = this_ptr->texture_dimensions[texture_index];
  _DAT_01c02588 = 0;
  g_CurrentTextureOpacityData = this_ptr->texture_opacity_ptrs[texture_index];
  _DAT_01c0258c = 0;
  pSVar3 = (SRGBColor *)(this_ptr->texture_palette_ptrs + texture_index * 0xc0);
  g_CurrentPalette = (SRGBColorPalette *)pSVar3;
  if (g_UseExternalRenderer == 0) {
    if (g_BitsPerPixel == 0x20) {
      iVar1 = 0;
      do {
        uVar4 = (uint)((SRGBColor *)&pSVar3->r)->r;
        if (g_BitsPerPixel == 0x20) {
          uVar4 = (uint)pSVar3->b << (g_BlueBitPosition.bytes[0] & 0x1f) |
                  (uint)pSVar3->g << (g_GreenBitPosition.bytes[0] & 0x1f) |
                  uVar4 << (g_RedBitPosition.bytes[0] & 0x1f);
        }
        else {
          uVar4 = (uint)pSVar3->g << 8 | uVar4 << 0x10 | (uint)pSVar3->b;
        }
        iVar2 = iVar1 + 4;
        pSVar3 = pSVar3 + 1;
        *(uint *)((int)g_Hardware32BitPalette + iVar1) = uVar4;
        iVar1 = iVar2;
      } while (iVar2 != 0x400);
    }
    else {
      iVar2 = 0;
      iVar1 = 0;
      do {
        *(ushort *)((int)g_Hardware16BitPalette + iVar2) =
             (ushort)((uint)pSVar3->b / (uint)g_BlueScaleFactor <<
                     (g_BlueBitPosition.bytes[0] & 0x1f)) |
             (ushort)((uint)pSVar3->r / (uint)g_RedScaleFactor << (g_RedBitPosition.bytes[0] & 0x1f)
                     ) |
             (ushort)((uint)pSVar3->g / (uint)g_GreenScaleFactor <<
                     (g_GreenBitPosition.bytes[0] & 0x1f));
        uVar4 = (uint)pSVar3->b;
        if (g_BitsPerPixel == 0x20) {
          uVar5 = (uint)pSVar3->r << (g_RedBitPosition.bytes[0] & 0x1f) |
                  (uint)pSVar3->g << (g_GreenBitPosition.bytes[0] & 0x1f);
          uVar4 = uVar4 << (g_BlueBitPosition.bytes[0] & 0x1f);
        }
        else {
          uVar5 = (uint)pSVar3->g << 8 | (uint)pSVar3->r << 0x10;
        }
        pSVar3 = pSVar3 + 1;
        iVar2 = iVar2 + 2;
        *(uint *)((int)g_Hardware32BitPalette + iVar1) = uVar5 | uVar4;
        iVar1 = iVar1 + 4;
      } while (iVar2 != 0x200);
    }
  }
  if ((uint)g_CurrentTextureDimension < 0x40) {
    if (g_CurrentTextureDimension == 0x20) {
      g_TextureShift1.u32[0] = 0x13;
      g_TextureShift2.u32[0] = 0xe;
      g_TextureMask1.u32[0] = 0x1f;
      g_TextureMask2.u32[0] = 0x3e0;
      g_TextureBits = 5;
      return;
    }
  }
  else {
    if ((uint)g_CurrentTextureDimension < 0x41) {
      g_TextureShift1.u32[0] = 0x12;
      g_TextureShift2.u32[0] = 0xc;
      g_TextureMask1.u32[0] = 0x3f;
      g_TextureMask2.u32[0] = 0xfc0;
      g_TextureBits = 6;
      return;
    }
    if (0x7f < (uint)g_CurrentTextureDimension) {
      if ((uint)g_CurrentTextureDimension < 0x81) {
        g_TextureShift1.u32[0] = 0x11;
        g_TextureShift2.u32[0] = 10;
        g_TextureMask1.u32[0] = 0x7f;
        g_TextureMask2.u32[0] = 0x3f80;
        g_TextureBits = 7;
        return;
      }
      if (g_CurrentTextureDimension == 0x100) {
        g_TextureShift1.u32[0] = 0x10;
        g_TextureShift2.u32[0] = 8;
        g_TextureMask1.u32[0] = 0xff;
        g_TextureMask2.u32[0] = 0xff00;
        g_TextureBits = 8;
        return;
      }
      return;
    }
  }
  return;
}
