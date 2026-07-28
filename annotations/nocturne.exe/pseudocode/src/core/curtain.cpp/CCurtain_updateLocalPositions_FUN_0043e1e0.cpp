// Name: core_curtain.cpp_CCurtain_updateLocalPositions_FUN_0043e1e0
// Address: 0043e1e0
// Address Range: [[0043e1e0, 0043e285]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_updateLocalPositions_FUN_0043e1e0(CCurtain *this_ptr)

#include "nocturne.h"

void __cdecl core_curtain_cpp_CCurtain_updateLocalPositions_FUN_0043e1e0(CCurtain *this_ptr)

{
  float *pfVar1;
  CVector3f *pCVar2;
  SCurtainVertex *pSVar3;
  int iVar4;
  float local_30;
  float local_2c;
  float local_28;
  byte local_24 [12];
  CMatrix3x3f *local_18;
  SCurtainVertex *local_14;
  
  iVar4 = 0;
  if (0 < this_ptr->vertex_count) {
    local_14 = this_ptr->vertices;
    local_18 = &(this_ptr->base).orient_matrix;
    pCVar2 = &this_ptr->vertices[0].world_position;
    do {
      local_30 = pCVar2->x - (this_ptr->base).location.position.x;
      local_2c = pCVar2->y - (this_ptr->base).location.position.y;
      pSVar3 = local_14 + iVar4;
      local_28 = pCVar2->z - (this_ptr->base).location.position.z;
      pfVar1 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                                  (local_18,local_24,&local_30);
      if (pSVar3 != (SCurtainVertex *)pfVar1) {
        (pSVar3->local_position).x = *pfVar1;
        (pSVar3->local_position).y = pfVar1[1];
        (pSVar3->local_position).z = pfVar1[2];
      }
      iVar4 = iVar4 + 1;
      pCVar2 = (CVector3f *)((int)(pCVar2 + 9) + 8);
    } while (iVar4 < this_ptr->vertex_count);
  }
  return;
}
