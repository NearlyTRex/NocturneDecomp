// Name: core_setcolid.cpp_CDemonSet_getVoxelHeight_FUN_005572b0
// Address: 005572b0
// Address Range: [[005572b0, 005572d6]]
// Convention: __cdecl
// Signature: float __cdecl core_setcolid_cpp_CDemonSet_getVoxelHeight_FUN_005572b0(CDemonSet *this_ptr,CVector3f *world_position)

#include "nocturne.h"

float __cdecl core_setcolid_cpp_CDemonSet_getVoxelHeight_FUN_005572b0(CDemonSet *this_ptr,CVector3f *world_position)

{
  float fVar1;
  
  fVar1 = core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_0048e7f0
                    (&g_CDemonRaytraceInstance,world_position);
  return fVar1;
}
