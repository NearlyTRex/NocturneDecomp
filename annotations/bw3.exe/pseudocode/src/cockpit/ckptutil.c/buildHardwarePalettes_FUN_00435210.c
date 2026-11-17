// Name: cockpit_ckptutil.c_buildHardwarePalettes_FUN_00435210
// Address: 00435210
// Address Range: [[00435210, 00435309]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_buildHardwarePalettes_FUN_00435210(SRGBColorPalette *rgb_palette_data)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0043527d) */

void __cdecl cockpit_ckptutil_c_buildHardwarePalettes_FUN_00435210(SRGBColorPalette *rgb_palette_data)

{
  uchar *puVar1;
  uchar *puVar2;
  SRGBColor *pSVar3;
  int iVar4;
  int iVar5;
  
  g_CurrentPalette = rgb_palette_data;
  if (g_INT_005fba20 != 0x20) {
    iVar4 = 0;
    do {
      pSVar3 = (SRGBColor *)&rgb_palette_data->colors[0].r;
      puVar1 = &rgb_palette_data->colors[0].g;
      puVar2 = &rgb_palette_data->colors[0].b;
      iVar5 = iVar4 + 2;
      rgb_palette_data = (SRGBColorPalette *)((int)rgb_palette_data + 3);
      *(ushort *)((int)g_Hardware16BitPalette + iVar4) =
           (ushort)((uint)*puVar1 / (uint)g_INT_01c6af84 <<
                   (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f)) |
           (ushort)((uint)pSVar3->r / (uint)g_INT_01c6af78 <<
                   (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f)) |
           (ushort)((uint)*puVar2 / (uint)g_INT_01c6af90 <<
                   (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f));
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
    *(uint *)((int)g_Hardware32BitPalette + iVar4) =
         (uint)*puVar2 << (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f) |
         (uint)pSVar3->r << (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f) |
         (uint)*puVar1 << (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f);
    iVar4 = iVar5;
  } while (iVar5 != 0x400);
  return;
}
