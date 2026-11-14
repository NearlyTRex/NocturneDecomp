// Name: core_teleport.cpp_CTeleportDest_getBoundingBox_FUN_00594e90
// Address: 00594e90
// Address Range: [[00594e90, 00594ed0]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_teleport_cpp_CTeleportDest_getBoundingBox_FUN_00594e90(CTeleportDest *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_teleport_cpp_CTeleportDest_getBoundingBox_FUN_00594e90(CTeleportDest *this_ptr,CBoundingBox3D *out_box)

{
  int iVar1;
  CBoundingBox3D *unaff_ESI;
  float *pfVar2;
  CBoundingBox3D *pCVar3;
  float afStack_1c [6];
  
  afStack_1c[1] = -1.0;
  afStack_1c[3] = 7.0;
  afStack_1c[4] = 8.0;
  afStack_1c[5] = 7.0;
  afStack_1c[2] = -7.0;
  afStack_1c[0] = -7.0;
  pfVar2 = afStack_1c;
  pCVar3 = unaff_ESI;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pCVar3->min).x = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pCVar3 = (CBoundingBox3D *)&(pCVar3->min).y;
  }
  return unaff_ESI;
}
