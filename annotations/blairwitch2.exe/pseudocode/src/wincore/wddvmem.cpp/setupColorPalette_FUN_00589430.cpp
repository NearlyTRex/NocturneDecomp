// Name: wincore_wddvmem.cpp_setupColorPalette_FUN_00589430
// Address: 00589430
// Address Range: [[00589430, 00589557]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_setupColorPalette_FUN_00589430(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_setupColorPalette_FUN_00589430(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_01c37788 != 0) {
    (*_DAT_0264bc2c)(&DAT_01c35838,&DAT_01c34910);
    wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004d0d10();
    return;
  }
  if (_DAT_02661aec != (int *)0x0) {
    (**(code **)(*_DAT_02661aec + 8))(_DAT_02661aec);
    _DAT_02661aec = (int *)0x0;
  }
  if (DAT_006141c0 == 8) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      *(byte *)(iVar2 + 0x2661b00) = (&DAT_01c35838)[iVar3];
      *(byte *)(iVar2 + 0x2661b01) = (&DAT_01c35839)[iVar3];
      *(byte *)(iVar2 + 0x2661b02) = (&DAT_01c3583a)[iVar3];
      iVar3 = iVar3 + 3;
      *(byte *)(iVar2 + 0x2661b03) = 1;
      iVar2 = iVar1;
    } while (iVar1 != 0x400);
    iVar2 = (**(code **)(*_DAT_02661ae0 + 0x14))(_DAT_02661ae0,4,0x2661b00,&DAT_02661aec,0);
    if (iVar2 != 0) {
      _DAT_01d046a0 = "..\\wincore\\wddvmem.cpp";
      _DAT_01d046a4 = 0x2d7;
      core_main_c_FUN_004e4500("setpal - Unable to create palette object");
    }
    iVar2 = (**(code **)(*_DAT_02661ae4 + 0x7c))(_DAT_02661ae4,_DAT_02661aec);
    if (iVar2 != 0) {
      _DAT_01d046a0 = "..\\wincore\\wddvmem.cpp";
      _DAT_01d046a4 = 0x2dd;
      core_main_c_FUN_004e4500("setpal - Unable to set front buffer palette");
    }
  }
  if (DAT_006141c0 < 9) {
    return;
  }
  wincore_wddvmem_cpp_analyzePixelFormat_FUN_00589270();
  return;
}
