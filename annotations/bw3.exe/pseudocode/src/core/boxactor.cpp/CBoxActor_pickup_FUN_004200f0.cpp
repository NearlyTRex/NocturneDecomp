// Name: core_boxactor.cpp_CBoxActor_pickup_FUN_004200f0
// Address: 004200f0
// Address Range: [[004200f0, 004200fe]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_pickup_FUN_004200f0(CBoxActor *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_pickup_FUN_004200f0(CBoxActor *this_ptr,CDemonActor *carrier)

{
  *(CDemonActor **)&this_ptr->field_0x318 = carrier;
  return;
}
