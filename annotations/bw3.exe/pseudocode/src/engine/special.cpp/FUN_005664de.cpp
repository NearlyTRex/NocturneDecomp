// Name: engine_special.cpp_FUN_005664de
// Address: 005664de
// Address Range: [[005664de, 0056652d]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_FUN_005664de(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_special_cpp_FUN_005664de(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  _DAT_02cf6130 = 0;
  if ((_DAT_02cf608c != (code *)0x0) &&
     (iVar1 = (*_DAT_02cf608c)(param_1,param_2,param_3,param_4), iVar1 != 0)) {
    _DAT_02cf6130 = param_3;
    return 1;
  }
  return 0;
}
