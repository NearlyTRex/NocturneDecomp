// Name: core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00454c20
// Address: 00454c20
// Address Range: [[00454c20, 00454cba]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00454c20(CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration ,float decay_time)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00454c20(CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration ,float decay_time)

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
  g_INT_01342208 = 0;
  dVar2 = round((double)peak_intensity * 65536);
  dVar3 = round(dVar3);
  dVar4 = round(dVar4);
  dVar5 = round(dVar5);
  g_INT_00611228 = (int)ROUND(dVar3);
  g_INT_01342204 = (int)ROUND(dVar4);
  g_INT_0134220c = (int)ROUND(dVar5);
  g_INT_00611224 = (int)ROUND(dVar2);
  if (g_INT_01342204 == 0) {
    iVar1 = 1;
    g_INT_01342200 = g_INT_00611228;
    if (g_INT_00611228 == 0) {
      g_INT_01342210 = g_INT_0134220c;
      g_INT_0061122c = 2;
      return;
    }
  }
  g_INT_0061122c = iVar1;
  return;
}
