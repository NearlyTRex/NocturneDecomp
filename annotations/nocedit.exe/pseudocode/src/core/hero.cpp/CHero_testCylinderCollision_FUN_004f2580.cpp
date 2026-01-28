// Name: core_hero.cpp_CHero_testCylinderCollision_FUN_004f2580
// Address: 004f2580
// Address Range: [[004f2580, 004f25b5]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_testCylinderCollision_FUN_004f2580 (CHero *this_ptr,SCollisionReturnInfo *collision_info,CDemonActor *other_actor)

#include "nocturne.h"

int __cdecl
core_hero_cpp_CHero_testCylinderCollision_FUN_004f2580
          (CHero *this_ptr,SCollisionReturnInfo *collision_info,CDemonActor *other_actor)

{
  int iVar1;
  
  if ((g_CGamePtr->unk2 == 0) && ((this_ptr->unk1 & 0x7fffffffU) == 0)) {
    iVar1 = core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0
                      ((CDemonActor *)this_ptr,collision_info,(float)other_actor);
    return iVar1;
  }
  return 0;
}
