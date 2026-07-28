// Name: core_trigger.cpp_FUN_00547880
// Address: 00547880
// Address Range: [[00547880, 0054789b]]
// Convention: unknown
// Signature: void core_trigger_cpp_FUN_00547880(void)

#include "nocturne.h"

void core_trigger_cpp_FUN_00547880(void)

{
  CTrigger *this_ptr;
  
  this_ptr = (CTrigger *)FUN_0056497c(0x368);
  if (this_ptr == (CTrigger *)0x0) {
    return;
  }
  core_trigger_cpp_CTrigger_ctor_FUN_005478b0(this_ptr);
  return;
}
