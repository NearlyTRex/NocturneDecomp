// Name: core_turret.cpp_CTurret_startInteraction_FUN_0054a870
// Address: 0054a870
// Address Range: [[0054a870, 0054a88f]]
// Convention: __cdecl
// Signature: int __cdecl core_turret_cpp_CTurret_startInteraction_FUN_0054a870(CTurret *this_ptr,CDemonActor *user)

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_startInteraction_FUN_0054a870(CTurret *this_ptr,CDemonActor *user)

{
  if (this_ptr->user != (CDemonActor *)0x0) {
    return 0;
  }
  this_ptr->user = user;
  return 1;
}
