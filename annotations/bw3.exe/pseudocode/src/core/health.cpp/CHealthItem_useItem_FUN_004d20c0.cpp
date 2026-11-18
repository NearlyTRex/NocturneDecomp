// Name: core_health.cpp_CHealthItem_useItem_FUN_004d20c0
// Address: 004d20c0
// Address Range: [[004d20c0, 004d2121]]
// Convention: __cdecl
// Signature: int __cdecl core_health_cpp_CHealthItem_useItem_FUN_004d20c0(CHealthItem *this_ptr,CCharacter *user)

#include "nocturne.h"

int __cdecl core_health_cpp_CHealthItem_useItem_FUN_004d20c0(CHealthItem *this_ptr,CCharacter *user)

{
  CGame *this_ptr_00;
  
  if (0 < this_ptr->use_count) {
    user->hit_points = this_ptr->hp_restored + user->hit_points;
    if (0x42c80000 < (int)user->hit_points) {
      user->hit_points = 100.0;
    }
    this_ptr_00 = g_CGamePtr;
    this_ptr->use_count = this_ptr->use_count + -1;
    core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004bd910(this_ptr_00);
  }
  return this_ptr->use_count;
}
