// Name: core_hero.cpp_CHero_testCylinderCollision_FUN_004d2720
// Address: 004d2720
// Address Range: [[004d2720, 004d2755]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_testCylinderCollision_FUN_004d2720(CHero *this_ptr,SCollisionReturnInfo *collision_info,float tolerance)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_testCylinderCollision_FUN_004d2720(CHero *this_ptr,SCollisionReturnInfo *collision_info,float tolerance)

{
  int iVar1;
  
  if ((g_CGamePtr->god_mode_enabled == 0) && (ABS(this_ptr->invincibility_timer) == 0.0)) {
    iVar1 = core_actor_cpp_CDemonActor_testCylinderCollision_FUN_00408d10
                      ((CDemonActor *)this_ptr,collision_info,tolerance);
    return iVar1;
  }
  return 0;
}
