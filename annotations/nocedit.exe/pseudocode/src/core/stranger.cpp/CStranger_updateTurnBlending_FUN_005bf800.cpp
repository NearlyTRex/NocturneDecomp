// Name: core_stranger.cpp_CStranger_updateTurnBlending_FUN_005bf800
// Address: 005bf800
// Address Range: [[005bf800, 005bfb09]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_updateTurnBlending_FUN_005bf800(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_updateTurnBlending_FUN_005bf800(CStranger *this_ptr,float delta_time)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_34;
  
  (this_ptr->pending_velocity).z = 0.0;
  (this_ptr->pending_velocity).y = (this_ptr->pending_velocity).z;
  (this_ptr->pending_velocity).x = (this_ptr->pending_velocity).y;
  fVar4 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&(this_ptr->base).base.model.motion_controller,0);
  if ((fVar4 <= 0.0) || (1.0 <= this_ptr->turn_blend_weight)) {
    this_ptr->turn_angle = 0.0;
    this_ptr->turn_motion_index = -1;
    this_ptr->turn_blend_timer = 0.0;
    this_ptr->turn_elapsed = 0.0;
    this_ptr->turn_blend_weight = 0.0;
    return;
  }
  if (fVar4 < 1.0) {
    fVar4 = (1.0 - fVar4) * delta_time * (float)10;
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
  this_ptr->turn_motion_index = INT_03f6bb1c;
  if (this_ptr->turn_angle < 0.0) {
    this_ptr->turn_motion_index = INT_03f6bb20;
  }
  if (this_ptr->turn_blend_weight <= (float)0.20000000000000001) {
    this_ptr->turn_elapsed = 0.0;
  }
  else {
    this_ptr->turn_elapsed = this_ptr->turn_elapsed + delta_time;
  }
  if ((this_ptr->turn_blend_timer <= 0.0) &&
     (((float)0.5 <= this_ptr->turn_blend_weight || (1.0 < this_ptr->turn_elapsed)))) {
    this_ptr->turn_blend_timer = (1.0 - this_ptr->turn_blend_weight) * 1.6;
  }
  if (this_ptr->turn_blend_timer <= 0.0) {
    local_34 = ABS(this_ptr->turn_angle * (float)0.31830988619288902);
    if (iVar1 != this_ptr->turn_motion_index) {
      local_34 = 0.0;
    }
    if (1.0 < local_34) {
      local_34 = 1.0;
    }
    fVar4 = (local_34 - this_ptr->turn_blend_weight) + this_ptr->turn_blend_weight;
    this_ptr->turn_blend_weight = fVar4;
    if ((float)0.001 < fVar4) {
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
