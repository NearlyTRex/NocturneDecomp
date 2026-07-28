// Name: core_setcolid.cpp_CDemonSet_getVoxelHeight_FUN_0050fab0
// Address: 0050fab0
// Address Range: [[0050fab0, 0050fad6]]
// Convention: unknown
// Signature: float core_setcolid_cpp_CDemonSet_getVoxelHeight_FUN_0050fab0(undefined4 param_1,CVector3f *param_2)

#include "nocturne.h"

float core_setcolid_cpp_CDemonSet_getVoxelHeight_FUN_0050fab0(uint param_1,CVector3f *param_2)

{
  float fVar1;
  
  fVar1 = core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_0046aff0
                    ((CDemonRaytrace *)&DAT_01fba938,param_2);
  return fVar1;
}
