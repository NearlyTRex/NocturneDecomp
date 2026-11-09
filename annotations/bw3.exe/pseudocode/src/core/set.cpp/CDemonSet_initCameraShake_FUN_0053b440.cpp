// Name: core_set.cpp_CDemonSet_initCameraShake_FUN_0053b440
// Address: 0053b440
// Address Range: [[0053b440, 0053b45d]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_initCameraShake_FUN_0053b440(CDemonSet *this_ptr,float peak,float attack,float sustain,float decay)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_initCameraShake_FUN_0053b440(CDemonSet *this_ptr,float peak,float attack,float sustain,float decay)

{
  core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00450d70
            (&g_CDemonCameraInstance,peak,attack,sustain,decay);
  return;
}
