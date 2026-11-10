// Name: core_turret.cpp_CTurret_getMuzzlePoint_FUN_0057fbf0
// Address: 0057fbf0
// Address Range: [[0057fbf0, 0057fc10]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_turret_cpp_CTurret_getMuzzlePoint_FUN_0057fbf0(CTurret *this_ptr,CVector3f *out_point)

#include "nocturne.h"

CVector3f * __cdecl core_turret_cpp_CTurret_getMuzzlePoint_FUN_0057fbf0(CTurret *this_ptr,CVector3f *out_point)

{
  float fVar1;
  float fVar2;
  CVector3f *unaff_ESI;
  
  fVar1 = (this_ptr->barrel_tip_pos).y;
  fVar2 = (this_ptr->barrel_tip_pos).z;
  unaff_ESI->x = (this_ptr->barrel_tip_pos).x;
  unaff_ESI->y = fVar1;
  unaff_ESI->z = fVar2;
  return unaff_ESI;
}
