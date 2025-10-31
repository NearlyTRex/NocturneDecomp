// Name: core_dtri.cpp_getClippedTriangleCount_FUN_0049cb30
// Address: 0049cb30
// Address Range: [[0049cb30, 0049cb3f]]
// Convention: __cdecl
// Signature: int core_dtri.cpp_getClippedTriangleCount_FUN_0049cb30(void)
// Cross-references:
//   core_dtri.cpp_buildClipTriangleFan_FUN_0049cb40 (0049cb40) at 0049cb49 [UNCONDITIONAL_CALL]
// Globals:
//   int g_ClipOutputVertexCount

#include "nocturne.h"

int __cdecl core_dtri_cpp_getClippedTriangleCount_FUN_0049cb30(void)

{
  if (-1 < g_ClipOutputVertexCount + -2) {
    return g_ClipOutputVertexCount + -2;
  }
  return 0;
}


// Assembly code:
// 0049cb30: MOV EAX,[0x02ceea64]
//   Label: core_dtri.cpp_getClippedTriangleCount_FUN_0049cb30
//   XREF to: 02ceea64 (READ)
// 0049cb35: SUB EAX,0x2
// 0049cb38: TEST EAX,EAX
// 0049cb3a: JL 0x0049cb3d
//   XREF to: 0049cb3d (CONDITIONAL_JUMP)
// 0049cb3c: RET
// 0049cb3d: XOR EAX,EAX
//   Label: LAB_0049cb3d
// 0049cb3f: RET
