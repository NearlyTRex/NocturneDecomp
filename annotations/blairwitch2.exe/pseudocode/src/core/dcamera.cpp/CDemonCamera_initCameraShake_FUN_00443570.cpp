// Name: core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00443570
// Address: 00443570
// Address Range: [[00443570, 0044360a]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00443570(CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration ,float decay_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00443570(CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration ,float decay_time)

{
  uint extraout_EDX;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (float10)_DAT_005ce7b6;
  fVar2 = (float10)peak_intensity * fVar1;
  fVar3 = (float10)sustain_duration * fVar1;
  fVar4 = (float10)attack_time * fVar1;
  fVar1 = (float10)decay_time * fVar1;
  _DAT_01326d08 = 0;
  round();
  round();
  round();
  round();
  DAT_00609f9c = (int)ROUND(fVar3);
  _DAT_01326d04 = (int)ROUND(fVar4);
  _DAT_01326d0c = (int)ROUND(fVar1);
  DAT_00609f98 = (int)ROUND(fVar2);
  DAT_00609fa0 = extraout_EDX;
  if (_DAT_01326d04 == 0) {
    DAT_00609fa0 = 1;
    _DAT_01326d00 = DAT_00609f9c;
    if (DAT_00609f9c == 0) {
      _DAT_01326d10 = _DAT_01326d0c;
      DAT_00609fa0 = 2;
      return;
    }
  }
  return;
}
