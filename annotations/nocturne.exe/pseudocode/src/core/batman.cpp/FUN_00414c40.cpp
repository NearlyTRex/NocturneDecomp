// Name: core_batman.cpp_FUN_00414c40
// Address: 00414c40
// Address Range: [[00414c40, 00414c5e]]
// Convention: unknown
// Signature: ECollisionType core_batman_cpp_FUN_00414c40(CCharacter *param_1,SCollisionInfo *param_2)

#include "nocturne.h"

ECollisionType core_batman_cpp_FUN_00414c40(CCharacter *param_1,SCollisionInfo *param_2)

{
  ECollisionType EVar1;
  
  if (param_1[1].base.previous_transform_state.orientation.vec.x != 0.0) {
    return COLLISION_TYPE_NONE;
  }
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00427da0(param_1,param_2);
  return EVar1;
}
