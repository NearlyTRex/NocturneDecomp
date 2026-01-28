// Name: core_dmodel.cpp_CKeyFramedModel_applyBias_FUN_0047c370
// Address: 0047c370
// Address Range: [[0047c370, 0047c46e]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_applyBias_FUN_0047c370 (CKeyFramedModel *this_ptr,CVector3f *bias_offset)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_applyBias_FUN_0047c370
          (CKeyFramedModel *this_ptr,CVector3f *bias_offset)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  CKeyFramedModel *model_ptr;
  double dVar6;
  int iVar7;
  int iVar8;
  
  dVar6 = crt_math_c_floor_FUN_005feb90
                    ((double)(bias_offset->x * (float)256 + (float)0.5));
  fVar2 = bias_offset->y;
  fVar3 = (float)256;
  crt_math_c_round_FUN_005fe6b0(dVar6);
  dVar6 = crt_math_c_floor_FUN_005feb90((double)(fVar2 * fVar3 + (float)0.5));
  fVar2 = bias_offset->z;
  iVar8 = SUB84(dVar6,0);
  fVar3 = (float)256;
  crt_math_c_round_FUN_005fe6b0(dVar6);
  dVar6 = crt_math_c_floor_FUN_005feb90((double)(fVar2 * fVar3 + (float)0.5));
  iVar7 = (int)((ulonglong)dVar6 >> 0x20);
  dVar6 = crt_math_c_round_FUN_005fe6b0(dVar6);
  iVar5 = 0;
  for (iVar4 = 0; iVar4 < model_ptr->frame_count * model_ptr->vertex_count; iVar4 = iVar4 + 1) {
    piVar1 = (int *)(iVar5 + (int)model_ptr->vertex_list);
    *piVar1 = *piVar1 + iVar8;
    piVar1 = (int *)(iVar5 + 4 + (int)model_ptr->vertex_list);
    *piVar1 = *piVar1 + iVar7;
    *(int *)(iVar5 + 8 + (int)model_ptr->vertex_list) =
         *(int *)(iVar5 + 8 + (int)model_ptr->vertex_list) + (int)ROUND(dVar6);
    iVar5 = iVar5 + 0xc;
  }
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(model_ptr);
  return;
}
