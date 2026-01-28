// Name: core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460
// Address: 00572460
// Address Range: [[00572460, 005724d8]]
// Convention: __cdecl
// Signature: int __cdecl core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460 (CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

#include "nocturne.h"

int __cdecl
core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
          (CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

{
  int iVar1;
  float fVar2;
  
  iVar1 = core_dtrace_cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220
                    (&g_CDemonRaytraceInstance,start_pos,end_pos);
  if (iVar1 == 0) {
    fVar2 = core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_00572a10
                      (this_ptr,-1.0,start_pos,end_pos,1.01);
    if ((fVar2 < 0.0) || (1.0 < fVar2)) {
      return 0;
    }
  }
  return 1;
}
