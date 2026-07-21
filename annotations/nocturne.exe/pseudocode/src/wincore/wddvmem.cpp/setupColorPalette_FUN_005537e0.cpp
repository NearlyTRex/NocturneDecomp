// Name: wincore_wddvmem.cpp_setupColorPalette_FUN_005537e0
// Address: 005537e0
// Address Range: [[005537e0, 00553907]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_setupColorPalette_FUN_005537e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_setupColorPalette_FUN_005537e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_01c02594 != 0) {
    (*_DAT_02dc9ddc)(&DAT_01c00648,&DAT_01bff720);
    wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004b63f0();
    return;
  }
  if (_DAT_02ddf55c != (int *)0x0) {
    (**(code **)(*_DAT_02ddf55c + 8))(_DAT_02ddf55c);
    _DAT_02ddf55c = (int *)0x0;
  }
  if (DAT_005b7624 == 8) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      *(byte *)(iVar2 + 0x2ddf570) = (&DAT_01c00648)[iVar3];
      *(byte *)(iVar2 + 0x2ddf571) = *(byte *)(iVar3 + 0x1c00649);
      *(byte *)(iVar2 + 0x2ddf572) = *(byte *)(iVar3 + 0x1c0064a);
      iVar3 = iVar3 + 3;
      *(byte *)(iVar2 + 0x2ddf573) = 1;
      iVar2 = iVar1;
    } while (iVar1 != 0x400);
    iVar2 = (**(code **)(*_DAT_02ddf550 + 0x14))(_DAT_02ddf550,4,0x2ddf570,&DAT_02ddf55c,0);
    if (iVar2 != 0) {
      _DAT_01cc4800 = "..\\wincore\\wddvmem.cpp";
      _DAT_01cc4804 = 0x2f1;
      FUN_004c8440("setpal - Unable to create palette object");
    }
    iVar2 = (**(code **)(*_DAT_02ddf554 + 0x7c))(_DAT_02ddf554,_DAT_02ddf55c);
    if (iVar2 != 0) {
      _DAT_01cc4800 = "..\\wincore\\wddvmem.cpp";
      _DAT_01cc4804 = 0x2f7;
      FUN_004c8440("setpal - Unable to set front buffer palette");
    }
  }
  if (DAT_005b7624 < 9) {
    return;
  }
  wincore_wddvmem_cpp_analyzePixelFormat_FUN_00553620();
  return;
}
