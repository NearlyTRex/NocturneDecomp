// Name: core_turret.cpp_CTurret_processInEditor_FUN_005e3dd0
// Address: 005e3dd0
// MANUAL RECONSTRUCTION
// Address Range: [[005e3dd0, 005e3dfe]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_processInEditor_FUN_005e3dd0(CTurret *this_ptr)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_processInEditor_FUN_005e3dd0(CTurret *this_ptr)

{
  UOrientationVector *pUVar1;
  
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040((CDemonActor *)this_ptr);
  pUVar1 = &(this_ptr->base).base.orient;
  if (&this_ptr->home_orient == pUVar1) {
    return;
  }
  this_ptr->home_orient = *pUVar1;
  return;
}
