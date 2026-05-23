// Name: core_wateract.cpp_CWaterActor_updateWorldPositions_FUN_005eafa0
// Address: 005eafa0
// MANUAL RECONSTRUCTION
// Address Range: [[005eafa0, 005eb03a]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_updateWorldPositions_FUN_005eafa0(CWaterActor *this_ptr)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_updateWorldPositions_FUN_005eafa0(CWaterActor *this_ptr)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  float local_30;
  float local_2c;
  float local_28;
  CVector3f local_24;

  iVar3 = 0;
  if (0 < this_ptr->vertex_count) {
    do {
      pCVar2 = &this_ptr->vertices[iVar3].world_position;
      pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         (&(this_ptr->base).orient_matrix,&local_24,
                          &this_ptr->vertices[iVar3].local_position);
      local_30 = pCVar1->x + (this_ptr->base).location.position.x;
      local_2c = pCVar1->y + (this_ptr->base).location.position.y;
      local_28 = pCVar1->z + (this_ptr->base).location.position.z;
      if (pCVar2 != (CVector3f *)&local_30) {
        pCVar2->x = local_30;
        pCVar2->y = local_2c;
        pCVar2->z = local_28;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < this_ptr->vertex_count);
  }
  return;
}
