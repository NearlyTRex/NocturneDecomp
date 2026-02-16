// Name: core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00453fc0
// Address: 00453fc0
// Address Range: [[00453fc0, 0045405a]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00453fc0(CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration ,float decay_time)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00453fc0(CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration ,float decay_time)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = (double)sustain_duration * 65536;
  dVar4 = (double)attack_time * 65536;
  iVar1 = 0;
  dVar5 = (double)decay_time * 65536;
  g_CameraShakeAttackAccum = 0;
  dVar2 = round((double)peak_intensity * 65536);
  dVar3 = round(dVar3);
  dVar4 = round(dVar4);
  dVar5 = round(dVar5);
  g_CameraShakeSustainValue = (int)ROUND(dVar3);
  g_CameraShakeAttackTime = (int)ROUND(dVar4);
  g_CameraShakeDecayDuration = (int)ROUND(dVar5);
  g_CameraShakePeakValue = (int)ROUND(dVar2);
  if (g_CameraShakeAttackTime == 0) {
    iVar1 = 1;
    g_CameraShakeSustainTimer = g_CameraShakeSustainValue;
    if (g_CameraShakeSustainValue == 0) {
      g_CameraShakeDecayTimer = g_CameraShakeDecayDuration;
      g_CameraShakeState = 2;
      return;
    }
  }
  g_CameraShakeState = iVar1;
  return;
}
