// Name: core_lever.cpp_CLever_FUN_00504dd0
// Address: 00504dd0
// Address Range: [[00504dd0, 00504e7f]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_lever_cpp_CLever_FUN_00504dd0(CLever *this_ptr)

#include "nocturne.h"

CVector3f * __cdecl core_lever_cpp_CLever_FUN_00504dd0(CLever *this_ptr)

{
  CKeyFramedModel *pCVar1;
  CVector3f *in_stack_00000008;
  CKeyFramedModelInstance *this_ptr_00;
  
  core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  this_ptr_00 = (CKeyFramedModelInstance *)0x504e18;
  round((double)((float)(pCVar1->frame_count + -1) * this_ptr->param));
  core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr_00);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (&this_ptr->base,in_stack_00000008,(CVector3f *)&stack0xffffffd8);
  return in_stack_00000008;
}
