// Name: core_hero.cpp_CHeroPlaceholder_getBoundingBox_FUN_004d4ba0
// Address: 004d4ba0
// Address Range: [[004d4ba0, 004d4bdd]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_hero_cpp_CHeroPlaceholder_getBoundingBox_FUN_004d4ba0(CHeroPlaceholder *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_hero_cpp_CHeroPlaceholder_getBoundingBox_FUN_004d4ba0(CHeroPlaceholder *this_ptr,CBoundingBox3D *out_box)

{
  int iVar1;
  CBoundingBox3D *unaff_ESI;
  float *pfVar2;
  CBoundingBox3D *pCVar3;
  float afStack_1c [6];
  
  afStack_1c[1] = 0.0;
  afStack_1c[3] = 1.0;
  afStack_1c[4] = 6.0;
  afStack_1c[5] = 1.0;
  afStack_1c[2] = -1.0;
  afStack_1c[0] = -1.0;
  pfVar2 = afStack_1c;
  pCVar3 = unaff_ESI;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pCVar3->min).x = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pCVar3 = (CBoundingBox3D *)&(pCVar3->min).y;
  }
  return unaff_ESI;
}
