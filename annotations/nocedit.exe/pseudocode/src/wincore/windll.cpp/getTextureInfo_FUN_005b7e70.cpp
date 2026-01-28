// Name: wincore_windll.cpp_getTextureInfo_FUN_005b7e70
// Address: 005b7e70
// Address Range: [[005b7e70, 005b7e8a]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_getTextureInfo_FUN_005b7e70(int texture_size)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_getTextureInfo_FUN_005b7e70(int texture_size)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_getTextureInfo)(texture_size);
  return iVar1;
}
