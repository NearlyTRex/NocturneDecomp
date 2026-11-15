// Name: engine_special.cpp_setMipMapLevel_FUN_00565a70
// Address: 00565a70
// Address Range: [[00565a70, 00565a8a]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setMipMapLevel_FUN_00565a70(int mipmap_level)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_setMipMapLevel_FUN_00565a70(int mipmap_level)

{
  int iVar1;
  
  if (_DAT_01c6cee8 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02cf601c)(mipmap_level);
  return iVar1;
}
