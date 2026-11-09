// Name: core_boneguy.cpp_FUN_00419860
// Address: 00419860
// Address Range: [[00419860, 0041987e]]
// Convention: unknown
// Signature: ECollisionType core_boneguy_cpp_FUN_00419860(CCharacter *param_1,SCollisionInfo *param_2)

#include "nocturne.h"

ECollisionType core_boneguy_cpp_FUN_00419860(CCharacter *param_1,SCollisionInfo *param_2)

{
  ECollisionType EVar1;
  
  if (*(int *)&param_1[1].field_0x318 != 0) {
    return COLLISION_TYPE_NONE;
  }
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00430430(param_1,param_2);
  return EVar1;
}
