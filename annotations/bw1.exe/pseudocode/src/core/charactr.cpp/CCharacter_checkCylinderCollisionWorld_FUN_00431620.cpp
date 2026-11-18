// Name: core_charactr.cpp_CCharacter_checkCylinderCollisionWorld_FUN_00431620
// Address: 00431620
// Address Range: [[00431620, 004316aa]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_00431620(CCharacter *this_ptr,CVector3f *world_point,float tolerance,SDamageInfo *damage_info)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_00431620(CCharacter *this_ptr,CVector3f *world_point,float tolerance,SDamageInfo *damage_info)

{
  int iVar1;
  byte bVar2;
  float afStackY_100c [1015];
  CVector3f CStack_24;
  float fStack_18;
  uint auStack_14 [2];
  
  bVar2 = 0;
  if (this_ptr->is_invulnerable != 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0(&this_ptr->base,world_point,&CStack_24);
  fStack_18 = CStack_24.x;
  auStack_14[(uint)bVar2 * -2] = *(uint *)((int)&CStack_24 + (uint)bVar2 * -8 + 4);
  auStack_14[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       *(uint *)((int)&CStack_24 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  iVar1 = (*((this_ptr->base).vtable._ub)->testCylinderCollision)
                    (&this_ptr->base,(SCollisionReturnInfo *)&fStack_18,tolerance);
  if (iVar1 == 0) {
    damage_info->damage_amount = 0.0;
    return 0;
  }
  (*(((this_ptr->base).vtable._uc)->_uc).processDamage)(this_ptr,damage_info);
  return 1;
}
