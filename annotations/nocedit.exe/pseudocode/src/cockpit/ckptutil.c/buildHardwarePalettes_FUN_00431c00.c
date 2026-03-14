// Name: cockpit_ckptutil.c_buildHardwarePalettes_FUN_00431c00
// Address: 00431c00
// Address Range: [[00431c00, 00431cf9]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_buildHardwarePalettes_FUN_00431c00(char *rgb_palette_data)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00431c6d) */

void __cdecl cockpit_ckptutil_c_buildHardwarePalettes_FUN_00431c00(char *rgb_palette_data)

{
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar3;
  byte *pbVar2;
  byte *pbVar1;
  
  g_CurrentPalette = (byte *)rgb_palette_data;
  if (g_BitsPerPixel != 0x20) {
    iVar6 = 0;
    do {
      bVar5 = *rgb_palette_data;
      pbVar3 = (byte *)(rgb_palette_data + 1);
      pbVar4 = (byte *)(rgb_palette_data + 2);
      iVar7 = iVar6 + 2;
      rgb_palette_data = rgb_palette_data + 3;
      *(ushort *)((int)g_Hardware16BitPalette + iVar6) =
           (ushort)((uint)*pbVar3 / (uint)g_GreenScaleFactor << (g_GreenBitPosition.bytes[0] & 0x1f)
                   ) |
           (ushort)((uint)bVar5 / (uint)g_RedScaleFactor << (g_RedBitPosition.bytes[0] & 0x1f)) |
           (ushort)((uint)*pbVar4 / (uint)g_BlueScaleFactor << (g_BlueBitPosition.bytes[0] & 0x1f));
      iVar6 = iVar7;
    } while (iVar7 != 0x200);
    return;
  }
  iVar4 = 0;
  do {
    pbVar1 = (byte *)(rgb_palette_data + 1);
    bVar3 = *rgb_palette_data;
    pbVar2 = (byte *)(rgb_palette_data + 2);
    iVar5 = iVar4 + 4;
    rgb_palette_data = rgb_palette_data + 3;
    *(uint *)((int)g_Hardware32BitPalette + iVar4) =
         (uint)*pbVar2 << (g_BlueBitPosition.bytes[0] & 0x1f) |
         (uint)bVar3 << (g_RedBitPosition.bytes[0] & 0x1f) |
         (uint)*pbVar1 << (g_GreenBitPosition.bytes[0] & 0x1f);
    iVar4 = iVar5;
  } while (iVar5 != 0x400);
  return;
}
