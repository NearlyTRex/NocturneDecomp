// Name: engine_special.cpp_updateTexture_FUN_00532440
// Address: 00532440
// Address Range: [[00532440, 0053247d]]
// Convention: __cdecl
// Signature: undefined4 __cdecl engine_special_cpp_updateTexture_FUN_00532440(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl engine_special_cpp_updateTexture_FUN_00532440(uint param_1,uint param_2)

{
  uint uVar1;
  
  if (_DAT_01c02594 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02dc9da0)(param_1,DAT_005b762c,_DAT_01c02580,param_2,_DAT_01c02584);
  return uVar1;
}
