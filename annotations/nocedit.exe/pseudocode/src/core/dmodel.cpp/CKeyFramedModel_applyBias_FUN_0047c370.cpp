// Name: core_dmodel.cpp_CKeyFramedModel_applyBias_FUN_0047c370
// Address: 0047c370
// Address Range: [[0047c370, 0047c46e]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_applyBias_FUN_0047c370(CKeyFramedModel * this_ptr, CVector3f * bias_offset)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_applyBias_FUN_0047c370
          (CKeyFramedModel *this_ptr,CVector3f *bias_offset)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  int in_EDX;
  int iVar3;
  float10 in_ST0;
  float10 fVar4;
  double dVar5;
  
  dVar5 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
  fVar4 = (float10)dVar5;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,in_EAX));
  dVar5 = crt_math_c_floor_FUN_005feb90((double)fVar4);
  fVar4 = (float10)dVar5;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,in_EAX));
  crt_math_c_floor_FUN_005feb90((double)fVar4);
  dVar5 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,in_EAX));
  iVar3 = 0;
  for (iVar2 = 0; iVar2 < this_ptr->frame_count * this_ptr->vertex_count; iVar2 = iVar2 + 1) {
    piVar1 = (int *)(iVar3 + (int)this_ptr->vertex_list);
    *piVar1 = *piVar1 + in_EAX;
    piVar1 = (int *)(iVar3 + 4 + (int)this_ptr->vertex_list);
    *piVar1 = *piVar1 + in_EDX;
    *(int *)(iVar3 + 8 + (int)this_ptr->vertex_list) =
         *(int *)(iVar3 + 8 + (int)this_ptr->vertex_list) + (int)ROUND(dVar5);
    iVar3 = iVar3 + 0xc;
  }
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
  return;
}
