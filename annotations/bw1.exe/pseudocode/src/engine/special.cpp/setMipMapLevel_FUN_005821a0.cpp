// Name: engine_special.cpp_setMipMapLevel_FUN_005821a0
// Address: 005821a0
// Address Range: [[005821a0, 005821ba]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setMipMapLevel_FUN_005821a0(int mipmap_level)

#include "nocturne.h"

int __cdecl engine_special_cpp_setMipMapLevel_FUN_005821a0(int mipmap_level)

{
  int iVar1;
  
  if (g_INT_01c50948 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_02c833c0)(mipmap_level);
  return iVar1;
}
