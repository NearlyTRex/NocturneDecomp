// Name: core_construc.cpp_FUN_00438370
// Address: 00438370
// Address Range: [[00438370, 0043838e]]
// Convention: unknown
// Signature: ECollisionType core_construc_cpp_FUN_00438370(CCharacter *param_1,SCollisionInfo *param_2)

#include "nocturne.h"

ECollisionType core_construc_cpp_FUN_00438370(CCharacter *param_1,SCollisionInfo *param_2)

{
  ECollisionType EVar1;
  
  if (*(int *)&param_1[1].model.field_0x5c4 != 0) {
    return COLLISION_TYPE_NONE;
  }
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00427680(param_1,param_2);
  return EVar1;
}
