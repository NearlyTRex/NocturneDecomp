// Name: core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00535e10
// Address: 00535e10
// Address Range: [[00535e10, 00535e88]]
// Convention: __cdecl
// Signature: int __cdecl core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00535e10(CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

#include "nocturne.h"

int __cdecl core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00535e10(CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

{
  int iVar1;
  float fVar2;
  
  iVar1 = core_dtrace_cpp_FUN_00473390(&g_CDemonRaytraceInstance,start_pos,end_pos);
  if (iVar1 == 0) {
    fVar2 = (float)core_setcolid_cpp_FUN_00536490(this_ptr,0xbf800000,start_pos,end_pos,0x3f8147ae);
    if ((fVar2 < 0.0) || (1.0 < fVar2)) {
      return 0;
    }
  }
  return 1;
}
