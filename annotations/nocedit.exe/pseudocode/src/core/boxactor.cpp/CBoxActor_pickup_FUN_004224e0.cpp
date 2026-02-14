// Name: core_boxactor.cpp_CBoxActor_pickup_FUN_004224e0
// Address: 004224e0
// Address Range: [[004224e0, 004224ee]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_pickup_FUN_004224e0(CBoxActor *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_pickup_FUN_004224e0(CBoxActor *this_ptr,CDemonActor *carrier)

{
  this_ptr->carrier_actor = carrier;
  return;
}
