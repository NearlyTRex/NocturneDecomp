// Name: core_set.cpp_CDemonSet_initCameraShake_FUN_0050e660
// Address: 0050e660
// Address Range: [[0050e660, 0050e6a3]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_initCameraShake_FUN_0050e660(CDemonSet *this_ptr,float peak,float attack,float sustain,float decay)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_initCameraShake_FUN_0050e660(CDemonSet *this_ptr,float peak,float attack,float sustain,float decay)

{
  core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00447e80
            (&g_CDemonCamera_01fb8508,peak,attack,sustain,decay);
  engine_force_cpp_CForceFeedback_processEvent_FUN_004940d0
            (g_CForceFeedback_PTR_005b9284,0x3f800000,attack + sustain + decay);
  return;
}
