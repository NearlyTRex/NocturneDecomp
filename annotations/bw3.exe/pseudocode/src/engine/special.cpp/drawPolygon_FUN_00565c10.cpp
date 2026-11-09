// Name: engine_special.cpp_drawPolygon_FUN_00565c10
// Address: 00565c10
// Address Range: [[00565c10, 00565c38]]
// Convention: __cdecl
// Signature: undefined4 __cdecl engine_special_cpp_drawPolygon_FUN_00565c10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl engine_special_cpp_drawPolygon_FUN_00565c10(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (_DAT_01c6cee8 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02cf6020)(param_1,param_2,param_3);
  return uVar1;
}
