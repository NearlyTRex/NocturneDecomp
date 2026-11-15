// Name: engine_special.cpp_updateTextureBGRA_FUN_00565a30
// Address: 00565a30
// Address Range: [[00565a30, 00565a65]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_updateTextureBGRA_FUN_00565a30(SMRGLTextureBasic *texture_info,int flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_updateTextureBGRA_FUN_00565a30(SMRGLTextureBasic *texture_info,int flags)

{
  int iVar1;
  
  if ((_DAT_01c6cee8 != 0) && (_DAT_02cf6018 != (code *)0x0)) {
    iVar1 = (*_DAT_02cf6018)(texture_info,DAT_005fba28,flags);
    return iVar1;
  }
  return 0;
}
