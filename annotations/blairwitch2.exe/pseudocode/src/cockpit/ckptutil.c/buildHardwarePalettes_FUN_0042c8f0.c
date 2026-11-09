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
  SRGBColorPalette *pSVar1;
  SRGBColorPalette *pSVar2;
  SRGBColorPalette SVar3;
  int iVar4;
  int iVar5;
  
  _DAT_01c35210 = rgb_palette_data;
  if (DAT_006141c0 != 0x20) {
    iVar4 = 0;
    do {
      SVar3 = *rgb_palette_data;
      pSVar1 = rgb_palette_data + 1;
      pSVar2 = rgb_palette_data + 2;
      iVar5 = iVar4 + 2;
      rgb_palette_data = rgb_palette_data + 3;
      *(ushort *)(iVar4 + 0x1c35614) =
           (ushort)((byte)*pSVar1 / _DAT_01c35824 << (DAT_01c35820 & 0x1f)) |
           (ushort)((byte)SVar3 / _DAT_01c35818 << (DAT_01c35814 & 0x1f)) |
           (ushort)((byte)*pSVar2 / _DAT_01c35830 << (DAT_01c3582c & 0x1f));
      iVar4 = iVar5;
    } while (iVar5 != 0x200);
    return;
  }
  iVar4 = 0;
  do {
    pSVar1 = rgb_palette_data + 1;
    SVar3 = *rgb_palette_data;
    pSVar2 = rgb_palette_data + 2;
    iVar5 = iVar4 + 4;
    rgb_palette_data = rgb_palette_data + 3;
    *(uint *)(&DAT_01c35214 + iVar4) =
         (uint)(byte)*pSVar2 << (DAT_01c3582c & 0x1f) |
         (uint)(byte)SVar3 << (DAT_01c35814 & 0x1f) | (uint)(byte)*pSVar1 << (DAT_01c35820 & 0x1f);
    iVar4 = iVar5;
  } while (iVar5 != 0x400);
  return;
}
