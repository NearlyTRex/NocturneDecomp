// Name: engine_special.cpp_setColorTable16_FUN_0055f890
// Address: 0055f890
// Address Range: [[0055f890, 0055f8be]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setColorTable16_FUN_0055f890(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_setColorTable16_FUN_0055f890(void)

{
  int iVar1;
  
  if (_DAT_01c37788 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_0264bc2c)(&DAT_01c35838,&DAT_01c34910);
  if (iVar1 != 0) {
    wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004d0d10();
  }
  return iVar1;
}
