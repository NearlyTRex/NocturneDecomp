// Name: core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
// Address: 00471360
// Address Range: [[00471360, 004713f9]]
// Convention: __cdecl
// Signature: void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360(CDemonGlobe * this_ptr, float radius)

#include "nocturne.h"

void __cdecl
core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360(CDemonGlobe *this_ptr,float radius)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  float unaff_retaddr;
  
  fVar2 = radius * 256f;
  fVar1 = (float)65536;
  this_ptr->radius = radius;
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)fVar2);
  dVar4 = crt_math_c_round_FUN_005fe6b0((double)(radius * radius * fVar1));
  this_ptr->quadratic_radius_scaled = (int)ROUND(dVar4);
  this_ptr->linear_radius_scaled = (int)ROUND(dVar3);
  if (this_ptr->quadratic_radius_scaled < 0x10000) {
    this_ptr->quadratic_radius_scaled = 0x10000;
  }
  this_ptr->radius_squared = unaff_retaddr * unaff_retaddr;
  dVar3 = (double)(byte)this_ptr->intensity * 65536;
  this_ptr->inverse_radius = 1.0 / unaff_retaddr;
  this_ptr->inverse_radius_squared = 1.0 / (unaff_retaddr * unaff_retaddr);
  dVar3 = crt_math_c_round_FUN_005fe6b0(dVar3 / (double)(this_ptr->quadratic_radius_scaled >> 0x10))
  ;
  this_ptr->falloff_value = (int)ROUND(dVar3);
  return;
}
