// Name: core_stranger.cpp_CStranger_getCarryObjToBodyXForm_FUN_005c5170
// Address: 005c5170
// Address Range: [[005c5170, 005c51b0] [03fc3cfb, 03fc3d59]]
// Convention: __stack2_esi
// Signature: void __stack2_esi core_stranger_cpp_CStranger_getCarryObjToBodyXForm_FUN_005c5170(CStranger *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

void __stack2_esi core_stranger_cpp_CStranger_getCarryObjToBodyXForm_FUN_005c5170(CStranger *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  byte bVar3;
  CMatrix3x4f local_38;
  
  core_stranger_cpp_CStranger_computeWeaponAttachXForm_FUN_005c07b0
            (this_ptr,(this_ptr->base).base.carry_hands[hand_index].carry_actor,hand_index,&local_38
            );
  out_matrix->m[0].w = local_38.m[0].w;
  out_matrix->m[0].x = local_38.m[0].x;
  out_matrix->m[0].y = local_38.m[0].y;
  out_matrix->m[0].z = local_38.m[0].z;
  out_matrix->m[1].w = local_38.m[1].w;
  out_matrix->m[1].x = local_38.m[1].x;
  out_matrix->m[1].y = local_38.m[1].y;
  out_matrix->m[1].z = local_38.m[1].z;
  out_matrix->m[2].w = local_38.m[2].w;
  out_matrix->m[2].x = local_38.m[2].x;
  out_matrix->m[2].y = local_38.m[2].y;
  out_matrix->m[2].z = local_38.m[2].z;
  return;
}
