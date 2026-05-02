// Name: core_mobster.cpp_CMobster_dismountVehicle_FUN_00525720
// Address: 00525720
// MANUAL RECONSTRUCTION
// Address Range: [[00525720, 0052580f]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_dismountVehicle_FUN_00525720(CMobster *this_ptr)

#include "nocturne.h"

void __cdecl core_mobster_cpp_CMobster_dismountVehicle_FUN_00525720(CMobster *this_ptr)

{
  CVector3f *pCVar2;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  float fVar1;
  
  if (this_ptr->side_of_car == 0) {
    local_18.y = -2.35;
    local_18.z = -1.6;
    local_18.x = 4.2;
    if (&local_24 != &local_18) {
      local_24.y = -2.35;
      local_24.z = -1.6;
      local_24.x = 4.2;
    }
    fVar1 = (this_ptr->vehicle->orient).vec.y + (float)1.57079632675;
  }
  else {
    local_3c.y = -2.35;
    local_3c.z = -1.6;
    local_3c.x = -4.2;
    if (&local_24 != &local_3c) {
      local_24.y = -2.35;
      local_24.z = -1.6;
      local_24.x = -4.2;
    }
    fVar1 = (this_ptr->vehicle->orient).vec.y + (float)-1.57079632675;
  }
  (this_ptr->base).base.base.orient.vec.y = fVar1;
  pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (this_ptr->vehicle,&local_30,&local_24);
  (this_ptr->base).base.base.location.position.x = pCVar2->x;
  (this_ptr->base).base.base.location.position.y = pCVar2->y;
  (this_ptr->base).base.base.location.position.z = pCVar2->z;
  this_ptr->vehicle = (CDemonActor *)0x0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(this_ptr->base).base.model.motion_controller,8,1);
  return;
}
