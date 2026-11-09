// Name: engine_special.cpp_restoreVideoMode_FUN_0055f8c0
// Address: 0055f8c0
// Address Range: [[0055f8c0, 0055f8e7]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_restoreVideoMode_FUN_0055f8c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_restoreVideoMode_FUN_0055f8c0(void)

{
  int iVar1;
  
  if ((_DAT_01c37788 != 0) && (_DAT_01c37788 = 0, _DAT_0264bbcc != (code *)0x0)) {
    iVar1 = (*_DAT_0264bbcc)();
    return iVar1;
  }
  return 0;
}
