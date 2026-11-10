// Name: core_dest.cpp_factoryFuncActorDestination_FUN_00459110
// Address: 00459110
// Address Range: [[00459110, 0045912b]]
// Convention: unknown
// Signature: void core_dest_cpp_factoryFuncActorDestination_FUN_00459110(void)

#include "nocturne.h"

void core_dest_cpp_factoryFuncActorDestination_FUN_00459110(void)

{
  CActorDestination *this_ptr;
  
  this_ptr = (CActorDestination *)debugAllocTracked1(500);
  if (this_ptr == (CActorDestination *)0x0) {
    return;
  }
  core_dest_cpp_CActorDestination_ctor_FUN_00459140(this_ptr);
  return;
}
