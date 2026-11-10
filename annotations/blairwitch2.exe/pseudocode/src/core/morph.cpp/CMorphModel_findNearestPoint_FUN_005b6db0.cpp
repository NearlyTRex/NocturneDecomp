// Name: core_morph.cpp_CMorphModel_findNearestPoint_FUN_005b6db0
// Address: 005b6db0
// Address Range: [[005b6db0, 005b6e5c]]
// Convention: __cdecl
// Signature: int __cdecl core_morph_cpp_CMorphModel_findNearestPoint_FUN_005b6db0(CMorphModel *this_ptr,CVector3f *position)

#include "nocturne.h"

int __cdecl core_morph_cpp_CMorphModel_findNearestPoint_FUN_005b6db0(CMorphModel *this_ptr,CVector3f *position)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  SMorphPoint *pSVar5;
  int iVar6;
  float local_14;
  
  iVar6 = 0;
  iVar4 = 0;
  local_14 = 1e+30;
  if (0 < this_ptr->num_points) {
    pSVar5 = this_ptr->points + 4;
    do {
      fVar1 = position->x - *(float *)pSVar5;
      fVar2 = position->y - *(float *)(pSVar5 + 4);
      fVar3 = position->z - *(float *)(pSVar5 + 8);
      fVar1 = fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2;
      if (fVar1 < local_14) {
        iVar6 = iVar4;
        local_14 = fVar1;
      }
      iVar4 = iVar4 + 1;
      pSVar5 = pSVar5 + 0x10;
    } while (iVar4 < this_ptr->num_points);
  }
  return iVar6;
}
