// Name: core_zombie.cpp_FUN_005f8fa0
// Address: 005f8fa0
// Address Range: [[005f8fa0, 005f8fc5]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_FUN_005f8fa0()

#include "nocturne.h"

void core_zombie_cpp_FUN_005f8fa0(void)

{
  CZombie *this_ptr;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbfac,"@..\\core\\zombie.cpp" + 1,200);
  if (this_ptr == (CZombie *)0x0) {
    return;
  }
  core_zombie_cpp_CZombie_ctor_FUN_005f8fe0(this_ptr);
  return;
}
