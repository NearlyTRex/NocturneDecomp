// Name: core_icepick.cpp_factoryFuncIcePick_FUN_004d4960
// Address: 004d4960
// Address Range: [[004d4960, 004d497b]]
// Convention: unknown
// Signature: void core_icepick_cpp_factoryFuncIcePick_FUN_004d4960(void)

#include "nocturne.h"

void core_icepick_cpp_factoryFuncIcePick_FUN_004d4960(void)

{
  CIcePick *this_ptr;
  
  this_ptr = (CIcePick *)operator_new(0x25670);
  if (this_ptr == (CIcePick *)0x0) {
    return;
  }
  core_icepick_cpp_CIcePick_ctor_FUN_004d4990(this_ptr);
  return;
}
