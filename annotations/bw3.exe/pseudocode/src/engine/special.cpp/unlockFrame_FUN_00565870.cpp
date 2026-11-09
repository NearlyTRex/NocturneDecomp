// Name: engine_special.cpp_unlockFrame_FUN_00565870
// Address: 00565870
// Address Range: [[00565870, 005658a8]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_unlockFrame_FUN_00565870(int clear_lock_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_unlockFrame_FUN_00565870(int clear_lock_flag)

{
  int iVar1;
  
  if (_DAT_02cf612c != 0) {
    DAT_005fba20 = _DAT_02cf6128;
    _DAT_01c6cee8 = 1;
    if (clear_lock_flag != 0) {
      _DAT_02cf612c = 0;
    }
    iVar1 = (*_DAT_02cf6008)();
    return iVar1;
  }
  return 0;
}
