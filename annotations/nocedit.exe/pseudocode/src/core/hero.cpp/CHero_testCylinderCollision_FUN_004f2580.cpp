// Name: core_hero.cpp_CHero_testCylinderCollision_FUN_004f2580
// Address: 004f2580
// Address Range: [[004f2580, 004f25b5]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_testCylinderCollision_FUN_004f2580(CHero *this_ptr,SCollisionReturnInfo *collision_info,float tolerance)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_testCylinderCollision_FUN_004f2580(CHero *this_ptr,SCollisionReturnInfo *collision_info,float tolerance)

{
  int iVar1;
  
  if ((g_CGamePtr->debug_flag_1 == 0) && ((this_ptr->no_collision_flag & 0x7fffffffU) == 0)) {
    iVar1 = core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0
                      ((CDemonActor *)this_ptr,collision_info,tolerance);
    return iVar1;
  }
  return 0;
}
