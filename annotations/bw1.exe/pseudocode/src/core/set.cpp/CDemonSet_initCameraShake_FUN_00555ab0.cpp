// Name: core_set.cpp_CDemonSet_initCameraShake_FUN_00555ab0
// Address: 00555ab0
// Address Range: [[00555ab0, 00555acd]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_initCameraShake_FUN_00555ab0(CDemonSet *this_ptr,float peak,float attack,float sustain,float decay)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_initCameraShake_FUN_00555ab0(CDemonSet *this_ptr,float peak,float attack,float sustain,float decay)

{
  core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00454c20
            (&g_CDemonCameraInstance,peak,attack,sustain,decay);
  return;
}
