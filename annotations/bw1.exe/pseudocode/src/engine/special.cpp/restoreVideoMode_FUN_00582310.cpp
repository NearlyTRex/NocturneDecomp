// Name: engine_special.cpp_restoreVideoMode_FUN_00582310
// Address: 00582310
// Address Range: [[00582310, 00582337]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_restoreVideoMode_FUN_00582310(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_restoreVideoMode_FUN_00582310(void)

{
  int iVar1;
  
  if ((_DAT_01c50948 != 0) && (_DAT_01c50948 = 0, _DAT_02c8339c != (code *)0x0)) {
    iVar1 = (*_DAT_02c8339c)();
    return iVar1;
  }
  return 0;
}
