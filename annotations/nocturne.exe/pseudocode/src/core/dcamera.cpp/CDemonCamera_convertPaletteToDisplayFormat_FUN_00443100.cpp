// Name: core_dcamera.cpp_CDemonCamera_convertPaletteToDisplayFormat_FUN_00443100
// Address: 00443100
// Address Range: [[00443100, 00443173]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_convertPaletteToDisplayFormat_FUN_00443100(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_convertPaletteToDisplayFormat_FUN_00443100(CDemonCamera *this_ptr)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (DAT_005b7624 == 0x20) {
      uVar2 = (uint)*(byte *)(iVar1 + 0xb0dafa) << (DAT_01c0063c & 0x1f) |
              (uint)(byte)(&DAT_00b0daf8)[iVar1] << (DAT_01c00624 & 0x1f) |
              (uint)*(byte *)(iVar1 + 0xb0daf9) << (DAT_01c00630 & 0x1f);
    }
    else {
      uVar2 = (uint)(byte)(&DAT_00b0daf8)[iVar1] << 0x10 | (uint)*(byte *)(iVar1 + 0xb0daf9) << 8 |
              (uint)*(byte *)(iVar1 + 0xb0dafa);
    }
    iVar4 = iVar3 + 4;
    iVar1 = iVar1 + 3;
    *(uint *)(iVar3 + 0xb0ddfc) = uVar2;
    iVar3 = iVar4;
  } while (iVar4 != 0x400);
  return;
}
