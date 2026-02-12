// Name: core_bodypart.cpp_CBodyPart_FUN_0041add0
// Address: 0041add0
// Address Range: [[0041add0, 0041ae4b]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_FUN_0041add0(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_FUN_0041add0(CBodyPart *this_ptr)

{
  int iVar1;
  SBodyPartModel *pSVar2;
  char *in_stack_00000008;
  int *in_stack_0000000c;
  int *in_stack_00000010;
  
  iVar1 = this_ptr->attached_model_count;
  if (iVar1 < 3) {
    pSVar2 = this_ptr->attached_models + iVar1;
    this_ptr->attached_model_count = iVar1 + 1;
    if (pSVar2 != (SBodyPartModel *)in_stack_0000000c) {
      (pSVar2->scale).x = *in_stack_0000000c;
      (pSVar2->scale).y = in_stack_0000000c[1];
      (pSVar2->scale).z = in_stack_0000000c[2];
    }
    if (&pSVar2->position != (CVector3i *)in_stack_00000010) {
      (pSVar2->position).x = *in_stack_00000010;
      (pSVar2->position).y = in_stack_00000010[1];
      (pSVar2->position).z = in_stack_00000010[2];
    }
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              (&pSVar2->model,in_stack_00000008);
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&pSVar2->model);
  }
  return;
}
