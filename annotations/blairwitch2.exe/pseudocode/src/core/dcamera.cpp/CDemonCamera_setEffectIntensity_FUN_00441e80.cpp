// Name: core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00441e80
// Address: 00441e80
// Address Range: [[00441e80, 00441e99]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00441e80(CDemonCamera *this_ptr,float intensity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00441e80(CDemonCamera *this_ptr,float intensity)

{
  double dVar1;
  
  dVar1 = round((double)(intensity * (float)_DAT_005ce636));
  this_ptr->corona_blend_factor = (int)ROUND(dVar1);
  return;
}
