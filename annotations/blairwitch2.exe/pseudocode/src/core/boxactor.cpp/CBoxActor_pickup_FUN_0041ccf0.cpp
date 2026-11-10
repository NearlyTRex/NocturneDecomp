// Name: core_boxactor.cpp_CBoxActor_pickup_FUN_0041ccf0
// Address: 0041ccf0
// Address Range: [[0041ccf0, 0041ccfe]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_pickup_FUN_0041ccf0(CBoxActor *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_pickup_FUN_0041ccf0(CBoxActor *this_ptr,CDemonActor *carrier)

{
  this_ptr->carrier_actor = carrier;
  return;
}
