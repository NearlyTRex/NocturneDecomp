// Name: engine_special.cpp_setFogColor_FUN_005828e0
// Address: 005828e0
// Address Range: [[005828e0, 00582919]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setFogColor_FUN_005828e0(int red,int green,int blue)

#include "nocturne.h"

int __cdecl engine_special_cpp_setFogColor_FUN_005828e0(int red,int green,int blue)

{
  int iVar1;
  
  g_INT_02c834b8 = green;
  g_INT_02c834bc = blue;
  g_INT_02c834b4 = red;
  if (g_INT_01c50948 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_02c833ec)(red,green,blue);
  return iVar1;
}
