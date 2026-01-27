// Name: core_turret.cpp_CTurret_FUN_005e3dd0
// Address: 005e3dd0
// Address Range: [[005e3dd0, 005e3dfe]]
// Convention: __cdecl
// Signature: void core_turret.cpp_CTurret_FUN_005e3dd0(CTurret * this_ptr)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_FUN_005e3dd0(CTurret *this_ptr)

{
  COrientation *pCVar1;
  
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040((CDemonActor *)this_ptr);
  pCVar1 = &(this_ptr->base).base.orient;
  if ((COrientation *)this_ptr->unk1 == pCVar1) {
    return;
  }
  *(float *)this_ptr->unk1 = pCVar1->pitch;
  *(float *)(this_ptr->unk1 + 4) = (this_ptr->base).base.orient.bank;
  *(float *)(this_ptr->unk1 + 8) = (this_ptr->base).base.orient.heading;
  return;
}
