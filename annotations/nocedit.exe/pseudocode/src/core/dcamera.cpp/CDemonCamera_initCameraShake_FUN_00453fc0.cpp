// Name: core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00453fc0
// Address: 00453fc0
// Address Range: [[00453fc0, 0045405a]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00453fc0(CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration ,float decay_time)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00453fc0(CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration ,float decay_time)

{
  g_CameraShakeState = 0;
  g_CameraShakeAttackAccum = 0;
  g_CameraShakeSustainValue = (int)ROUND(ROUND((double)sustain_duration * 65536));
  g_CameraShakeAttackTime = (int)ROUND(ROUND((double)attack_time * 65536));
  g_CameraShakeDecayDuration = (int)ROUND(ROUND((double)decay_time * 65536));
  g_CameraShakePeakValue = (int)ROUND(ROUND((double)peak_intensity * 65536));
  if (g_CameraShakeAttackTime == 0) {
    g_CameraShakeState = 1;
    g_CameraShakeSustainTimer = g_CameraShakeSustainValue;
    if (g_CameraShakeSustainValue == 0) {
      g_CameraShakeDecayTimer = g_CameraShakeDecayDuration;
      g_CameraShakeState = 2;
      return;
    }
  }
  return;
}
