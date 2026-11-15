// Name: engine_special.cpp_updateTextureBGRA_FUN_00582160
// Address: 00582160
// Address Range: [[00582160, 00582195]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_updateTextureBGRA_FUN_00582160(SMRGLTextureBasic *texture_info,int flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_updateTextureBGRA_FUN_00582160(SMRGLTextureBasic *texture_info,int flags)

{
  int iVar1;
  
  if ((_DAT_01c50948 != 0) && (_DAT_02c833bc != (code *)0x0)) {
    iVar1 = (*_DAT_02c833bc)(texture_info,DAT_0061b4a8,flags);
    return iVar1;
  }
  return 0;
}
