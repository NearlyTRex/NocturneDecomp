// Name: core_charactr.cpp_CCharacter_checkCylinderCollisionWorld_FUN_00428260
// Address: 00428260
// Address Range: [[00428260, 004282c6]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_00428260(CCharacter *param_1,CVector3f *param_2,float param_3,SDamageInfo *param_4)

#include "nocturne.h"

uint core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_00428260(CCharacter *param_1,CVector3f *param_2,float param_3,SDamageInfo *param_4)

{
  int iVar1;
  CVector3f local_10;
  
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(&param_1->base,&local_10,param_2);
  iVar1 = (*((param_1->base).vtable._ub)->testCylinderCollision)
                    (&param_1->base,(SCollisionReturnInfo *)&local_10,param_3);
  if (iVar1 == 0) {
    param_4->damage_amount = 0.0;
    return 0;
  }
  (*(((param_1->base).vtable._uc)->_uc).processDamage)(param_1,param_4);
  return 1;
}
