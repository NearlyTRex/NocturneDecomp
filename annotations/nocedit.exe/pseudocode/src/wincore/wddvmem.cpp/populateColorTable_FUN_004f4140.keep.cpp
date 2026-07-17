// Name: wincore_wddvmem.cpp_populateColorTable_FUN_004f4140
// Address: 004f4140
// MANUAL RECONSTRUCTION
// Address Range: [[004f4140, 004f41be]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_populateColorTable_FUN_004f4140(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_populateColorTable_FUN_004f4140(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;

  iVar1 = 0;
  iVar3 = 0;
  do {
    if (g_BitsPerPixel == 0x20) {
      uVar2 = (uint)g_SourcePaletteData[iVar1 + 2] << (g_BlueBitPosition.bytes[0] & 0x1f) |
              (uint)g_SourcePaletteData[iVar1] << (g_RedBitPosition.bytes[0] & 0x1f) |
              (uint)g_SourcePaletteData[iVar1 + 1] << (g_GreenBitPosition.bytes[0] & 0x1f);
    }
    else {
      uVar2 = (uint)g_SourcePaletteData[iVar1] << 0x10 |
              (uint)g_SourcePaletteData[iVar1 + 1] << 8 |
              (uint)g_SourcePaletteData[iVar1 + 2];
    }
    g_ColorTable32[iVar3] = uVar2;
    iVar1 = iVar1 + 3;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x100);
  return;
}
