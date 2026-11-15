// Name: core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00450d70
// Address: 00450d70
// Address Range: [[00450d70, 00450e0a]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00450d70(CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration ,float decay_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00450d70(CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration ,float decay_time)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = (double)sustain_duration * _DAT_005ba0e6;
  dVar4 = (double)attack_time * _DAT_005ba0e6;
  uVar1 = 0;
  dVar5 = (double)decay_time * _DAT_005ba0e6;
  _DAT_0135eab8 = 0;
  dVar2 = round((double)peak_intensity * _DAT_005ba0e6);
  dVar3 = round(dVar3);
  dVar4 = round(dVar4);
  dVar5 = round(dVar5);
  DAT_005f17dc = (int)ROUND(dVar3);
  _DAT_0135eab4 = (int)ROUND(dVar4);
  _DAT_0135eabc = (int)ROUND(dVar5);
  DAT_005f17d8 = (int)ROUND(dVar2);
  if (_DAT_0135eab4 == 0) {
    uVar1 = 1;
    _DAT_0135eab0 = DAT_005f17dc;
    if (DAT_005f17dc == 0) {
      _DAT_0135eac0 = _DAT_0135eabc;
      DAT_005f17e0 = 2;
      return;
    }
  }
  DAT_005f17e0 = uVar1;
  return;
}
