// Name: engine_special.cpp_selectTexture_FUN_005658f0
// Address: 005658f0
// Address Range: [[005658f0, 0056592a]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_selectTexture_FUN_005658f0(SMRGLTextureBasic *texture_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_selectTexture_FUN_005658f0(SMRGLTextureBasic *texture_info)

{
  int iVar1;
  
  if (_DAT_01c6cee8 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02cf600c)(texture_info,DAT_005fba28,_DAT_01c6ced0,&DAT_01c6af98,_DAT_01c6ced4);
  return iVar1;
}
