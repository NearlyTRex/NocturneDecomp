// Name: engine_special.cpp_setColorTable16_FUN_00565bb0
// Address: 00565bb0
// Address Range: [[00565bb0, 00565bde]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setColorTable16_FUN_00565bb0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_setColorTable16_FUN_00565bb0(void)

{
  int iVar1;
  
  if (_DAT_01c6cee8 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02cf6058)(&DAT_01c6af98,&DAT_01c6a070);
  if (iVar1 != 0) {
    wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004d4eb0();
  }
  return iVar1;
}
