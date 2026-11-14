// Name: core_stairs.cpp_CStairs_getBoundingBox_FUN_00568460
// Address: 00568460
// Address Range: [[00568460, 005684c4]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_stairs_cpp_CStairs_getBoundingBox_FUN_00568460(CStairs *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBoundingBox3D * __cdecl core_stairs_cpp_CStairs_getBoundingBox_FUN_00568460(CStairs *this_ptr,CBoundingBox3D *out_box)

{
  int iVar1;
  CBoundingBox3D *unaff_ESI;
  float *pfVar2;
  CBoundingBox3D *pCVar3;
  float afStack_20 [4];
  float fStack_10;
  float fStack_c;
  
  afStack_20[1] = 0.0;
  afStack_20[2] = 0.0;
  afStack_20[3] = this_ptr->width * (float)_DAT_005d5c78;
  fStack_10 = this_ptr->rise * (float)this_ptr->stair_count;
  fStack_c = this_ptr->run * (float)this_ptr->stair_count;
  afStack_20[0] = -this_ptr->width * (float)_DAT_005d5c78;
  pfVar2 = afStack_20;
  pCVar3 = unaff_ESI;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pCVar3->min).x = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pCVar3 = (CBoundingBox3D *)&(pCVar3->min).y;
  }
  return unaff_ESI;
}
