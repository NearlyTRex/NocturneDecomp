// Name: core_construc.cpp_FUN_004444c0
// Address: 004444c0
// Address Range: [[004444c0, 004444e9]]
// Convention: unknown
// Signature: ECollisionType core_construc_cpp_FUN_004444c0(CCharacter *param_1,SCollisionInfo *param_2)

#include "nocturne.h"

ECollisionType core_construc_cpp_FUN_004444c0(CCharacter *param_1,SCollisionInfo *param_2)

{
  ECollisionType EVar1;
  
  if (*(int *)param_2 == 4) {
    return COLLISION_TYPE_MESH;
  }
  if (*(int *)&param_1[1].model.field_0x920 != 0) {
    return COLLISION_TYPE_NONE;
  }
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00430430(param_1,param_2);
  return EVar1;
}
