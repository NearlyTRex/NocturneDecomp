// Name: core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00450d70
// Address: 00450d70
// Address Range: [[00450d70, 00450e0a]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00450d70(CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration ,float decay_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00450d70(CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration ,float decay_time)

{
  uint extraout_EDX;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (float10)_DAT_005ba0e6;
  fVar2 = (float10)peak_intensity * fVar1;
  fVar3 = (float10)sustain_duration * fVar1;
  fVar4 = (float10)attack_time * fVar1;
  fVar1 = (float10)decay_time * fVar1;
  _DAT_0135eab8 = 0;
  round();
  round();
  round();
  round();
  DAT_005f17dc = (int)ROUND(fVar3);
  _DAT_0135eab4 = (int)ROUND(fVar4);
  _DAT_0135eabc = (int)ROUND(fVar1);
  DAT_005f17d8 = (int)ROUND(fVar2);
  DAT_005f17e0 = extraout_EDX;
  if (_DAT_0135eab4 == 0) {
    DAT_005f17e0 = 1;
    _DAT_0135eab0 = DAT_005f17dc;
    if (DAT_005f17dc == 0) {
      _DAT_0135eac0 = _DAT_0135eabc;
      DAT_005f17e0 = 2;
      return;
    }
  }
  return;
}
