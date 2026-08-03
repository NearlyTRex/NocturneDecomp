// Name: core_hero.cpp_CHero_testCylinderCollision_FUN_004b4910
// Address: 004b4910
// Address Range: [[004b4910, 004b4945]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_testCylinderCollision_FUN_004b4910(CHero *this_ptr,SCollisionReturnInfo *collision_info,float tolerance)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_testCylinderCollision_FUN_004b4910(CHero *this_ptr,SCollisionReturnInfo *collision_info,float tolerance)

{
  int iVar1;
  
  if ((g_CGame_PTR_005b9354->god_mode_enabled == 0) && (ABS(this_ptr->invincibility_timer) == 0.0))
  {
    iVar1 = core_actor_cpp_CDemonActor_testPointInCylinder_FUN_0040a390
                      ((CDemonActor *)this_ptr,collision_info,tolerance);
    return iVar1;
  }
  return 0;
}
