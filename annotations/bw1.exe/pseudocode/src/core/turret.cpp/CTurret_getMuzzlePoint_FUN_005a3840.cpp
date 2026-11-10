// Name: core_turret.cpp_CTurret_getMuzzlePoint_FUN_005a3840
// Address: 005a3840
// Address Range: [[005a3840, 005a3860]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_turret_cpp_CTurret_getMuzzlePoint_FUN_005a3840(CTurret *this_ptr,CVector3f *out_point)

#include "nocturne.h"

CVector3f * __cdecl core_turret_cpp_CTurret_getMuzzlePoint_FUN_005a3840(CTurret *this_ptr,CVector3f *out_point)

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
