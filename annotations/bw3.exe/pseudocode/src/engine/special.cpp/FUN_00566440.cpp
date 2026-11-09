// Name: engine_special.cpp_FUN_00566440
// Address: 00566440
// Address Range: [[00566440, 00566452]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_FUN_00566440(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_FUN_00566440(void)

{
  int iVar1;
  
  if (_DAT_02cf6078 == (code *)0x0) {
    return 0;
  }
  iVar1 = (*_DAT_02cf6078)();
  return iVar1;
}
