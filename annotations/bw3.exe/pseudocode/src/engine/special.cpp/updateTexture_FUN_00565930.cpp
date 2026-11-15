// Name: engine_special.cpp_updateTexture_FUN_00565930
// Address: 00565930
// Address Range: [[00565930, 0056596a]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_updateTexture_FUN_00565930(SMRGLTextureBasic *texture_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_updateTexture_FUN_00565930(SMRGLTextureBasic *texture_info)

{
  int iVar1;
  
  if (_DAT_01c6cee8 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02cf6010)(texture_info,DAT_005fba28,_DAT_01c6ced0,&DAT_01c6af98,_DAT_01c6ced4);
  return iVar1;
}
