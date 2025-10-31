// Name: core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004ef880
// Address: 004ef880
// Address Range: [[004ef880, 004ef967]]
// Convention: __cdecl
// Signature: void core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004ef880(CGround * this_ptr, int column, int row)
// Cross-references:
//   core_ground.cpp_CGround_renderTerrainQuad_FUN_004ef990 (004ef990) at 004efa97 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_RenderVertexBuffer[0].u
//   undefined4 g_RenderVertexBuffer[0].v
//   undefined4 DAT_00f80000
// Function calls:
//   core_texlist.cpp_CTextureList_captureTexture_FUN_005dc270

#include "nocturne.h"

void __cdecl
core_ground_cpp_CGround_setQuadTextureCoordinates_FUN_004ef880(CGround *this_ptr,int column,int row)

{
  core_texlist_cpp_CTextureList_captureTexture_FUN_005dc270
            (this_ptr->texture_list,
             (uint)*(ushort *)
                    ((int)this_ptr->terrain_data + (row * this_ptr->width + column) * 4 + 2));
  g_RenderVertexBuffer[this_ptr->vertex_indices[1]].u = 2.2775203e-38;
  g_RenderVertexBuffer[this_ptr->vertex_indices[1]].v = 2.2775203e-38;
  g_RenderVertexBuffer[this_ptr->vertex_indices[0]].u = 7.34684e-40;
  g_RenderVertexBuffer[this_ptr->vertex_indices[0]].v = 2.2775203e-38;
  g_RenderVertexBuffer[this_ptr->vertex_indices[3]].u = 7.34684e-40;
  g_RenderVertexBuffer[this_ptr->vertex_indices[3]].v = 7.34684e-40;
  g_RenderVertexBuffer[this_ptr->vertex_indices[2]].u = 2.2775203e-38;
  g_RenderVertexBuffer[this_ptr->vertex_indices[2]].v = 7.34684e-40;
  return;
}


// Assembly code:
// 004ef880: PUSH EBX
//   Label: core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004ef880
// 004ef881: PUSH ESI
// 004ef882: PUSH EDI
// 004ef883: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004ef887: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 004ef88b: IMUL EAX,dword ptr [EBX]
// 004ef88e: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004ef892: MOV EDX,dword ptr [EBX + 0x24]
// 004ef895: ADD EAX,ECX
// 004ef897: MOV AX,word ptr [EDX + EAX*0x4 + 0x2]
// 004ef89c: AND EAX,0xffff
// 004ef8a1: PUSH EAX
// 004ef8a2: MOV ESI,dword ptr [EBX + 0x28]
// 004ef8a5: PUSH ESI
// 004ef8a6: CALL core_texlist.cpp_CTextureList_captureTexture_FUN_005dc270
//   XREF to: 005dc270 (UNCONDITIONAL_CALL)
// 004ef8ab: MOV EDX,dword ptr [EBX + 0x50]
// 004ef8ae: LEA EAX,[EDX*0x4 + 0x0]
// 004ef8b5: SUB EAX,EDX
// 004ef8b7: SHL EAX,0x4
// 004ef8ba: MOV EDI,0xf80000
//   XREF to: 00f80000 (DATA)
// 004ef8bf: MOV dword ptr [EAX + 0x68802c],EDI
//   XREF to: 0068802c (DATA)
//   XREF to: 00f80000 (DATA)
// 004ef8c5: MOV EDX,dword ptr [EBX + 0x50]
// 004ef8c8: LEA EAX,[EDX*0x4 + 0x0]
// 004ef8cf: SUB EAX,EDX
// 004ef8d1: SHL EAX,0x4
// 004ef8d4: MOV dword ptr [EAX + 0x688030],EDI
//   XREF to: 00688030 (DATA)
//   XREF to: 00f80000 (DATA)
// 004ef8da: MOV EDX,dword ptr [EBX + 0x4c]
// 004ef8dd: LEA EAX,[EDX*0x4 + 0x0]
// 004ef8e4: SUB EAX,EDX
// 004ef8e6: SHL EAX,0x4
// 004ef8e9: MOV dword ptr [EAX + 0x68802c],0x80000
//   XREF to: 0068802c (DATA)
// 004ef8f3: MOV EDX,dword ptr [EBX + 0x4c]
// 004ef8f6: LEA EAX,[EDX*0x4 + 0x0]
// 004ef8fd: SUB EAX,EDX
// 004ef8ff: SHL EAX,0x4
// 004ef902: MOV dword ptr [EAX + 0x688030],EDI
//   XREF to: 00688030 (DATA)
//   XREF to: 00f80000 (DATA)
// 004ef908: MOV EDX,dword ptr [EBX + 0x58]
// 004ef90b: LEA EAX,[EDX*0x4 + 0x0]
// 004ef912: SUB EAX,EDX
// 004ef914: SHL EAX,0x4
// 004ef917: MOV ESI,0x80000
// 004ef91c: MOV dword ptr [EAX + 0x68802c],ESI
//   XREF to: 0068802c (DATA)
// 004ef922: MOV EDX,dword ptr [EBX + 0x58]
// 004ef925: LEA EAX,[EDX*0x4 + 0x0]
// 004ef92c: SUB EAX,EDX
// 004ef92e: SHL EAX,0x4
// 004ef931: MOV dword ptr [EAX + 0x688030],ESI
//   XREF to: 00688030 (DATA)
// 004ef937: MOV EDX,dword ptr [EBX + 0x54]
// 004ef93a: LEA EAX,[EDX*0x4 + 0x0]
// 004ef941: SUB EAX,EDX
// 004ef943: SHL EAX,0x4
// 004ef946: MOV dword ptr [EAX + 0x68802c],EDI
//   XREF to: 0068802c (DATA)
//   XREF to: 00f80000 (DATA)
// 004ef94c: MOV EDX,dword ptr [EBX + 0x54]
// 004ef94f: LEA EAX,[EDX*0x4 + 0x0]
// 004ef956: SUB EAX,EDX
// 004ef958: SHL EAX,0x4
// 004ef95b: ADD ESP,0x8
// 004ef95e: MOV dword ptr [EAX + 0x688030],ESI
//   XREF to: 00688030 (DATA)
// 004ef964: POP EDI
// 004ef965: POP ESI
// 004ef966: POP EBX
// 004ef967: RET
