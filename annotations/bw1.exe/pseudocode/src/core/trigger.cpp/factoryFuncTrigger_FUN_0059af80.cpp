// Name: core_trigger.cpp_factoryFuncTrigger_FUN_0059af80
// Address: 0059af80
// Address Range: [[0059af80, 0059af9b]]
// Convention: unknown
// Signature: void core_trigger_cpp_factoryFuncTrigger_FUN_0059af80(void)

#include "nocturne.h"

void core_trigger_cpp_factoryFuncTrigger_FUN_0059af80(void)

{
  CTrigger *this_ptr;
  
  this_ptr = (CTrigger *)FUN_005c0f32(0x374);
  if (this_ptr == (CTrigger *)0x0) {
    return;
  }
  core_trigger_cpp_CTrigger_ctor_FUN_0059afb0(this_ptr);
  return;
}
