// Name: core_charactr.cpp_CCharacter_checkCylinderCollisionWorld_FUN_00427bf0
// Address: 00427bf0
// Address Range: [[00427bf0, 00427c7a]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_00427bf0(CCharacter *this_ptr,CVector3f *world_point,float tolerance,SDamageInfo *damage_info)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_00427bf0(CCharacter *this_ptr,CVector3f *world_point,float tolerance,SDamageInfo *damage_info)

{
  int iVar1;
  byte bVar2;
  float afStackY_100c [1015];
  float fStack_24;
  float fStack_18;
  
  bVar2 = 0;
  if (this_ptr->is_invulnerable != 0) {
    return 0;
  }
  core_actor_cpp_FUN_00408de0(this_ptr,world_point);
  fStack_18 = fStack_24;
  *(uint *)(&stack0xffffffec + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar2 * -8);
  *(uint *)(&stack0xfffffff0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffe4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  iVar1 = (*((this_ptr->base).vtable._ub)->testCylinderCollision)
                    (&this_ptr->base,(SCollisionReturnInfo *)&stack0xffffffe8,tolerance);
  if (iVar1 == 0) {
    damage_info->damage_amount = 0.0;
    return 0;
  }
  (*(((this_ptr->base).vtable._uc)->_uc).processDamage)(this_ptr,damage_info);
  return 1;
}
