// Name: engine_special.cpp_setFogColor_FUN_005828e0
// Address: 005828e0
// Address Range: [[005828e0, 00582919]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setFogColor_FUN_005828e0(int red,int green,int blue)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_setFogColor_FUN_005828e0(int red,int green,int blue)

{
  int iVar1;
  
  _DAT_02c834b8 = green;
  _DAT_02c834bc = blue;
  _DAT_02c834b4 = red;
  if (_DAT_01c50948 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02c833ec)(red,green,blue);
  return iVar1;
}
