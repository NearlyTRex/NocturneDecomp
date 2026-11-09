// Name: core_boxactor.cpp_CBoxActor_pickup_FUN_00422c60
// Address: 00422c60
// Address Range: [[00422c60, 00422c6e]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_pickup_FUN_00422c60(CBoxActor *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_pickup_FUN_00422c60(CBoxActor *this_ptr,CDemonActor *carrier)

{
  *(CDemonActor **)&this_ptr->field_0x318 = carrier;
  return;
}
