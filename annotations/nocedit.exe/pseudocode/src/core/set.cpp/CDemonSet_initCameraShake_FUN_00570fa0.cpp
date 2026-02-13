// Name: core_set.cpp_CDemonSet_initCameraShake_FUN_00570fa0
// Address: 00570fa0
// Address Range: [[00570fa0, 00570fbd]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_initCameraShake_FUN_00570fa0 (CDemonSet *this_ptr,float peak,float attack,float sustain,float decay)

#include "nocturne.h"

void __cdecl
core_set_cpp_CDemonSet_initCameraShake_FUN_00570fa0
          (CDemonSet *this_ptr,float peak,float attack,float sustain,float decay)

{
  core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00453fc0
            (&g_CDemonCameraInstance,peak,attack,sustain,decay);
  return;
}
