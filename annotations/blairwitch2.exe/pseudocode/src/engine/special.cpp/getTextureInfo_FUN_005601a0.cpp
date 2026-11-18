// Name: engine_special.cpp_getTextureInfo_FUN_005601a0
// Address: 005601a0
// Address Range: [[005601a0, 005601ba]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_getTextureInfo_FUN_005601a0(int texture_size)

#include "nocturne.h"

int __cdecl engine_special_cpp_getTextureInfo_FUN_005601a0(int texture_size)

{
  int iVar1;
  
  if (g_INT_01c37788 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_0264bc5c)(texture_size);
  return iVar1;
}
