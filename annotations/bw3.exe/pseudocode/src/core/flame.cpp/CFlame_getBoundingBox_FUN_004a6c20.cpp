// Name: core_flame.cpp_CFlame_getBoundingBox_FUN_004a6c20
// Address: 004a6c20
// Address Range: [[004a6c20, 004a6c91]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_flame_cpp_CFlame_getBoundingBox_FUN_004a6c20(CFlame *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBoundingBox3D * __cdecl core_flame_cpp_CFlame_getBoundingBox_FUN_004a6c20(CFlame *this_ptr,CBoundingBox3D *out_box)

{
  float fVar1;
  int iVar2;
  CBoundingBox3D *unaff_ESI;
  float *pfVar3;
  CBoundingBox3D *pCVar4;
  float afStack_1c [4];
  float fStack_c;
  float fStack_8;
  
  fVar1 = (float)_DAT_005c0bfc;
  afStack_1c[1] = -0.1;
  afStack_1c[3] = (this_ptr->flame_size).x * fVar1;
  fStack_c = (this_ptr->flame_size).y + (float)_DAT_005c0c04;
  fStack_8 = (this_ptr->flame_size).z * fVar1;
  afStack_1c[2] = -(this_ptr->flame_size).z * fVar1;
  afStack_1c[0] = -(this_ptr->flame_size).x * fVar1;
  pfVar3 = afStack_1c;
  pCVar4 = unaff_ESI;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pCVar4->min).x = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pCVar4 = (CBoundingBox3D *)&(pCVar4->min).y;
  }
  return unaff_ESI;
}
