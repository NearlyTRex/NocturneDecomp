// Name: core_carved.cpp_factoryFuncCarved_FUN_00425930
// Address: 00425930
// Address Range: [[00425930, 0042594b]]
// Convention: unknown
// Signature: void core_carved_cpp_factoryFuncCarved_FUN_00425930(void)

#include "nocturne.h"

void core_carved_cpp_factoryFuncCarved_FUN_00425930(void)

{
  CCarved *this_ptr;
  
  this_ptr = (CCarved *)FUN_005a3cb2(0xd0dc);
  if (this_ptr == (CCarved *)0x0) {
    return;
  }
  core_carved_cpp_CCarved_ctor_FUN_00425960(this_ptr);
  return;
}
