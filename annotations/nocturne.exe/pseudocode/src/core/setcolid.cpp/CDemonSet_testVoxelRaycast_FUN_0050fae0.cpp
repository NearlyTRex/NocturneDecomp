// Name: core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_0050fae0
// Address: 0050fae0
// Address Range: [[0050fae0, 0050faf7]]
// Convention: __cdecl
// Signature: int __cdecl core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_0050fae0(CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

#include "nocturne.h"

int __cdecl core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_0050fae0(CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

{
  int iVar1;
  
  iVar1 = core_dtrace_cpp_CDemonRaytrace_voxelRaycast3D_FUN_0046b1b0
                    (&g_CDemonRaytrace_01fba938,start_pos,end_pos);
  return iVar1;
}
