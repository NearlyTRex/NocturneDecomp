// Name: engine_special.cpp_setMipMapLevel_FUN_005b7440
// Address: 005b7440
// Address Range: [[005b7440, 005b745a]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setMipMapLevel_FUN_005b7440(int mipmap_level)

#include "nocturne.h"

int __cdecl engine_special_cpp_setMipMapLevel_FUN_005b7440(int mipmap_level)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_setMipMapLevel)(mipmap_level);
  return iVar1;
}
