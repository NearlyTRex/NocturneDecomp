// Name: cockpit_ckptutil.c_buildHardwarePalettes_FUN_00435210
// Address: 00435210
// Address Range: [[00435210, 00435309]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_buildHardwarePalettes_FUN_00435210(SRGBColorPalette *rgb_palette_data)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0043527d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_ckptutil_c_buildHardwarePalettes_FUN_00435210(SRGBColorPalette *rgb_palette_data)

{
  uchar *puVar1;
  uchar *puVar2;
  SRGBColor *pSVar3;
  int iVar4;
  int iVar5;
  
  _DAT_01c6a970 = rgb_palette_data;
  if (DAT_005fba20 != 0x20) {
    iVar4 = 0;
    do {
      pSVar3 = (SRGBColor *)&rgb_palette_data->colors[0].r;
      puVar1 = &rgb_palette_data->colors[0].g;
      puVar2 = &rgb_palette_data->colors[0].b;
      iVar5 = iVar4 + 2;
      rgb_palette_data = (SRGBColorPalette *)((int)rgb_palette_data + 3);
      *(ushort *)(iVar4 + 0x1c6ad74) =
           (ushort)(*puVar1 / _DAT_01c6af84 << (DAT_01c6af80 & 0x1f)) |
           (ushort)(pSVar3->r / _DAT_01c6af78 << (DAT_01c6af74 & 0x1f)) |
           (ushort)(*puVar2 / _DAT_01c6af90 << (DAT_01c6af8c & 0x1f));
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
    *(uint *)(&DAT_01c6a974 + iVar4) =
         (uint)*puVar2 << (DAT_01c6af8c & 0x1f) |
         (uint)pSVar3->r << (DAT_01c6af74 & 0x1f) | (uint)*puVar1 << (DAT_01c6af80 & 0x1f);
    iVar4 = iVar5;
  } while (iVar5 != 0x400);
  return;
}
