// Name: core_dcamera.cpp_CDemonCamera_convertPaletteToDisplayFormat_FUN_0044bfe0
// Address: 0044bfe0
// Address Range: [[0044bfe0, 0044c053]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_convertPaletteToDisplayFormat_FUN_0044bfe0(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_convertPaletteToDisplayFormat_FUN_0044bfe0(CDemonCamera *this_ptr)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    uVar5 = (uint)(&g_CameraImagePaletteData.colors[0].g)[iVar1];
    uVar6 = (uint)(&g_CameraImagePaletteData.colors[0].r)[iVar1];
    uVar2 = (uint)(&g_CameraImagePaletteData.colors[0].b)[iVar1];
    if (g_INT_005fba20 == 0x20) {
      uVar2 = uVar2 << (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f) |
              uVar6 << (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f) |
              uVar5 << (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f);
    }
    else {
      uVar2 = uVar6 << 0x10 | uVar5 << 8 | uVar2;
    }
    iVar4 = iVar3 + 4;
    iVar1 = iVar1 + 3;
    *(uint *)((int)g_CameraConvertedPalette + iVar3) = uVar2;
    iVar3 = iVar4;
  } while (iVar4 != 0x400);
  return;
}
