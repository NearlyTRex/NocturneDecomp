// Name: core_trigger.cpp_FUN_005df800
// Address: 005df800
// Address Range: [[005df800, 005df822]]
// Convention: unknown
// Signature: undefined core_trigger.cpp_FUN_005df800()

#include "nocturne.h"

void core_trigger_cpp_FUN_005df800(void)

{
  CTrigger *this_ptr;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x370,"..\\core\\trigger.cpp",0x35);
  if (this_ptr == (CTrigger *)0x0) {
    return;
  }
  core_trigger_cpp_CTrigger_ctor_FUN_005df840(this_ptr);
  return;
}
