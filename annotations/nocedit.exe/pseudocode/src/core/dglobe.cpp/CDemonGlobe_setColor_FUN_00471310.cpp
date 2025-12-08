// Name: core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310
// Address: 00471310
// Address Range: [[00471310, 0047135c]]
// Convention: __cdecl
// Signature: void core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310(CDemonGlobe * this_ptr, CColor3f * color)

#include "nocturne.h"

void __cdecl
core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310(CDemonGlobe *this_ptr,CColor3f *color)

{
  int extraout_EAX;
  int extraout_EAX_00;
  int *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  float10 fVar1;
  double dVar2;
  
  if ((CColor3f *)&this_ptr->position != color) {
    (this_ptr->position).x = color->r;
    (this_ptr->position).y = color->g;
    (this_ptr->position).z = color->b;
  }
  fVar1 = (float10)256;
  dVar2 = crt_math_c_round_FUN_005fe6b0((double)((float10)color->r * fVar1));
  *extraout_ECX = (int)ROUND(dVar2);
  dVar2 = crt_math_c_round_FUN_005fe6b0((double)((float10)*(float *)(extraout_EAX + 4) * fVar1));
  *(int *)(extraout_ECX_00 + 4) = (int)ROUND(dVar2);
  dVar2 = crt_math_c_round_FUN_005fe6b0((double)(fVar1 * (float10)*(float *)(extraout_EAX_00 + 8)));
  *(int *)(extraout_ECX_01 + 8) = (int)ROUND(dVar2);
  return;
}
