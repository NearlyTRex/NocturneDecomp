// Name: core_mobster.cpp_CMobster_FUN_00525650
// Address: 00525650
// Address Range: [[00525650, 00525719]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_FUN_00525650(CMobster *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_mobster_cpp_CMobster_FUN_00525650(CMobster *this_ptr)

{
  float fVar1;
  CVector3f *pCVar2;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  if (this_ptr->side_of_car == 0) {
    local_3c.y = -2.35;
    local_3c.z = -1.6;
    local_3c.x = 2.2;
    if (&local_24 != &local_3c) {
      local_24.y = -2.35;
      local_24.z = -1.6;
      local_24.x = 2.2;
    }
    fVar1 = (this_ptr->vehicle->orient).bank + (float)1.57079632675;
  }
  else {
    local_18.y = -2.35;
    local_18.z = -1.6;
    local_18.x = -2.2;
    if (&local_24 != &local_18) {
      local_24.y = -2.35;
      local_24.z = -1.6;
      local_24.x = -2.2;
    }
    fVar1 = (this_ptr->vehicle->orient).bank + (float)-1.57079632675;
  }
  (this_ptr->base).base.base.orient.bank = fVar1;
  pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (this_ptr->vehicle,&local_30,&local_24);
  (this_ptr->base).base.base.location.position.x = pCVar2->x;
  (this_ptr->base).base.base.location.position.y = pCVar2->y;
  (this_ptr->base).base.base.location.position.z = pCVar2->z;
  return;
}
