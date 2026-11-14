// Name: engine_special.cpp_unlockFrame_FUN_0055f550
// Address: 0055f550
// Address Range: [[0055f550, 0055f588]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_unlockFrame_FUN_0055f550(int clear_lock_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_unlockFrame_FUN_0055f550(int clear_lock_flag)

{
  int iVar1;
  
  if (_DAT_0264bd00 != 0) {
    DAT_006141c0 = _DAT_0264bcfc;
    _DAT_01c37788 = 1;
    if (clear_lock_flag != 0) {
      _DAT_0264bd00 = 0;
    }
    iVar1 = (*_DAT_0264bbdc)();
    return iVar1;
  }
  return 0;
}
