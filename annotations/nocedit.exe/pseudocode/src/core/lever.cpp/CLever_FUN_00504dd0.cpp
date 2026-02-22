// Name: core_lever.cpp_CLever_FUN_00504dd0
// Address: 00504dd0
// Address Range: [[00504dd0, 00504e7f]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_lever_cpp_CLever_FUN_00504dd0(CLever *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

CVector3f * __cdecl core_lever_cpp_CLever_FUN_00504dd0(CLever *this_ptr)

{
  CKeyFramedModelInstance *this_ptr_00;
  CKeyFramedModel *pCVar1;
  CVector3i *pCVar2;
  CVector3f *in_stack_00000008;
  CVector3f local_24;
  int local_18;
  int local_14;
  
  this_ptr_00 = &this_ptr->model;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr_00);
  pCVar2 = pCVar1->vertex_list;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr_00);
  local_14 = pCVar1->frame_count + -1;
  local_18 = (int)ROUND(ROUND((float)local_14 * this_ptr->param));
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr_00);
  pCVar2 = pCVar2 + this_ptr->end_vertex_index + pCVar1->vertex_count * local_18;
  local_24.x = (float)pCVar2->x * 0.00390625f;
  local_24.y = (float)pCVar2->y * 0.00390625f;
  local_24.z = (float)pCVar2->z * 0.00390625f;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (&this_ptr->base,in_stack_00000008,&local_24);
  return in_stack_00000008;
}
