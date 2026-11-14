// Name: core_manpuz.cpp_CMansionPuzzleCircle_getBoundingBox_FUN_00504510
// Address: 00504510
// Address Range: [[00504510, 00504561]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_manpuz_cpp_CMansionPuzzleCircle_getBoundingBox_FUN_00504510(CMansionPuzzleCircle *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_manpuz_cpp_CMansionPuzzleCircle_getBoundingBox_FUN_00504510(CMansionPuzzleCircle *this_ptr,CBoundingBox3D *out_box)

{
  int iVar1;
  CBoundingBox3D *unaff_ESI;
  float *pfVar2;
  CBoundingBox3D *pCVar3;
  float afStack_20 [4];
  float fStack_10;
  float fStack_c;
  
  afStack_20[0] = -this_ptr->bbox_extent;
  afStack_20[2] = -this_ptr->bbox_extent;
  afStack_20[3] = this_ptr->bbox_extent;
  fStack_10 = this_ptr->bbox_height;
  afStack_20[1] = 0.0;
  fStack_c = this_ptr->bbox_extent;
  pfVar2 = afStack_20;
  pCVar3 = unaff_ESI;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pCVar3->min).x = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pCVar3 = (CBoundingBox3D *)&(pCVar3->min).y;
  }
  return unaff_ESI;
}
