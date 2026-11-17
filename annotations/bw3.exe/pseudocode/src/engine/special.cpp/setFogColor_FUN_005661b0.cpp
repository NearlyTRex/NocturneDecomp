// Name: engine_special.cpp_setFogColor_FUN_005661b0
// Address: 005661b0
// Address Range: [[005661b0, 005661e9]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setFogColor_FUN_005661b0(int red,int green,int blue)

#include "nocturne.h"

int __cdecl engine_special_cpp_setFogColor_FUN_005661b0(int red,int green,int blue)

{
  int iVar1;
  
  g_INT_02cf6114 = green;
  g_INT_02cf6118 = blue;
  g_INT_02cf6110 = red;
  if (g_INT_01c6cee8 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_02cf6048)(red,green,blue);
  return iVar1;
}
