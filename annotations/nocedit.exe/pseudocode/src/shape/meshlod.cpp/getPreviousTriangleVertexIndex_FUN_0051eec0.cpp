// Name: shape_meshlod.cpp_getPreviousTriangleVertexIndex_FUN_0051eec0
// Address: 0051eec0
// Address Range: [[0051eec0, 0051eecf]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_getPreviousTriangleVertexIndex_FUN_0051eec0(int vertex_index)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_getPreviousTriangleVertexIndex_FUN_0051eec0(int vertex_index)

{
  if (-1 < vertex_index + -1) {
    return vertex_index + -1;
  }
  return 2;
}


// Assembly code:
// 0051eec0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_meshlod.cpp_getPreviousTriangleVertexIndex_FUN_0051eec0
//   XREF to: Stack[0x4] (READ)
// 0051eec4: DEC EAX
// 0051eec5: TEST EAX,EAX
// 0051eec7: JL 0x0051eeca
//   XREF to: 0051eeca (CONDITIONAL_JUMP)
// 0051eec9: RET
// 0051eeca: MOV EAX,0x2
//   Label: LAB_0051eeca
// 0051eecf: RET
