// Name: core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00447e80
// Address: 00447e80
// Address Range: [[00447e80, 00447f1a]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00447e80(CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration ,float decay_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00447e80(CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration ,float decay_time)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = (double)sustain_duration * 65536;
  dVar4 = (double)attack_time * 65536;
  uVar1 = 0;
  dVar5 = (double)decay_time * 65536;
  _DAT_012ceb60 = 0;
  dVar2 = round((double)peak_intensity * 65536);
  dVar3 = round(dVar3);
  dVar4 = round(dVar4);
  dVar5 = round(dVar5);
  DAT_005ad448 = (int)ROUND(dVar3);
  _DAT_012ceb5c = (int)ROUND(dVar4);
  _DAT_012ceb64 = (int)ROUND(dVar5);
  DAT_005ad444 = (int)ROUND(dVar2);
  if (_DAT_012ceb5c == 0) {
    uVar1 = 1;
    _DAT_012ceb58 = DAT_005ad448;
    if (DAT_005ad448 == 0) {
      _DAT_012ceb68 = _DAT_012ceb64;
      DAT_005ad44c = 2;
      return;
    }
  }
  DAT_005ad44c = uVar1;
  return;
}
