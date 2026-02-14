// Name: core_charactr.cpp_CCharacter_checkCylinderCollisionWorld_FUN_0042c110
// Address: 0042c110
// Address Range: [[0042c110, 0042c176]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_0042c110(CCharacter *this_ptr,CVector3f *world_point,float tolerance,SDamageInfo *damage_info)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_0042c110(CCharacter *this_ptr,CVector3f *world_point,float tolerance,SDamageInfo *damage_info)

{
  int iVar1;
  CVector3f local_10;
  
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(&this_ptr->base,&local_10,world_point);
  iVar1 = (*((this_ptr->base).vtable._ub)->testCylinderCollision)
                    (&this_ptr->base,(SCollisionReturnInfo *)&local_10,tolerance);
  if (iVar1 == 0) {
    damage_info->damage_amount = 0.0;
    return 0;
  }
  (*(((this_ptr->base).vtable._uc)->_uc).processDamage)(this_ptr,damage_info);
  return 1;
}
