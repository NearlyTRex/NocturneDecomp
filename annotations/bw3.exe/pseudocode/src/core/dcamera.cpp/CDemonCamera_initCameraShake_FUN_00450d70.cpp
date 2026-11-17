// Name: core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00450d70
// Address: 00450d70
// Address Range: [[00450d70, 00450e0a]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00450d70(CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration ,float decay_time)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00450d70(CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration ,float decay_time)

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
  g_INT_0135eab8 = 0;
  dVar2 = round((double)peak_intensity * 65536);
  dVar3 = round(dVar3);
  dVar4 = round(dVar4);
  dVar5 = round(dVar5);
  g_INT_005f17dc = (int)ROUND(dVar3);
  g_INT_0135eab4 = (int)ROUND(dVar4);
  g_INT_0135eabc = (int)ROUND(dVar5);
  g_INT_005f17d8 = (int)ROUND(dVar2);
  if (g_INT_0135eab4 == 0) {
    iVar1 = 1;
    g_INT_0135eab0 = g_INT_005f17dc;
    if (g_INT_005f17dc == 0) {
      g_INT_0135eac0 = g_INT_0135eabc;
      g_INT_005f17e0 = 2;
      return;
    }
  }
  g_INT_005f17e0 = iVar1;
  return;
}
