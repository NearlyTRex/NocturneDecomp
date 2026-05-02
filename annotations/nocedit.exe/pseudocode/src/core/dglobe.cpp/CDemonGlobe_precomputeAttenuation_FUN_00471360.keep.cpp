// Name: core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
// Address: 00471360
// MANUAL RECONSTRUCTION
// Address Range: [[00471360, 004713f9]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360(CDemonGlobe *this_ptr,float radius)

#include "nocturne.h"

void __cdecl core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360(CDemonGlobe *this_ptr,float radius)

{
  float fVar1;
  float fVar2;
  double dVar3;
  
  fVar2 = radius * 256.0f;
  fVar1 = (float)65536;
  this_ptr->radius = radius;
  this_ptr->quadratic_radius_scaled = (int)ROUND(ROUND(radius * radius * fVar1));
  this_ptr->linear_radius_scaled = (int)ROUND(ROUND(fVar2));
  if (this_ptr->quadratic_radius_scaled < 0x10000) {
    this_ptr->quadratic_radius_scaled = 0x10000;
  }
  this_ptr->radius_squared = radius * radius;
  dVar3 = (double)(this_ptr->intensity).bytes[0] * 65536;
  this_ptr->inverse_radius = 1.0 / radius;
  this_ptr->inverse_radius_squared = 1.0 / (radius * radius);
  this_ptr->falloff_value =
       (int)ROUND(ROUND(dVar3 / (double)(this_ptr->quadratic_radius_scaled >> 0x10)));
  return;
}
