// Name: core_curtain.cpp_CCurtain_updateWorldPositions_FUN_00449e40
// Address: 00449e40
// MANUAL RECONSTRUCTION
// Address Range: [[00449e40, 00449f08]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_updateWorldPositions_FUN_00449e40(CCurtain *this_ptr)

#include "nocturne.h"

void __cdecl core_curtain_cpp_CCurtain_updateWorldPositions_FUN_00449e40(CCurtain *this_ptr)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  CVector3f *input;
  CVector3f local_30;
  CVector3f local_24;
  SCurtainVertex *local_18;
  CMatrix3x3f *local_14;

  iVar3 = 0;
  if (0 < this_ptr->vertex_count) {
    local_18 = this_ptr->vertices;
    local_14 = &(this_ptr->base).orient_matrix;
    do {
      pCVar2 = &this_ptr->vertices[iVar3].world_position;
      input = &local_18[iVar3].local_position;
      pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(local_14,&local_30,input);
      local_24.x = pCVar1->x + (this_ptr->base).location.position.x;
      local_24.y = pCVar1->y + (this_ptr->base).location.position.y;
      local_24.z = pCVar1->z + (this_ptr->base).location.position.z;
      if (pCVar2 != &local_24) {
        *pCVar2 = local_24;
      }
      if (&input[4].z != &input[2].z) {
        memcpy(&input[4].z, &input[2].z, sizeof(CVector3f));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < this_ptr->vertex_count);
  }
  return;
}
