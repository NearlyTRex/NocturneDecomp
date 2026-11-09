// Name: core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_005572e0
// Address: 005572e0
// Address Range: [[005572e0, 005572f7]]
// Convention: __cdecl
// Signature: int __cdecl core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_005572e0(CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

#include "nocturne.h"

int __cdecl core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_005572e0(CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

{
  int iVar1;
  
  iVar1 = core_dtrace_cpp_CDemonRaytrace_voxelRaycast3D_FUN_0048e9b0
                    (&g_CDemonRaytraceInstance,start_pos,end_pos);
  return iVar1;
}
