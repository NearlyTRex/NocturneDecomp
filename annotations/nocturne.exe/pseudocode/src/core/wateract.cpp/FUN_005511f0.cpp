// Name: core_wateract.cpp_FUN_005511f0
// Address: 005511f0
// Address Range: [[005511f0, 0055120b]]
// Convention: unknown
// Signature: void core_wateract_cpp_FUN_005511f0(void)

#include "nocturne.h"

void core_wateract_cpp_FUN_005511f0(void)

{
  CWaterActor *this_ptr;
  
  this_ptr = (CWaterActor *)FUN_0056497c(0x2b230);
  if (this_ptr == (CWaterActor *)0x0) {
    return;
  }
  core_wateract_cpp_CWaterActor_ctor_FUN_00551220(this_ptr);
  return;
}
