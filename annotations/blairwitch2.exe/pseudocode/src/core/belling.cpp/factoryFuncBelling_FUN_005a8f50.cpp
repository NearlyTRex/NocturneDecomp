// Name: core_belling.cpp_factoryFuncBelling_FUN_005a8f50
// Address: 005a8f50
// Address Range: [[005a8f50, 005a8f6b]]
// Convention: unknown
// Signature: void core_belling_cpp_factoryFuncBelling_FUN_005a8f50(void)

#include "nocturne.h"

void core_belling_cpp_factoryFuncBelling_FUN_005a8f50(void)

{
  CBelling *this_ptr;
  
  this_ptr = (CBelling *)debugAllocTracked1(0x11850);
  if (this_ptr == (CBelling *)0x0) {
    return;
  }
  core_belling_cpp_CBelling_ctor_FUN_005a8f80(this_ptr);
  return;
}
