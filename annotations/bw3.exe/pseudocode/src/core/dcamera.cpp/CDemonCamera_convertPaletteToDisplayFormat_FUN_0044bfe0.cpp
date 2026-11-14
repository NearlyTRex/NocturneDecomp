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
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (DAT_005fba20 == 0x20) {
      uVar2 = (uint)*(byte *)(iVar1 + 0xb9da4a) << (DAT_01c6af8c & 0x1f) |
              (uint)(byte)(&DAT_00b9da48)[iVar1] << (DAT_01c6af74 & 0x1f) |
              (uint)*(byte *)(iVar1 + 0xb9da49) << (DAT_01c6af80 & 0x1f);
    }
    else {
      uVar2 = (uint)(byte)(&DAT_00b9da48)[iVar1] << 0x10 | (uint)*(byte *)(iVar1 + 0xb9da49) << 8 |
              (uint)*(byte *)(iVar1 + 0xb9da4a);
    }
    iVar4 = iVar3 + 4;
    iVar1 = iVar1 + 3;
    *(uint *)(iVar3 + 0xb9dd4c) = uVar2;
    iVar3 = iVar4;
  } while (iVar4 != 0x400);
  return;
}
