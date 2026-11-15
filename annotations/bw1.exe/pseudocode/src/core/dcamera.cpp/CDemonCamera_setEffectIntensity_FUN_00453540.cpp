// Name: core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00453540
// Address: 00453540
// Address Range: [[00453540, 00453559]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00453540(CDemonCamera *this_ptr,float intensity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00453540(CDemonCamera *this_ptr,float intensity)

{
  double dVar1;
  
  dVar1 = round((double)(intensity * (float)_DAT_005d78ff));
  this_ptr->corona_blend_factor = (int)ROUND(dVar1);
  return;
}
