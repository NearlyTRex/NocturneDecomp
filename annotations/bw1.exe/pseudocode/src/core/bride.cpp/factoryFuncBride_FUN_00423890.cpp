// Name: core_bride.cpp_factoryFuncBride_FUN_00423890
// Address: 00423890
// Address Range: [[00423890, 004238ab]]
// Convention: unknown
// Signature: void core_bride_cpp_factoryFuncBride_FUN_00423890(void)

#include "nocturne.h"

void core_bride_cpp_factoryFuncBride_FUN_00423890(void)

{
  CBride *this_ptr;
  
  this_ptr = (CBride *)debugAllocTracked1(0xc29c);
  if (this_ptr == (CBride *)0x0) {
    return;
  }
  core_bride_cpp_CBride_ctor_FUN_004238c0(this_ptr);
  return;
}
