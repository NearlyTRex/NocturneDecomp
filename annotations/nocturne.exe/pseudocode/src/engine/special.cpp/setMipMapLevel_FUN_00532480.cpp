// Name: engine_special.cpp_setMipMapLevel_FUN_00532480
// Address: 00532480
// Address Range: [[00532480, 0053249a]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setMipMapLevel_FUN_00532480(int mipmap_level)

#include "nocturne.h"

int __cdecl engine_special_cpp_setMipMapLevel_FUN_00532480(int mipmap_level)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_setMipMapLevel)(mipmap_level);
  return iVar1;
}
