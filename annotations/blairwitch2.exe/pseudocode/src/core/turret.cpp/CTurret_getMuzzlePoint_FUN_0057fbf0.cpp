// Name: core_turret.cpp_CTurret_getMuzzlePoint_FUN_0057fbf0
// Address: 0057fbf0
// Address Range: [[0057fbf0, 0057fc10]]
// Convention: __stack_esi
// Signature: CVector3f * __stack_esi core_turret_cpp_CTurret_getMuzzlePoint_FUN_0057fbf0(CTurret *this_ptr,CVector3f *out_point)

#include "nocturne.h"

CVector3f * __stack_esi core_turret_cpp_CTurret_getMuzzlePoint_FUN_0057fbf0(CTurret *this_ptr,CVector3f *out_point)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (this_ptr->barrel_tip_pos).y;
  fVar2 = (this_ptr->barrel_tip_pos).z;
  out_point->x = (this_ptr->barrel_tip_pos).x;
  out_point->y = fVar1;
  out_point->z = fVar2;
  return out_point;
}
