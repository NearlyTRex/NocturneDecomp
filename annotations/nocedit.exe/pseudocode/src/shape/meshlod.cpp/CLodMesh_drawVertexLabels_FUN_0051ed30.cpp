// Name: shape_meshlod.cpp_CLodMesh_drawVertexLabels_FUN_0051ed30
// Address: 0051ed30
// Address Range: [[0051ed30, 0051ed52]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_drawVertexLabels_FUN_0051ed30(CLodMesh * this_ptr)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 (0051d520) at 0051d615 [UNCONDITIONAL_CALL]
// Function calls:
//   shape_meshlod.cpp_CLodMesh_drawVertexIndexLabel_FUN_0051ecd0

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_drawVertexLabels_FUN_0051ed30(CLodMesh *this_ptr)

{
  int vertex_index;
  
  vertex_index = 0;
  if (0 < this_ptr->vertex_count) {
    do {
      shape_meshlod_cpp_CLodMesh_drawVertexIndexLabel_FUN_0051ecd0(this_ptr,vertex_index);
      vertex_index = vertex_index + 1;
    } while (vertex_index < this_ptr->vertex_count);
  }
  return;
}


// Assembly code:
// 0051ed30: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_drawVertexLabels_FUN_0051ed30
// 0051ed31: PUSH ESI
// 0051ed32: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0051ed36: MOV EDX,dword ptr [ESI]
// 0051ed38: XOR EBX,EBX
// 0051ed3a: TEST EDX,EDX
// 0051ed3c: JLE 0x0051ed50
//   XREF to: 0051ed50 (CONDITIONAL_JUMP)
// 0051ed3e: PUSH EBX
//   Label: LAB_0051ed3e
// 0051ed3f: PUSH ESI
// 0051ed40: CALL shape_meshlod.cpp_CLodMesh_drawVertexIndexLabel_FUN_0051ecd0
//   XREF to: 0051ecd0 (UNCONDITIONAL_CALL)
// 0051ed45: INC EBX
// 0051ed46: MOV ECX,dword ptr [ESI]
// 0051ed48: ADD ESP,0x8
// 0051ed4b: CMP EBX,ECX
// 0051ed4d: JL 0x0051ed3e
//   XREF to: 0051ed3e (CONDITIONAL_JUMP)
// 0051ed4f: NOP
// 0051ed50: POP ESI
//   Label: LAB_0051ed50
// 0051ed51: POP EBX
// 0051ed52: RET
