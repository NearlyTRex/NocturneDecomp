// Name: core_charactr.cpp_CCharacter_checkCylinderCollisionWorld_FUN_00428260
// Address: 00428260
// Address Range: [[00428260, 004282c6]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_00428260(CCharacter *param_1,CVector3f *param_2,float param_3)

#include "nocturne.h"

uint core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_00428260(CCharacter *param_1,CVector3f *param_2,float param_3)

{
  int iVar1;
  int unaff_EBX;
  CDemonActor *in_stack_0000001c;
  float local_10;
  
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
            (&param_1->base,(CVector3f *)&local_10,param_2);
  iVar1 = (*((param_1->base).vtable._ub)->testCylinderCollision)
                    (&param_1->base,(SCollisionReturnInfo *)&local_10,param_3);
  if (iVar1 == 0) {
    in_stack_0000001c->actor_name[4] = '\0';
    in_stack_0000001c->actor_name[5] = '\0';
    in_stack_0000001c->actor_name[6] = '\0';
    in_stack_0000001c->actor_name[7] = '\0';
    return 0;
  }
  local_10 = 6.108039e-39;
  (*(((param_1->base).vtable._uc)->_uc).getGrabbed)(param_1,in_stack_0000001c,unaff_EBX);
  return 1;
}
