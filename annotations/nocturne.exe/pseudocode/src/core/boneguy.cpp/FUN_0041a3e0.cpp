// Name: core_boneguy.cpp_FUN_0041a3e0
// Address: 0041a3e0
// Address Range: [[0041a3e0, 0041a3fe]]
// Convention: unknown
// Signature: ECollisionType core_boneguy_cpp_FUN_0041a3e0(CCharacter *param_1,SCollisionInfo *param_2)

#include "nocturne.h"

ECollisionType core_boneguy_cpp_FUN_0041a3e0(CCharacter *param_1,SCollisionInfo *param_2)

{
  ECollisionType EVar1;
  
  if (param_1[1].model.rest_pose_data[0x15] != 0.0) {
    return COLLISION_TYPE_NONE;
  }
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00427da0(param_1,param_2);
  return EVar1;
}
