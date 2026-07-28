// Name: core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0044cd90
// Address: 0044cd90
// Address Range: [[0044cd90, 0044cddc]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0044cd90(CDemonGlobe *this_ptr,CVector3f *position)

#include "nocturne.h"

void __cdecl core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0044cd90(CDemonGlobe *this_ptr,CVector3f *position)

{
  double dVar1;
  double dVar2;
  
  if (&this_ptr->position != position) {
    (this_ptr->position).x = position->x;
    (this_ptr->position).y = position->y;
    (this_ptr->position).z = position->z;
  }
  dVar2 = 256;
  dVar1 = round((double)position->x * 256);
  (this_ptr->position_scaled).x = (int)ROUND(dVar1);
  dVar1 = round((double)position->y * dVar2);
  (this_ptr->position_scaled).y = (int)ROUND(dVar1);
  dVar2 = round(dVar2 * (double)position->z);
  (this_ptr->position_scaled).z = (int)ROUND(dVar2);
  return;
}
