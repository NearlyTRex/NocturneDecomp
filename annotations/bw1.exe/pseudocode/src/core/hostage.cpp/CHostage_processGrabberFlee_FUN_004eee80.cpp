// Name: core_hostage.cpp_CHostage_processGrabberFlee_FUN_004eee80
// Address: 004eee80
// Address Range: [[004eee80, 004eefc8]]
// Convention: __cdecl
// Signature: int __cdecl core_hostage_cpp_CHostage_processGrabberFlee_FUN_004eee80(CHostage *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_hostage_cpp_CHostage_processGrabberFlee_FUN_004eee80(CHostage *this_ptr,float delta_time)

{
  float fVar1;
  CDemonActor *pCVar2;
  byte bVar3;
  float afStackY_1020 [1013];
  uint local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  uint local_14;
  float local_8;
  
  bVar3 = 0;
  if (this_ptr->grabber == (CDemonActor *)0x0) {
    return 0;
  }
  fVar1 = this_ptr->grabber_flee_timer - delta_time;
  this_ptr->grabber_flee_timer = fVar1;
  if ((0.0 < fVar1) && ((this_ptr->base).base.walk_stuck_timer <= (float)_DAT_005e4f07)) {
    pCVar2 = this_ptr->grabber;
    local_2c = (this_ptr->base).base.base.location.position.x - (pCVar2->location).position.x;
    local_28 = (this_ptr->base).base.base.location.position.y - (pCVar2->location).position.y;
    local_24 = (this_ptr->base).base.base.location.position.z - (pCVar2->location).position.z;
    local_20 = local_2c;
    fStack_1c = local_28;
    fStack_18 = local_24;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&stack0xffffffe0);
    local_38 = local_14;
    *(uint *)((int)&stack0xffffffcc + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xfffffff0 + (uint)bVar3 * 0xfffffffe * 4);
    *(uint *)(&stack0xffffffd0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xfffffff4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    local_8 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                               (local_34 - (this_ptr->base).base.base.orient.vec.y);
    fVar1 = (this_ptr->base).base.turn_speed;
    (this_ptr->base).base.turn_angle_accumulator = local_8;
    if ((this_ptr->base).base.turn_angle_accumulator < -fVar1) {
      (this_ptr->base).base.turn_angle_accumulator = (this_ptr->base).base.turn_speed;
    }
    if ((this_ptr->base).base.turn_speed < (this_ptr->base).base.turn_angle_accumulator) {
      (this_ptr->base).base.turn_angle_accumulator = (this_ptr->base).base.turn_speed;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,2,1);
    return 1;
  }
  this_ptr->grabber = (CDemonActor *)0x0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            (&(this_ptr->base).base.model.base,0,1);
  return 0;
}
