// Name: core_passngr.cpp_factoryFuncPassenger_FUN_005113e0
// Address: 005113e0
// Address Range: [[005113e0, 005113fb]]
// Convention: unknown
// Signature: void core_passngr_cpp_factoryFuncPassenger_FUN_005113e0(void)

#include "nocturne.h"

void core_passngr_cpp_factoryFuncPassenger_FUN_005113e0(void)

{
  CPassenger *this_ptr;
  
  this_ptr = (CPassenger *)debugAllocTracked1(0x25088);
  if (this_ptr == (CPassenger *)0x0) {
    return;
  }
  core_passngr_cpp_CPassenger_ctor_FUN_00511410(this_ptr);
  return;
}
