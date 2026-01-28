// Name: wincore_windll.cpp_setFogColor_FUN_005b7b80
// Address: 005b7b80
// Address Range: [[005b7b80, 005b7bb9]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_setFogColor_FUN_005b7b80(int red,int green,int blue)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_setFogColor_FUN_005b7b80(int red,int green,int blue)

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
