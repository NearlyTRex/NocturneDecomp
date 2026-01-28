// Name: core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_00572510
// Address: 00572510
// Address Range: [[00572510, 00572527]]
// Convention: __cdecl
// Signature: int __cdecl core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_00572510 (CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

#include "nocturne.h"

int __cdecl
core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_00572510
          (CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

{
  int iVar1;
  
  iVar1 = core_dtrace_cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330
                    (&g_CDemonRaytraceInstance,start_pos,end_pos);
  return iVar1;
}
