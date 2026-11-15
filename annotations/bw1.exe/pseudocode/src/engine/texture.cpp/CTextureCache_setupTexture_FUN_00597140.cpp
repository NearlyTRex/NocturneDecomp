// Name: engine_texture.cpp_CTextureCache_setupTexture_FUN_00597140
// Address: 00597140
// Address Range: [[00597140, 00597612]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_CTextureCache_setupTexture_FUN_00597140(CTextureCache *this_ptr,SMRGLTextureBasic *texture,int upload_mode)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00597305) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_texture_cpp_CTextureCache_setupTexture_FUN_00597140(CTextureCache *this_ptr,SMRGLTextureBasic *texture,int upload_mode)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  STextureCacheEntry *pSVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  int local_14;
  
  pSVar4 = this_ptr->entries + (texture->base).count;
  DAT_0061b4a8 = pSVar4->dimension;
  if ((pSVar4->true_color_data == (uchar *)0x0) && (upload_mode != 2)) {
    _DAT_01c50930 = pSVar4->texture_data;
    _DAT_01c50934 = pSVar4->opacity_data;
    _DAT_01c4e3d0 = pSVar4->palette_data;
    _DAT_01c50944 = 0;
  }
  else {
    _DAT_01c50934 = (uchar *)0x0;
    _DAT_01c4e3d0 = (byte *)0x0;
    _DAT_01c50930 = pSVar4->true_color_data;
    _DAT_01c50944 = 1;
  }
  if ((_DAT_01c50948 == 0) && (pSVar4->true_color_data == (uchar *)0x0)) {
    if (DAT_0061b4a0 == 0x20) {
      iVar8 = 0;
      pbVar7 = _DAT_01c4e3d0;
      do {
        pbVar1 = pbVar7 + 1;
        bVar3 = *pbVar7;
        pbVar2 = pbVar7 + 2;
        iVar5 = iVar8 + 4;
        pbVar7 = pbVar7 + 3;
        *(uint *)(&DAT_01c4e3d4 + iVar8) =
             (uint)*pbVar2 << (DAT_01c4e9ec & 0x1f) |
             (uint)bVar3 << (DAT_01c4e9d4 & 0x1f) | (uint)*pbVar1 << (DAT_01c4e9e0 & 0x1f);
        iVar8 = iVar5;
      } while (iVar5 != 0x400);
    }
    else {
      iVar8 = 0;
      local_14 = 0;
      pbVar7 = _DAT_01c4e3d0;
      do {
        *(ushort *)(iVar8 + 0x1c4e7d4) =
             (ushort)(pbVar7[2] / _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f)) |
             (ushort)(pbVar7[1] / _DAT_01c4e9e4 << (DAT_01c4e9e0 & 0x1f)) |
             (ushort)(*pbVar7 / _DAT_01c4e9d8 << (DAT_01c4e9d4 & 0x1f));
        if (DAT_0061b4a0 == 0x20) {
          uVar6 = (uint)pbVar7[2] << (DAT_01c4e9ec & 0x1f) |
                  (uint)*pbVar7 << (DAT_01c4e9d4 & 0x1f) | (uint)pbVar7[1] << (DAT_01c4e9e0 & 0x1f);
        }
        else {
          uVar6 = (uint)pbVar7[1] << 8 | (uint)*pbVar7 << 0x10 | (uint)pbVar7[2];
        }
        pbVar7 = pbVar7 + 3;
        *(uint *)(&DAT_01c4e3d4 + local_14) = uVar6;
        local_14 = local_14 + 4;
        iVar8 = iVar8 + 2;
      } while (iVar8 != 0x200);
    }
  }
  if (DAT_0061b4a8 < 0x100) {
    if (DAT_0061b4a8 < 0x40) {
      if (DAT_0061b4a8 == 0x20) {
        _DAT_00623eb8 = 0x13;
        _DAT_00623ed8 = 0xe;
        _DAT_00623ef8 = 0x1f;
        _DAT_00623f18 = 0x3e0;
        _DAT_01c50940 = 5;
      }
    }
    else if (DAT_0061b4a8 < 0x41) {
      _DAT_00623eb8 = 0x12;
      _DAT_00623ed8 = 0xc;
      _DAT_00623ef8 = 0x3f;
      _DAT_00623f18 = 0xfc0;
      _DAT_01c50940 = 6;
    }
    else if (DAT_0061b4a8 == 0x80) {
      _DAT_00623eb8 = 0x11;
      _DAT_00623ed8 = 10;
      _DAT_00623ef8 = 0x7f;
      _DAT_00623f18 = 0x3f80;
      _DAT_01c50940 = 7;
    }
  }
  else if (DAT_0061b4a8 < 0x101) {
    _DAT_00623eb8 = 0x10;
    _DAT_00623ed8 = 8;
    _DAT_00623ef8 = 0xff;
    _DAT_00623f18 = 0xff00;
    _DAT_01c50940 = 8;
  }
  else if (DAT_0061b4a8 < 0x400) {
    if (DAT_0061b4a8 == 0x200) {
      _DAT_00623eb8 = 0xf;
      _DAT_00623ed8 = 6;
      _DAT_00623ef8 = 0x1ff;
      _DAT_00623f18 = 0x3fe00;
      _DAT_01c50940 = 9;
    }
  }
  else if (DAT_0061b4a8 < 0x401) {
    _DAT_00623eb8 = 0xe;
    _DAT_00623ed8 = 4;
    _DAT_00623ef8 = 0x3ff;
    _DAT_00623f18 = 0xffc00;
    _DAT_01c50940 = 10;
  }
  else if (DAT_0061b4a8 == 0x800) {
    _DAT_00623eb8 = 0xd;
    _DAT_00623ed8 = 2;
    _DAT_00623ef8 = 0x7ff;
    _DAT_00623f18 = 0x3ff800;
    _DAT_01c50940 = 0xb;
  }
  pSVar4->use_stamp = this_ptr->use_counter;
  iVar8 = _DAT_01c50948;
  this_ptr->use_counter = this_ptr->use_counter + 1;
  if (iVar8 != 0) {
    if (upload_mode != 0) {
      if (_DAT_01c50944 == 0) {
        (*_DAT_02c833b4)(texture,pSVar4->dimension,pSVar4->texture_data,pSVar4->palette_data,
                         pSVar4->opacity_data);
      }
      else {
        (*_DAT_02c833bc)(texture,pSVar4->dimension,pSVar4->true_color_data);
      }
      return;
    }
    if (_DAT_01c50944 == 0) {
      (*_DAT_02c833b0)(texture,pSVar4->dimension,pSVar4->texture_data,pSVar4->palette_data,
                       pSVar4->opacity_data);
      return;
    }
    (*_DAT_02c833b8)(texture,pSVar4->dimension,pSVar4->true_color_data);
  }
  return;
}
