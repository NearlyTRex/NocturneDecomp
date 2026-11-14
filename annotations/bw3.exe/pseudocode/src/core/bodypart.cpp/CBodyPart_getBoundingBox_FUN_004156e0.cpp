// Name: core_bodypart.cpp_CBodyPart_getBoundingBox_FUN_004156e0
// Address: 004156e0
// Address Range: [[004156e0, 00415708]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_bodypart_cpp_CBodyPart_getBoundingBox_FUN_004156e0(CBodyPart *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_bodypart_cpp_CBodyPart_getBoundingBox_FUN_004156e0(CBodyPart *this_ptr,CBoundingBox3D *out_box)

{
  int iVar1;
  CBoundingBox3D *unaff_ESI;
  CBoundingBox3D *pCVar2;
  float *pfVar3;
  float afStack_1c [6];
  
  pCVar2 = &this_ptr->bounding_box;
  pfVar3 = afStack_1c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = (pCVar2->min).x;
    pCVar2 = (CBoundingBox3D *)&(pCVar2->min).y;
    pfVar3 = pfVar3 + 1;
  }
  pfVar3 = afStack_1c;
  pCVar2 = unaff_ESI;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pCVar2->min).x = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pCVar2 = (CBoundingBox3D *)&(pCVar2->min).y;
  }
  return unaff_ESI;
}
