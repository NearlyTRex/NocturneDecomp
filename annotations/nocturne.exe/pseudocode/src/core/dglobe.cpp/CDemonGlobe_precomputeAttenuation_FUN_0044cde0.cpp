// Name: core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0
// Address: 0044cde0
// Address Range: [[0044cde0, 0044ce79]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0(CDemonGlobe *this_ptr,float radius)

#include "nocturne.h"

void __cdecl core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0(CDemonGlobe *this_ptr,float radius)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  float unaff_retaddr;
  
  fVar2 = radius * 5.5951060894592141e-315._0_4_;
  fVar1 = (float)65536;
  this_ptr->radius = radius;
  dVar3 = round((double)fVar2);
  dVar4 = round((double)(radius * radius * fVar1));
  this_ptr->quadratic_radius_scaled = (int)ROUND(dVar4);
  this_ptr->linear_radius_scaled = (int)ROUND(dVar3);
  if (this_ptr->quadratic_radius_scaled < 0x10000) {
    this_ptr->quadratic_radius_scaled = 0x10000;
  }
  this_ptr->radius_squared = unaff_retaddr * unaff_retaddr;
  dVar3 = (double)(this_ptr->intensity).bytes[0] * 65536;
  this_ptr->inverse_radius = 1.0 / unaff_retaddr;
  this_ptr->inverse_radius_squared = 1.0 / (unaff_retaddr * unaff_retaddr);
  dVar3 = round(dVar3 / (double)(this_ptr->quadratic_radius_scaled >> 0x10))
  ;
  this_ptr->falloff_value = (int)ROUND(dVar3);
  return;
}
