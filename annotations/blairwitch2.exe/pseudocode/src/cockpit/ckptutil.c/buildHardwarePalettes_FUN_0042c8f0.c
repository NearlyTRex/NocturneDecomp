// Name: cockpit_ckptutil.c_buildHardwarePalettes_FUN_0042c8f0
// Address: 0042c8f0
// Address Range: [[0042c8f0, 0042c9e9]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_buildHardwarePalettes_FUN_0042c8f0(SRGBColorPalette *rgb_palette_data)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0042c95d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_ckptutil_c_buildHardwarePalettes_FUN_0042c8f0(SRGBColorPalette *rgb_palette_data)

{
  uchar *puVar1;
  uchar *puVar2;
  SRGBColor *pSVar3;
  int iVar4;
  int iVar5;
  
  _DAT_01c35210 = rgb_palette_data;
  if (DAT_006141c0 != 0x20) {
    iVar4 = 0;
    do {
      pSVar3 = (SRGBColor *)&rgb_palette_data->colors[0].r;
      puVar1 = &rgb_palette_data->colors[0].g;
      puVar2 = &rgb_palette_data->colors[0].b;
      iVar5 = iVar4 + 2;
      rgb_palette_data = (SRGBColorPalette *)((int)rgb_palette_data + 3);
      *(ushort *)(iVar4 + 0x1c35614) =
           (ushort)(*puVar1 / _DAT_01c35824 << (DAT_01c35820 & 0x1f)) |
           (ushort)(pSVar3->r / _DAT_01c35818 << (DAT_01c35814 & 0x1f)) |
           (ushort)(*puVar2 / _DAT_01c35830 << (DAT_01c3582c & 0x1f));
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
    *(uint *)(&DAT_01c35214 + iVar4) =
         (uint)*puVar2 << (DAT_01c3582c & 0x1f) |
         (uint)pSVar3->r << (DAT_01c35814 & 0x1f) | (uint)*puVar1 << (DAT_01c35820 & 0x1f);
    iVar4 = iVar5;
  } while (iVar5 != 0x400);
  return;
}
