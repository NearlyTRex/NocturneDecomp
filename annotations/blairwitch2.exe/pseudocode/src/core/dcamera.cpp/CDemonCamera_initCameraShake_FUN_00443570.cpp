// Name: core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00443570
// Address: 00443570
// Address Range: [[00443570, 0044360a]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00443570(CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration ,float decay_time)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00443570(CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration ,float decay_time)

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
  g_INT_01326d08 = 0;
  dVar2 = round((double)peak_intensity * 65536);
  dVar3 = round(dVar3);
  dVar4 = round(dVar4);
  dVar5 = round(dVar5);
  g_INT_00609f9c = (int)ROUND(dVar3);
  g_INT_01326d04 = (int)ROUND(dVar4);
  g_INT_01326d0c = (int)ROUND(dVar5);
  g_INT_00609f98 = (int)ROUND(dVar2);
  if (g_INT_01326d04 == 0) {
    iVar1 = 1;
    g_INT_01326d00 = g_INT_00609f9c;
    if (g_INT_00609f9c == 0) {
      g_INT_01326d10 = g_INT_01326d0c;
      g_INT_00609fa0 = 2;
      return;
    }
  }
  g_INT_00609fa0 = iVar1;
  return;
}
