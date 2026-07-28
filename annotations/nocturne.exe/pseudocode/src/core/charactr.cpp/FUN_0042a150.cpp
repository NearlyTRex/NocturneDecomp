// Name: core_charactr.cpp_FUN_0042a150
// Address: 0042a150
// Address Range: [[0042a150, 0042a1d6]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042a150(CCharacter *param_1,float param_2)

#include "nocturne.h"

void core_charactr_cpp_FUN_0042a150(CCharacter *param_1,float param_2)

{
  int iVar1;
  
  core_charactr_cpp_CCharacter_applyGesture_FUN_00429560(param_1);
  core_charactr_cpp_CCharacter_applyLookAt_FUN_00429e60(param_1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(&param_1->model);
  core_charactr_cpp_CCharacter_computeBoundingBox_FUN_004296c0(param_1);
  core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_00429220(param_1,param_2);
  if (param_1->was_rendered_opaque == 0) {
    iVar1 = (*(((param_1->base).vtable._uc)->_uc).releaseFromGrab)(param_1);
    if (iVar1 != 1) {
      return;
    }
  }
  core_cloth_cpp_CClothList_process_FUN_00438550
            (&param_1->cloth_list,&(param_1->base).location.position,&(param_1->base).orient.vec,
             param_2,param_1->closest_distance_threshold,&param_1->model);
  return;
}
