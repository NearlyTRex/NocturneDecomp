// Name: core_setcolid.cpp_CDemonSet_getVoxelHeight_FUN_005724e0
// Address: 005724e0
// Address Range: [[005724e0, 00572506]]
// Convention: __cdecl
// Signature: float core_setcolid.cpp_CDemonSet_getVoxelHeight_FUN_005724e0(CDemonSet * this_ptr, CVector3f * world_position)

#include "nocturne.h"

float __cdecl
core_setcolid_cpp_CDemonSet_getVoxelHeight_FUN_005724e0
          (CDemonSet *this_ptr,CVector3f *world_position)

{
  float fVar1;
  
  fVar1 = core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170
                    (&g_CDemonRaytraceInstance,world_position);
  return fVar1;
}
