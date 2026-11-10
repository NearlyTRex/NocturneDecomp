// Name: core_litecone.cpp_CLightCone_getBoundingBox_FUN_004e4340
// Address: 004e4340
// Address Range: [[004e4340, 004e439b]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_litecone_cpp_CLightCone_getBoundingBox_FUN_004e4340(CLightCone *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBoundingBox3D * __cdecl core_litecone_cpp_CLightCone_getBoundingBox_FUN_004e4340(CLightCone *this_ptr,CBoundingBox3D *out_box)

{
  int iVar1;
  CBoundingBox3D *unaff_ESI;
  float *pfVar2;
  CBoundingBox3D *pCVar3;
  float afStack_24 [4];
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  fStack_c = ((float)_DAT_005dc112 / this_ptr->fov) * this_ptr->falloff;
  afStack_24[0] = -fStack_c;
  afStack_24[1] = -fStack_c;
  afStack_24[3] = fStack_c;
  fStack_14 = fStack_c;
  afStack_24[2] = 0.0;
  fStack_10 = this_ptr->falloff;
  pfVar2 = afStack_24;
  pCVar3 = unaff_ESI;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pCVar3->min).x = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pCVar3 = (CBoundingBox3D *)&(pCVar3->min).y;
  }
  return unaff_ESI;
}
