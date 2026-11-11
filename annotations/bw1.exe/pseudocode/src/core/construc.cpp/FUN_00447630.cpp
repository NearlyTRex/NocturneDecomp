// Name: core_construc.cpp_FUN_00447630
// Address: 00447630
// Address Range: [[00447630, 00447659]]
// Convention: unknown
// Signature: ECollisionType core_construc_cpp_FUN_00447630(CCharacter *param_1,SCollisionInfo *param_2)

#include "nocturne.h"

ECollisionType core_construc_cpp_FUN_00447630(CCharacter *param_1,SCollisionInfo *param_2)

{
  ECollisionType EVar1;
  
  if ((param_2->ray_query).ray_type == 4) {
    return COLLISION_TYPE_MESH;
  }
  if (param_1[1].model.bone_transform.pose_data.bone_rotations[8].w != 0.0) {
    return COLLISION_TYPE_NONE;
  }
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_004310b0(param_1,param_2);
  return EVar1;
}
