// Name: engine_special.cpp_setMipMapLevel_FUN_0055f750
// Address: 0055f750
// Address Range: [[0055f750, 0055f76a]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setMipMapLevel_FUN_0055f750(int mipmap_level)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_setMipMapLevel_FUN_0055f750(int mipmap_level)

{
  int iVar1;
  
  if (_DAT_01c37788 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_0264bbf0)(mipmap_level);
  return iVar1;
}
