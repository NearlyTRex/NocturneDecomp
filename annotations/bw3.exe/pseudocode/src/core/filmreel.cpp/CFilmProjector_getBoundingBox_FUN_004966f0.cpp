// Name: core_filmreel.cpp_CFilmProjector_getBoundingBox_FUN_004966f0
// Address: 004966f0
// Address Range: [[004966f0, 0049673b]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_filmreel_cpp_CFilmProjector_getBoundingBox_FUN_004966f0(CFilmProjector *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_filmreel_cpp_CFilmProjector_getBoundingBox_FUN_004966f0(CFilmProjector *this_ptr,CBoundingBox3D *out_box)

{
  int iVar1;
  CBoundingBox3D *unaff_ESI;
  float *pfVar2;
  CBoundingBox3D *pCVar3;
  float afStack_24 [6];
  
  afStack_24[1] = 0.0;
  afStack_24[2] = -0.1;
  afStack_24[3] = 1.0;
  afStack_24[4] = 3.0;
  afStack_24[5] = 0.1;
  afStack_24[0] = -1.0;
  pfVar2 = afStack_24;
  pCVar3 = unaff_ESI;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pCVar3->min).x = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pCVar3 = (CBoundingBox3D *)&(pCVar3->min).y;
  }
  return unaff_ESI;
}
