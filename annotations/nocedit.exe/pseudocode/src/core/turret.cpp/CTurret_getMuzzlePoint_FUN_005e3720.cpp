// Name: core_turret.cpp_CTurret_getMuzzlePoint_FUN_005e3720
// Address: 005e3720
// Address Range: [[005e3720, 005e3745]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_turret_cpp_CTurret_getMuzzlePoint_FUN_005e3720(CTurret *this_ptr,CVector3f *out_point)

#include "nocturne.h"

CVector3f * __cdecl core_turret_cpp_CTurret_getMuzzlePoint_FUN_005e3720(CTurret *this_ptr,CVector3f *out_point)

{
  out_point->x = (this_ptr->barrel_tip_pos).x;
  out_point->y = (this_ptr->barrel_tip_pos).y;
  out_point->z = (this_ptr->barrel_tip_pos).z;
  return out_point;
}
