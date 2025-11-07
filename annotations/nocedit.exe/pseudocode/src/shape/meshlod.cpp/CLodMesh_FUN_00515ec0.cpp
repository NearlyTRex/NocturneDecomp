// Name: shape_meshlod.cpp_CLodMesh_FUN_00515ec0
// Address: 00515ec0
// Address Range: [[00515ec0, 00515ffe]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodMesh_FUN_00515ec0(CLodMesh * this_ptr)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_FUN_00517630 (00517630) at 00517655 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_FUN_00518490 (00518490) at 005184ac [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0 (00515ba0) at 00515c2d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_meshlod_cpp_006374e0
//   TerminatedCString s_shape_meshlod_cpp_006374f5
//   TerminatedCString s_Out_of_memory_0063750a
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   shape_meshlod.cpp_addAdjacentEdgeToVertex_FUN_00515d90

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_FUN_00515ec0(CLodMesh *this_ptr)

{
  SLodEdge *pSVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  iVar3 = in_stack_00000008;
  if (in_stack_0000000c < in_stack_00000008) {
    iVar3 = in_stack_0000000c;
    in_stack_0000000c = in_stack_00000008;
  }
  iVar2 = 0;
  if (0 < this_ptr->edge_count) {
    pSVar1 = this_ptr->edges_ptr;
    do {
      if (((pSVar1->deletion_flag == 0) && (iVar3 == pSVar1->vertex_idx_1)) &&
         (in_stack_0000000c == pSVar1->vertex_idx_2)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < this_ptr->edge_count);
  }
  if (in_stack_00000010 == 0) {
    return -1;
  }
  pSVar1 = (SLodEdge *)
           shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->edges_ptr,(this_ptr->edge_count + 1) * 0xf0,
                      "..\\shape\\meshlod.cpp",0x325);
  this_ptr->edges_ptr = pSVar1;
  if (pSVar1 == (SLodEdge *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x326;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
  }
  this_ptr->edges_ptr[this_ptr->edge_count].vertex_idx_1 = iVar3;
  this_ptr->edges_ptr[this_ptr->edge_count].vertex_idx_2 = in_stack_0000000c;
  this_ptr->edges_ptr[this_ptr->edge_count].deletion_flag = 0;
  this_ptr->edges_ptr[this_ptr->edge_count].adjacent_tri_count = 0;
  shape_meshlod_cpp_addAdjacentEdgeToVertex_FUN_00515d90
            (this_ptr->vertex_data + iVar3,this_ptr->edge_count);
  shape_meshlod_cpp_addAdjacentEdgeToVertex_FUN_00515d90
            (this_ptr->vertex_data + in_stack_0000000c,this_ptr->edge_count);
  iVar3 = this_ptr->edge_count;
  this_ptr->edge_count = iVar3 + 1;
  return iVar3;
}


// Assembly code:
// 00515ec0: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_FUN_00515ec0
// 00515ec1: PUSH ESI
// 00515ec2: PUSH EDI
// 00515ec3: PUSH EBP
// 00515ec4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00515ec8: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00515ecc: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00515ed0: CMP ESI,EDI
// 00515ed2: JLE 0x00515eda
//   XREF to: 00515eda (CONDITIONAL_JUMP)
// 00515ed4: MOV EAX,ESI
// 00515ed6: MOV ESI,EDI
// 00515ed8: MOV EDI,EAX
// 00515eda: MOV ECX,dword ptr [EBX + 0x44]
//   Label: LAB_00515eda
// 00515edd: XOR EDX,EDX
// 00515edf: TEST ECX,ECX
// 00515ee1: JLE 0x00515ef9
//   XREF to: 00515ef9 (CONDITIONAL_JUMP)
// 00515ee3: MOV EAX,dword ptr [EBX + 0x48]
// 00515ee6: CMP dword ptr [EAX + 0x14],0x0
//   Label: LAB_00515ee6
// 00515eea: JZ 0x00515f0a
//   XREF to: 00515f0a (CONDITIONAL_JUMP)
// 00515eec: INC EDX
//   Label: LAB_00515eec
// 00515eed: MOV EBP,dword ptr [EBX + 0x44]
// 00515ef0: ADD EAX,0xf0
// 00515ef5: CMP EDX,EBP
// 00515ef7: JL 0x00515ee6
//   XREF to: 00515ee6 (CONDITIONAL_JUMP)
// 00515ef9: CMP dword ptr [ESP + 0x20],0x0
//   Label: LAB_00515ef9
//   XREF to: Stack[0x10] (READ)
// 00515efe: JNZ 0x00515f1a
//   XREF to: 00515f1a (CONDITIONAL_JUMP)
// 00515f00: MOV EAX,0xffffffff
// 00515f05: POP EBP
// 00515f06: POP EDI
// 00515f07: POP ESI
// 00515f08: POP EBX
// 00515f09: RET
// 00515f0a: CMP ESI,dword ptr [EAX]
//   Label: LAB_00515f0a
// 00515f0c: JNZ 0x00515eec
//   XREF to: 00515eec (CONDITIONAL_JUMP)
// 00515f0e: CMP EDI,dword ptr [EAX + 0x4]
// 00515f11: JNZ 0x00515eec
//   XREF to: 00515eec (CONDITIONAL_JUMP)
// 00515f13: MOV EAX,EDX
// 00515f15: POP EBP
// 00515f16: POP EDI
// 00515f17: POP ESI
// 00515f18: POP EBX
// 00515f19: RET
// 00515f1a: MOV EAX,dword ptr [EBX + 0x44]
//   Label: LAB_00515f1a
// 00515f1d: INC EAX
// 00515f1e: SHL EAX,0x4
// 00515f21: PUSH 0x325
// 00515f26: MOV EDX,EAX
// 00515f28: SHL EAX,0x4
// 00515f2b: PUSH 0x6374e0
//   XREF to: 006374e0 (DATA)
// 00515f30: SUB EAX,EDX
// 00515f32: PUSH EAX
// 00515f33: MOV EDX,dword ptr [EBX + 0x48]
// 00515f36: PUSH EDX
// 00515f37: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 00515f3c: ADD ESP,0x10
// 00515f3f: MOV dword ptr [EBX + 0x48],EAX
// 00515f42: TEST EAX,EAX
// 00515f44: JNZ 0x00515f68
//   XREF to: 00515f68 (CONDITIONAL_JUMP)
// 00515f46: MOV EBP,0x6374f5
//   XREF to: 006374f5 (DATA)
// 00515f4b: MOV EAX,0x326
// 00515f50: PUSH 0x63750a
//   XREF to: 0063750a (DATA)
// 00515f55: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00515f5b: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00515f60: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00515f65: ADD ESP,0x4
// 00515f68: MOV EAX,dword ptr [EBX + 0x44]
//   Label: LAB_00515f68
// 00515f6b: SHL EAX,0x4
// 00515f6e: MOV EDX,EAX
// 00515f70: SHL EAX,0x4
// 00515f73: SUB EAX,EDX
// 00515f75: MOV EDX,dword ptr [EBX + 0x48]
// 00515f78: MOV dword ptr [EDX + EAX*0x1],ESI
// 00515f7b: IMUL ESI,ESI,0x4c4
// 00515f81: MOV EAX,dword ptr [EBX + 0x44]
// 00515f84: SHL EAX,0x4
// 00515f87: MOV EDX,EAX
// 00515f89: SHL EAX,0x4
// 00515f8c: SUB EAX,EDX
// 00515f8e: MOV EDX,dword ptr [EBX + 0x48]
// 00515f91: MOV dword ptr [EDX + EAX*0x1 + 0x4],EDI
// 00515f95: IMUL EDI,EDI,0x4c4
// 00515f9b: MOV EAX,dword ptr [EBX + 0x44]
// 00515f9e: SHL EAX,0x4
// 00515fa1: MOV EDX,EAX
// 00515fa3: SHL EAX,0x4
// 00515fa6: SUB EAX,EDX
// 00515fa8: MOV EDX,EAX
// 00515faa: MOV EAX,dword ptr [EBX + 0x48]
// 00515fad: MOV dword ptr [EDX + EAX*0x1 + 0x14],0x0
// 00515fb5: MOV EAX,dword ptr [EBX + 0x44]
// 00515fb8: SHL EAX,0x4
// 00515fbb: MOV EDX,EAX
// 00515fbd: SHL EAX,0x4
// 00515fc0: SUB EAX,EDX
// 00515fc2: MOV EDX,dword ptr [EBX + 0x48]
// 00515fc5: MOV dword ptr [EDX + EAX*0x1 + 0x24],0x0
// 00515fcd: MOV EDX,dword ptr [EBX + 0x44]
// 00515fd0: MOV EAX,dword ptr [EBX + 0x4]
// 00515fd3: PUSH EDX
// 00515fd4: ADD EAX,ESI
// 00515fd6: PUSH EAX
// 00515fd7: CALL shape_meshlod.cpp_addAdjacentEdgeToVertex_FUN_00515d90
//   XREF to: 00515d90 (UNCONDITIONAL_CALL)
// 00515fdc: ADD ESP,0x8
// 00515fdf: MOV ECX,dword ptr [EBX + 0x44]
// 00515fe2: MOV EAX,dword ptr [EBX + 0x4]
// 00515fe5: PUSH ECX
// 00515fe6: ADD EAX,EDI
// 00515fe8: PUSH EAX
// 00515fe9: CALL shape_meshlod.cpp_addAdjacentEdgeToVertex_FUN_00515d90
//   XREF to: 00515d90 (UNCONDITIONAL_CALL)
// 00515fee: MOV EAX,dword ptr [EBX + 0x44]
// 00515ff1: LEA EDX,[EAX + 0x1]
// 00515ff4: ADD ESP,0x8
// 00515ff7: MOV dword ptr [EBX + 0x44],EDX
// 00515ffa: POP EBP
// 00515ffb: POP EDI
// 00515ffc: POP ESI
// 00515ffd: POP EBX
// 00515ffe: RET
