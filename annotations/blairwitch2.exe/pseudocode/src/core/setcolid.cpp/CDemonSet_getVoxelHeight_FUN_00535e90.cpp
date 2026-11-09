// Name: core_setcolid.cpp_CDemonSet_getVoxelHeight_FUN_00535e90
// Address: 00535e90
// Address Range: [[00535e90, 00535eb6]]
// Convention: __cdecl
// Signature: float __cdecl core_setcolid_cpp_CDemonSet_getVoxelHeight_FUN_00535e90(CDemonSet *this_ptr,CVector3f *world_position)

#include "nocturne.h"

float __cdecl core_setcolid_cpp_CDemonSet_getVoxelHeight_FUN_00535e90(CDemonSet *this_ptr,CVector3f *world_position)

{
  float fVar1;
  
  fVar1 = core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00476300
                    (&g_CDemonRaytraceInstance,world_position);
  return fVar1;
}
