// Name: engine_special.cpp_FUN_005601be
// Address: 005601be
// Address Range: [[005601be, 0056020d]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_FUN_005601be(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_special_cpp_FUN_005601be(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  _DAT_0264bd04 = 0;
  if ((_DAT_0264bc60 != (code *)0x0) &&
     (iVar1 = (*_DAT_0264bc60)(param_1,param_2,param_3,param_4), iVar1 != 0)) {
    _DAT_0264bd04 = param_3;
    return 1;
  }
  return 0;
}
