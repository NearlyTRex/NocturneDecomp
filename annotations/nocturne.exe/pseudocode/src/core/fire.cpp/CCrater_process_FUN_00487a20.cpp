// Name: core_fire.cpp_CCrater_process_FUN_00487a20
// Address: 00487a20
// Address Range: [[00487a20, 00487aec]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CCrater_process_FUN_00487a20(CCrater *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CCrater_process_FUN_00487a20(CCrater *this_ptr)

{
  CVector3f *position;
  CVector3f local_18;
  
  if (this_ptr->active != 0) {
    if ((0.0 < this_ptr->smoke_delay) &&
       (this_ptr->smoke_delay = this_ptr->smoke_delay - g_CGame_PTR_005b9354->delta_time_float,
       this_ptr->smoke_delay < 0.0)) {
      this_ptr->has_smoke = 1;
      this_ptr->smoke_delay = 0.0;
    }
    this_ptr->smoke_spawn_timer =
         g_CGame_PTR_005b9354->delta_time_float + this_ptr->smoke_spawn_timer;
    if ((float)0.20000000000000001 < this_ptr->smoke_spawn_timer) {
      this_ptr->smoke_spawn_timer = this_ptr->smoke_spawn_timer + -0.2f;
      local_18.x = 0.0;
      local_18.y = 1.0;
      position = this_ptr->smoke_positions;
      local_18.z = 0.0;
      do {
        core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
                  (g_CFireEffect_PTR_005b80f0,position,1.0,&local_18,0xffff);
        position = position + 1;
      } while (position != this_ptr->corner_positions);
    }
  }
  return;
}
