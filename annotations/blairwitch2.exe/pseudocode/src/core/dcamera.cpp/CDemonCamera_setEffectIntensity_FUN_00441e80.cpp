// Name: core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00441e80
// Address: 00441e80
// Address Range: [[00441e80, 00441e99]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00441e80(CDemonCamera *this_ptr,float intensity)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00441e80(CDemonCamera *this_ptr,float intensity)

{
  double dVar1;
  
  dVar1 = round
                    ((double)(intensity * (float)65535));
  this_ptr->corona_blend_factor = (int)ROUND(dVar1);
  return;
}
