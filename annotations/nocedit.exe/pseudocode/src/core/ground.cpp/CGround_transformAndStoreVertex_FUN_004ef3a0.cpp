// Name: core_ground.cpp_CGround_transformAndStoreVertex_FUN_004ef3a0
// Address: 004ef3a0
// Address Range: [[004ef3a0, 004ef489]]
// Convention: __cdecl
// Signature: void core_ground.cpp_CGround_transformAndStoreVertex_FUN_004ef3a0(CGround * this_ptr, int column, int row)
// Cross-references:
//   core_ground.cpp_CGround_transformAndStoreVertices_FUN_004ef490 (004ef490) at 004ef858 [UNCONDITIONAL_CALL]
// Globals:
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_z
//   undefined4 g_RenderVertexBuffer[0].light
//   undefined4 g_RenderVertexBuffer[0].color
//   undefined4 g_RenderVertexBuffer[0].fog
//   undefined4 g_RenderVertexBuffer[0].w_recip
// Function calls:
//   core_ground.cpp_CGround_getVertexIndex_FUN_004ef380
//   wincore_windll.cpp_transformPoint_FUN_005b5a25

#include "nocturne.h"

void __cdecl
core_ground_cpp_CGround_transformAndStoreVertex_FUN_004ef3a0(CGround *this_ptr,int column,int row)

{
  int iVar1;
  int iVar2;
  float fVar3;
  BADSPACEBASE *in_ESP;
  int local_18;
  int local_14;
  
  iVar2 = core_ground_cpp_CGround_getVertexIndex_FUN_004ef380
                    (this_ptr,(row - this_ptr->camera_y) + this_ptr->grid_height,
                     (column - this_ptr->camera_x) + this_ptr->grid_width);
  local_18 = this_ptr->vertical_scale * column * 0x100;
  local_14 = this_ptr->height_scale *
             (int)*(short *)((int)this_ptr->terrain_data +
                            ((row & this_ptr->height_minus_1) * this_ptr->width +
                            (column & this_ptr->width_minus_1)) * 4);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_RenderVertexBuffer[iVar2].projected_vertex,(CVector3i *)&local_18);
  g_RenderVertexBuffer[iVar2].light = 2.29575e-41;
  g_RenderVertexBuffer[iVar2].color = 0x3fff;
  iVar1 = g_RenderVertexBuffer[iVar2].projected_vertex.transformed_z;
  g_RenderVertexBuffer[iVar2].fog = 2.29575e-41;
  if (iVar1 < 0) {
    g_RenderVertexBuffer[iVar2].w_recip = 0.0;
  }
  else {
    fVar3 = (float)((g_RenderVertexBuffer[iVar2].projected_vertex.transformed_z << 8) /
                   (this_ptr->grid_width * this_ptr->vertical_scale));
    g_RenderVertexBuffer[iVar2].w_recip = fVar3;
    if (0xffff < (int)fVar3) {
      g_RenderVertexBuffer[iVar2].w_recip = 9.18341e-41;
      return;
    }
  }
  return;
}


// Assembly code:
// 004ef3a0: PUSH EBX
//   Label: core_ground.cpp_CGround_transformAndStoreVertex_FUN_004ef3a0
// 004ef3a1: PUSH ESI
// 004ef3a2: PUSH EDI
// 004ef3a3: PUSH EBP
// 004ef3a4: SUB ESP,0xc
// 004ef3a7: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004ef3ab: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 004ef3af: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 004ef3b3: MOV EDX,EBP
// 004ef3b5: MOV ECX,dword ptr [ESI + 0x2c]
// 004ef3b8: MOV EDI,dword ptr [ESI + 0x10]
// 004ef3bb: SUB EDX,ECX
// 004ef3bd: ADD EDX,EDI
// 004ef3bf: MOV EAX,dword ptr [ESI + 0x30]
// 004ef3c2: PUSH EDX
// 004ef3c3: MOV EDX,EBX
// 004ef3c5: MOV ECX,dword ptr [ESI + 0x14]
// 004ef3c8: SUB EDX,EAX
// 004ef3ca: ADD EDX,ECX
// 004ef3cc: PUSH EDX
// 004ef3cd: PUSH ESI
// 004ef3ce: CALL core_ground.cpp_CGround_getVertexIndex_FUN_004ef380
//   XREF to: 004ef380 (UNCONDITIONAL_CALL)
// 004ef3d3: MOV EDX,dword ptr [ESI + 0x1c]
// 004ef3d6: IMUL EDX,EBP
// 004ef3d9: ADD ESP,0xc
// 004ef3dc: SHL EDX,0x8
// 004ef3df: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x1c] (DATA)
// 004ef3e2: MOV EDX,dword ptr [ESI + 0x1c]
// 004ef3e5: IMUL EDX,EBX
// 004ef3e8: SHL EDX,0x8
// 004ef3eb: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004ef3ef: MOV EDX,dword ptr [ESI + 0xc]
// 004ef3f2: MOV ECX,dword ptr [ESI]
// 004ef3f4: AND EBX,EDX
// 004ef3f6: IMUL EBX,ECX
// 004ef3f9: LEA EDI,[EAX*0x4 + 0x0]
// 004ef400: SUB EDI,EAX
// 004ef402: AND EBP,dword ptr [ESI + 0x8]
// 004ef405: LEA EDX,[EBX + EBP*0x1]
// 004ef408: MOV EBX,dword ptr [ESI + 0x24]
// 004ef40b: MOVSX EDX,word ptr [EBX + EDX*0x4]
// 004ef40f: MOV EBX,dword ptr [ESI + 0x20]
// 004ef412: IMUL EBX,EDX
// 004ef415: MOV EDX,ESP
// 004ef417: SHL EDI,0x4
// 004ef41a: PUSH EDX
// 004ef41b: ADD EDI,0x688014
//   XREF to: 00688014 (DATA)
// 004ef421: PUSH EDI
// 004ef422: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 004ef426: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 004ef42b: MOV dword ptr [EDI + 0x20],0x3fff
//   XREF to: 00688034 (DATA)
// 004ef432: MOV dword ptr [EDI + 0x24],0x3fff
//   XREF to: 00688038 (DATA)
// 004ef439: ADD ESP,0x8
// 004ef43c: MOV EBX,dword ptr [EDI + 0x8]
//   XREF to: 0068801c (DATA)
// 004ef43f: MOV dword ptr [EDI + 0x28],0x3fff
//   XREF to: 0068803c (DATA)
// 004ef446: TEST EBX,EBX
// 004ef448: JL 0x004ef472
//   XREF to: 004ef472 (CONDITIONAL_JUMP)
// 004ef44a: MOV EBP,dword ptr [ESI + 0x1c]
// 004ef44d: MOV EBX,dword ptr [ESI + 0x10]
// 004ef450: IMUL EBX,EBP
// 004ef453: MOV EDX,dword ptr [EDI + 0x8]
//   XREF to: 0068801c (DATA)
// 004ef456: SHL EDX,0x8
// 004ef459: MOV EAX,EDX
// 004ef45b: SAR EDX,0x1f
// 004ef45e: IDIV EBX
// 004ef460: MOV dword ptr [EDI + 0x2c],EAX
//   XREF to: 00688040 (DATA)
// 004ef463: CMP EAX,0xffff
// 004ef468: JG 0x004ef47b
//   XREF to: 004ef47b (CONDITIONAL_JUMP)
// 004ef46a: ADD ESP,0xc
//   Label: LAB_004ef46a
// 004ef46d: POP EBP
// 004ef46e: POP EDI
// 004ef46f: POP ESI
// 004ef470: POP EBX
// 004ef471: RET
// 004ef472: MOV dword ptr [EDI + 0x2c],0x0
//   Label: LAB_004ef472
//   XREF to: 00688040 (DATA)
// 004ef479: JMP 0x004ef46a
//   XREF to: 004ef46a (UNCONDITIONAL_JUMP)
// 004ef47b: MOV dword ptr [EDI + 0x2c],0xffff
//   Label: LAB_004ef47b
//   XREF to: 00688040 (DATA)
// 004ef482: ADD ESP,0xc
// 004ef485: POP EBP
// 004ef486: POP EDI
// 004ef487: POP ESI
// 004ef488: POP EBX
// 004ef489: RET
