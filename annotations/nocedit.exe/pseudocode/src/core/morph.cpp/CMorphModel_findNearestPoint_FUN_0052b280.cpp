// Name: core_morph.cpp_CMorphModel_findNearestPoint_FUN_0052b280
// Address: 0052b280
// Address Range: [[0052b280, 0052b30c]]
// Convention: __cdecl
// Signature: int __cdecl core_morph_cpp_CMorphModel_findNearestPoint_FUN_0052b280(CMorphModel *this_ptr,CVector3f *position)

#include "nocturne.h"

int __cdecl core_morph_cpp_CMorphModel_findNearestPoint_FUN_0052b280(CMorphModel *this_ptr,CVector3f *position)

{
  SMorphPoint *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float local_18;
  
  iVar7 = 0;
  local_18 = 1e+30;
  iVar6 = 0;
  if (0 < this_ptr->num_points) {
    iVar5 = 0;
    do {
      pSVar1 = this_ptr->points;
      fVar2 = position->x - *(float *)((int)&(pSVar1->position).x + iVar5);
      fVar3 = position->y - *(float *)((int)&(pSVar1->position).y + iVar5);
      fVar4 = position->z - *(float *)((int)&(pSVar1->position).z + iVar5);
      fVar2 = fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3;
      if (fVar2 < local_18) {
        iVar7 = iVar6;
        local_18 = fVar2;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar6 < this_ptr->num_points);
  }
  return iVar7;
}
