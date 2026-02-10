// Name: core_turret.cpp_CTurret_FUN_005e3dd0
// Address: 005e3dd0
// Address Range: [[005e3dd0, 005e3dfe]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_FUN_005e3dd0(CTurret *this_ptr)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_FUN_005e3dd0(CTurret *this_ptr)

{
  UOrientationVector *pUVar1;
  
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040((CDemonActor *)this_ptr);
  pUVar1 = &(this_ptr->base).base.orient;
  if ((UOrientationVector *)this_ptr->unk1 == pUVar1) {
    return;
  }
  *(float *)this_ptr->unk1 = (pUVar1->vec).x;
  *(float *)(this_ptr->unk1 + 4) = (this_ptr->base).base.orient.vec.y;
  *(float *)(this_ptr->unk1 + 8) = (this_ptr->base).base.orient.vec.z;
  return;
}
