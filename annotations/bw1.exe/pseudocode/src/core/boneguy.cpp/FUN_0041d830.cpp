// Name: core_boneguy.cpp_FUN_0041d830
// Address: 0041d830
// Address Range: [[0041d830, 0041d84e]]
// Convention: unknown
// Signature: ECollisionType core_boneguy_cpp_FUN_0041d830(CCharacter *param_1,SCollisionInfo *param_2)

#include "nocturne.h"

ECollisionType core_boneguy_cpp_FUN_0041d830(CCharacter *param_1,SCollisionInfo *param_2)

{
  ECollisionType EVar1;
  
  if (*(int *)&param_1[1].field_0x6b8 != 0) {
    return COLLISION_TYPE_NONE;
  }
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_004310b0(param_1,param_2);
  return EVar1;
}
