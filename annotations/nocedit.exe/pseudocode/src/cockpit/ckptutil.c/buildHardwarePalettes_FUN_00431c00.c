// Name: cockpit_ckptutil.c_buildHardwarePalettes_FUN_00431c00
// Address: 00431c00
// Address Range: [[00431c00, 00431cf9]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_buildHardwarePalettes_FUN_00431c00(char *rgb_palette_data)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00431c6d) */

void __cdecl cockpit_ckptutil_c_buildHardwarePalettes_FUN_00431c00(char *rgb_palette_data)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  
  g_CurrentPalette = (byte *)rgb_palette_data;
  if (g_BitsPerPixel != 0x20) {
    iVar4 = 0;
    do {
      bVar3 = *rgb_palette_data;
      pbVar1 = (byte *)rgb_palette_data + 1;
      pbVar2 = (byte *)rgb_palette_data + 2;
      iVar5 = iVar4 + 2;
      rgb_palette_data = (char *)((byte *)rgb_palette_data + 3);
      *(ushort *)((int)g_Hardware16BitPalette + iVar4) =
           (ushort)((uint)*pbVar1 / (uint)g_GreenScaleFactor << ((byte)g_GreenBitPosition & 0x1f)) |
           (ushort)((uint)bVar3 / (uint)g_RedScaleFactor << ((byte)g_RedBitPosition & 0x1f)) |
           (ushort)((uint)*pbVar2 / (uint)g_BlueScaleFactor << ((byte)g_BlueBitPosition & 0x1f));
      iVar4 = iVar5;
    } while (iVar5 != 0x200);
    return;
  }
  iVar4 = 0;
  do {
    pbVar1 = (byte *)rgb_palette_data + 1;
    bVar3 = *rgb_palette_data;
    pbVar2 = (byte *)rgb_palette_data + 2;
    iVar5 = iVar4 + 4;
    rgb_palette_data = (char *)((byte *)rgb_palette_data + 3);
    *(uint *)((int)g_Hardware32BitPalette + iVar4) =
         (uint)*pbVar2 << ((byte)g_BlueBitPosition & 0x1f) |
         (uint)bVar3 << ((byte)g_RedBitPosition & 0x1f) |
         (uint)*pbVar1 << ((byte)g_GreenBitPosition & 0x1f);
    iVar4 = iVar5;
  } while (iVar5 != 0x400);
  return;
}
