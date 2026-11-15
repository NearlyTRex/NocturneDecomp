// Name: core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00454c20
// Address: 00454c20
// Address Range: [[00454c20, 00454cba]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00454c20(CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration ,float decay_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00454c20(CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration ,float decay_time)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = (double)sustain_duration * _DAT_005d7a7f;
  dVar4 = (double)attack_time * _DAT_005d7a7f;
  uVar1 = 0;
  dVar5 = (double)decay_time * _DAT_005d7a7f;
  _DAT_01342208 = 0;
  dVar2 = round((double)peak_intensity * _DAT_005d7a7f);
  dVar3 = round(dVar3);
  dVar4 = round(dVar4);
  dVar5 = round(dVar5);
  DAT_00611228 = (int)ROUND(dVar3);
  _DAT_01342204 = (int)ROUND(dVar4);
  _DAT_0134220c = (int)ROUND(dVar5);
  DAT_00611224 = (int)ROUND(dVar2);
  if (_DAT_01342204 == 0) {
    uVar1 = 1;
    _DAT_01342200 = DAT_00611228;
    if (DAT_00611228 == 0) {
      _DAT_01342210 = _DAT_0134220c;
      DAT_0061122c = 2;
      return;
    }
  }
  DAT_0061122c = uVar1;
  return;
}
