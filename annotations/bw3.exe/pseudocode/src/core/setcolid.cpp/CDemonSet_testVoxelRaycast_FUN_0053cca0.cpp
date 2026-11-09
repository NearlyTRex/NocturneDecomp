// Name: core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_0053cca0
// Address: 0053cca0
// Address Range: [[0053cca0, 0053ccb7]]
// Convention: __cdecl
// Signature: int __cdecl core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_0053cca0(CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

#include "nocturne.h"

int __cdecl core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_0053cca0(CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

{
  int iVar1;
  
  iVar1 = core_dtrace_cpp_CDemonRaytrace_voxelRaycast3D_FUN_00477530
                    (&g_CDemonRaytraceInstance,start_pos,end_pos);
  return iVar1;
}
