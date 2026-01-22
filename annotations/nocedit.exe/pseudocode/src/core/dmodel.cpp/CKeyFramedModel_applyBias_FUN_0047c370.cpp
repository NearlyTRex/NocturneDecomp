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
  int extraout_ECX;
  int iVar2;
  int iVar3;
  CKeyFramedModel *model_ptr;
  float10 fVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  
  dVar5 = crt_math_c_floor_FUN_005feb90
                    ((double)(bias_offset->x * (float)256 + (float)0.5));
  fVar4 = (float10)bias_offset->y * (float10)256;
  crt_math_c_round_FUN_005fe6b0(dVar5);
  dVar5 = crt_math_c_floor_FUN_005feb90((double)(fVar4 + (float10)0.5));
  iVar7 = SUB84(dVar5,0);
  fVar4 = (float10)bias_offset->z * (float10)256;
  crt_math_c_round_FUN_005fe6b0(dVar5);
  dVar5 = crt_math_c_floor_FUN_005feb90((double)(fVar4 + (float10)0.5));
  iVar6 = (int)((ulonglong)dVar5 >> 0x20);
  dVar5 = crt_math_c_round_FUN_005fe6b0(dVar5);
  iVar3 = 0;
  for (iVar2 = extraout_ECX; iVar2 < model_ptr->frame_count * model_ptr->vertex_count;
      iVar2 = iVar2 + 1) {
    piVar1 = (int *)(iVar3 + (int)model_ptr->vertex_list);
    *piVar1 = *piVar1 + iVar7;
    piVar1 = (int *)(iVar3 + 4 + (int)model_ptr->vertex_list);
    *piVar1 = *piVar1 + iVar6;
    *(int *)(iVar3 + 8 + (int)model_ptr->vertex_list) =
         *(int *)(iVar3 + 8 + (int)model_ptr->vertex_list) + (int)ROUND(dVar5);
    iVar3 = iVar3 + 0xc;
  }
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(model_ptr);
  return;
}
