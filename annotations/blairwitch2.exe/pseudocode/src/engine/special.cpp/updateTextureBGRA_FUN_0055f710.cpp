// Name: engine_special.cpp_updateTextureBGRA_FUN_0055f710
// Address: 0055f710
// Address Range: [[0055f710, 0055f745]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_updateTextureBGRA_FUN_0055f710(SMRGLTextureBasic *texture_info,int flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_updateTextureBGRA_FUN_0055f710(SMRGLTextureBasic *texture_info,int flags)

{
  int iVar1;
  
  if ((_DAT_01c37788 != 0) && (_DAT_0264bbec != (code *)0x0)) {
    iVar1 = (*_DAT_0264bbec)(texture_info,DAT_006141c8,flags);
    return iVar1;
  }
  return 0;
}
