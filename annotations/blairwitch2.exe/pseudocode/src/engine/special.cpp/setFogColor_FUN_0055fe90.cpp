// Name: engine_special.cpp_setFogColor_FUN_0055fe90
// Address: 0055fe90
// Address Range: [[0055fe90, 0055fec9]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setFogColor_FUN_0055fe90(int red,int green,int blue)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_setFogColor_FUN_0055fe90(int red,int green,int blue)

{
  int iVar1;
  
  _DAT_0264bce8 = green;
  _DAT_0264bcec = blue;
  _DAT_0264bce4 = red;
  if (_DAT_01c37788 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_0264bc1c)(red,green,blue);
  return iVar1;
}
