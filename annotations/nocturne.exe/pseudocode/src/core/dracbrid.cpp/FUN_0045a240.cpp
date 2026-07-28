// Name: core_dracbrid.cpp_FUN_0045a240
// Address: 0045a240
// Address Range: [[0045a240, 0045a25e]]
// Convention: unknown
// Signature: ECollisionType core_dracbrid_cpp_FUN_0045a240(CCharacter *param_1,SCollisionInfo *param_2)

#include "nocturne.h"

ECollisionType core_dracbrid_cpp_FUN_0045a240(CCharacter *param_1,SCollisionInfo *param_2)

{
  ECollisionType EVar1;
  
  if (param_1[1].base.dead2 != 0) {
    return COLLISION_TYPE_NONE;
  }
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00427da0(param_1,param_2);
  return EVar1;
}
