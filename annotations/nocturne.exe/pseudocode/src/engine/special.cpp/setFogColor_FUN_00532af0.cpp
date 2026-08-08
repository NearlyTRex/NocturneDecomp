// Name: engine_special.cpp_setFogColor_FUN_00532af0
// Address: 00532af0
// Address Range: [[00532af0, 00532b29]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setFogColor_FUN_00532af0(int red,int green,int blue)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_setFogColor_FUN_00532af0(int red,int green,int blue)

{
  int iVar1;
  
  _DAT_02dc9e10 = green;
  _DAT_02dc9e14 = blue;
  _DAT_02dc9e0c = red;
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_setFogColor)(red,green,blue);
  return iVar1;
}
