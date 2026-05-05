// Name: core_stranger.cpp_CStranger_getCarryObjToBodyXForm_FUN_005c5170
// Address: 005c5170
// MANUAL RECONSTRUCTION
// Address Range: [[005c5170, 005c51b0] [03fc3cfb, 03fc3d59]]
// Convention: __stack2_esi
// Signature: void __stack2_esi core_stranger_cpp_CStranger_getCarryObjToBodyXForm_FUN_005c5170(CStranger *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

void __stack2_esi core_stranger_cpp_CStranger_getCarryObjToBodyXForm_FUN_005c5170(CStranger *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  CMatrix3x4f local_38;

  core_stranger_cpp_CStranger_computeWeaponAttachXForm_FUN_005c07b0
            (this_ptr,(this_ptr->base).base.carry_hands[hand_index].carry_actor,hand_index,&local_38
            );
  *out_matrix = local_38;
  return;
}
