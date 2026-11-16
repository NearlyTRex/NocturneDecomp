// Name: core_door.cpp_CDoor_getHandlePosition_FUN_00464c10
// Address: 00464c10
// Address Range: [[00464c10, 00464cc7]]
// Convention: __stack_esi
// Signature: CVector3f * __stack_esi core_door_cpp_CDoor_getHandlePosition_FUN_00464c10(CDoor *this_ptr,CVector3f *out_position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __stack_esi core_door_cpp_CDoor_getHandlePosition_FUN_00464c10(CDoor *this_ptr,CVector3f *out_position)

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
  this_ptr_00 = (CKeyFramedModelInstance *)0x464c55;
  dVar6 = round((double)((float)local_10 * this_ptr->param));
  iStack_18 = (int)ROUND(dVar6);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(this_ptr_00);
  iVar3 = this_ptr->handle_vertex_index + pCVar2->vertex_count * iStack_18;
  local_2c = (float)pCVar1[iVar3].y * _DAT_005deb98;
  local_28 = (float)pCVar1[iVar3].z * _DAT_005deb98;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
            (&this_ptr->base,(CVector3f *)&stack0xffffffd0,&local_24);
  puVar4 = (uint *)((int)out_position + (uint)bVar5 * -8 + 4);
  out_position->x = local_24.x;
  *puVar4 = *(uint *)((int)&local_24 + (uint)bVar5 * -8 + 4);
  puVar4[(uint)bVar5 * -2 + 1] =
       *(uint *)((int)&local_24 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  return out_position;
}
