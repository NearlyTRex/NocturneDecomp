// Name: core_dtri.cpp_buildClipTriangleFan_FUN_0049cb40
// Address: 0049cb40
// Address Range: [[0049cb40, 0049cb59]]
// Convention: __cdecl
// Signature: CDemonTriangle * core_dtri.cpp_buildClipTriangleFan_FUN_0049cb40(void)
// Function calls:
//   core_dtri.cpp_getClippedTriangleCount_FUN_0049cb30

#include "nocturne.h"

CDemonTriangle * __cdecl core_dtri_cpp_buildClipTriangleFan_FUN_0049cb40(void)

{
  int iVar1;
  CDemonTriangle *this_ptr;
  int iVar2;
  CVector3f *vertex2;
  CVector3f *vertex3;
  int unaff_retaddr;
  
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
    } while (iVar2 < unaff_retaddr);
  }
  return g_ClippedTriangleBuffer;
}


// Assembly code:
// 0049cb40: PUSH EBP
//   Label: core_dtri.cpp_buildClipTriangleFan_FUN_0049cb40
// 0049cb41: SUB ESP,0x4
// 0049cb44: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0049cb48: PUSH EDX
// 0049cb49: CALL core_dtri.cpp_getClippedTriangleCount_FUN_0049cb30
//   XREF to: 0049cb30 (UNCONDITIONAL_CALL)
// 0049cb4e: ADD ESP,0x4
// 0049cb51: XOR EBP,EBP
// 0049cb53: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x8] (DATA)
// 0049cb56: TEST EAX,EAX
// 0049cb58: JLE 0x0049cb97
//   XREF to: 0049cb97 (CONDITIONAL_JUMP)
