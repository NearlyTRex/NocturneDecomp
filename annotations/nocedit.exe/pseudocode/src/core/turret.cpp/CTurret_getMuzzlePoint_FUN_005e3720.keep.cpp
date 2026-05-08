// Name: core_turret.cpp_CTurret_getMuzzlePoint_FUN_005e3720
// Address: 005e3720
// MANUAL RECONSTRUCTION
// Address Range: [[005e3720, 005e3745]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_turret_cpp_CTurret_getMuzzlePoint_FUN_005e3720(CTurret *this_ptr,CVector3f *out_point)

#include "nocturne.h"

CVector3f * __cdecl core_turret_cpp_CTurret_getMuzzlePoint_FUN_005e3720(CTurret *this_ptr,CVector3f *out_point)

{
  *out_point = this_ptr->barrel_tip_pos;
  return out_point;
}
