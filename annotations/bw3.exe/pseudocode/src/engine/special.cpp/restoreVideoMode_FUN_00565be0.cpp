// Name: engine_special.cpp_restoreVideoMode_FUN_00565be0
// Address: 00565be0
// Address Range: [[00565be0, 00565c07]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_restoreVideoMode_FUN_00565be0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_restoreVideoMode_FUN_00565be0(void)

{
  int iVar1;
  
  if ((_DAT_01c6cee8 != 0) && (_DAT_01c6cee8 = 0, _DAT_02cf5ff8 != (code *)0x0)) {
    iVar1 = (*_DAT_02cf5ff8)();
    return iVar1;
  }
  return 0;
}
