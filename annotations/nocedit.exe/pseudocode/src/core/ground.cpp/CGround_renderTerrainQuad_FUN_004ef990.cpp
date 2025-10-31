// Name: core_ground.cpp_CGround_renderTerrainQuad_FUN_004ef990
// Address: 004ef990
// Address Range: [[004ef990, 004efb60]]
// Convention: __cdecl
// Signature: void core_ground.cpp_CGround_renderTerrainQuad_FUN_004ef990(CGround * this_ptr, int world_column, int world_row)
// Cross-references:
//   core_ground.cpp_CGround_renderVisibleTerrain_FUN_004efb70 (004efb70) at 004efc72 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
// Function calls:
//   core_ground.cpp_CGround_getVertexIndex_FUN_004ef380
//   core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004ef970
//   core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004ef880

#include "nocturne.h"

void __cdecl
core_ground_cpp_CGround_renderTerrainQuad_FUN_004ef990
          (CGround *this_ptr,int world_column,int world_row)

{
  int iVar1;
  uint uVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  int row;
  int unaff_EDI;
  uint column;
  uint in_stack_0000001c;
  SMRGLHeaderPrimitive local_34;
  int iStack_1c;
  int iStack_18;
  int local_14;
  
  row = (world_column - this_ptr->camera_x) + this_ptr->grid_width;
  iVar3 = (world_row - this_ptr->camera_y) + this_ptr->grid_height;
  column = world_column & this_ptr->width_minus_1;
  iVar1 = core_ground_cpp_CGround_getVertexIndex_FUN_004ef380(this_ptr,iVar3,row);
  this_ptr->vertex_indices[0] = iVar1;
  iVar1 = core_ground_cpp_CGround_getVertexIndex_FUN_004ef380(this_ptr,iVar3,row + 1);
  this_ptr->vertex_indices[1] = iVar1;
  iVar1 = core_ground_cpp_CGround_getVertexIndex_FUN_004ef380(this_ptr,iVar3 + 1,unaff_EDI);
  this_ptr->vertex_indices[2] = iVar1;
  iVar3 = core_ground_cpp_CGround_getVertexIndex_FUN_004ef380(this_ptr,iVar3 + 1,row);
  iVar1 = this_ptr->vertex_indices[0];
  this_ptr->vertex_indices[3] = iVar3;
  uVar2 = g_RenderVertexBuffer[this_ptr->vertex_indices[3]].projected_vertex.screen_x &
          g_RenderVertexBuffer[iVar1].projected_vertex.screen_x &
          g_RenderVertexBuffer[this_ptr->vertex_indices[1]].projected_vertex.screen_x &
          g_RenderVertexBuffer[this_ptr->vertex_indices[2]].projected_vertex.screen_x;
  if (((uVar2 & 0x80000000) != 0) && ((char)uVar2 != '\0')) {
    return;
  }
  core_ground_cpp_CGround_setQuadTextureCoordinates_FUN_004ef880(this_ptr,column,in_stack_0000001c);
  if ((column & 1) == (in_stack_0000001c & 1)) {
    core_ground_cpp_CGround_renderTerrainPrimitive_FUN_004ef970
              (this_ptr,(SMRGLHeaderPrimitive *)&stack0xffffff90);
    local_34.base.count = 3;
    local_14 = this_ptr->vertex_indices[0];
    iStack_18 = this_ptr->vertex_indices[2];
    iStack_1c = this_ptr->vertex_indices[3];
    core_ground_cpp_CGround_renderTerrainPrimitive_FUN_004ef970(this_ptr,&local_34);
    return;
  }
  core_ground_cpp_CGround_renderTerrainPrimitive_FUN_004ef970
            (this_ptr,(SMRGLHeaderPrimitive *)&stack0xffffff90);
  local_34.base.count = 3;
  local_14 = this_ptr->vertex_indices[1];
  iStack_18 = this_ptr->vertex_indices[2];
  iStack_1c = this_ptr->vertex_indices[3];
  core_ground_cpp_CGround_renderTerrainPrimitive_FUN_004ef970(this_ptr,&local_34);
  return;
}


// Assembly code:
// 004ef990: PUSH EBX
//   Label: core_ground.cpp_CGround_renderTerrainQuad_FUN_004ef990
// 004ef991: PUSH ESI
// 004ef992: PUSH EDI
// 004ef993: PUSH EBP
// 004ef994: SUB ESP,0x74
// 004ef997: MOV EBX,dword ptr [ESP + 0x88]
//   XREF to: Stack[0x4] (READ)
// 004ef99e: MOV EDI,dword ptr [ESP + 0x8c]
//   XREF to: Stack[0x8] (READ)
// 004ef9a5: MOV EBP,dword ptr [ESP + 0x90]
//   XREF to: Stack[0xc] (READ)
// 004ef9ac: MOV ESI,EDI
// 004ef9ae: MOV EDX,dword ptr [EBX + 0x30]
// 004ef9b1: MOV EAX,dword ptr [EBX + 0x2c]
// 004ef9b4: SUB EBP,EDX
// 004ef9b6: SUB ESI,EAX
// 004ef9b8: MOV EDX,dword ptr [EBX + 0x10]
// 004ef9bb: MOV ECX,dword ptr [EBX + 0x14]
// 004ef9be: ADD ESI,EDX
// 004ef9c0: MOV EAX,dword ptr [EBX + 0xc]
// 004ef9c3: PUSH ESI
// 004ef9c4: ADD EBP,ECX
// 004ef9c6: MOV EDX,dword ptr [ESP + 0x94]
//   XREF to: Stack[0xc] (READ)
// 004ef9cd: PUSH EBP
// 004ef9ce: MOV ECX,dword ptr [EBX + 0x8]
// 004ef9d1: AND EDX,EAX
// 004ef9d3: PUSH EBX
// 004ef9d4: AND EDI,ECX
// 004ef9d6: MOV dword ptr [ESP + 0x9c],EDX
//   XREF to: Stack[0xc] (WRITE)
// 004ef9dd: CALL core_ground.cpp_CGround_getVertexIndex_FUN_004ef380
//   XREF to: 004ef380 (UNCONDITIONAL_CALL)
// 004ef9e2: ADD ESP,0xc
// 004ef9e5: MOV dword ptr [EBX + 0x4c],EAX
// 004ef9e8: LEA EAX,[ESI + 0x1]
// 004ef9eb: PUSH EAX
// 004ef9ec: PUSH EBP
// 004ef9ed: PUSH EBX
// 004ef9ee: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004ef9f2: CALL core_ground.cpp_CGround_getVertexIndex_FUN_004ef380
//   XREF to: 004ef380 (UNCONDITIONAL_CALL)
// 004ef9f7: ADD ESP,0xc
// 004ef9fa: MOV dword ptr [EBX + 0x50],EAX
// 004ef9fd: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x14] (READ)
// 004efa01: PUSH EAX
// 004efa02: INC EBP
// 004efa03: PUSH EBP
// 004efa04: PUSH EBX
// 004efa05: CALL core_ground.cpp_CGround_getVertexIndex_FUN_004ef380
//   XREF to: 004ef380 (UNCONDITIONAL_CALL)
// 004efa0a: ADD ESP,0xc
// 004efa0d: PUSH ESI
// 004efa0e: PUSH EBP
// 004efa0f: PUSH EBX
// 004efa10: MOV dword ptr [EBX + 0x54],EAX
// 004efa13: CALL core_ground.cpp_CGround_getVertexIndex_FUN_004ef380
//   XREF to: 004ef380 (UNCONDITIONAL_CALL)
// 004efa18: MOV ESI,dword ptr [EBX + 0x4c]
// 004efa1b: LEA EBP,[ESI*0x4 + 0x0]
// 004efa22: SUB EBP,ESI
// 004efa24: MOV ESI,dword ptr [EBX + 0x50]
// 004efa27: MOV dword ptr [EBX + 0x58],EAX
// 004efa2a: LEA EAX,[ESI*0x4 + 0x0]
// 004efa31: SUB EAX,ESI
// 004efa33: MOV ESI,EAX
// 004efa35: SHL ESI,0x4
// 004efa38: MOV EDX,dword ptr [ESI + 0x688024]
//   XREF to: 00688024 (DATA)
// 004efa3e: MOV ESI,dword ptr [EBX + 0x54]
// 004efa41: LEA EAX,[ESI*0x4 + 0x0]
// 004efa48: SUB EAX,ESI
// 004efa4a: SHL EBP,0x4
// 004efa4d: SHL EAX,0x4
// 004efa50: MOV ESI,dword ptr [EBX + 0x58]
// 004efa53: MOV ECX,dword ptr [EAX + 0x688024]
//   XREF to: 00688024 (DATA)
// 004efa59: LEA EAX,[ESI*0x4 + 0x0]
// 004efa60: MOV EBP,dword ptr [EBP + 0x688024]
//   XREF to: 00688024 (DATA)
// 004efa66: SUB EAX,ESI
// 004efa68: AND EBP,EDX
// 004efa6a: SHL EAX,0x4
// 004efa6d: AND EBP,ECX
// 004efa6f: MOV EAX,dword ptr [EAX + 0x688024]
//   XREF to: 00688024 (DATA)
// 004efa75: AND EAX,EBP
// 004efa77: ADD ESP,0xc
// 004efa7a: TEST EAX,0x80000000
// 004efa7f: JZ 0x004efa8d
//   XREF to: 004efa8d (CONDITIONAL_JUMP)
// 004efa81: TEST AL,0xff
// 004efa83: JZ 0x004efa8d
//   XREF to: 004efa8d (CONDITIONAL_JUMP)
// 004efa85: ADD ESP,0x74
// 004efa88: POP EBP
// 004efa89: POP EDI
// 004efa8a: POP ESI
// 004efa8b: POP EBX
// 004efa8c: RET
// 004efa8d: MOV ESI,dword ptr [ESP + 0x90]
//   Label: LAB_004efa8d
//   XREF to: Stack[0xc] (READ)
// 004efa94: PUSH ESI
// 004efa95: PUSH EDI
// 004efa96: PUSH EBX
// 004efa97: CALL core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004ef880
//   XREF to: 004ef880 (UNCONDITIONAL_CALL)
// 004efa9c: MOV EAX,ESI
// 004efa9e: AND EDI,0x1
// 004efaa1: AND EAX,0x1
// 004efaa4: ADD ESP,0xc
// 004efaa7: CMP EDI,EAX
// 004efaa9: JNZ 0x004efb08
//   XREF to: 004efb08 (CONDITIONAL_JUMP)
// 004efaab: MOV dword ptr [ESP + 0x4],0x3
//   XREF to: Stack[-0x80] (WRITE)
// 004efab3: MOV EAX,dword ptr [EBX + 0x4c]
// 004efab6: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 004efaba: MOV EAX,dword ptr [EBX + 0x50]
// 004efabd: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 004efac1: MOV EAX,dword ptr [EBX + 0x54]
// 004efac4: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 004efac8: MOV EAX,ESP
// 004efaca: PUSH EAX
// 004efacb: PUSH EBX
// 004efacc: CALL core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004ef970
//   XREF to: 004ef970 (UNCONDITIONAL_CALL)
// 004efad1: MOV EDX,0x3
// 004efad6: ADD ESP,0x8
// 004efad9: MOV dword ptr [ESP + 0x3c],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 004efadd: MOV EAX,dword ptr [EBX + 0x4c]
// 004efae0: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004efae4: MOV EAX,dword ptr [EBX + 0x54]
// 004efae7: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004efaeb: MOV EAX,dword ptr [EBX + 0x58]
// 004efaee: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004efaf2: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x4c] (DATA)
// 004efaf6: PUSH EAX
// 004efaf7: PUSH EBX
// 004efaf8: CALL core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004ef970
//   XREF to: 004ef970 (UNCONDITIONAL_CALL)
// 004efafd: ADD ESP,0x8
// 004efb00: ADD ESP,0x74
// 004efb03: POP EBP
// 004efb04: POP EDI
// 004efb05: POP ESI
// 004efb06: POP EBX
// 004efb07: RET
// 004efb08: MOV EDI,0x3
//   Label: LAB_004efb08
// 004efb0d: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x80] (WRITE)
// 004efb11: MOV EAX,dword ptr [EBX + 0x4c]
// 004efb14: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 004efb18: MOV EAX,dword ptr [EBX + 0x50]
// 004efb1b: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 004efb1f: MOV EAX,dword ptr [EBX + 0x58]
// 004efb22: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 004efb26: MOV EAX,ESP
// 004efb28: PUSH EAX
// 004efb29: PUSH EBX
// 004efb2a: CALL core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004ef970
//   XREF to: 004ef970 (UNCONDITIONAL_CALL)
// 004efb2f: ADD ESP,0x8
// 004efb32: MOV dword ptr [ESP + 0x3c],EDI
//   XREF to: Stack[-0x48] (WRITE)
// 004efb36: MOV EAX,dword ptr [EBX + 0x50]
// 004efb39: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004efb3d: MOV EAX,dword ptr [EBX + 0x54]
// 004efb40: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004efb44: MOV EAX,dword ptr [EBX + 0x58]
// 004efb47: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004efb4b: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x4c] (DATA)
// 004efb4f: PUSH EAX
// 004efb50: PUSH EBX
// 004efb51: CALL core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004ef970
//   XREF to: 004ef970 (UNCONDITIONAL_CALL)
// 004efb56: ADD ESP,0x8
// 004efb59: ADD ESP,0x74
// 004efb5c: POP EBP
// 004efb5d: POP EDI
// 004efb5e: POP ESI
// 004efb5f: POP EBX
// 004efb60: RET
