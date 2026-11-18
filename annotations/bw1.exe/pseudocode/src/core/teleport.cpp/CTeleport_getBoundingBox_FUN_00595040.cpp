// Name: core_teleport.cpp_CTeleport_getBoundingBox_FUN_00595040
// Address: 00595040
// Address Range: [[00595040, 005950b1]]
// Convention: __stack_esi
// Signature: CBoundingBox3D * __stack_esi core_teleport_cpp_CTeleport_getBoundingBox_FUN_00595040(CTeleport *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __stack_esi core_teleport_cpp_CTeleport_getBoundingBox_FUN_00595040(CTeleport *this_ptr,CBoundingBox3D *out_box)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  CBoundingBox3D *pCVar4;
  float afStack_1c [4];
  float fStack_c;
  float fStack_8;
  
  fVar1 = (float)0.5;
  afStack_1c[1] = -0.1;
  afStack_1c[3] = (this_ptr->trigger_extents).x * fVar1;
  fStack_c = (this_ptr->trigger_extents).y + (float)0.10000000000000001;
  fStack_8 = (this_ptr->trigger_extents).z * fVar1;
  afStack_1c[2] = -(this_ptr->trigger_extents).z * fVar1;
  afStack_1c[0] = -(this_ptr->trigger_extents).x * fVar1;
  pfVar3 = afStack_1c;
  pCVar4 = out_box;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pCVar4->min).x = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pCVar4 = (CBoundingBox3D *)&(pCVar4->min).y;
  }
  return out_box;
}
