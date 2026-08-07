// Name: engine_texture.cpp_CTextureCache_setupTexture_FUN_00545410
// Address: 00545410
// Address Range: [[00545410, 005456ed]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_CTextureCache_setupTexture_FUN_00545410(CTextureCache *cache,int texture_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_texture_cpp_CTextureCache_setupTexture_FUN_00545410(CTextureCache *cache,int texture_index)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uchar **ppuVar4;
  uint uVar5;
  
  _DAT_01c02580 = cache->texture_data_ptrs[texture_index];
  DAT_005b762c = cache->texture_dimensions[texture_index];
  _DAT_01c02588 = 0;
  _DAT_01c02584 = cache->texture_opacity_ptrs[texture_index];
  _DAT_01c0258c = 0;
  ppuVar4 = cache->texture_palette_ptrs + texture_index * 0xc0;
  _DAT_01c00020 = ppuVar4;
  if (g_UseExternalRenderer == 0) {
    if (g_BitsPerPixel == 0x20) {
      iVar1 = 0;
      do {
        if (g_BitsPerPixel == 0x20) {
          uVar3 = (uint)*(byte *)((int)ppuVar4 + 2) << (g_BlueBitPosition.bytes[0] & 0x1f) |
                  (uint)*(byte *)((int)ppuVar4 + 1) << (g_GreenBitPosition.bytes[0] & 0x1f) |
                  (uint)*(byte *)ppuVar4 << (g_RedBitPosition.bytes[0] & 0x1f);
        }
        else {
          uVar3 = (uint)*(byte *)((int)ppuVar4 + 1) << 8 | (uint)*(byte *)ppuVar4 << 0x10 |
                  (uint)*(byte *)((int)ppuVar4 + 2);
        }
        iVar2 = iVar1 + 4;
        ppuVar4 = (uchar **)((int)ppuVar4 + 3);
        *(uint *)(&DAT_01c00024 + iVar1) = uVar3;
        iVar1 = iVar2;
      } while (iVar2 != 0x400);
    }
    else {
      iVar2 = 0;
      iVar1 = 0;
      do {
        *(ushort *)(iVar2 + 0x1c00424) =
             (ushort)((uint)*(byte *)((int)ppuVar4 + 2) / (uint)g_BlueScaleFactor <<
                     (g_BlueBitPosition.bytes[0] & 0x1f)) |
             (ushort)((uint)*(byte *)ppuVar4 / (uint)g_RedScaleFactor <<
                     (g_RedBitPosition.bytes[0] & 0x1f)) |
             (ushort)((uint)*(byte *)((int)ppuVar4 + 1) / (uint)g_GreenScaleFactor <<
                     (g_GreenBitPosition.bytes[0] & 0x1f));
        uVar3 = (uint)*(byte *)((int)ppuVar4 + 2);
        if (g_BitsPerPixel == 0x20) {
          uVar5 = (uint)*(byte *)ppuVar4 << (g_RedBitPosition.bytes[0] & 0x1f) |
                  (uint)*(byte *)((int)ppuVar4 + 1) << (g_GreenBitPosition.bytes[0] & 0x1f);
          uVar3 = uVar3 << (g_BlueBitPosition.bytes[0] & 0x1f);
        }
        else {
          uVar5 = (uint)*(byte *)((int)ppuVar4 + 1) << 8 | (uint)*(byte *)ppuVar4 << 0x10;
        }
        ppuVar4 = (uchar **)((int)ppuVar4 + 3);
        iVar2 = iVar2 + 2;
        *(uint *)(&DAT_01c00024 + iVar1) = uVar5 | uVar3;
        iVar1 = iVar1 + 4;
      } while (iVar2 != 0x200);
    }
  }
  if (DAT_005b762c < 0x40) {
    if (DAT_005b762c == 0x20) {
      _DAT_005bf550 = 0x13;
      _DAT_005bf570 = 0xe;
      _DAT_005bf590 = 0x1f;
      _DAT_005bf5b0 = 0x3e0;
      _DAT_01c02590 = 5;
      return;
    }
  }
  else {
    if (DAT_005b762c < 0x41) {
      _DAT_005bf550 = 0x12;
      _DAT_005bf570 = 0xc;
      _DAT_005bf590 = 0x3f;
      _DAT_005bf5b0 = 0xfc0;
      _DAT_01c02590 = 6;
      return;
    }
    if (0x7f < DAT_005b762c) {
      if (DAT_005b762c < 0x81) {
        _DAT_005bf550 = 0x11;
        _DAT_005bf570 = 10;
        _DAT_005bf590 = 0x7f;
        _DAT_005bf5b0 = 0x3f80;
        _DAT_01c02590 = 7;
        return;
      }
      if (DAT_005b762c == 0x100) {
        _DAT_005bf550 = 0x10;
        _DAT_005bf570 = 8;
        _DAT_005bf590 = 0xff;
        _DAT_005bf5b0 = 0xff00;
        _DAT_01c02590 = 8;
        return;
      }
      return;
    }
  }
  return;
}
