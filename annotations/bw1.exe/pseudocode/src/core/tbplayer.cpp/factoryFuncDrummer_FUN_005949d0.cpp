// Name: core_tbplayer.cpp_factoryFuncDrummer_FUN_005949d0
// Address: 005949d0
// Address Range: [[005949d0, 005949eb]]
// Convention: unknown
// Signature: void core_tbplayer_cpp_factoryFuncDrummer_FUN_005949d0(void)

#include "nocturne.h"

void core_tbplayer_cpp_factoryFuncDrummer_FUN_005949d0(void)

{
  CDrummer *this_ptr;
  
  this_ptr = (CDrummer *)operator_new(0x1fac0);
  if (this_ptr == (CDrummer *)0x0) {
    return;
  }
  core_tbplayer_cpp_CDrummer_ctor_FUN_00594a00(this_ptr);
  return;
}
