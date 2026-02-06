// Name: core_hostage.cpp_CHostage_FUN_004f5ff0
// Address: 004f5ff0
// Address Range: [[004f5ff0, 004f6111]]
// Convention: __cdecl
// Signature: int __cdecl core_hostage_cpp_CHostage_FUN_004f5ff0(CHostage *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_hostage_cpp_CHostage_FUN_004f5ff0(CHostage *this_ptr,float delta_time)

{
  float fVar1;
  int iVar2;
  CVector3f *pCVar3;
  CVector3f local_20;
  CVector3f local_14;
  float local_8;
  
  if (*(int *)(this_ptr->unk4 + 8) == 0) {
    return 0;
  }
  fVar1 = *(float *)(this_ptr->unk4 + 0xc) - delta_time;
  *(float *)(this_ptr->unk4 + 0xc) = fVar1;
  if ((0.0 < fVar1) &&
     (*(float *)((this_ptr->base).base.field53_0x2dc4 + 0x10) <= (float)1.5)) {
    iVar2 = *(int *)(this_ptr->unk4 + 8);
    local_20.x = (this_ptr->base).base.base.location.position.x - *(float *)(iVar2 + 0x20);
    local_20.y = (this_ptr->base).base.base.location.position.y - *(float *)(iVar2 + 0x24);
    local_20.z = (this_ptr->base).base.base.location.position.z - *(float *)(iVar2 + 0x28);
    pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_14,&local_20);
    local_8 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                        (pCVar3->y - (this_ptr->base).base.base.orient.bank);
    fVar1 = (this_ptr->base).base.turn_speed;
    (this_ptr->base).base.turn_angle_accumulator = local_8;
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
  this_ptr->unk4[8] = '\0';
  this_ptr->unk4[9] = '\0';
  this_ptr->unk4[10] = '\0';
  this_ptr->unk4[0xb] = '\0';
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(this_ptr->base).base.model.motion_controller,0,1);
  return 0;
}
