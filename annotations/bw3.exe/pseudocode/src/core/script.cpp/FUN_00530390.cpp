// Name: core_script.cpp_FUN_00530390
// Address: 00530390
// Address Range: [[00530390, 005303a9]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_00530390(CScript *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_script_cpp_FUN_00530390(CScript *this_ptr,CDemonActor *actor)

{
  if (actor != *(CDemonActor **)&this_ptr->field_0x4) {
    return;
  }
  *(uint *)&this_ptr->field_0x4 = 0;
  this_ptr->field_0x50 = 0;
  return;
}
