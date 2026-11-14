// Name: core_stranger.cpp_FUN_00567530
// Address: 00567530
// Address Range: [[00567530, 0056783b]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_FUN_00567530(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_FUN_00567530(CStranger *this_ptr,float delta_time)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_2c;
  
  (this_ptr->pending_velocity).z = 0.0;
  (this_ptr->pending_velocity).y = (this_ptr->pending_velocity).z;
  (this_ptr->pending_velocity).x = (this_ptr->pending_velocity).y;
  fVar4 = (float)core_motion_cpp_FUN_005038a0(&(this_ptr->base).base.model,0);
  if ((fVar4 <= 0.0) || (1.0 <= this_ptr->turn_blend_weight)) {
    this_ptr->turn_angle = 0.0;
    this_ptr->turn_motion_index = -1;
    this_ptr->turn_blend_timer = 0.0;
    this_ptr->turn_elapsed = 0.0;
    this_ptr->turn_blend_weight = 0.0;
    return;
  }
  if (fVar4 < 1.0) {
    fVar4 = (1.0 - fVar4) * delta_time * (float)_DAT_005eb86d;
    if (fVar4 <= ABS(this_ptr->turn_angle)) {
      if (0.0 <= this_ptr->turn_angle) {
        this_ptr->turn_angle = this_ptr->turn_angle - fVar4;
      }
      else {
        this_ptr->turn_angle = this_ptr->turn_angle + fVar4;
      }
    }
    else {
      this_ptr->turn_angle = 0.0;
    }
  }
  iVar1 = this_ptr->turn_motion_index;
  this_ptr->turn_motion_index = _DAT_0264be80;
  if (this_ptr->turn_angle < 0.0) {
    this_ptr->turn_motion_index = _DAT_0264be84;
  }
  if (this_ptr->turn_blend_weight <= (float)_DAT_005eb875) {
    this_ptr->turn_elapsed = 0.0;
  }
  else {
    this_ptr->turn_elapsed = this_ptr->turn_elapsed + delta_time;
  }
  if ((this_ptr->turn_blend_timer <= 0.0) &&
     (((float)_DAT_005eb87d <= this_ptr->turn_blend_weight || (1.0 < this_ptr->turn_elapsed)))) {
    this_ptr->turn_blend_timer = (1.0 - this_ptr->turn_blend_weight) * 1.6;
  }
  if (this_ptr->turn_blend_timer <= 0.0) {
    local_2c = ABS(this_ptr->turn_angle * _DAT_005eb885);
    if (iVar1 != this_ptr->turn_motion_index) {
      local_2c = 0.0;
    }
    if (1.0 < local_2c) {
      local_2c = 1.0;
    }
    fVar4 = (local_2c - this_ptr->turn_blend_weight) + this_ptr->turn_blend_weight;
    this_ptr->turn_blend_weight = fVar4;
    if ((float)_DAT_005eb88d < fVar4) {
      this_ptr->turn_motion_index = iVar1;
      return;
    }
  }
  else {
    fVar4 = this_ptr->turn_blend_timer;
    fVar2 = fVar4 - delta_time;
    this_ptr->turn_blend_timer = fVar2;
    if (0.0 < fVar2) {
      fVar4 = delta_time / fVar4;
    }
    else {
      fVar4 = 1.0 - this_ptr->turn_blend_weight;
      this_ptr->turn_blend_timer = 0.0;
    }
    fVar2 = this_ptr->turn_blend_weight;
    fVar3 = fVar2 + fVar4;
    this_ptr->turn_blend_weight = fVar3;
    if (fVar3 < 1.0) {
      this_ptr->turn_angle = this_ptr->turn_angle - (this_ptr->turn_angle * fVar4) / (1.0 - fVar2);
      return;
    }
    this_ptr->turn_angle = 0.0;
    this_ptr->turn_blend_timer = 0.0;
    this_ptr->turn_elapsed = 0.0;
    this_ptr->turn_blend_weight = 1.0;
  }
  return;
}
