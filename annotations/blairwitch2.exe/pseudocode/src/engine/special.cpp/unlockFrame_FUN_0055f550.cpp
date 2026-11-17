// Name: engine_special.cpp_unlockFrame_FUN_0055f550
// Address: 0055f550
// Address Range: [[0055f550, 0055f588]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_unlockFrame_FUN_0055f550(int clear_lock_flag)

#include "nocturne.h"

int __cdecl engine_special_cpp_unlockFrame_FUN_0055f550(int clear_lock_flag)

{
  int iVar1;
  
  if (g_INT_0264bd00 != 0) {
    g_INT_006141c0 = g_INT_0264bcfc;
    g_INT_01c37788 = 1;
    if (clear_lock_flag != 0) {
      g_INT_0264bd00 = 0;
    }
    iVar1 = (*(code *)g_PTR_0264bbdc)();
    return iVar1;
  }
  return 0;
}
