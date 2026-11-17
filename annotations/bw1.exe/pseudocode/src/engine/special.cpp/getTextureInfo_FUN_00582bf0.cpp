// Name: engine_special.cpp_getTextureInfo_FUN_00582bf0
// Address: 00582bf0
// Address Range: [[00582bf0, 00582c0a]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_getTextureInfo_FUN_00582bf0(int texture_size)

#include "nocturne.h"

int __cdecl engine_special_cpp_getTextureInfo_FUN_00582bf0(int texture_size)

{
  int iVar1;
  
  if (g_INT_01c50948 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_02c8342c)(texture_size);
  return iVar1;
}
