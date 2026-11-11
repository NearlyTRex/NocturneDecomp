// Name: core_vampboss.cpp_factoryFuncVampireBoss_FUN_00581500
// Address: 00581500
// Address Range: [[00581500, 0058151b]]
// Convention: unknown
// Signature: void core_vampboss_cpp_factoryFuncVampireBoss_FUN_00581500(void)

#include "nocturne.h"

void core_vampboss_cpp_factoryFuncVampireBoss_FUN_00581500(void)

{
  CVampireBoss *this_ptr;
  
  this_ptr = (CVampireBoss *)operator_new(0xc3b9c);
  if (this_ptr == (CVampireBoss *)0x0) {
    return;
  }
  core_vampboss_cpp_CVampireBoss_ctor_FUN_00581530(this_ptr);
  return;
}
