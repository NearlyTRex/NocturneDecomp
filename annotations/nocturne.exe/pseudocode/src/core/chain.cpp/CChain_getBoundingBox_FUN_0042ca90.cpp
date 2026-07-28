// Name: core_chain.cpp_CChain_getBoundingBox_FUN_0042ca90
// Address: 0042ca90
// Address Range: [[0042ca90, 0042cbb6]]
// Convention: unknown
// Signature: CVector3f * core_chain_cpp_CChain_getBoundingBox_FUN_0042ca90(CDemonActor *param_1,CVector3f *param_2)

#include "nocturne.h"

CVector3f * core_chain_cpp_CChain_getBoundingBox_FUN_0042ca90(CDemonActor *param_1,CVector3f *param_2)

{
  CVector3f *pCVar1;
  UOrientationVector *pUVar2;
  int iVar3;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  local_1c.y = 9999.0;
  local_1c.z = 9999.0;
  local_40.x = -9999.0;
  local_40.y = -9999.0;
  local_40.z = -9999.0;
  local_1c.x = 9999.0;
  iVar3 = 0;
  if (0 < *(int *)param_1[1].actor_name) {
    pUVar2 = &param_1[1].previous_transform_state.orientation;
    do {
      if ((pUVar2->vec).x < local_1c.x) {
        local_1c.x = (pUVar2->vec).x;
      }
      if ((pUVar2->vec).y < local_1c.y) {
        local_1c.y = (pUVar2->vec).y;
      }
      if ((pUVar2->vec).z < local_1c.z) {
        local_1c.z = (pUVar2->vec).z;
      }
      if (local_40.x < (pUVar2->vec).x) {
        local_40.x = (pUVar2->vec).x;
      }
      if (local_40.y < (pUVar2->vec).y) {
        local_40.y = (pUVar2->vec).y;
      }
      if (local_40.z < (pUVar2->vec).z) {
        local_40.z = (pUVar2->vec).z;
      }
      iVar3 = iVar3 + 1;
      pUVar2 = pUVar2 + 3;
    } while (iVar3 < *(int *)param_1[1].actor_name);
  }
  pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_1,&local_34,&local_1c);
  if (param_2 != pCVar1) {
    param_2->x = pCVar1->x;
    param_2->y = pCVar1->y;
    param_2->z = pCVar1->z;
  }
  pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_1,&local_28,&local_40);
  if (param_2 + 1 == pCVar1) {
    return param_2;
  }
  param_2[1].x = pCVar1->x;
  param_2[1].y = pCVar1->y;
  param_2[1].z = pCVar1->z;
  return param_2;
}
