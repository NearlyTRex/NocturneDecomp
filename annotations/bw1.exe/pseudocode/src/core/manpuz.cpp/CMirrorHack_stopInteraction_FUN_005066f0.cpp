// Name: core_manpuz.cpp_CMirrorHack_stopInteraction_FUN_005066f0
// Address: 005066f0
// Address Range: [[005066f0, 0050670b]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMirrorHack_stopInteraction_FUN_005066f0(CMirrorHack *this_ptr,CDemonActor *user)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMirrorHack_stopInteraction_FUN_005066f0(CMirrorHack *this_ptr,CDemonActor *user)

{
  if (user != *(CDemonActor **)&this_ptr->field_0x2d4) {
    return;
  }
  *(uint *)&this_ptr->field_0x2d4 = 0;
  return;
}
