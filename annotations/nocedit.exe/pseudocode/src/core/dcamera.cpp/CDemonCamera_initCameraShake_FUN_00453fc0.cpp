// Name: core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00453fc0
// Address: 00453fc0
// Address Range: [[00453fc0, 0045405a]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00453fc0 (CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration, float decay_time)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00453fc0
          (CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration,
          float decay_time)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  double dVar5;
  double dVar6;
  
  fVar2 = (float10)65536;
  fVar3 = (float10)attack_time * fVar2;
  iVar1 = 0;
  fVar4 = (float10)decay_time * fVar2;
  g_CameraShakeAttackAccum = 0;
  dVar5 = round((double)((float10)peak_intensity * fVar2));
  dVar6 = round((double)((float10)sustain_duration * fVar2));
  fVar2 = (float10)dVar6;
  dVar6 = round((double)fVar3);
  fVar3 = (float10)dVar6;
  dVar6 = round((double)fVar4);
  g_CameraShakeSustainValue = (int)ROUND(fVar2);
  g_CameraShakeAttackTime = (int)ROUND(fVar3);
  g_CameraShakeDecayDuration = (int)ROUND(dVar6);
  g_CameraShakePeakValue = (int)ROUND(dVar5);
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
