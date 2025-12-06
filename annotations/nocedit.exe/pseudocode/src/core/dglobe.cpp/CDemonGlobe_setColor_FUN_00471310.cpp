// Name: core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310
// Address: 00471310
// Address Range: [[00471310, 0047135c]]
// Convention: __cdecl
// Signature: void core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310(CDemonGlobe * this_ptr, CColor3f * color)

#include "nocturne.h"

void __cdecl
core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310(CDemonGlobe *this_ptr,CColor3f *color)

{
  CVector3f *pCVar1;
  int *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  float10 fVar2;
  float10 fVar3;
  double dVar4;
  
  pCVar1 = &this_ptr->position;
  if ((CColor3f *)pCVar1 != color) {
    pCVar1->x = color->r;
    (this_ptr->position).y = color->g;
    (this_ptr->position).z = color->b;
  }
  fVar2 = (float10)256;
  fVar3 = (float10)color->r * fVar2;
  dVar4 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(pCVar1,color));
  *extraout_ECX = (int)ROUND(fVar3);
  fVar3 = (float10)*(float *)(SUB84 /* extract 2-byte value */(dVar4,0) + 4) * fVar2;
  dVar4 = crt_math_c_round_FUN_005fe6b0(dVar4);
  *(int *)(extraout_ECX_00 + 4) = (int)ROUND(fVar3);
  fVar2 = fVar2 * (float10)*(float *)(SUB84 /* extract 2-byte value */(dVar4,0) + 8);
  crt_math_c_round_FUN_005fe6b0(dVar4);
  *(int *)(extraout_ECX_01 + 8) = (int)ROUND(fVar2);
  return;
}
