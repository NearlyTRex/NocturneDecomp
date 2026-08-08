// Name: engine_special.cpp_setFogColor_FUN_00532af0
// Address: 00532af0
// Address Range: [[00532af0, 00532b29]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setFogColor_FUN_00532af0(int red,int green,int blue)

#include "nocturne.h"

int __cdecl engine_special_cpp_setFogColor_FUN_00532af0(int red,int green,int blue)

{
  int iVar1;
  
  g_FogColorGreen = green;
  g_FogColorBlue = blue;
  g_FogColorRed = red;
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_setFogColor)(red,green,blue);
  return iVar1;
}
