// Name: core_set.cpp_CDemonSet_FUN_0050e660
// Address: 0050e660
// Address Range: [[0050e660, 0050e6a3]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_FUN_0050e660(CDemonSet *this_ptr,float param_2,float param_3,float param_4,float param_5)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0050e660(CDemonSet *this_ptr,float param_2,float param_3,float param_4,float param_5)

{
  core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00447e80
            (&g_CDemonCamera_01fb8508,param_2,param_3,param_4,param_5);
  xxx_unk_c_FUN_004940d0(PTR_DAT_005b9284,0x3f800000,param_3 + param_4 + param_5);
  return;
}
