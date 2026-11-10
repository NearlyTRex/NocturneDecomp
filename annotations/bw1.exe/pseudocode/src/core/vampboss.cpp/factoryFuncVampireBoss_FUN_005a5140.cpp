// Name: core_vampboss.cpp_factoryFuncVampireBoss_FUN_005a5140
// Address: 005a5140
// Address Range: [[005a5140, 005a515b]]
// Convention: unknown
// Signature: void core_vampboss_cpp_factoryFuncVampireBoss_FUN_005a5140(void)

#include "nocturne.h"

void core_vampboss_cpp_factoryFuncVampireBoss_FUN_005a5140(void)

{
  CVampireBoss *this_ptr;
  
  this_ptr = (CVampireBoss *)debugAllocTracked1(0xbf3fc);
  if (this_ptr == (CVampireBoss *)0x0) {
    return;
  }
  core_vampboss_cpp_CVampireBoss_ctor_FUN_005a5170(this_ptr);
  return;
}
