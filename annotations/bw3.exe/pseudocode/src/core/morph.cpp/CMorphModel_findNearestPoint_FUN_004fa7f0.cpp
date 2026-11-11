// Name: core_morph.cpp_CMorphModel_findNearestPoint_FUN_004fa7f0
// Address: 004fa7f0
// Address Range: [[004fa7f0, 004fa89c]]
// Convention: __cdecl
// Signature: int __cdecl core_morph_cpp_CMorphModel_findNearestPoint_FUN_004fa7f0(CMorphModel *this_ptr,CVector3f *position)

#include "nocturne.h"

int __cdecl core_morph_cpp_CMorphModel_findNearestPoint_FUN_004fa7f0(CMorphModel *this_ptr,CVector3f *position)

{
  SMorphPoint *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  CVector3f *pCVar6;
  int iVar7;
  float local_14;
  
  iVar7 = 0;
  iVar5 = 0;
  local_14 = 1e+30;
  if (0 < this_ptr->num_points) {
    pSVar1 = this_ptr->points;
    do {
      pCVar6 = &pSVar1->position;
      fVar2 = position->x - pCVar6->x;
      fVar3 = position->y - pCVar6->y;
      fVar4 = position->z - pCVar6->z;
      fVar2 = fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3;
      if (fVar2 < local_14) {
        iVar7 = iVar5;
        local_14 = fVar2;
      }
      iVar5 = iVar5 + 1;
      pSVar1 = (SMorphPoint *)(pCVar6 + 1);
    } while (iVar5 < this_ptr->num_points);
  }
  return iVar7;
}
