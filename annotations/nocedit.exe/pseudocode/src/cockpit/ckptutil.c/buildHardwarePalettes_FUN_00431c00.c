// Name: cockpit_ckptutil.c_buildHardwarePalettes_FUN_00431c00
// Address: 00431c00
// Address Range: [[00431c00, 00431cf9]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_buildHardwarePalettes_FUN_00431c00(SRGBColorPalette *rgb_palette_data)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00431c6d) */

void __cdecl cockpit_ckptutil_c_buildHardwarePalettes_FUN_00431c00(SRGBColorPalette *rgb_palette_data)

{
  uchar *puVar1;
  uchar *puVar2;
  SRGBColor *pSVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar3;
  byte *pbVar2;
  byte *pbVar1;
  
  g_CurrentPalette = rgb_palette_data;
  if (g_BitsPerPixel != 0x20) {
    iVar6 = 0;
    do {
      pSVar3 = (SRGBColor *)&rgb_palette_data->colors[0].r;
      puVar1 = &rgb_palette_data->colors[0].g;
      puVar2 = &rgb_palette_data->colors[0].b;
      iVar7 = iVar6 + 2;
      rgb_palette_data = (SRGBColorPalette *)((int)rgb_palette_data + 3);
      *(ushort *)((int)g_Hardware16BitPalette + iVar6) =
           (ushort)((uint)*puVar1 / (uint)g_GreenScaleFactor << (g_GreenBitPosition.bytes[0] & 0x1f)
                   ) |
           (ushort)((uint)pSVar3->r / (uint)g_RedScaleFactor << (g_RedBitPosition.bytes[0] & 0x1f))
           | (ushort)((uint)*puVar2 / (uint)g_BlueScaleFactor << (g_BlueBitPosition.bytes[0] & 0x1f)
                     );
      iVar6 = iVar7;
    } while (iVar7 != 0x200);
    return;
  }
  iVar4 = 0;
  do {
    pbVar1 = &rgb_palette_data->colors[0].g;
    bVar3 = ((SRGBColor *)&rgb_palette_data->colors[0].r)->r;
    pbVar2 = &rgb_palette_data->colors[0].b;
    iVar5 = iVar4 + 4;
    rgb_palette_data = (SRGBColorPalette *)((int)rgb_palette_data + 3);
    *(uint *)((int)g_Hardware32BitPalette + iVar4) =
         (uint)*pbVar2 << (g_BlueBitPosition.bytes[0] & 0x1f) |
         (uint)bVar3 << (g_RedBitPosition.bytes[0] & 0x1f) |
         (uint)*pbVar1 << (g_GreenBitPosition.bytes[0] & 0x1f);
    iVar4 = iVar5;
  } while (iVar5 != 0x400);
  return;
}
