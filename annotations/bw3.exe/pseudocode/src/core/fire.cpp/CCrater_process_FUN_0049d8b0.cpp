// Name: core_fire.cpp_CCrater_process_FUN_0049d8b0
// Address: 0049d8b0
// Address Range: [[0049d8b0, 0049d97c]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CCrater_process_FUN_0049d8b0(CCrater *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CCrater_process_FUN_0049d8b0(CCrater *this_ptr)

{
  CVector3f *position;
  CVector3f local_18;
  
  if (this_ptr->active != 0) {
    if ((0.0 < this_ptr->smoke_delay) &&
       (this_ptr->smoke_delay = this_ptr->smoke_delay - g_CGamePtr->delta_time_float,
       this_ptr->smoke_delay < 0.0)) {
      this_ptr->has_smoke = 1;
      this_ptr->smoke_delay = 0.0;
    }
    this_ptr->smoke_spawn_timer = g_CGamePtr->delta_time_float + this_ptr->smoke_spawn_timer;
    if ((float)_DAT_005c0778 < this_ptr->smoke_spawn_timer) {
      this_ptr->smoke_spawn_timer = this_ptr->smoke_spawn_timer + _DAT_005c0780;
      local_18.x = 0.0;
      local_18.y = 1.0;
      position = this_ptr->smoke_positions;
      local_18.z = 0.0;
      do {
        core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004a2560
                  (0x01C73654,position,1.0,&local_18,0x4000);
        position = position + 1;
      } while (position != this_ptr->corner_positions);
    }
  }
  return;
}
