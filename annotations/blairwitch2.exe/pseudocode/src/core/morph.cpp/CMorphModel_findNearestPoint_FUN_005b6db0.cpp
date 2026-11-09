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
  int iVar3;
  float *pfVar4;
  int iVar5;
  float local_14;
  
  iVar5 = 0;
  iVar3 = 0;
  local_14 = 1e+30;
  if (0 < *(int *)&this_ptr->field_0x54) {
    pfVar4 = (float *)(*(int *)&this_ptr->field_0x58 + 4);
    do {
      fVar1 = *(float *)&position->field_0x4 - pfVar4[1];
      fVar2 = *(float *)&position->field_0x8 - pfVar4[2];
      fVar1 = fVar2 * fVar2 +
              (*(float *)position - *pfVar4) * (*(float *)position - *pfVar4) + fVar1 * fVar1;
      if (fVar1 < local_14) {
        iVar5 = iVar3;
        local_14 = fVar1;
      }
      iVar3 = iVar3 + 1;
      pfVar4 = pfVar4 + 4;
    } while (iVar3 < *(int *)&this_ptr->field_0x54);
  }
  return iVar5;
}
