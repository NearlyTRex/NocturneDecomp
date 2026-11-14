// Name: core_flies.cpp_CFlies_getBoundingBox_FUN_004a74e0
// Address: 004a74e0
// Address Range: [[004a74e0, 004a7548]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_flies_cpp_CFlies_getBoundingBox_FUN_004a74e0(CFlies *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBoundingBox3D * __cdecl core_flies_cpp_CFlies_getBoundingBox_FUN_004a74e0(CFlies *this_ptr,CBoundingBox3D *out_box)

{
  float fVar1;
  float fVar2;
  int iVar3;
  CBoundingBox3D *unaff_ESI;
  float *pfVar4;
  CBoundingBox3D *pCVar5;
  float afStack_28 [4];
  float fStack_18;
  float fStack_14;
  
  fVar1 = (this_ptr->box_size).x;
  fVar2 = (this_ptr->box_size).z;
  afStack_28[1] = 0.0;
  fStack_18 = (this_ptr->box_size).y;
  afStack_28[0] = fVar1 * (float)_DAT_005d6701;
  afStack_28[3] = fVar1 * (float)_DAT_005d6709;
  afStack_28[2] = (float)_DAT_005d6701 * fVar2;
  fStack_14 = fVar2 * (float)_DAT_005d6709;
  pfVar4 = afStack_28;
  pCVar5 = unaff_ESI;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    (pCVar5->min).x = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pCVar5 = (CBoundingBox3D *)&(pCVar5->min).y;
  }
  return unaff_ESI;
}
