// Name: core_drip.cpp_CDrip_setup_FUN_00462140
// Address: 00462140
// Address Range: [[00462140, 004621c9]]
// Convention: __cdecl
// Signature: void __cdecl core_drip_cpp_CDrip_setup_FUN_00462140(CDrip *this_ptr)

#include "nocturne.h"

void __cdecl core_drip_cpp_CDrip_setup_FUN_00462140(CDrip *this_ptr)

{
  float fVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&this_ptr->model);
  this_ptr->is_ground_cached = 0;
  (this_ptr->base).location.position.x = (this_ptr->home_pos).x;
  (this_ptr->base).location.position.y = (this_ptr->home_pos).y;
  (this_ptr->base).location.position.z = (this_ptr->home_pos).z;
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                    (this_ptr->min_auto_drip_time,this_ptr->max_auto_drip_time);
  this_ptr->drip_timer = fVar1;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            ((CKeyFramedModelInstance *)0x1b7b330,"stalrock.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            ((CKeyFramedModelInstance *)0x1b7b330);
  this_ptr->is_visible = 0;
  return;
}
