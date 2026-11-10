// Name: core_hero.cpp_CHero_testCylinderCollision_FUN_004d2720
// Address: 004d2720
// Address Range: [[004d2720, 004d2755]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_testCylinderCollision_FUN_004d2720(CHero *this_ptr,SCollisionReturnInfo *collision_info,float tolerance)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_testCylinderCollision_FUN_004d2720(CHero *this_ptr,SCollisionReturnInfo *collision_info,float tolerance)

{
  int iVar1;
  
  if ((*(int *)&g_CGamePtr->field_0x1f4 == 0) && ((*(uint *)(this_ptr + 0xcdcc) & 0x7fffffff) == 0))
  {
    iVar1 = core_actor_cpp_CDemonActor_testCylinderCollision_FUN_00408d10
                      ((CDemonActor *)this_ptr,collision_info,tolerance);
    return iVar1;
  }
  return 0;
}
