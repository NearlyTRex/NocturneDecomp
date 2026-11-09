// Name: engine_special.cpp_FUN_0055f500
// Address: 0055f500
// Address Range: [[0055f500, 0055f548]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_FUN_0055f500(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_special_cpp_FUN_0055f500(void)

{
  int iVar1;
  
  if (_DAT_01c37788 == 0) {
    _DAT_0264bd00 = _DAT_01c37788;
  }
  else {
    iVar1 = (*_DAT_0264bbd8)();
    if (iVar1 != 0) {
      _DAT_0264bcfc = DAT_006141c0;
      _DAT_0264bd00 = 1;
      _DAT_01c37788 = 0;
      DAT_006141c0 = _DAT_0264bcf4;
      return 1;
    }
  }
  return 0;
}
