// Name: core_morph.cpp_CMorphModel_findNearestPoint_FUN_004fa7f0
// Address: 004fa7f0
// Address Range: [[004fa7f0, 004fa89c]]
// Convention: __cdecl
// Signature: int __cdecl core_morph_cpp_CMorphModel_findNearestPoint_FUN_004fa7f0(CMorphModel *this_ptr,CVector3f *position)

#include "nocturne.h"

int __cdecl core_morph_cpp_CMorphModel_findNearestPoint_FUN_004fa7f0(CMorphModel *this_ptr,CVector3f *position)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float local_14;
  
  iVar6 = 0;
  iVar4 = 0;
  local_14 = 1e+30;
  if (0 < *(int *)&this_ptr->field_0x54) {
    pfVar5 = (float *)(*(int *)&this_ptr->field_0x58 + 4);
    do {
      fVar1 = position->x - *pfVar5;
      fVar2 = position->y - pfVar5[1];
      fVar3 = position->z - pfVar5[2];
      fVar1 = fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2;
      if (fVar1 < local_14) {
        iVar6 = iVar4;
        local_14 = fVar1;
      }
      iVar4 = iVar4 + 1;
      pfVar5 = pfVar5 + 4;
    } while (iVar4 < *(int *)&this_ptr->field_0x54);
  }
  return iVar6;
}
