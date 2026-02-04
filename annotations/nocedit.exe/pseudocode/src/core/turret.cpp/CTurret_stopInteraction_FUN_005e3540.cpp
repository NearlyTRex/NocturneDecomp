// Name: core_turret.cpp_CTurret_stopInteraction_FUN_005e3540
// Address: 005e3540
// Address Range: [[005e3540, 005e355b]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_stopInteraction_FUN_005e3540(CTurret *this_ptr,CDemonActor *user)

#include "nocturne.h"

void __cdecl
core_turret_cpp_CTurret_stopInteraction_FUN_005e3540(CTurret *this_ptr,CDemonActor *user)

{
  if (user != this_ptr->user) {
    return;
  }
  this_ptr->user = (CDemonActor *)0x0;
  return;
}
