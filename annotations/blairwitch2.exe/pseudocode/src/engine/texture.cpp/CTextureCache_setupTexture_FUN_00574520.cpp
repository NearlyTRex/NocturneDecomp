// Name: engine_texture.cpp_CTextureCache_setupTexture_FUN_00574520
// Address: 00574520
// Address Range: [[00574520, 005749f2]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_CTextureCache_setupTexture_FUN_00574520(CTextureCache *this_ptr,SMRGLTextureBasic *texture,int upload_mode)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005746e5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_texture_cpp_CTextureCache_setupTexture_FUN_00574520(CTextureCache *this_ptr,SMRGLTextureBasic *texture,int upload_mode)

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
  DAT_006141c8 = pSVar4->dimension;
  if ((pSVar4->true_color_data == (uchar *)0x0) && (upload_mode != 2)) {
    _DAT_01c37770 = pSVar4->texture_data;
    _DAT_01c37774 = pSVar4->opacity_data;
    _DAT_01c35210 = pSVar4->palette_data;
    _DAT_01c37784 = 0;
  }
  else {
    _DAT_01c37774 = (uchar *)0x0;
    _DAT_01c35210 = (byte *)0x0;
    _DAT_01c37770 = pSVar4->true_color_data;
    _DAT_01c37784 = 1;
  }
  if ((_DAT_01c37788 == 0) && (pSVar4->true_color_data == (uchar *)0x0)) {
    if (DAT_006141c0 == 0x20) {
      iVar8 = 0;
      pbVar7 = _DAT_01c35210;
      do {
        pbVar1 = pbVar7 + 1;
        bVar3 = *pbVar7;
        pbVar2 = pbVar7 + 2;
        iVar5 = iVar8 + 4;
        pbVar7 = pbVar7 + 3;
        *(uint *)(&DAT_01c35214 + iVar8) =
             (uint)*pbVar2 << (DAT_01c3582c & 0x1f) |
             (uint)bVar3 << (DAT_01c35814 & 0x1f) | (uint)*pbVar1 << (DAT_01c35820 & 0x1f);
        iVar8 = iVar5;
      } while (iVar5 != 0x400);
    }
    else {
      iVar8 = 0;
      local_14 = 0;
      pbVar7 = _DAT_01c35210;
      do {
        *(ushort *)(iVar8 + 0x1c35614) =
             (ushort)(pbVar7[2] / _DAT_01c35830 << (DAT_01c3582c & 0x1f)) |
             (ushort)(pbVar7[1] / _DAT_01c35824 << (DAT_01c35820 & 0x1f)) |
             (ushort)(*pbVar7 / _DAT_01c35818 << (DAT_01c35814 & 0x1f));
        if (DAT_006141c0 == 0x20) {
          uVar6 = (uint)pbVar7[2] << (DAT_01c3582c & 0x1f) |
                  (uint)*pbVar7 << (DAT_01c35814 & 0x1f) | (uint)pbVar7[1] << (DAT_01c35820 & 0x1f);
        }
        else {
          uVar6 = (uint)pbVar7[1] << 8 | (uint)*pbVar7 << 0x10 | (uint)pbVar7[2];
        }
        pbVar7 = pbVar7 + 3;
        *(uint *)(&DAT_01c35214 + local_14) = uVar6;
        local_14 = local_14 + 4;
        iVar8 = iVar8 + 2;
      } while (iVar8 != 0x200);
    }
  }
  if (DAT_006141c8 < 0x100) {
    if (DAT_006141c8 < 0x40) {
      if (DAT_006141c8 == 0x20) {
        _DAT_0061c868 = 0x13;
        _DAT_0061c888 = 0xe;
        _DAT_0061c8a8 = 0x1f;
        _DAT_0061c8c8 = 0x3e0;
        _DAT_01c37780 = 5;
      }
    }
    else if (DAT_006141c8 < 0x41) {
      _DAT_0061c868 = 0x12;
      _DAT_0061c888 = 0xc;
      _DAT_0061c8a8 = 0x3f;
      _DAT_0061c8c8 = 0xfc0;
      _DAT_01c37780 = 6;
    }
    else if (DAT_006141c8 == 0x80) {
      _DAT_0061c868 = 0x11;
      _DAT_0061c888 = 10;
      _DAT_0061c8a8 = 0x7f;
      _DAT_0061c8c8 = 0x3f80;
      _DAT_01c37780 = 7;
    }
  }
  else if (DAT_006141c8 < 0x101) {
    _DAT_0061c868 = 0x10;
    _DAT_0061c888 = 8;
    _DAT_0061c8a8 = 0xff;
    _DAT_0061c8c8 = 0xff00;
    _DAT_01c37780 = 8;
  }
  else if (DAT_006141c8 < 0x400) {
    if (DAT_006141c8 == 0x200) {
      _DAT_0061c868 = 0xf;
      _DAT_0061c888 = 6;
      _DAT_0061c8a8 = 0x1ff;
      _DAT_0061c8c8 = 0x3fe00;
      _DAT_01c37780 = 9;
    }
  }
  else if (DAT_006141c8 < 0x401) {
    _DAT_0061c868 = 0xe;
    _DAT_0061c888 = 4;
    _DAT_0061c8a8 = 0x3ff;
    _DAT_0061c8c8 = 0xffc00;
    _DAT_01c37780 = 10;
  }
  else if (DAT_006141c8 == 0x800) {
    _DAT_0061c868 = 0xd;
    _DAT_0061c888 = 2;
    _DAT_0061c8a8 = 0x7ff;
    _DAT_0061c8c8 = 0x3ff800;
    _DAT_01c37780 = 0xb;
  }
  pSVar4->use_stamp = this_ptr->use_counter;
  iVar8 = _DAT_01c37788;
  this_ptr->use_counter = this_ptr->use_counter + 1;
  if (iVar8 != 0) {
    if (upload_mode != 0) {
      if (_DAT_01c37784 == 0) {
        (*_DAT_0264bbe4)(texture,pSVar4->dimension,pSVar4->texture_data,pSVar4->palette_data,
                         pSVar4->opacity_data);
      }
      else {
        (*_DAT_0264bbec)(texture,pSVar4->dimension,pSVar4->true_color_data);
      }
      return;
    }
    if (_DAT_01c37784 == 0) {
      (*_DAT_0264bbe0)(texture,pSVar4->dimension,pSVar4->texture_data,pSVar4->palette_data,
                       pSVar4->opacity_data);
      return;
    }
    (*_DAT_0264bbe8)(texture,pSVar4->dimension,pSVar4->true_color_data);
  }
  return;
}
