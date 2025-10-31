// Name: engine_3d.c_processVertexLighting_FUN_00403a20
// Address: 00403a20
// Address Range: [[00403a20, 00403a7c]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_processVertexLighting_FUN_00403a20(SVertexBatch * vertex_batch)
// Cross-references:
//   engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0 (00407aa0) at 00407b62 [UNCONDITIONAL_CALL]
// Globals:
//   uint g_ProcessedVertexOffset
// Function calls:
//   engine_light.cpp_calculateAndStoreVertexLight_FUN_00505850

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_processVertexLighting_FUN_00403a20(SVertexBatch *vertex_batch)

{
  int iVar1;
  int iVar2;
  SVertexBatch *vertex_position;
  
  iVar2 = 0;
  vertex_position = vertex_batch;
  if (0 < vertex_batch->vertex_count) {
    do {
      vertex_position = (SVertexBatch *)&vertex_position->vertex_buffer;
      iVar1 = vertex_batch->render_queue_index + iVar2;
      iVar2 = iVar2 + 1;
      engine_light_cpp_calculateAndStoreVertexLight_FUN_00505850
                (iVar1 + g_ProcessedVertexOffset,(CVector3i *)vertex_position);
    } while (iVar2 < vertex_batch->vertex_count);
  }
  return (SMRGLHeaderExtended *)(&vertex_batch->vertex_buffer + vertex_batch->vertex_count);
}


// Assembly code:
// 00403a20: PUSH EBX
//   Label: engine_3d.c_processVertexLighting_FUN_00403a20
// 00403a21: PUSH ESI
// 00403a22: PUSH EDI
// 00403a23: PUSH EBP
// 00403a24: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00403a28: LEA ESI,[EDI + 0xc]
// 00403a2b: MOV EDX,dword ptr [EDI + 0x8]
// 00403a2e: XOR EBX,EBX
// 00403a30: TEST EDX,EDX
// 00403a32: JLE 0x00403a60
//   XREF to: 00403a60 (CONDITIONAL_JUMP)
// 00403a34: MOV EAX,dword ptr [EDI + 0x4]
//   Label: LAB_00403a34
// 00403a37: MOV ECX,dword ptr [0x00772a60]
//   XREF to: 00772a60 (READ)
// 00403a3d: ADD EAX,EBX
// 00403a3f: PUSH ESI
// 00403a40: ADD EAX,ECX
// 00403a42: PUSH EAX
// 00403a43: ADD ESI,0xc
// 00403a46: INC EBX
// 00403a47: CALL engine_light.cpp_calculateAndStoreVertexLight_FUN_00505850
//   XREF to: 00505850 (UNCONDITIONAL_CALL)
// 00403a4c: MOV EBP,dword ptr [EDI + 0x8]
// 00403a4f: ADD ESP,0x8
// 00403a52: CMP EBX,EBP
// 00403a54: JL 0x00403a34
//   XREF to: 00403a34 (CONDITIONAL_JUMP)
// 00403a56: LEA EAX,[EAX]
// 00403a5c: LEA EDX,[EDX]
// 00403a60: MOV EBX,dword ptr [EDI + 0x8]
//   Label: LAB_00403a60
// 00403a63: LEA EAX,[EBX*0x4 + 0x0]
// 00403a6a: SUB EAX,EBX
// 00403a6c: LEA EBX,[EAX*0x4 + 0x0]
// 00403a73: LEA EAX,[EDI + 0xc]
// 00403a76: ADD EAX,EBX
// 00403a78: POP EBP
// 00403a79: POP EDI
// 00403a7a: POP ESI
// 00403a7b: POP EBX
// 00403a7c: RET
