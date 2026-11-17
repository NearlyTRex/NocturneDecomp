// Name: engine_special.cpp_unlockFrame_FUN_00581fa0
// Address: 00581fa0
// Address Range: [[00581fa0, 00581fd8]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_unlockFrame_FUN_00581fa0(int clear_lock_flag)

#include "nocturne.h"

int __cdecl engine_special_cpp_unlockFrame_FUN_00581fa0(int clear_lock_flag)

{
  int iVar1;
  
  if (g_INT_02c834d0 != 0) {
    g_INT_0061b4a0 = g_INT_02c834cc;
    g_INT_01c50948 = 1;
    if (clear_lock_flag != 0) {
      g_INT_02c834d0 = 0;
    }
    iVar1 = (*(code *)g_PTR_02c833ac)();
    return iVar1;
  }
  return 0;
}
