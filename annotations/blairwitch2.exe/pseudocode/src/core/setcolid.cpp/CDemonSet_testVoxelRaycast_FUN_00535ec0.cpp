// Name: core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_00535ec0
// Address: 00535ec0
// Address Range: [[00535ec0, 00535ed7]]
// Convention: __cdecl
// Signature: int __cdecl core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_00535ec0(CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

#include "nocturne.h"

int __cdecl core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_00535ec0(CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

{
  int iVar1;
  
  iVar1 = core_dtrace_cpp_CDemonRaytrace_voxelRaycast3D_FUN_004764c0
                    (&g_CDemonRaytraceInstance,start_pos,end_pos);
  return iVar1;
}
