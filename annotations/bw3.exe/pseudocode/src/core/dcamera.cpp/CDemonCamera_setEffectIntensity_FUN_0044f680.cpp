// Name: core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_0044f680
// Address: 0044f680
// Address Range: [[0044f680, 0044f699]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_0044f680(CDemonCamera *this_ptr,float intensity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_0044f680(CDemonCamera *this_ptr,float intensity)

{
  double dVar1;
  
  dVar1 = round((double)(intensity * (float)_DAT_005b9f66));
  this_ptr->corona_blend_factor = (int)ROUND(dVar1);
  return;
}
