// Name: core_flies.cpp_CFlies_getBoundingBox_FUN_004ae200
// Address: 004ae200
// Address Range: [[004ae200, 004ae268]]
// Convention: __stack_esi
// Signature: CBoundingBox3D * __stack_esi core_flies_cpp_CFlies_getBoundingBox_FUN_004ae200(CFlies *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __stack_esi core_flies_cpp_CFlies_getBoundingBox_FUN_004ae200(CFlies *this_ptr,CBoundingBox3D *out_box)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  CBoundingBox3D *pCVar5;
  float afStack_28 [4];
  float fStack_18;
  float fStack_14;
  
  fVar1 = (this_ptr->box_size).x;
  fVar2 = (this_ptr->box_size).z;
  afStack_28[1] = 0.0;
  fStack_18 = (this_ptr->box_size).y;
  afStack_28[0] = fVar1 * (float)-0.5;
  afStack_28[3] = fVar1 * (float)0.5;
  afStack_28[2] = (float)-0.5 * fVar2;
  fStack_14 = fVar2 * (float)0.5;
  pfVar4 = afStack_28;
  pCVar5 = out_box;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    (pCVar5->min).x = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pCVar5 = (CBoundingBox3D *)&(pCVar5->min).y;
  }
  return out_box;
}
