// Name: core_charactr.cpp_CCharacter_getBoundingBox_FUN_0042ff40
// Address: 0042ff40
// Address Range: [[0042ff40, 0042ff68]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_charactr_cpp_CCharacter_getBoundingBox_FUN_0042ff40(CCharacter *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_charactr_cpp_CCharacter_getBoundingBox_FUN_0042ff40(CCharacter *this_ptr,CBoundingBox3D *out_box)

{
  int iVar1;
  CBoundingBox3D *unaff_ESI;
  uint *puVar2;
  float *pfVar3;
  CBoundingBox3D *pCVar4;
  float afStack_1c [6];
  
  puVar2 = (uint *)&this_ptr->field_0x2788;
  pfVar3 = afStack_1c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = (float)*puVar2;
    puVar2 = puVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  pfVar3 = afStack_1c;
  pCVar4 = unaff_ESI;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pCVar4->min).x = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pCVar4 = (CBoundingBox3D *)&(pCVar4->min).y;
  }
  return unaff_ESI;
}
