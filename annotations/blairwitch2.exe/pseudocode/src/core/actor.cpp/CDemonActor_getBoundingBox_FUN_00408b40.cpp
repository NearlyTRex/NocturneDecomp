// Name: core_actor.cpp_CDemonActor_getBoundingBox_FUN_00408b40
// Address: 00408b40
// Address Range: [[00408b40, 00408b7d]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_actor_cpp_CDemonActor_getBoundingBox_FUN_00408b40(CDemonActor *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_actor_cpp_CDemonActor_getBoundingBox_FUN_00408b40(CDemonActor *this_ptr,CBoundingBox3D *out_box)

{
  int iVar1;
  CBoundingBox3D *unaff_ESI;
  float *pfVar2;
  CBoundingBox3D *pCVar3;
  float afStack_1c [6];
  
  afStack_1c[1] = 0.0;
  afStack_1c[3] = 4.0;
  afStack_1c[4] = 8.0;
  afStack_1c[5] = 4.0;
  afStack_1c[2] = -4.0;
  afStack_1c[0] = -4.0;
  pfVar2 = afStack_1c;
  pCVar3 = unaff_ESI;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pCVar3->min).x = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pCVar3 = (CBoundingBox3D *)&(pCVar3->min).y;
  }
  return unaff_ESI;
}
