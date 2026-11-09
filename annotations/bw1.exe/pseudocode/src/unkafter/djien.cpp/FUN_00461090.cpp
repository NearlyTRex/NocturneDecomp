// Name: unkafter_djien.cpp_FUN_00461090
// Address: 00461090
// Address Range: [[00461090, 004610ad]]
// Convention: unknown
// Signature: ECollisionType unkafter_djien_cpp_FUN_00461090(CCharacter *param_1,SCollisionInfo *param_2)

#include "nocturne.h"

ECollisionType unkafter_djien_cpp_FUN_00461090(CCharacter *param_1,SCollisionInfo *param_2)

{
  ECollisionType EVar1;
  
  if (*(int *)param_2 == 1) {
    return COLLISION_TYPE_CUSTOM;
  }
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_004310b0(param_1,param_2);
  return EVar1;
}
