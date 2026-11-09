// Name: engine_special.cpp_unlockFrame_FUN_00581fa0
// Address: 00581fa0
// Address Range: [[00581fa0, 00581fd8]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_unlockFrame_FUN_00581fa0(int clear_lock_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_unlockFrame_FUN_00581fa0(int clear_lock_flag)

{
  int iVar1;
  
  if (_DAT_02c834d0 != 0) {
    DAT_0061b4a0 = _DAT_02c834cc;
    _DAT_01c50948 = 1;
    if (clear_lock_flag != 0) {
      _DAT_02c834d0 = 0;
    }
    iVar1 = (*_DAT_02c833ac)();
    return iVar1;
  }
  return 0;
}
