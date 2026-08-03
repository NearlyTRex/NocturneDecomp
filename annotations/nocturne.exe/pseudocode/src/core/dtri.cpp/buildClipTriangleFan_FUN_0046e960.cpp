// Name: core_dtri.cpp_buildClipTriangleFan_FUN_0046e960
// Address: 0046e960
// Address Range: [[0046e960, 0046e9c0]]
// Convention: __cdecl
// Signature: CDemonTriangle * __cdecl core_dtri_cpp_buildClipTriangleFan_FUN_0046e960(int flags)

#include "nocturne.h"

CDemonTriangle * __cdecl core_dtri_cpp_buildClipTriangleFan_FUN_0046e960(int flags)

{
  int iVar1;
  CDemonTriangle *this_ptr;
  int iVar2;
  CVector3f *vertex2;
  CVector3f *vertex3;
  
  iVar1 = core_dtri_cpp_getClippedTriangleCount_FUN_0046e950(flags);
  iVar2 = 0;
  if (0 < iVar1) {
    this_ptr = g_CDemonTriangle_ARRAY_01bc9ec8;
    vertex2 = g_CVector3f_ARRAY_01bc9e08;
    vertex3 = g_CVector3f_ARRAY_01bc9e08 + 2;
    do {
      vertex2 = vertex2 + 1;
      iVar2 = iVar2 + 1;
      core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                (this_ptr,g_CVector3f_ARRAY_01bc9e08,vertex2,vertex3);
      this_ptr = this_ptr + 1;
      vertex3 = vertex3 + 1;
    } while (iVar2 < iVar1);
  }
  return g_CDemonTriangle_ARRAY_01bc9ec8;
}
