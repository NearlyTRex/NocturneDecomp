// Name: core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310
// Address: 00471310
// Address Range: [[00471310, 0047135c]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310(CDemonGlobe *this_ptr,CColor3f *color)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310(CDemonGlobe *this_ptr,CColor3f *color)

{
  double dVar1;
  
  if ((CColor3f *)&this_ptr->position != color) {
    (this_ptr->position).x = color->r;
    (this_ptr->position).y = color->g;
    (this_ptr->position).z = color->b;
  }
  dVar1 = 256;
  (this_ptr->color).r = (int)ROUND(ROUND((double)color->r * 256));
  (this_ptr->color).g = (int)ROUND(ROUND((double)color->g * dVar1));
  (this_ptr->color).b = (int)ROUND(ROUND(dVar1 * (double)color->b));
  return;
}
