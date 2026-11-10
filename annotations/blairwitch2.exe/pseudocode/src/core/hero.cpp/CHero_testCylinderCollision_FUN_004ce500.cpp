// Name: core_hero.cpp_CHero_testCylinderCollision_FUN_004ce500
// Address: 004ce500
// Address Range: [[004ce500, 004ce535]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_testCylinderCollision_FUN_004ce500(CHero *this_ptr,SCollisionReturnInfo *collision_info,float tolerance)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_testCylinderCollision_FUN_004ce500(CHero *this_ptr,SCollisionReturnInfo *collision_info,float tolerance)

{
  int iVar1;
  
  if ((*(int *)&g_CGamePtr->field_0x1ec == 0) && ((*(uint *)(this_ptr + 0x10a60) & 0x7fffffff) == 0)
     ) {
    iVar1 = core_actor_cpp_CDemonActor_testCylinderCollision_FUN_00408f00
                      ((CDemonActor *)this_ptr,collision_info,tolerance);
    return iVar1;
  }
  return 0;
}
