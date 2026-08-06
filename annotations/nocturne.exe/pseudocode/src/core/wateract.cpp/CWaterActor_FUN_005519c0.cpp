// Name: core_wateract.cpp_CWaterActor_FUN_005519c0
// Address: 005519c0
// Address Range: [[005519c0, 00551a6b]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_FUN_005519c0(CWaterActor *param_1)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_FUN_005519c0(CWaterActor *param_1)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  int iVar4;
  CVector3f local_30;
  CVector3f local_24;
  CMatrix3x3f *local_18;
  SWaterVertex *local_14;
  
  iVar4 = 0;
  if (0 < param_1->vertex_count) {
    local_14 = param_1->vertices;
    local_18 = &(param_1->base).orient_matrix;
    pCVar2 = &param_1->vertices[0].world_position;
    do {
      local_30.x = pCVar2->x - (param_1->base).location.position.x;
      pCVar3 = &local_14[iVar4].local_position;
      local_30.y = pCVar2->y - (param_1->base).location.position.y;
      local_30.z = pCVar2->z - (param_1->base).location.position.z;
      pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                         (local_18,&local_24,&local_30);
      if (pCVar3 != pCVar1) {
        pCVar3->x = pCVar1->x;
        pCVar3->y = pCVar1->y;
        pCVar3->z = pCVar1->z;
      }
      iVar4 = iVar4 + 1;
      pCVar2 = (CVector3f *)((int)(pCVar2 + 2) + 8);
    } while (iVar4 < param_1->vertex_count);
  }
  return;
}
