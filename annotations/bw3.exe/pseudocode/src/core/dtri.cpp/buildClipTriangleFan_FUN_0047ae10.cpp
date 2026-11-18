// Name: core_dtri.cpp_buildClipTriangleFan_FUN_0047ae10
// Address: 0047ae10
// Address Range: [[0047ae10, 0047ae70]]
// Convention: __cdecl
// Signature: CDemonTriangle * __cdecl core_dtri_cpp_buildClipTriangleFan_FUN_0047ae10(int flags)

#include "nocturne.h"

CDemonTriangle * __cdecl core_dtri_cpp_buildClipTriangleFan_FUN_0047ae10(int flags)

{
  int iVar1;
  CDemonTriangle *this_ptr;
  int iVar2;
  float *vertex2;
  CVector3f *vertex3;
  
  iVar1 = core_dtri_cpp_getClippedTriangleCount_FUN_0047ae00(flags);
  iVar2 = 0;
  if (0 < iVar1) {
    this_ptr = g_ClippedTriangleBuffer;
    vertex2 = &g_FLOAT_01c59e84;
    vertex3 = (CVector3f *)&g_FLOAT_01c59e90;
    do {
      iVar2 = iVar2 + 1;
      core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                (this_ptr,&g_CVector3f_01c59e78,(CVector3f *)vertex2,vertex3);
      vertex2 = (float *)((int)vertex2 + 0xc);
      this_ptr = this_ptr + 1;
      vertex3 = vertex3 + 1;
    } while (iVar2 < iVar1);
  }
  return g_ClippedTriangleBuffer;
}
