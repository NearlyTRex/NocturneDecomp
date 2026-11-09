// Name: core_trigger.cpp_factoryFuncTrigger_FUN_0056df70
// Address: 0056df70
// Address Range: [[0056df70, 0056df8b]]
// Convention: unknown
// Signature: void core_trigger_cpp_factoryFuncTrigger_FUN_0056df70(void)

#include "nocturne.h"

void core_trigger_cpp_factoryFuncTrigger_FUN_0056df70(void)

{
  CTrigger *this_ptr;
  
  this_ptr = (CTrigger *)FUN_005a3cb2(0x374);
  if (this_ptr == (CTrigger *)0x0) {
    return;
  }
  core_trigger_cpp_CTrigger_ctor_FUN_0056dfa0(this_ptr);
  return;
}
