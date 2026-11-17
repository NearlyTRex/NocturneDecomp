// Name: engine_special.cpp_setFogColor_FUN_0055fe90
// Address: 0055fe90
// Address Range: [[0055fe90, 0055fec9]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setFogColor_FUN_0055fe90(int red,int green,int blue)

#include "nocturne.h"

int __cdecl engine_special_cpp_setFogColor_FUN_0055fe90(int red,int green,int blue)

{
  int iVar1;
  
  g_INT_0264bce8 = green;
  g_INT_0264bcec = blue;
  g_INT_0264bce4 = red;
  if (g_INT_01c37788 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_0264bc1c)(red,green,blue);
  return iVar1;
}
