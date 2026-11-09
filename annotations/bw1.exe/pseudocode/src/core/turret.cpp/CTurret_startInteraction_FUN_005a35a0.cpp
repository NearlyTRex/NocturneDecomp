// Name: core_turret.cpp_CTurret_startInteraction_FUN_005a35a0
// Address: 005a35a0
// Address Range: [[005a35a0, 005a35bf]]
// Convention: __cdecl
// Signature: int __cdecl core_turret_cpp_CTurret_startInteraction_FUN_005a35a0(CTurret *this_ptr,CDemonActor *user)

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_startInteraction_FUN_005a35a0(CTurret *this_ptr,CDemonActor *user)

{
  if (*(int *)&this_ptr->field_0x85c != 0) {
    return 0;
  }
  *(CDemonActor **)&this_ptr->field_0x85c = user;
  return 1;
}
