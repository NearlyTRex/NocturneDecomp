// Name: core_passngr.cpp_factoryFuncPassenger_FUN_0050a420
// Address: 0050a420
// Address Range: [[0050a420, 0050a43b]]
// Convention: unknown
// Signature: void core_passngr_cpp_factoryFuncPassenger_FUN_0050a420(void)

#include "nocturne.h"

void core_passngr_cpp_factoryFuncPassenger_FUN_0050a420(void)

{
  CPassenger *this_ptr;
  
  this_ptr = (CPassenger *)operator_new(0x21408);
  if (this_ptr == (CPassenger *)0x0) {
    return;
  }
  core_passngr_cpp_CPassenger_ctor_FUN_0050a450(this_ptr);
  return;
}
