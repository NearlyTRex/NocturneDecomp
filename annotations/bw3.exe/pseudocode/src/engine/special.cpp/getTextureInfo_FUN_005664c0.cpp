// Name: engine_special.cpp_getTextureInfo_FUN_005664c0
// Address: 005664c0
// Address Range: [[005664c0, 005664da]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_getTextureInfo_FUN_005664c0(int texture_size)

#include "nocturne.h"

int __cdecl engine_special_cpp_getTextureInfo_FUN_005664c0(int texture_size)

{
  int iVar1;
  
  if (g_INT_01c6cee8 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_APIDLL_getTextureInfo)(texture_size);
  return iVar1;
}
