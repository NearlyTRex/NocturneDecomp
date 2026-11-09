// Name: core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00454c20
// Address: 00454c20
// Address Range: [[00454c20, 00454cba]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00454c20(CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration ,float decay_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00454c20(CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration ,float decay_time)

{
  uint extraout_EDX;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (float10)_DAT_005d7a7f;
  fVar2 = (float10)peak_intensity * fVar1;
  fVar3 = (float10)sustain_duration * fVar1;
  fVar4 = (float10)attack_time * fVar1;
  fVar1 = (float10)decay_time * fVar1;
  _DAT_01342208 = 0;
  round();
  round();
  round();
  round();
  DAT_00611228 = (int)ROUND(fVar3);
  _DAT_01342204 = (int)ROUND(fVar4);
  _DAT_0134220c = (int)ROUND(fVar1);
  DAT_00611224 = (int)ROUND(fVar2);
  DAT_0061122c = extraout_EDX;
  if (_DAT_01342204 == 0) {
    DAT_0061122c = 1;
    _DAT_01342200 = DAT_00611228;
    if (DAT_00611228 == 0) {
      _DAT_01342210 = _DAT_0134220c;
      DAT_0061122c = 2;
      return;
    }
  }
  return;
}
