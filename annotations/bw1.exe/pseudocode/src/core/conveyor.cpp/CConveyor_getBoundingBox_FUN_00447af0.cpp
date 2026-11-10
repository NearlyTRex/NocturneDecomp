// Name: core_conveyor.cpp_CConveyor_getBoundingBox_FUN_00447af0
// Address: 00447af0
// Address Range: [[00447af0, 00447b61]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_conveyor_cpp_CConveyor_getBoundingBox_FUN_00447af0(CConveyor *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBoundingBox3D * __cdecl core_conveyor_cpp_CConveyor_getBoundingBox_FUN_00447af0(CConveyor *this_ptr,CBoundingBox3D *out_box)

{
  float fVar1;
  int iVar2;
  CBoundingBox3D *unaff_ESI;
  float *pfVar3;
  CBoundingBox3D *pCVar4;
  float afStack_1c [4];
  float fStack_c;
  float fStack_8;
  
  fVar1 = (float)_DAT_005d713e;
  afStack_1c[1] = -0.1;
  afStack_1c[3] = (this_ptr->size).x * fVar1;
  fStack_c = (this_ptr->size).y + (float)_DAT_005d7146;
  fStack_8 = (this_ptr->size).z * fVar1;
  afStack_1c[2] = -(this_ptr->size).z * fVar1;
  afStack_1c[0] = -(this_ptr->size).x * fVar1;
  pfVar3 = afStack_1c;
  pCVar4 = unaff_ESI;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pCVar4->min).x = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pCVar4 = (CBoundingBox3D *)&(pCVar4->min).y;
  }
  return unaff_ESI;
}
