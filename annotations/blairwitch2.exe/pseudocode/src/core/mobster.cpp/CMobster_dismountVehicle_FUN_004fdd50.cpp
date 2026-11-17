// Name: core_mobster.cpp_CMobster_dismountVehicle_FUN_004fdd50
// Address: 004fdd50
// Address Range: [[004fdd50, 004fde4d]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_dismountVehicle_FUN_004fdd50(CMobster *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_mobster_cpp_CMobster_dismountVehicle_FUN_004fdd50(CMobster *this_ptr)

{
  float fVar1;
  byte bVar2;
  float afStackY_1024 [1012];
  CVector3f local_48;
  float local_3c;
  float local_38 [2];
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  bVar2 = 0;
  if (this_ptr->side_of_car == 0) {
    local_24.y = -2.35;
    local_24.z = -1.6;
    local_24.x = 4.2;
    if (&local_30 != &local_24) {
      local_30.y = -2.35;
      local_30.z = -1.6;
      local_30.x = 4.2;
    }
    fVar1 = (this_ptr->vehicle->orient).vec.y + 1.570796f;
  }
  else {
    local_48.y = -2.35;
    local_48.z = -1.6;
    local_48.x = -4.2;
    if (&local_30 != &local_48) {
      local_30.y = -2.35;
      local_30.z = -1.6;
      local_30.x = -4.2;
    }
    fVar1 = (this_ptr->vehicle->orient).vec.y + -1.570796f;
  }
  (this_ptr->base).base.base.orient.vec.y = fVar1;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70(this_ptr->vehicle,&local_30,&local_18);
  local_3c = local_18.x;
  local_38[(uint)bVar2 * -2] = *(float *)((int)&local_18 + (uint)bVar2 * -8 + 4);
  local_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       *(float *)((int)&local_18 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  (this_ptr->base).base.base.location.position.x = local_3c;
  (this_ptr->base).base.base.location.position.y = local_38[0];
  (this_ptr->base).base.base.location.position.z = local_38[1];
  this_ptr->vehicle = (CDemonActor *)0x0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.model.base,8,1);
  return;
}
