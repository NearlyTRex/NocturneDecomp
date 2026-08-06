// Name: core_turret.cpp_CTurret_getMuzzlePoint_FUN_0054aae0
// Address: 0054aae0
// Address Range: [[0054aae0, 0054ab05]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_turret_cpp_CTurret_getMuzzlePoint_FUN_0054aae0(CTurret *this_ptr,CVector3f *out_point)

#include "nocturne.h"

CVector3f * __cdecl core_turret_cpp_CTurret_getMuzzlePoint_FUN_0054aae0(CTurret *this_ptr,CVector3f *out_point)

{
  out_point->x = (this_ptr->barrel_tip_pos).x;
  out_point->y = (this_ptr->barrel_tip_pos).y;
  out_point->z = (this_ptr->barrel_tip_pos).z;
  return out_point;
}
