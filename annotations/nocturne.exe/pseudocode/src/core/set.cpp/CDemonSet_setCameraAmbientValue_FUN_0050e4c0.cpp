// Name: core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_0050e4c0
// Address: 0050e4c0
// Address Range: [[0050e4c0, 0050e500]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_0050e4c0(CDemonSet *this_ptr,int index,float value)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_0050e4c0(CDemonSet *this_ptr,int index,float value)

{
  *(float *)((int)&this_ptr->cameras[0].rotation_matrix + index * 0x1a0 + 0x2c) = value;
  if ((CDemonActor *)index != this_ptr->renderable_actors[0x773]) {
    return;
  }
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00446740((CDemonCamera *)&DAT_01fb8508,value)
  ;
  return;
}
