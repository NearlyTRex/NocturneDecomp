// Name: core_dcamera.cpp_CDemonCamera_convertPaletteToDisplayFormat_FUN_0043e7e0
// Address: 0043e7e0
// Address Range: [[0043e7e0, 0043e853]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_convertPaletteToDisplayFormat_FUN_0043e7e0(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_convertPaletteToDisplayFormat_FUN_0043e7e0(CDemonCamera *this_ptr)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (DAT_006141c0 == 0x20) {
      uVar2 = (uint)*(byte *)(iVar1 + 0xb65c9a) << (DAT_01c3582c & 0x1f) |
              (uint)(byte)(&DAT_00b65c98)[iVar1] << (DAT_01c35814 & 0x1f) |
              (uint)*(byte *)(iVar1 + 0xb65c99) << (DAT_01c35820 & 0x1f);
    }
    else {
      uVar2 = (uint)(byte)(&DAT_00b65c98)[iVar1] << 0x10 | (uint)*(byte *)(iVar1 + 0xb65c99) << 8 |
              (uint)*(byte *)(iVar1 + 0xb65c9a);
    }
    iVar4 = iVar3 + 4;
    iVar1 = iVar1 + 3;
    *(uint *)(iVar3 + 0xb65f9c) = uVar2;
    iVar3 = iVar4;
  } while (iVar4 != 0x400);
  return;
}
