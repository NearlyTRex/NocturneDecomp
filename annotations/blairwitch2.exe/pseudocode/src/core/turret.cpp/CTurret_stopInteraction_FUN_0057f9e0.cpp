// Name: core_turret.cpp_CTurret_stopInteraction_FUN_0057f9e0
// Address: 0057f9e0
// Address Range: [[0057f9e0, 0057f9fb]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_stopInteraction_FUN_0057f9e0(CTurret *this_ptr,CDemonActor *user)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_stopInteraction_FUN_0057f9e0(CTurret *this_ptr,CDemonActor *user)

{
  if (user != this_ptr->user) {
    return;
  }
  this_ptr->user = (CDemonActor *)0x0;
  return;
}
