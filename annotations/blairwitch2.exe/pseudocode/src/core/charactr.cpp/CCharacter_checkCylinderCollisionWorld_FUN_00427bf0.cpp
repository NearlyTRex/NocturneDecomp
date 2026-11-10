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
  uint auStackY_100c [1015];
  uint uStack_24;
  uint uStack_18;
  uint auStack_14 [2];
  
  bVar2 = 0;
  if (*(int *)&this_ptr->field_0x281c != 0) {
    return 0;
  }
  core_actor_cpp_FUN_00408de0(this_ptr,world_point);
  uStack_18 = uStack_24;
  auStack_14[(uint)bVar2 * -2] = *(uint *)(&stack0xffffffe0 + (uint)bVar2 * -8);
  auStack_14[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       *(uint *)(&stack0xffffffe4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  iVar1 = (*((this_ptr->base).vtable._ub)->testCylinderCollision)
                    (&this_ptr->base,(SCollisionReturnInfo *)&uStack_18,tolerance);
  if (iVar1 == 0) {
    *(uint *)(damage_info + 4) = 0;
    return 0;
  }
  (*(((this_ptr->base).vtable._uc)->_uc).processDamage)(this_ptr,damage_info);
  return 1;
}
