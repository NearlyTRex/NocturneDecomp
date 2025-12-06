// Name: core_dmodel.cpp_CKeyFramedModel_scale_FUN_0047c4d0
// Address: 0047c4d0
// Address Range: [[0047c4d0, 0047c5e4]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_scale_FUN_0047c4d0(CKeyFramedModel * this_ptr, CVector3f * scale_factors)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_scale_FUN_0047c4d0
          (CKeyFramedModel *this_ptr,CVector3f *scale_factors)

{
  uint extraout_EAX;
  uint extraout_EAX_00;
  uint extraout_EAX_01;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  int iVar1;
  int iVar2;
  float10 in_ST0;
  float10 fVar3;
  float10 fVar4;
  double dVar5;
  
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < this_ptr->frame_count * this_ptr->vertex_count; iVar2 = iVar2 + 1) {
    dVar5 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
    fVar4 = (float10)dVar5;
    fVar3 = (float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX);
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX));
    *(int *)((int)this_ptr->vertex_list + iVar1) = (int)ROUND(fVar3);
    dVar5 = crt_math_c_floor_FUN_005feb90((double)fVar4);
    fVar4 = (float10)dVar5;
    fVar3 = (float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,extraout_EAX_00);
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,extraout_EAX_00));
    *(int *)((int)this_ptr->vertex_list + iVar1 + 4) = (int)ROUND(fVar3);
    dVar5 = crt_math_c_floor_FUN_005feb90((double)fVar4);
    in_ST0 = (float10)dVar5;
    fVar4 = (float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX_01,extraout_EAX_01);
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX_01,extraout_EAX_01));
    *(int *)((int)this_ptr->vertex_list + iVar1 + 8) = (int)ROUND(fVar4);
    iVar1 = iVar1 + 0xc;
  }
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
  return;
}
