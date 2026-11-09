// Name: core_setcolid.cpp_CDemonSet_getVoxelHeight_FUN_0053cc70
// Address: 0053cc70
// Address Range: [[0053cc70, 0053cc96]]
// Convention: __cdecl
// Signature: float __cdecl core_setcolid_cpp_CDemonSet_getVoxelHeight_FUN_0053cc70(CDemonSet *this_ptr,CVector3f *world_position)

#include "nocturne.h"

float __cdecl core_setcolid_cpp_CDemonSet_getVoxelHeight_FUN_0053cc70(CDemonSet *this_ptr,CVector3f *world_position)

{
  float fVar1;
  
  fVar1 = core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00477370
                    (&g_CDemonRaytraceInstance,world_position);
  return fVar1;
}
