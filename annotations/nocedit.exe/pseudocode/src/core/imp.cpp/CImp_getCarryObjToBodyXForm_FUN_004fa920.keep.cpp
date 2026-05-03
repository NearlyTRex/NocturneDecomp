// Name: core_imp.cpp_CImp_getCarryObjToBodyXForm_FUN_004fa920
// Address: 004fa920
// MANUAL RECONSTRUCTION
// Address Range: [[004fa920, 004faaef] [03fc43bc, 03fc441a]]
// Convention: __stack2_esi
// Signature: void __stack2_esi core_imp_cpp_CImp_getCarryObjToBodyXForm_FUN_004fa920(CImp *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

void __stack2_esi core_imp_cpp_CImp_getCarryObjToBodyXForm_FUN_004fa920(CImp *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  int iVar2;
  CMatrix3x4f local_c0;
  CMatrix3x4f local_90;
  CVector3f local_3c;
  CVector3f local_18;

  iVar2 = (this_ptr->base).base.carry_hands[hand_index].bone_index;
  if (hand_index == 1) {
    local_18.x = 0.206;
    local_18.y = -0.505;
    local_18.z = 0.389;
    local_3c.x = -0.683;
    local_3c.y = 0.439;
    local_3c.z = 0.993;
  }
  else {
    local_18.x = -0.417;
    local_18.y = -0.53;
    local_18.z = 0.41;
    local_3c.x = -0.683;
    local_3c.y = 0.439;
    local_3c.z = 0.993;
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(&local_90,&local_18,&local_3c);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            (&local_90,(this_ptr->base).base.model.bone_transform.bone_world_matrices + iVar2,
             &local_c0);
  *out_matrix = local_c0;
  return;
}
