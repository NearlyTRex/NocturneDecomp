// Name: core_mobster.cpp_CMobster_positionOnVehicle_FUN_004fdc60
// Address: 004fdc60
// Address Range: [[004fdc60, 004fdd4a]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_positionOnVehicle_FUN_004fdc60(CMobster *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_mobster_cpp_CMobster_positionOnVehicle_FUN_004fdc60(CMobster *this_ptr)

{
  float fVar1;
  byte bVar2;
  float afStackY_1030 [1016];
  float local_48;
  float local_44;
  float local_40;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  bVar2 = 0;
  if (this_ptr->side_of_car == 0) {
    local_24.y = -2.35;
    local_24.z = -1.6;
    local_24.x = 2.2;
    if (&local_30 != &local_24) {
      local_30.z = -1.6;
      local_30.x = 2.2;
      local_30.y = -2.35;
    }
    fVar1 = (this_ptr->vehicle->orient).vec.y + 1.570796f;
  }
  else {
    local_3c.y = -2.35;
    local_3c.z = -1.6;
    local_3c.x = -2.2;
    if (&local_30 != &local_3c) {
      local_30.z = -1.6;
      local_30.x = -2.2;
      local_30.y = -2.35;
    }
    fVar1 = (this_ptr->vehicle->orient).vec.y + -1.570796f;
  }
  (this_ptr->base).base.base.orient.vec.y = fVar1;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70(this_ptr->vehicle,&local_30,&local_18);
  local_48 = local_18.x;
  *(uint *)((int)&stack0xffffffbc + (uint)bVar2 * -8) =
       *(uint *)((int)&local_18 + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&stack0xffffffc0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)((int)&local_18 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  (this_ptr->base).base.base.location.position.x = local_48;
  (this_ptr->base).base.base.location.position.y = local_44;
  (this_ptr->base).base.base.location.position.z = local_40;
  return;
}
