// Name: core_lever.cpp_FUN_004ff6b0
// Address: 004ff6b0
// Address Range: [[004ff6b0, 004ff767]]
// Convention: unknown
// Signature: void core_lever_cpp_FUN_004ff6b0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_lever_cpp_FUN_004ff6b0(int param_1)

{
  CKeyFramedModel *pCVar1;
  CVector3i *pCVar2;
  uint *unaff_ESI;
  byte bVar3;
  float10 fVar4;
  float afStackY_1008 [1013];
  CKeyFramedModelInstance *this_ptr;
  float local_2c;
  float local_28;
  float local_24;
  uint local_20;
  int local_14;
  int local_10;
  
  bVar3 = 0;
  this_ptr = (CKeyFramedModelInstance *)(param_1 + 0x158);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(this_ptr);
  pCVar2 = pCVar1->vertex_list;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(this_ptr);
  local_10 = pCVar1->frame_count + -1;
  fVar4 = (float10)local_10 * (float10)*(float *)(param_1 + 0x2dc);
  round();
  local_14 = (int)ROUND(fVar4);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(this_ptr);
  pCVar2 = pCVar2 + *(int *)(param_1 + 0x414) + pCVar1->vertex_count * local_14;
  local_2c = (float)pCVar2->x * _DAT_00602ed8;
  local_28 = (float)pCVar2->y * _DAT_00602ed8;
  local_24 = (float)pCVar2->z * _DAT_00602ed8;
  core_actor_cpp_FUN_00408b40(param_1,&stack0xffffffd4);
  *unaff_ESI = local_20;
  unaff_ESI[(uint)bVar3 * -2 + 1] =
       *(uint *)((int)&stack0xffffffe4 + (uint)bVar3 * 0xfffffffe * 4);
  (unaff_ESI + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
       *(uint *)(&stack0xffffffe8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  return;
}
