// Name: core_dtri.cpp_buildClipTriangleFan_FUN_0049cb5a
// Address: 0049cb5a
// Address Range: [[0049cb5a, 0049cba0]]
// Convention: __cdecl
// Signature: CDemonTriangle * core_dtri.cpp_buildClipTriangleFan_FUN_0049cb5a(int triangle_count)
// Globals:
//   CVector3f[16] g_ClipOutputVertices
//   undefined4 g_ClipOutputVertices[1].x
//   undefined4 g_ClipOutputVertices[2].x
//   undefined4 g_ClipOutputVertices[3].x
//   CDemonTriangle[8] g_ClippedTriangleBuffer
//   undefined4 g_ClippedTriangleBuffer[1].vertex1.x
// Function calls:
//   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790

#include "nocturne.h"

CDemonTriangle * __cdecl core_dtri_cpp_buildClipTriangleFan_FUN_0049cb5a(int triangle_count)

{
  CDemonTriangle *this_ptr;
  int unaff_EBP;
  CVector3f *vertex2;
  CVector3f *vertex3;
  
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
  } while (unaff_EBP < triangle_count);
  return g_ClippedTriangleBuffer;
}


// Assembly code:
// 0049cb5a: PUSH EDI
//   Label: core_dtri.cpp_buildClipTriangleFan_FUN_0049cb5a
// 0049cb5b: PUSH ESI
// 0049cb5c: PUSH EBX
// 0049cb5d: MOV ESI,0x2ceea68
//   XREF to: 02ceea68 (DATA)
// 0049cb62: MOV EDI,0x2ceea68
//   XREF to: 02ceea68 (DATA)
// 0049cb67: MOV EBX,0x2ceeb28
//   XREF to: 02ceeb28 (DATA)
// 0049cb6c: ADD ESI,0xc
// 0049cb6f: ADD EDI,0x18
// 0049cb72: PUSH EDI
//   Label: LAB_0049cb72
//   XREF to: 02ceea80 (DATA)
//   XREF to: 02ceea8c (DATA)
// 0049cb73: PUSH ESI
//   XREF to: 02ceea74 (DATA)
//   XREF to: 02ceea80 (DATA)
// 0049cb74: PUSH 0x2ceea68
//   XREF to: 02ceea68 (DATA)
// 0049cb79: PUSH EBX
//   XREF to: 02ceeb28 (DATA)
//   XREF to: 02ceeb60 (DATA)
// 0049cb7a: INC EBP
// 0049cb7b: ADD EDI,0xc
// 0049cb7e: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 0049cb83: ADD ESP,0x10
// 0049cb86: ADD ESI,0xc
// 0049cb89: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x0] (READ)
// 0049cb8d: ADD EBX,0x38
// 0049cb90: CMP EBP,ECX
// 0049cb92: JL 0x0049cb72
//   XREF to: 0049cb72 (CONDITIONAL_JUMP)
// 0049cb94: POP EBX
// 0049cb95: POP ESI
// 0049cb96: POP EDI
// 0049cb97: MOV EAX,0x2ceeb28
//   Label: LAB_0049cb97
//   XREF to: 02ceeb28 (DATA)
// 0049cb9c: ADD ESP,0x4
// 0049cb9f: POP EBP
// 0049cba0: RET
