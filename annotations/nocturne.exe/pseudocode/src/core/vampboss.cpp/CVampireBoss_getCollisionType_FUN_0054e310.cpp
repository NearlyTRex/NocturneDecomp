// Name: core_vampboss.cpp_CVampireBoss_getCollisionType_FUN_0054e310
// Address: 0054e310
// Address Range: [[0054e310, 0054e36b]]
// Convention: unknown
// Signature: ECollisionType core_vampboss_cpp_CVampireBoss_getCollisionType_FUN_0054e310(CCharacter *param_1,SCollisionInfo *param_2)

#include "nocturne.h"

ECollisionType core_vampboss_cpp_CVampireBoss_getCollisionType_FUN_0054e310(CCharacter *param_1,SCollisionInfo *param_2)

{
  int iVar1;
  ECollisionType EVar2;
  
  if ((param_2->ray_query).ray_type != 2) {
    iVar1 = (*(((param_1->base).vtable._uc)->_uc).releaseFromGrab)(param_1);
    if (iVar1 < 2) {
      iVar1 = (param_2->ray_query).ray_type;
      if (((iVar1 == 1) || (iVar1 == 3)) &&
         (param_1[0x10].model.bone_transform.bone_world_matrices[0x2f].m[0].y == 2.8026e-45)) {
        param_2->deformable_model =
             (CDeformableModelInstance *)(param_1[1].base.create_event + 0x20);
        return COLLISION_TYPE_MESH;
      }
      EVar2 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00427da0(param_1,param_2);
      return EVar2;
    }
  }
  return COLLISION_TYPE_NONE;
}
