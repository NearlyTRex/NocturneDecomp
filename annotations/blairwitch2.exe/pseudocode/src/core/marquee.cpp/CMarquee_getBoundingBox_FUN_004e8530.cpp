// Name: core_marquee.cpp_CMarquee_getBoundingBox_FUN_004e8530
// Address: 004e8530
// Address Range: [[004e8530, 004e85a4]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_marquee_cpp_CMarquee_getBoundingBox_FUN_004e8530(CMarquee *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_marquee_cpp_CMarquee_getBoundingBox_FUN_004e8530(CMarquee *this_ptr,CBoundingBox3D *out_box)

{
  CVector3f *pCVar1;
  int iVar2;
  CBoundingBox3D *unaff_ESI;
  float *pfVar3;
  CBoundingBox3D *pCVar4;
  float afStack_1c [4];
  float fStack_c;
  float fStack_8;
  
  if ((CBoundingBox3D *)afStack_1c != &this_ptr->bounding_box) {
    afStack_1c[0] = (this_ptr->bounding_box).min.x;
    afStack_1c[1] = (this_ptr->bounding_box).min.y;
    afStack_1c[2] = (this_ptr->bounding_box).min.z;
  }
  pCVar1 = &(this_ptr->bounding_box).max;
  if ((CVector3f *)(afStack_1c + 3) == pCVar1) {
    pfVar3 = afStack_1c;
    pCVar4 = unaff_ESI;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      (pCVar4->min).x = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pCVar4 = (CBoundingBox3D *)&(pCVar4->min).y;
    }
    return unaff_ESI;
  }
  afStack_1c[3] = pCVar1->x;
  fStack_c = (this_ptr->bounding_box).max.y;
  fStack_8 = (this_ptr->bounding_box).max.z;
  pfVar3 = afStack_1c;
  pCVar4 = unaff_ESI;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pCVar4->min).x = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pCVar4 = (CBoundingBox3D *)&(pCVar4->min).y;
  }
  return unaff_ESI;
}
