// Name: engine_texture.cpp_CTextureCache_setupTexture_FUN_00574520
// Address: 00574520
// Address Range: [[00574520, 005749f2]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_CTextureCache_setupTexture_FUN_00574520(CTextureCache *this_ptr,SMRGLTextureBasic *texture,int upload_mode)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005746e5) */

void __cdecl engine_texture_cpp_CTextureCache_setupTexture_FUN_00574520(CTextureCache *this_ptr,SMRGLTextureBasic *texture,int upload_mode)

{
  uchar *puVar1;
  uchar *puVar2;
  SRGBColor *pSVar3;
  STextureCacheEntry *pSVar4;
  int iVar5;
  uint uVar6;
  SRGBColor *pSVar7;
  int iVar8;
  int local_14;
  
  pSVar4 = this_ptr->entries + (texture->base).count;
  g_INT_006141c8 = pSVar4->dimension;
  if ((pSVar4->true_color_data == (uchar *)0x0) && (upload_mode != 2)) {
    g_UCHAR_PTR_01c37770 = pSVar4->texture_data;
    g_UCHAR_PTR_01c37774 = pSVar4->opacity_data;
    g_SRGBColorPalette_PTR_01c35210 = (SRGBColorPalette *)pSVar4->palette_data;
    g_INT_01c37784 = 0;
  }
  else {
    g_UCHAR_PTR_01c37774 = (uchar *)0x0;
    g_SRGBColorPalette_PTR_01c35210 = (SRGBColorPalette *)0x0;
    g_UCHAR_PTR_01c37770 = pSVar4->true_color_data;
    g_INT_01c37784 = 1;
  }
  if ((g_INT_01c37788 == 0) && (pSVar4->true_color_data == (uchar *)0x0)) {
    if (g_INT_006141c0 == 0x20) {
      iVar8 = 0;
      pSVar7 = g_SRGBColorPalette_PTR_01c35210->colors;
      do {
        puVar1 = &pSVar7->g;
        pSVar3 = (SRGBColor *)&pSVar7->r;
        puVar2 = &pSVar7->b;
        iVar5 = iVar8 + 4;
        pSVar7 = pSVar7 + 1;
        *(uint *)((int)g_UINT_ARRAY_01c35214 + iVar8) =
             (uint)*puVar2 << (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f) |
             (uint)pSVar3->r << (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f) |
             (uint)*puVar1 << (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f);
        iVar8 = iVar5;
      } while (iVar5 != 0x400);
    }
    else {
      iVar8 = 0;
      local_14 = 0;
      pSVar7 = g_SRGBColorPalette_PTR_01c35210->colors;
      do {
        *(ushort *)((int)g_USHORT_ARRAY_01c35614 + iVar8) =
             (ushort)((uint)pSVar7->b / (uint)g_INT_01c35830 <<
                     (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f)) |
             (ushort)((uint)pSVar7->g / (uint)g_INT_01c35824 <<
                     (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f)) |
             (ushort)((uint)((SRGBColor *)&pSVar7->r)->r / (uint)g_INT_01c35818 <<
                     (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f));
        uVar6 = (uint)((SRGBColor *)&pSVar7->r)->r;
        if (g_INT_006141c0 == 0x20) {
          uVar6 = (uint)pSVar7->b << (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f) |
                  uVar6 << (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f) |
                  (uint)pSVar7->g << (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f);
        }
        else {
          uVar6 = (uint)pSVar7->g << 8 | uVar6 << 0x10 | (uint)pSVar7->b;
        }
        pSVar7 = pSVar7 + 1;
        *(uint *)((int)g_UINT_ARRAY_01c35214 + local_14) = uVar6;
        local_14 = local_14 + 4;
        iVar8 = iVar8 + 2;
      } while (iVar8 != 0x200);
    }
  }
  if ((uint)g_INT_006141c8 < 0x100) {
    if ((uint)g_INT_006141c8 < 0x40) {
      if (g_INT_006141c8 == 0x20) {
        g_QWORD_0061c868._0_4_ = 0x13;
        g_QWORD_0061c888._0_4_ = 0xe;
        g_QWORD_0061c8a8._0_4_ = 0x1f;
        g_QWORD_0061c8c8._0_4_ = 0x3e0;
        g_INT_01c37780 = 5;
      }
    }
    else if ((uint)g_INT_006141c8 < 0x41) {
      g_QWORD_0061c868._0_4_ = 0x12;
      g_QWORD_0061c888._0_4_ = 0xc;
      g_QWORD_0061c8a8._0_4_ = 0x3f;
      g_QWORD_0061c8c8._0_4_ = 0xfc0;
      g_INT_01c37780 = 6;
    }
    else if (g_INT_006141c8 == 0x80) {
      g_QWORD_0061c868._0_4_ = 0x11;
      g_QWORD_0061c888._0_4_ = 10;
      g_QWORD_0061c8a8._0_4_ = 0x7f;
      g_QWORD_0061c8c8._0_4_ = 0x3f80;
      g_INT_01c37780 = 7;
    }
  }
  else if ((uint)g_INT_006141c8 < 0x101) {
    g_QWORD_0061c868._0_4_ = 0x10;
    g_QWORD_0061c888._0_4_ = 8;
    g_QWORD_0061c8a8._0_4_ = 0xff;
    g_QWORD_0061c8c8._0_4_ = 0xff00;
    g_INT_01c37780 = 8;
  }
  else if ((uint)g_INT_006141c8 < 0x400) {
    if (g_INT_006141c8 == 0x200) {
      g_QWORD_0061c868._0_4_ = 0xf;
      g_QWORD_0061c888._0_4_ = 6;
      g_QWORD_0061c8a8._0_4_ = 0x1ff;
      g_QWORD_0061c8c8._0_4_ = 0x3fe00;
      g_INT_01c37780 = 9;
    }
  }
  else if ((uint)g_INT_006141c8 < 0x401) {
    g_QWORD_0061c868._0_4_ = 0xe;
    g_QWORD_0061c888._0_4_ = 4;
    g_QWORD_0061c8a8._0_4_ = 0x3ff;
    g_QWORD_0061c8c8._0_4_ = 0xffc00;
    g_INT_01c37780 = 10;
  }
  else if (g_INT_006141c8 == 0x800) {
    g_QWORD_0061c868._0_4_ = 0xd;
    g_QWORD_0061c888._0_4_ = 2;
    g_QWORD_0061c8a8._0_4_ = 0x7ff;
    g_QWORD_0061c8c8._0_4_ = 0x3ff800;
    g_INT_01c37780 = 0xb;
  }
  pSVar4->use_stamp = this_ptr->use_counter;
  iVar8 = g_INT_01c37788;
  this_ptr->use_counter = this_ptr->use_counter + 1;
  if (iVar8 != 0) {
    if (upload_mode != 0) {
      if (g_INT_01c37784 == 0) {
        (*(code *)g_PTR_0264bbe4)
                  (texture,pSVar4->dimension,pSVar4->texture_data,pSVar4->palette_data,
                   pSVar4->opacity_data);
      }
      else {
        (*(code *)g_PTR_0264bbec)(texture,pSVar4->dimension,pSVar4->true_color_data);
      }
      return;
    }
    if (g_INT_01c37784 == 0) {
      (*(code *)g_PTR_0264bbe0)
                (texture,pSVar4->dimension,pSVar4->texture_data,pSVar4->palette_data,
                 pSVar4->opacity_data);
      return;
    }
    (*(code *)g_PTR_0264bbe8)(texture,pSVar4->dimension,pSVar4->true_color_data);
  }
  return;
}
