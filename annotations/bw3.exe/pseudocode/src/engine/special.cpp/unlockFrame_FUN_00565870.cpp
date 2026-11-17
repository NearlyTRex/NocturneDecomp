// Name: engine_special.cpp_unlockFrame_FUN_00565870
// Address: 00565870
// Address Range: [[00565870, 005658a8]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_unlockFrame_FUN_00565870(int clear_lock_flag)

#include "nocturne.h"

int __cdecl engine_special_cpp_unlockFrame_FUN_00565870(int clear_lock_flag)

{
  int iVar1;
  
  if (g_INT_02cf612c != 0) {
    g_INT_005fba20 = g_INT_02cf6128;
    g_INT_01c6cee8 = 1;
    if (clear_lock_flag != 0) {
      g_INT_02cf612c = 0;
    }
    iVar1 = (*(code *)g_PTR_02cf6008)();
    return iVar1;
  }
  return 0;
}
