// Name: core_lantern.cpp_CLantern_process_FUN_0059ccf0
// Address: 0059ccf0
// Address Range: [[0059ccf0, 0059cec1]]
// Convention: __cdecl
// Signature: void __cdecl core_lantern_cpp_CLantern_process_FUN_0059ccf0(CLantern *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_lantern_cpp_CLantern_process_FUN_0059ccf0(CLantern *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float in_stack_00000010;
  
  core_weapon_cpp_CWeapon_process_FUN_00589c80(&this_ptr->base,delta_time);
  if (0.0 < this_ptr->brightness) {
    fVar2 = this_ptr->flicker_timer - in_stack_00000010;
    this_ptr->flicker = 0.0;
    this_ptr->flicker_timer = fVar2;
    if (fVar2 <= 0.0) {
      fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.7,1.0);
      this_ptr->flicker = fVar2;
      fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.1,0.2);
      fVar1 = (float)_DAT_005ef7b1;
      fVar2 = (float)_DAT_005ef7b9;
      this_ptr->light_max_distance = this_ptr->flicker * fVar1 + fVar2;
      this_ptr->light_focal_length = this_ptr->flicker * fVar1 + fVar2;
      this_ptr->flicker_timer = fVar3 * this_ptr->flicker;
      this_ptr->light_max_distance = this_ptr->brightness * this_ptr->light_max_distance;
      this_ptr->light_focal_length = this_ptr->brightness * this_ptr->light_focal_length;
      this_ptr->light->light_enabled_flag = 1;
      this_ptr->light->volumetric_enabled = 1;
      (this_ptr->light->base).max_distance = this_ptr->light_max_distance;
      (this_ptr->light->base).base.focal_length = this_ptr->light_focal_length;
      this_ptr->light->antialiasing_enabled = 1;
      core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570
                (this_ptr->light,this_ptr->brightness * this_ptr->flicker);
      this_ptr->light->bloom_intensity =
           (this_ptr->flicker * (float)_DAT_005ef7c1 + (float)_DAT_005ef7c9) * this_ptr->brightness;
    }
    core_lantern_cpp_FUN_0059ced0(this_ptr);
    core_set_cpp_CDemonSet_addDynamicLight_FUN_00530630(g_CDemonSetPtr,this_ptr->light);
    (this_ptr->base).base.is_transparent = 1;
    return;
  }
  (this_ptr->base).base.is_transparent = 0;
  this_ptr->brightness = 0.0;
  return;
}
