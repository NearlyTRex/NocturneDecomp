// Name: core_morph.cpp_CMorphModel_findNearestPoint_FUN_0052b280
// Address: 0052b280
// MANUAL RECONSTRUCTION
// Address Range: [[0052b280, 0052b30c]]
// Convention: __cdecl
// Signature: int __cdecl core_morph_cpp_CMorphModel_findNearestPoint_FUN_0052b280(CMorphModel *this_ptr,CVector3f *position)

#include "nocturne.h"

int __cdecl core_morph_cpp_CMorphModel_findNearestPoint_FUN_0052b280(CMorphModel *this_ptr,CVector3f *position)

{
  float fVar1;
  int iVar6;
  int iVar7;
  float local_18;
  float fVar3;
  float fVar4;
  SMorphPoint *pSVar1;
  float fVar2;

  iVar7 = 0;
  local_18 = 1e+30;
  iVar6 = 0;
  if (0 < this_ptr->num_points) {
    do {
      pSVar1 = this_ptr->points;
      fVar2 = position->x - pSVar1[iVar6].position.x;
      fVar3 = position->y - pSVar1[iVar6].position.y;
      fVar4 = position->z - pSVar1[iVar6].position.z;
      fVar1 = fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3;
      if (fVar1 < local_18) {
        iVar7 = iVar6;
        local_18 = fVar1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < this_ptr->num_points);
  }
  return iVar7;
}
