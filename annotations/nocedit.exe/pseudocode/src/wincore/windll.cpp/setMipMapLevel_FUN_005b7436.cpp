// Name: wincore_windll.cpp_setMipMapLevel_FUN_005b7436
// Address: 005b7436
// Address Range: [[005b7436, 005b745a]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_setMipMapLevel_FUN_005b7436(int mipmap_level)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_setMipMapLevel_FUN_005b7436(int mipmap_level)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_setMipMapLevel)(mipmap_level);
  return iVar1;
}
