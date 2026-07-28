// Name: core_lever.cpp_CLever_getHandlePosition_FUN_004c6640
// Address: 004c6640
// Address Range: [[004c6640, 004c66ef]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_lever_cpp_CLever_getHandlePosition_FUN_004c6640(CLever *this_ptr,CVector3f *out_position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __cdecl core_lever_cpp_CLever_getHandlePosition_FUN_004c6640(CLever *this_ptr,CVector3f *out_position)

{
  CKeyFramedModel *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->model);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->model);
  this_ptr_00 = (CKeyFramedModelInstance *)0x4c6688;
  round((double)((float)(pCVar1->frame_count + -1) * this_ptr->param));
  core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(this_ptr_00);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            (&this_ptr->base,out_position,(CVector3f *)&stack0xffffffd8);
  return out_position;
}
