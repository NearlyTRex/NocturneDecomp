// Name: core_construc.cpp_FUN_004444c0
// Address: 004444c0
// Address Range: [[004444c0, 004444e9]]
// Convention: unknown
// Signature: ECollisionType core_construc_cpp_FUN_004444c0(CCharacter *param_1,SCollisionInfo *param_2)

#include "nocturne.h"

ECollisionType core_construc_cpp_FUN_004444c0(CCharacter *param_1,SCollisionInfo *param_2)

{
  ECollisionType EVar1;
  
  if ((param_2->ray_query).ray_type == 4) {
    return COLLISION_TYPE_MESH;
  }
  if (param_1[1].model.bone_transform.pose_data.bone_rotations[0x27].w != 0.0) {
    return COLLISION_TYPE_NONE;
  }
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00430430(param_1,param_2);
  return EVar1;
}
