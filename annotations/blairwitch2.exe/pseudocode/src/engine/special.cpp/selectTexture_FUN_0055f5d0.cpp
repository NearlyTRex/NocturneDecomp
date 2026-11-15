// Name: engine_special.cpp_selectTexture_FUN_0055f5d0
// Address: 0055f5d0
// Address Range: [[0055f5d0, 0055f60a]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_selectTexture_FUN_0055f5d0(SMRGLTextureBasic *texture_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_selectTexture_FUN_0055f5d0(SMRGLTextureBasic *texture_info)

{
  int iVar1;
  
  if (_DAT_01c37788 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_0264bbe0)(texture_info,DAT_006141c8,_DAT_01c37770,&DAT_01c35838,_DAT_01c37774);
  return iVar1;
}
