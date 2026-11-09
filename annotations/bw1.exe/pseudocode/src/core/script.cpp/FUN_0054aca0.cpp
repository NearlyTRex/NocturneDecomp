// Name: core_script.cpp_FUN_0054aca0
// Address: 0054aca0
// Address Range: [[0054aca0, 0054acb9]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_0054aca0(CScript *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_script_cpp_FUN_0054aca0(CScript *this_ptr,CDemonActor *actor)

{
  if (actor != *(CDemonActor **)&this_ptr->field_0x4) {
    return;
  }
  *(uint *)&this_ptr->field_0x4 = 0;
  this_ptr->field_0x50 = 0;
  return;
}
