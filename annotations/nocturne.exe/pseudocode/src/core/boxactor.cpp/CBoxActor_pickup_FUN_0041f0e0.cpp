// Name: core_boxactor.cpp_CBoxActor_pickup_FUN_0041f0e0
// Address: 0041f0e0
// Address Range: [[0041f0e0, 0041f0ee]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_pickup_FUN_0041f0e0(CBoxActor *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_pickup_FUN_0041f0e0(CBoxActor *this_ptr,CDemonActor *carrier)

{
  this_ptr->carrier_actor = carrier;
  return;
}
