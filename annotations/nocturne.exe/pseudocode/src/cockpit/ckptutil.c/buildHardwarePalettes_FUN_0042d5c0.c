// Name: cockpit_ckptutil.c_buildHardwarePalettes_FUN_0042d5c0
// Address: 0042d5c0
// Address Range: [[0042d5c0, 0042d6b9]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_buildHardwarePalettes_FUN_0042d5c0(SRGBColorPalette *rgb_palette_data)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0042d62d) */

void __cdecl cockpit_ckptutil_c_buildHardwarePalettes_FUN_0042d5c0(SRGBColorPalette *rgb_palette_data)

{
  uchar *puVar1;
  uchar *puVar2;
  SRGBColor *pSVar3;
  int iVar4;
  int iVar5;
  
  g_CurrentPalette = rgb_palette_data;
  if (g_BitsPerPixel != 0x20) {
    iVar4 = 0;
    do {
      pSVar3 = (SRGBColor *)&rgb_palette_data->colors[0].r;
      puVar1 = &rgb_palette_data->colors[0].g;
      puVar2 = &rgb_palette_data->colors[0].b;
      iVar5 = iVar4 + 2;
      rgb_palette_data = (SRGBColorPalette *)((int)rgb_palette_data + 3);
      *(ushort *)((int)g_Hardware16BitPalette + iVar4) =
           (ushort)((uint)*puVar1 / (uint)g_GreenScaleFactor << (g_GreenBitPosition.bytes[0] & 0x1f)
                   ) |
           (ushort)((uint)pSVar3->r / (uint)g_RedScaleFactor << (g_RedBitPosition.bytes[0] & 0x1f))
           | (ushort)((uint)*puVar2 / (uint)g_BlueScaleFactor << (g_BlueBitPosition.bytes[0] & 0x1f)
                     );
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
         (uint)*puVar2 << (g_BlueBitPosition.bytes[0] & 0x1f) |
         (uint)pSVar3->r << (g_RedBitPosition.bytes[0] & 0x1f) |
         (uint)*puVar1 << (g_GreenBitPosition.bytes[0] & 0x1f);
    iVar4 = iVar5;
  } while (iVar5 != 0x400);
  return;
}
