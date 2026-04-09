// Name: core_dtri.cpp_buildClipTriangleFan_FUN_0049cb40
// Address: 0049cb40
// Address Range: [[0049cb40, 0049cba0]]
// Convention: __cdecl
// Signature: CDemonTriangle * __cdecl core_dtri_cpp_buildClipTriangleFan_FUN_0049cb40(void)

#include "nocturne.h"

CDemonTriangle * __cdecl core_dtri_cpp_buildClipTriangleFan_FUN_0049cb40(void)

{
  int iVar1;
  CDemonTriangle *this_ptr;
  int iVar2;
  CVector3f *vertex2;
  CVector3f *vertex3;
  
  iVar1 = core_dtri_cpp_getClippedTriangleCount_FUN_0049cb30();
  iVar2 = 0;
  if (0 < iVar1) {
    this_ptr = g_ClippedTriangleBuffer;
    vertex2 = g_ClipOutputVertices;
    vertex3 = g_ClipOutputVertices + 2;
    do {
      vertex2 = vertex2 + 1;
      iVar2 = iVar2 + 1;
      core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                (this_ptr,g_ClipOutputVertices,vertex2,vertex3);
      this_ptr = this_ptr + 1;
      vertex3 = vertex3 + 1;
    } while (iVar2 < iVar1);
  }
  return g_ClippedTriangleBuffer;
}
