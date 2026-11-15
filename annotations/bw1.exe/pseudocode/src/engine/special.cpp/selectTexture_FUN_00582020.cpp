// Name: engine_special.cpp_selectTexture_FUN_00582020
// Address: 00582020
// Address Range: [[00582020, 0058205a]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_selectTexture_FUN_00582020(SMRGLTextureBasic *texture_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_selectTexture_FUN_00582020(SMRGLTextureBasic *texture_info)

{
  int iVar1;
  
  if (_DAT_01c50948 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02c833b0)(texture_info,DAT_0061b4a8,_DAT_01c50930,&DAT_01c4e9f8,_DAT_01c50934);
  return iVar1;
}
