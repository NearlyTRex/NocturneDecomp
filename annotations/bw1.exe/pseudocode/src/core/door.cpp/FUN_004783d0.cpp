// Name: core_door.cpp_FUN_004783d0
// Address: 004783d0
// Address Range: [[004783d0, 00478487]]
// Convention: unknown
// Signature: void core_door_cpp_FUN_004783d0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_door_cpp_FUN_004783d0(CDemonActor *param_1)

{
  CVector3i *pCVar1;
  CKeyFramedModel *pCVar2;
  int iVar3;
  float *unaff_ESI;
  byte bVar4;
  double dVar5;
  float afStackY_100c [1013];
  CKeyFramedModelInstance *this_ptr;
  float local_2c;
  float local_28;
  CVector3f local_24;
  int iStack_18;
  int local_10;
  
  bVar4 = 0;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                     ((CKeyFramedModelInstance *)(param_1 + 1));
  pCVar1 = pCVar2->vertex_list;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                     ((CKeyFramedModelInstance *)(param_1 + 1));
  local_10 = pCVar2->frame_count + -1;
  this_ptr = (CKeyFramedModelInstance *)0x478415;
  dVar5 = round((double)((float)local_10 * param_1[7].orient_matrix.m[0].z))
  ;
  iStack_18 = (int)ROUND(dVar5);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(this_ptr);
  iVar3 = (int)param_1[7].platform_position_delta.x + pCVar2->vertex_count * iStack_18;
  local_2c = (float)pCVar1[iVar3].y * _DAT_005ff018;
  local_28 = (float)pCVar1[iVar3].z * _DAT_005ff018;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            (param_1,(CVector3f *)&stack0xffffffd0,&local_24);
  *unaff_ESI = local_24.x;
  unaff_ESI[(uint)bVar4 * -2 + 1] = *(float *)((int)&local_24 + (uint)bVar4 * -8 + 4);
  (unaff_ESI + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       *(float *)((int)&local_24 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  return;
}
