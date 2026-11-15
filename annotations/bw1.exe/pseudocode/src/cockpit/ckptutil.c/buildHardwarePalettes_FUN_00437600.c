// Name: cockpit_ckptutil.c_buildHardwarePalettes_FUN_00437600
// Address: 00437600
// Address Range: [[00437600, 004376f9]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_buildHardwarePalettes_FUN_00437600(SRGBColorPalette *rgb_palette_data)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0043766d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_ckptutil_c_buildHardwarePalettes_FUN_00437600(SRGBColorPalette *rgb_palette_data)

{
  uchar *puVar1;
  uchar *puVar2;
  SRGBColor *pSVar3;
  int iVar4;
  int iVar5;
  
  _DAT_01c4e3d0 = rgb_palette_data;
  if (DAT_0061b4a0 != 0x20) {
    iVar4 = 0;
    do {
      pSVar3 = (SRGBColor *)&rgb_palette_data->colors[0].r;
      puVar1 = &rgb_palette_data->colors[0].g;
      puVar2 = &rgb_palette_data->colors[0].b;
      iVar5 = iVar4 + 2;
      rgb_palette_data = (SRGBColorPalette *)((int)rgb_palette_data + 3);
      *(ushort *)(iVar4 + 0x1c4e7d4) =
           (ushort)(*puVar1 / _DAT_01c4e9e4 << (DAT_01c4e9e0 & 0x1f)) |
           (ushort)(pSVar3->r / _DAT_01c4e9d8 << (DAT_01c4e9d4 & 0x1f)) |
           (ushort)(*puVar2 / _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f));
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
    *(uint *)(&DAT_01c4e3d4 + iVar4) =
         (uint)*puVar2 << (DAT_01c4e9ec & 0x1f) |
         (uint)pSVar3->r << (DAT_01c4e9d4 & 0x1f) | (uint)*puVar1 << (DAT_01c4e9e0 & 0x1f);
    iVar4 = iVar5;
  } while (iVar5 != 0x400);
  return;
}
