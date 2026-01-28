// Name: core_dtri.cpp_buildClipTriangleFan_FUN_0049cb5a
// Address: 0049cb5a
// Address Range: [[0049cb5a, 0049cba0]]
// Convention: __cdecl
// Signature: CDemonTriangle * __cdecl core_dtri_cpp_buildClipTriangleFan_FUN_0049cb5a(int triangle_count)

#include "nocturne.h"

CDemonTriangle * __cdecl core_dtri_cpp_buildClipTriangleFan_FUN_0049cb5a(int triangle_count)

{
  CDemonTriangle *this_ptr;
  int unaff_EBP;
  CVector3f *vertex2;
  CVector3f *vertex3;
  int unaff_retaddr;
  
  this_ptr = g_ClippedTriangleBuffer;
  vertex2 = g_ClipOutputVertices;
  vertex3 = g_ClipOutputVertices + 2;
  do {
    vertex2 = vertex2 + 1;
    unaff_EBP = unaff_EBP + 1;
    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
              (this_ptr,g_ClipOutputVertices,vertex2,vertex3);
    this_ptr = this_ptr + 1;
    vertex3 = vertex3 + 1;
  } while (unaff_EBP < unaff_retaddr);
  return g_ClippedTriangleBuffer;
}
