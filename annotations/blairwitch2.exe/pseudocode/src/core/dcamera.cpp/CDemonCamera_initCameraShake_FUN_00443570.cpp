// Name: core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00443570
// Address: 00443570
// Address Range: [[00443570, 0044360a]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00443570(CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration ,float decay_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00443570(CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration ,float decay_time)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = (double)sustain_duration * _DAT_005ce7b6;
  dVar4 = (double)attack_time * _DAT_005ce7b6;
  uVar1 = 0;
  dVar5 = (double)decay_time * _DAT_005ce7b6;
  _DAT_01326d08 = 0;
  dVar2 = round((double)peak_intensity * _DAT_005ce7b6);
  dVar3 = round(dVar3);
  dVar4 = round(dVar4);
  dVar5 = round(dVar5);
  DAT_00609f9c = (int)ROUND(dVar3);
  _DAT_01326d04 = (int)ROUND(dVar4);
  _DAT_01326d0c = (int)ROUND(dVar5);
  DAT_00609f98 = (int)ROUND(dVar2);
  if (_DAT_01326d04 == 0) {
    uVar1 = 1;
    _DAT_01326d00 = DAT_00609f9c;
    if (DAT_00609f9c == 0) {
      _DAT_01326d10 = _DAT_01326d0c;
      DAT_00609fa0 = 2;
      return;
    }
  }
  DAT_00609fa0 = uVar1;
  return;
}
