// Name: engine_special.cpp_FUN_0056655e
// Address: 0056655e
// Address Range: [[0056655e, 0056658f]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_FUN_0056655e(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_special_cpp_FUN_0056655e(void)

{
  int iVar1;
  
  if ((_DAT_02cf6094 != (code *)0x0) && (iVar1 = (*_DAT_02cf6094)(), iVar1 != 0)) {
    _DAT_02cf6128 = DAT_005fba20;
    DAT_005fba20 = _DAT_02cf6130;
    return 1;
  }
  return 0;
}
