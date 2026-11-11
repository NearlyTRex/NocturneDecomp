// Name: core_dest.cpp_factoryFuncActorDestination_FUN_00447060
// Address: 00447060
// Address Range: [[00447060, 0044707b]]
// Convention: unknown
// Signature: void core_dest_cpp_factoryFuncActorDestination_FUN_00447060(void)

#include "nocturne.h"

void core_dest_cpp_factoryFuncActorDestination_FUN_00447060(void)

{
  CActorDestination *this_ptr;
  
  this_ptr = (CActorDestination *)operator_new(0x350);
  if (this_ptr == (CActorDestination *)0x0) {
    return;
  }
  core_dest_cpp_CActorDestination_ctor_FUN_00447090(this_ptr);
  return;
}
