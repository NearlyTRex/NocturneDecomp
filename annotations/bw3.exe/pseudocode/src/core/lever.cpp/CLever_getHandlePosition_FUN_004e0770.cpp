// Name: core_lever.cpp_CLever_getHandlePosition_FUN_004e0770
// Address: 004e0770
// Address Range: [[004e0770, 004e0827]]
// Convention: __stack_esi
// Signature: CVector3f * __stack_esi core_lever_cpp_CLever_getHandlePosition_FUN_004e0770(CLever *this_ptr,CVector3f *out_position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __stack_esi core_lever_cpp_CLever_getHandlePosition_FUN_004e0770(CLever *this_ptr,CVector3f *out_position)

{
  CVector3i *pCVar1;
  CKeyFramedModel *pCVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  double dVar6;
  float afStackY_100c [1013];
  CKeyFramedModelInstance *this_ptr_00;
  float local_2c;
  float local_28;
  CVector3f local_24;
  int iStack_18;
  int local_10;
  
  bVar5 = 0;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(&this_ptr->model);
  pCVar1 = pCVar2->vertex_list;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(&this_ptr->model);
  local_10 = pCVar2->frame_count + -1;
  this_ptr_00 = (CKeyFramedModelInstance *)0x4e07b5;
  dVar6 = round((double)((float)local_10 * this_ptr->param));
  iStack_18 = (int)ROUND(dVar6);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(this_ptr_00);
  iVar3 = this_ptr->end_vertex_index + pCVar2->vertex_count * iStack_18;
  local_2c = (float)pCVar1[iVar3].y * _DAT_005e23b8;
  local_28 = (float)pCVar1[iVar3].z * _DAT_005e23b8;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
            (&this_ptr->base,(CVector3f *)&stack0xffffffd0,&local_24);
  puVar4 = (uint *)((int)out_position + (uint)bVar5 * -8 + 4);
  out_position->x = local_24.x;
  *puVar4 = *(uint *)((int)&local_24 + (uint)bVar5 * -8 + 4);
  puVar4[(uint)bVar5 * -2 + 1] =
       *(uint *)((int)&local_24 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  return out_position;
}
