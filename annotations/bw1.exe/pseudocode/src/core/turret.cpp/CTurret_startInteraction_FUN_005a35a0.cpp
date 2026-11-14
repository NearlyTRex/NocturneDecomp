// Name: core_turret.cpp_CTurret_startInteraction_FUN_005a35a0
// Address: 005a35a0
// Address Range: [[005a35a0, 005a35bf]]
// Convention: __cdecl
// Signature: int __cdecl core_turret_cpp_CTurret_startInteraction_FUN_005a35a0(CTurret *this_ptr,CDemonActor *user)

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_startInteraction_FUN_005a35a0(CTurret *this_ptr,CDemonActor *user)

{
  if (this_ptr->user != (CDemonActor *)0x0) {
    return 0;
  }
  this_ptr->user = user;
  return 1;
}
