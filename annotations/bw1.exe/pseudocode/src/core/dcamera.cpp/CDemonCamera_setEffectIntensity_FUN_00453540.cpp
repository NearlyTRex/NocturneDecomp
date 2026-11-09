// Name: core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00453540
// Address: 00453540
// Address Range: [[00453540, 00453559]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00453540(CDemonCamera *this_ptr,float intensity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00453540(CDemonCamera *this_ptr,float intensity)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)intensity * (float10)_DAT_005d78ff;
  iVar1 = round();
  *(int *)(iVar1 + 0x11e8) = (int)ROUND(fVar2);
  return;
}
