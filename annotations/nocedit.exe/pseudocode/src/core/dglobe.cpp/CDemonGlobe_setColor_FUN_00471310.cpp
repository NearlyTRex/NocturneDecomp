// Name: core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310
// Address: 00471310
// Address Range: [[00471310, 0047135c]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310(CDemonGlobe *this_ptr,CColor3f *color)

#include "nocturne.h"

void __cdecl core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310(CDemonGlobe *this_ptr,CColor3f *color)

{
  double dVar1;
  double dVar2;
  
  if ((CColor3f *)&this_ptr->position != color) {
    (this_ptr->position).x = color->r;
    (this_ptr->position).y = color->g;
    (this_ptr->position).z = color->b;
  }
  dVar2 = 256;
  dVar1 = round((double)color->r * 256);
  (this_ptr->color).r = (int)ROUND(dVar1);
  dVar1 = round((double)color->g * dVar2);
  (this_ptr->color).g = (int)ROUND(dVar1);
  dVar2 = round(dVar2 * (double)color->b);
  (this_ptr->color).b = (int)ROUND(dVar2);
  return;
}
