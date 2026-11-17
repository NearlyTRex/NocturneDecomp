// Name: cockpit_ckptutil.c_buildHardwarePalettes_FUN_0042c8f0
// Address: 0042c8f0
// Address Range: [[0042c8f0, 0042c9e9]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_buildHardwarePalettes_FUN_0042c8f0(SRGBColorPalette *rgb_palette_data)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0042c95d) */

void __cdecl cockpit_ckptutil_c_buildHardwarePalettes_FUN_0042c8f0(SRGBColorPalette *rgb_palette_data)

{
  uchar *puVar1;
  uchar *puVar2;
  SRGBColor *pSVar3;
  int iVar4;
  int iVar5;
  
  g_SRGBColorPalette_PTR_01c35210 = rgb_palette_data;
  if (g_INT_006141c0 != 0x20) {
    iVar4 = 0;
    do {
      pSVar3 = (SRGBColor *)&rgb_palette_data->colors[0].r;
      puVar1 = &rgb_palette_data->colors[0].g;
      puVar2 = &rgb_palette_data->colors[0].b;
      iVar5 = iVar4 + 2;
      rgb_palette_data = (SRGBColorPalette *)((int)rgb_palette_data + 3);
      *(ushort *)((int)g_USHORT_ARRAY_01c35614 + iVar4) =
           (ushort)((uint)*puVar1 / (uint)g_INT_01c35824 <<
                   (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f)) |
           (ushort)((uint)pSVar3->r / (uint)g_INT_01c35818 <<
                   (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f)) |
           (ushort)((uint)*puVar2 / (uint)g_INT_01c35830 <<
                   (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f));
      iVar4 = iVar5;
    } while (iVar5 != 0x200);
    return;
  }
  iVar4 = 0;
  do {
    puVar1 = &rgb_palette_data->colors[0].g;
    pSVar3 = (SRGBColor *)&rgb_palette_data->colors[0].r;
    puVar2 = &rgb_palette_data->colors[0].b;
    iVar5 = iVar4 + 4;
    rgb_palette_data = (SRGBColorPalette *)((int)rgb_palette_data + 3);
    *(uint *)((int)g_UINT_ARRAY_01c35214 + iVar4) =
         (uint)*puVar2 << (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f) |
         (uint)pSVar3->r << (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f) |
         (uint)*puVar1 << (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f);
    iVar4 = iVar5;
  } while (iVar5 != 0x400);
  return;
}
