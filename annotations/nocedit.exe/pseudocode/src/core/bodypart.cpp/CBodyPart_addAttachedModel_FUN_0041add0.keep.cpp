// Name: core_bodypart.cpp_CBodyPart_addAttachedModel_FUN_0041add0
// Address: 0041add0
// MANUAL RECONSTRUCTION
// Address Range: [[0041add0, 0041ae4b]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_addAttachedModel_FUN_0041add0(CBodyPart *this_ptr,char *model_name,CVector3f *position_offset,CVector3f *euler_angles)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_addAttachedModel_FUN_0041add0(CBodyPart *this_ptr,char *model_name,CVector3f *position_offset,CVector3f *euler_angles)

{
  int iVar1;
  SBodyPartModel *slot;

  iVar1 = this_ptr->attached_model_count;
  if (iVar1 < 3) {
    slot = &this_ptr->attached_models[iVar1];
    this_ptr->attached_model_count = iVar1 + 1;
    if (&slot->position_offset != position_offset) {
      slot->position_offset = *position_offset;
    }
    if (&slot->euler_angles != euler_angles) {
      slot->euler_angles = *euler_angles;
    }
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              (&slot->model,model_name);
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&slot->model);
  }
  return;
}
