// Name: engine_mini3d.cpp_FUN_00513220
// Address: 00513220
// Address Range: [[00513220, 0051325d]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_00513220(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_00513220(uint param_1,uint param_2)

{
  engine_mini3d_cpp_FUN_005124f0();
  engine_mini3d_cpp_FUN_00516c60();
  if ((_DAT_02c83480 != (code *)0x0) && (_DAT_01c50948 != 0)) {
    (*_DAT_02c83480)(param_1,param_2,_DAT_01c51d14);
    return;
  }
  return;
}
