// Name: core_setcolid.cpp_CDemonSet_getVoxelHeight_FUN_0050fab0
// Address: 0050fab0
// Address Range: [[0050fab0, 0050fad6]]
// Convention: __cdecl
// Signature: float __cdecl core_setcolid_cpp_CDemonSet_getVoxelHeight_FUN_0050fab0(CDemonSet *this_ptr,CVector3f *world_position)

#include "nocturne.h"

float __cdecl core_setcolid_cpp_CDemonSet_getVoxelHeight_FUN_0050fab0(CDemonSet *this_ptr,CVector3f *world_position)

{
  float fVar1;
  
  fVar1 = core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_0046aff0
                    (&g_CDemonRaytrace_01fba938,world_position);
  return fVar1;
}
