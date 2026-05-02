// Name: core_hostage.cpp_CHostage_processGrabberFlee_FUN_004f5ff0
// Address: 004f5ff0
// MANUAL RECONSTRUCTION
// Address Range: [[004f5ff0, 004f6111]]
// Convention: __cdecl
// Signature: int __cdecl core_hostage_cpp_CHostage_processGrabberFlee_FUN_004f5ff0(CHostage *this_ptr,float delta_time)

#include "nocturne.h"

int __cdecl core_hostage_cpp_CHostage_processGrabberFlee_FUN_004f5ff0(CHostage *this_ptr,float delta_time)

{
  CVector3f *pCVar3;
  float fVar2;
  CVector3f local_20;
  CVector3f local_14;
  CDemonActor *pCVar2;
  float fVar1;
  
  if (this_ptr->grabber == (CDemonActor *)0x0) {
    return 0;
  }
  fVar2 = this_ptr->grabber_flee_timer - delta_time;
  this_ptr->grabber_flee_timer = fVar2;
  if ((0.0 < fVar2) && ((this_ptr->base).base.walk_stuck_timer <= (float)1.5)) {
    pCVar2 = this_ptr->grabber;
    local_20.x = (this_ptr->base).base.base.location.position.x - (pCVar2->location).position.x;
    local_20.y = (this_ptr->base).base.base.location.position.y - (pCVar2->location).position.y;
    local_20.z = (this_ptr->base).base.base.location.position.z - (pCVar2->location).position.z;
    pCVar3 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_14,&local_20);
    fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                      (pCVar3->y - (this_ptr->base).base.base.orient.vec.y);
    fVar1 = (this_ptr->base).base.turn_speed;
    (this_ptr->base).base.turn_angle_accumulator = fVar2;
    if ((this_ptr->base).base.turn_angle_accumulator < -fVar1) {
      (this_ptr->base).base.turn_angle_accumulator = (this_ptr->base).base.turn_speed;
    }
    if ((this_ptr->base).base.turn_speed < (this_ptr->base).base.turn_angle_accumulator) {
      (this_ptr->base).base.turn_angle_accumulator = (this_ptr->base).base.turn_speed;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,2,1);
    return 1;
  }
  this_ptr->grabber = (CDemonActor *)0x0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(this_ptr->base).base.model.motion_controller,0,1);
  return 0;
}
