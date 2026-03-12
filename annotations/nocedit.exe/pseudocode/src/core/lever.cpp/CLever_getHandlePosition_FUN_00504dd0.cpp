// Name: core_lever.cpp_CLever_getHandlePosition_FUN_00504dd0
// Address: 00504dd0
// Address Range: [[00504dd0, 00504e7f]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_lever_cpp_CLever_getHandlePosition_FUN_00504dd0(CLever *this_ptr,CVector3f *out_position)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

CVector3f * __cdecl core_lever_cpp_CLever_getHandlePosition_FUN_00504dd0(CLever *this_ptr,CVector3f *out_position)

{
  float fVar1;
  CVector3i *pCVar3;
  int iVar4;
  CKeyFramedModel *pCVar1;
  CKeyFramedModel *pCVar5;
  CVector3i *pCVar2;
  CVector3f local_24;
  int local_18;
  int local_14;
  CKeyFramedModelInstance *this_ptr_00;
  
  this_ptr_00 = &this_ptr->model;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr_00);
  pCVar3 = pCVar1->vertex_list;
  pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr_00);
  iVar4 = pCVar5->frame_count;
  fVar1 = this_ptr->param;
  pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr_00);
  pCVar2 = pCVar3 + this_ptr->end_vertex_index +
                    pCVar5->vertex_count * (int)ROUND(ROUND((float)(iVar4 + -1) * fVar1));
  local_24.x = (float)pCVar2->x * 0.00390625f;
  local_24.y = (float)pCVar2->y * 0.00390625f;
  local_24.z = (float)pCVar2->z * 0.00390625f;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(&this_ptr->base,out_position,&local_24);
  return out_position;
}
