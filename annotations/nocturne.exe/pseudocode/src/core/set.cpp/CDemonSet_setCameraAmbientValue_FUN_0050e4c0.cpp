// Name: core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_0050e4c0
// Address: 0050e4c0
// Address Range: [[0050e4c0, 0050e500]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_0050e4c0(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_0050e4c0(int param_1,int param_2,uint param_3)

{
  *(uint *)(param_2 * 0x1a0 + param_1 + 0x148) = param_3;
  if (param_2 != *(int *)(param_1 + 0x15aabc)) {
    return;
  }
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00446740(0x1fb8508,param_3);
  return;
}
