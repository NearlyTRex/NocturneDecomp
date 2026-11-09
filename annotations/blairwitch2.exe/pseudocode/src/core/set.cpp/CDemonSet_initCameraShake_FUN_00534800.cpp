// Name: core_set.cpp_CDemonSet_initCameraShake_FUN_00534800
// Address: 00534800
// Address Range: [[00534800, 0053481d]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_initCameraShake_FUN_00534800(CDemonSet *this_ptr,float peak,float attack,float sustain,float decay)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_initCameraShake_FUN_00534800(CDemonSet *this_ptr,float peak,float attack,float sustain,float decay)

{
  core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00443570
            (&g_CDemonCameraInstance,peak,attack,sustain,decay);
  return;
}
