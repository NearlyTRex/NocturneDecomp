// Name: core_turret.cpp_CTurret_stopUsing_FUN_0054a900
// Address: 0054a900
// Address Range: [[0054a900, 0054a91b]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_stopUsing_FUN_0054a900(CTurret *this_ptr,CDemonActor *user)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_stopUsing_FUN_0054a900(CTurret *this_ptr,CDemonActor *user)

{
  if (user != this_ptr->user) {
    return;
  }
  this_ptr->user = (CDemonActor *)0x0;
  return;
}
