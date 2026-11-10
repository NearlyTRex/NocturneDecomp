// Name: core_glass.cpp_CGlass_getBoundingBox_FUN_004c5a00
// Address: 004c5a00
// Address Range: [[004c5a00, 004c5a71]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_glass_cpp_CGlass_getBoundingBox_FUN_004c5a00(CGlass *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBoundingBox3D * __cdecl core_glass_cpp_CGlass_getBoundingBox_FUN_004c5a00(CGlass *this_ptr,CBoundingBox3D *out_box)

{
  float fVar1;
  int iVar2;
  CBoundingBox3D *unaff_ESI;
  float *pfVar3;
  CBoundingBox3D *pCVar4;
  float afStack_1c [4];
  float fStack_c;
  float fStack_8;
  
  fVar1 = (float)_DAT_005d9372;
  afStack_1c[1] = -0.1;
  afStack_1c[3] = (this_ptr->glass_size).x * fVar1;
  fStack_c = (this_ptr->glass_size).y + (float)_DAT_005d937a;
  fStack_8 = (this_ptr->glass_size).z * fVar1;
  afStack_1c[2] = -(this_ptr->glass_size).z * fVar1;
  afStack_1c[0] = -(this_ptr->glass_size).x * fVar1;
  pfVar3 = afStack_1c;
  pCVar4 = unaff_ESI;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pCVar4->min).x = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pCVar4 = (CBoundingBox3D *)&(pCVar4->min).y;
  }
  return unaff_ESI;
}
