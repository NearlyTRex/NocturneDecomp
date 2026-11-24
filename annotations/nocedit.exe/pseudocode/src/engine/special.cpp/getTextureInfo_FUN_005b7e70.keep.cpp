// Name: engine_special.cpp_getTextureInfo_FUN_005b7e70
// Address: 005b7e70
// MANUAL RECONSTRUCTION
// Address Range: [[005b7e70, 005b7e8a]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_getTextureInfo_FUN_005b7e70(int texture_size)

#include "nocturne.h"

int __cdecl engine_special_cpp_getTextureInfo_FUN_005b7e70(int texture_size)

{
  int iVar1;

  if (g_UseExternalRenderer == 0) {
    return 0;
  }
#if !NOCTURNE_AUTHENTIC_D3D_OPTIONS
  if (g_APIDLL_getTextureInfo == (APIDLL_getTextureInfo *)0x0) {
    return 0;
  }
#endif
  iVar1 = (*g_APIDLL_getTextureInfo)(texture_size);
  return iVar1;
}
