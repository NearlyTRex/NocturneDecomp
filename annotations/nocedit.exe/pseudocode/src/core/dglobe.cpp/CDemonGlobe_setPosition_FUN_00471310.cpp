// Name: core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00471310
// Address: 00471310
// Address Range: [[00471310, 0047135c]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00471310(CDemonGlobe *this_ptr,CVector3f *position)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00471310(CDemonGlobe *this_ptr,CVector3f *position)

{
  double dVar1;
  
  if (&this_ptr->position != position) {
    (this_ptr->position).x = position->x;
    (this_ptr->position).y = position->y;
    (this_ptr->position).z = position->z;
  }
  dVar1 = 256;
  (this_ptr->position_scaled).x = (int)ROUND(ROUND((double)position->x * 256));
  (this_ptr->position_scaled).y = (int)ROUND(ROUND((double)position->y * dVar1));
  (this_ptr->position_scaled).z = (int)ROUND(ROUND(dVar1 * (double)position->z));
  return;
}
