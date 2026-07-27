// Name: engine_special.cpp_selectTexture_FUN_00532400
// Address: 00532400
// Address Range: [[00532400, 0053243d]]
// Convention: __cdecl
// Signature: undefined4 __cdecl engine_special_cpp_selectTexture_FUN_00532400(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl engine_special_cpp_selectTexture_FUN_00532400(uint param_1,uint param_2)

{
  uint uVar1;
  
  if (_DAT_01c02594 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02dc9d9c)(param_1,DAT_005b762c,_DAT_01c02580,param_2,_DAT_01c02584);
  return uVar1;
}
