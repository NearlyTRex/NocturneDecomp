// Name: core_curtain.cpp_CCurtain_updateWorldPositions_FUN_0043e110
// Address: 0043e110
// Address Range: [[0043e110, 0043e1d8]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_updateWorldPositions_FUN_0043e110(CCurtain *this_ptr)

#include "nocturne.h"

void __cdecl core_curtain_cpp_CCurtain_updateWorldPositions_FUN_0043e110(CCurtain *this_ptr)

{
  float *pfVar1;
  CVector3f *pCVar2;
  int iVar3;
  SCurtainVertex *pSVar4;
  byte local_30 [12];
  float local_24;
  float local_20;
  float local_1c;
  SCurtainVertex *local_18;
  CMatrix3x3f *local_14;
  
  iVar3 = 0;
  if (0 < this_ptr->vertex_count) {
    local_18 = this_ptr->vertices;
    local_14 = &(this_ptr->base).orient_matrix;
    pCVar2 = &this_ptr->vertices[0].world_position;
    do {
      pSVar4 = local_18 + iVar3;
      pfVar1 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                  (local_14,local_30,pSVar4);
      local_24 = *pfVar1 + (this_ptr->base).location.position.x;
      local_20 = pfVar1[1] + (this_ptr->base).location.position.y;
      local_1c = pfVar1[2] + (this_ptr->base).location.position.z;
      if (pCVar2 != (CVector3f *)&local_24) {
        pCVar2->x = local_24;
        pCVar2->y = local_20;
        pCVar2->z = local_1c;
      }
      if (&pSVar4->last_world_position != &pSVar4->world_position) {
        (pSVar4->last_world_position).x = (pSVar4->world_position).x;
        (pSVar4->last_world_position).y = (pSVar4->world_position).y;
        (pSVar4->last_world_position).z = (pSVar4->world_position).z;
      }
      iVar3 = iVar3 + 1;
      pCVar2 = (CVector3f *)((int)(pCVar2 + 9) + 8);
    } while (iVar3 < this_ptr->vertex_count);
  }
  return;
}
