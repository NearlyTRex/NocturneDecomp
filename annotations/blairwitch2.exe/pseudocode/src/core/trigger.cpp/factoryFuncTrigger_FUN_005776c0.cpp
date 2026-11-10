// Name: core_trigger.cpp_factoryFuncTrigger_FUN_005776c0
// Address: 005776c0
// Address Range: [[005776c0, 005776db]]
// Convention: unknown
// Signature: void core_trigger_cpp_factoryFuncTrigger_FUN_005776c0(void)

#include "nocturne.h"

void core_trigger_cpp_factoryFuncTrigger_FUN_005776c0(void)

{
  CTrigger *this_ptr;
  
  this_ptr = (CTrigger *)debugAllocTracked1(0x4d0);
  if (this_ptr == (CTrigger *)0x0) {
    return;
  }
  core_trigger_cpp_CTrigger_ctor_FUN_005776f0(this_ptr);
  return;
}
