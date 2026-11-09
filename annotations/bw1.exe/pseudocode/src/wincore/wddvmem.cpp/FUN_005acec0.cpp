// Name: wincore_wddvmem.cpp_FUN_005acec0
// Address: 005acec0
// Address Range: [[005acec0, 005acfe7]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_FUN_005acec0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_FUN_005acec0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_01c50948 != 0) {
    (*_DAT_02c833fc)(&DAT_01c4e9f8,&DAT_01c4dad0);
    wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004ecf70();
    return;
  }
  if (_DAT_02c9930c != (int *)0x0) {
    (**(code **)(*_DAT_02c9930c + 8))(_DAT_02c9930c);
    _DAT_02c9930c = (int *)0x0;
  }
  if (DAT_0061b4a0 == 8) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      *(byte *)(iVar2 + 0x2c99338) = (&DAT_01c4e9f8)[iVar3];
      *(byte *)(iVar2 + 0x2c99339) = (&DAT_01c4e9f9)[iVar3];
      *(byte *)(iVar2 + 0x2c9933a) = (&DAT_01c4e9fa)[iVar3];
      iVar3 = iVar3 + 3;
      *(byte *)(iVar2 + 0x2c9933b) = 1;
      iVar2 = iVar1;
    } while (iVar1 != 0x400);
    iVar2 = (**(code **)(*_DAT_02c99300 + 0x14))(_DAT_02c99300,4,0x2c99338,&DAT_02c9930c,0);
    if (iVar2 != 0) {
      _DAT_01d1d400 = "..\\wincore\\wddvmem.cpp";
      _DAT_01d1d404 = 0x301;
      core_main_c_FUN_005030e0("setpal - Unable to create palette object");
    }
    iVar2 = (**(code **)(*_DAT_02c99304 + 0x7c))(_DAT_02c99304,_DAT_02c9930c);
    if (iVar2 != 0) {
      _DAT_01d1d400 = "..\\wincore\\wddvmem.cpp";
      _DAT_01d1d404 = 0x307;
      core_main_c_FUN_005030e0("setpal - Unable to set front buffer palette");
    }
  }
  if (DAT_0061b4a0 < 9) {
    return;
  }
  wincore_wddvmem_cpp_FUN_005acd00();
  return;
}
