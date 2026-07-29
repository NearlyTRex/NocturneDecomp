// Name: core_hostage.cpp_CHostage_processGrabberFlee_FUN_004b81a0
// Address: 004b81a0
// Address Range: [[004b81a0, 004b82c1]]
// Convention: __cdecl
// Signature: int __cdecl core_hostage_cpp_CHostage_processGrabberFlee_FUN_004b81a0(CHostage *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_hostage_cpp_CHostage_processGrabberFlee_FUN_004b81a0(CHostage *this_ptr,float delta_time)

{
  float fVar1;
  CDemonActor *pCVar2;
  CVector3f *pCVar3;
  CVector3f local_20;
  CVector3f local_14;
  float local_8;
  
  if (this_ptr->grabber == (CDemonActor *)0x0) {
    return 0;
  }
  fVar1 = this_ptr->grabber_flee_timer - delta_time;
  this_ptr->grabber_flee_timer = fVar1;
  if ((0.0 < fVar1) && ((this_ptr->base).base.walk_stuck_timer <= (float)1.5)) {
    pCVar2 = this_ptr->grabber;
    local_20.x = (this_ptr->base).base.base.location.position.x - (pCVar2->location).position.x;
    local_20.y = (this_ptr->base).base.base.location.position.y - (pCVar2->location).position.y;
    local_20.z = (this_ptr->base).base.base.location.position.z - (pCVar2->location).position.z;
    pCVar3 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_14,&local_20);
    local_8 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                        (pCVar3->y - (this_ptr->base).base.base.orient.vec.y);
    fVar1 = (this_ptr->base).base.turn_speed;
    (this_ptr->base).base.turn_angle_accumulator = local_8;
    if ((this_ptr->base).base.turn_angle_accumulator < -fVar1) {
      (this_ptr->base).base.turn_angle_accumulator = (this_ptr->base).base.turn_speed;
    }
    if ((this_ptr->base).base.turn_speed < (this_ptr->base).base.turn_angle_accumulator) {
      (this_ptr->base).base.turn_angle_accumulator = (this_ptr->base).base.turn_speed;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.motion_controller,2,1);
    return 1;
  }
  this_ptr->grabber = (CDemonActor *)0x0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
            (&(this_ptr->base).base.model.motion_controller,0,1);
  return 0;
}
