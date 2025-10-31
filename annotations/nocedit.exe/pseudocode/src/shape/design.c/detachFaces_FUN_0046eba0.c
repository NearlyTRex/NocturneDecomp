// Name: shape_design.c_detachFaces_FUN_0046eba0
// Address: 0046eba0
// Address Range: [[0046eba0, 0046ecf1]]
// Convention: __cdecl
// Signature: void shape_design.c_detachFaces_FUN_0046eba0(void)
// Cross-references:
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f797 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Ran_out_of_verticies_0061e07d
//   TerminatedCString s_Faces_detached_0061e093
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 g_LoadedVertices[0].vertex.z
//   undefined4 DAT_01626418
//   undefined4 DAT_0162641c
//   int g_PolygonCount
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
// Function calls:
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl shape_design_c_detachFaces_FUN_0046eba0(void)

{
  uint uVar1;
  SVertexData *pSVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_1c;
  
  iVar3 = g_VertexCount;
  iVar5 = 0;
  do {
    if (g_PolygonCount <= iVar5) {
      for (local_1c = iVar3; local_1c < g_VertexCount; local_1c = local_1c + 1) {
        iVar5 = local_1c - iVar3;
        g_LoadedVertices[iVar5].vertex.x = g_LoadedVertices[local_1c].vertex.x;
        g_LoadedVertices[iVar5].vertex.y = g_LoadedVertices[local_1c].vertex.y;
        g_LoadedVertices[iVar5].vertex.z = g_LoadedVertices[local_1c].vertex.z;
        g_LoadedVertices[iVar5].u = g_LoadedVertices[local_1c].u;
        g_LoadedVertices[iVar5].v = g_LoadedVertices[local_1c].v;
      }
      g_VertexCount = g_VertexCount - iVar3;
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("Faces detached.",0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      return;
    }
    for (local_1c = 0; iVar4 = g_VertexCount,
        local_1c < (int)g_ModelPolygonData[iVar5].vertex_indices_count; local_1c = local_1c + 1) {
      uVar1 = g_ModelPolygonData[iVar5].vertex_indices[local_1c];
      pSVar2 = g_LoadedVertices + g_VertexCount;
      g_LoadedVertices[g_VertexCount].vertex.x = g_LoadedVertices[uVar1].vertex.x;
      (pSVar2->vertex).y = g_LoadedVertices[uVar1].vertex.y;
      g_LoadedVertices[iVar4].vertex.z = g_LoadedVertices[uVar1].vertex.z;
      g_LoadedVertices[iVar4].u = g_LoadedVertices[uVar1].u;
      g_LoadedVertices[iVar4].v = g_LoadedVertices[uVar1].v;
      g_ModelPolygonData[iVar5].vertex_indices[local_1c] = g_VertexCount - iVar3;
      g_VertexCount = g_VertexCount + 1;
      if (20000 < g_VertexCount) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_drawText_FUN_00401fd0("Ran out of verticies!",0,0);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        engine_2d_c_clearInputAndWait_FUN_00403260();
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
        return;
      }
    }
    iVar5 = iVar5 + 1;
  } while( true );
}


// Assembly code:
// 0046eba0: PUSH EBX
//   Label: shape_design.c_detachFaces_FUN_0046eba0
// 0046eba1: PUSH ESI
// 0046eba2: PUSH EDI
// 0046eba3: PUSH EBP
// 0046eba4: MOV EBP,ESP
// 0046eba6: SUB ESP,0x10
// 0046ebac: MOV EAX,[0x01626408]
//   XREF to: 01626408 (READ)
// 0046ebb1: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0046ebb4: MOV dword ptr [EBP + -0x10],0x0
//   XREF to: Stack[-0x20] (WRITE)
// 0046ebbb: JMP 0x0046ebc3
//   XREF to: 0046ebc3 (UNCONDITIONAL_JUMP)
// 0046ebbd: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_0046ebbd
//   XREF to: Stack[-0x20] (READ)
// 0046ebc0: INC dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ_WRITE)
// 0046ebc3: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_0046ebc3
//   XREF to: Stack[-0x20] (READ)
// 0046ebc6: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0046ebcc: JGE 0x0046ec8d
//   XREF to: 0046ec8d (CONDITIONAL_JUMP)
// 0046ebd2: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 0046ebd9: JMP 0x0046ebe1
//   XREF to: 0046ebe1 (UNCONDITIONAL_JUMP)
// 0046ebdb: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0046ebdb
//   XREF to: Stack[-0x1c] (READ)
// 0046ebde: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0046ebe1: IMUL EDX,dword ptr [EBP + -0x10],0x184
//   Label: LAB_0046ebe1
//   XREF to: Stack[-0x20] (READ)
// 0046ebe8: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046ebeb: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0046ebf1: JGE 0x0046ec88
//   XREF to: 0046ec88 (CONDITIONAL_JUMP)
// 0046ebf7: IMUL EDX,dword ptr [EBP + -0x10],0x184
//   XREF to: Stack[-0x20] (READ)
// 0046ebfe: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046ec01: SHL EAX,0x2
// 0046ec04: ADD EAX,EDX
// 0046ec06: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 0046ec0c: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0046ec0f: IMUL ESI,dword ptr [EBP + -0x8],0x14
//   XREF to: Stack[-0x18] (READ)
// 0046ec13: IMUL EDI,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 0046ec1a: LEA EDI,[EDI + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0046ec20: LEA ESI,[ESI + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0046ec26: MOVSD ES:EDI,ESI
//   XREF to: 0162640c (DATA)
// 0046ec27: MOVSD ES:EDI,ESI
//   XREF to: 01626410 (DATA)
// 0046ec28: MOVSD ES:EDI,ESI
//   XREF to: 01626414 (DATA)
// 0046ec29: MOVSD ES:EDI,ESI
//   XREF to: 01626418 (DATA)
// 0046ec2a: MOVSD ES:EDI,ESI
//   XREF to: 0162641c (DATA)
// 0046ec2b: MOV ESI,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0046ec31: SUB ESI,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046ec34: IMUL EDX,dword ptr [EBP + -0x10],0x184
//   XREF to: Stack[-0x20] (READ)
// 0046ec3b: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046ec3e: SHL EAX,0x2
// 0046ec41: ADD EAX,EDX
// 0046ec43: MOV dword ptr [EAX + 0x16e99c8],ESI
//   XREF to: 016e99c8 (DATA)
// 0046ec49: INC dword ptr [0x01626408]
//   XREF to: 01626408 (READ_WRITE)
// 0046ec4f: CMP dword ptr [0x01626408],0x4e20
//   XREF to: 01626408 (READ)
// 0046ec59: JLE 0x0046ec83
//   XREF to: 0046ec83 (CONDITIONAL_JUMP)
// 0046ec5b: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0046ec60: PUSH 0x0
// 0046ec62: PUSH 0x0
// 0046ec64: MOV EAX,0x61e07d
//   XREF to: 0061e07d (PARAM)
// 0046ec69: PUSH EAX
//   XREF to: 0061e07d (DATA)
// 0046ec6a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046ec6f: ADD ESP,0xc
// 0046ec72: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0046ec77: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0046ec7c: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0046ec81: JMP 0x0046eceb
//   XREF to: 0046eceb (UNCONDITIONAL_JUMP)
// 0046ec83: JMP 0x0046ebdb
//   Label: LAB_0046ec83
//   XREF to: 0046ebdb (UNCONDITIONAL_JUMP)
// 0046ec88: JMP 0x0046ebbd
//   Label: LAB_0046ec88
//   XREF to: 0046ebbd (UNCONDITIONAL_JUMP)
// 0046ec8d: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0046ec8d
//   XREF to: Stack[-0x14] (READ)
// 0046ec90: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0046ec93: JMP 0x0046ec9b
//   XREF to: 0046ec9b (UNCONDITIONAL_JUMP)
// 0046ec95: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0046ec95
//   XREF to: Stack[-0x1c] (READ)
// 0046ec98: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0046ec9b: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0046ec9b
//   XREF to: Stack[-0x1c] (READ)
// 0046ec9e: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0046eca4: JGE 0x0046ecc6
//   XREF to: 0046ecc6 (CONDITIONAL_JUMP)
// 0046eca6: IMUL ESI,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 0046ecaa: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046ecad: SUB EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046ecb0: IMUL EAX,EAX,0x14
// 0046ecb3: LEA EDI,[EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0046ecb9: LEA ESI,[ESI + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0046ecbf: MOVSD ES:EDI,ESI
//   XREF to: 0162640c (WRITE)
// 0046ecc0: MOVSD ES:EDI,ESI
//   XREF to: 01626410 (WRITE)
// 0046ecc1: MOVSD ES:EDI,ESI
//   XREF to: 01626414 (WRITE)
// 0046ecc2: MOVSD ES:EDI,ESI
//   XREF to: 01626418 (WRITE)
// 0046ecc3: MOVSD ES:EDI,ESI
//   XREF to: 0162641c (WRITE)
// 0046ecc4: JMP 0x0046ec95
//   XREF to: 0046ec95 (UNCONDITIONAL_JUMP)
// 0046ecc6: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0046ecc6
//   XREF to: Stack[-0x14] (READ)
// 0046ecc9: SUB dword ptr [0x01626408],EAX
//   XREF to: 01626408 (READ_WRITE)
// 0046eccf: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0046ecd4: PUSH 0x0
// 0046ecd6: PUSH 0x0
// 0046ecd8: MOV EAX,0x61e093
//   XREF to: 0061e093 (PARAM)
// 0046ecdd: PUSH EAX
//   XREF to: 0061e093 (DATA)
// 0046ecde: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046ece3: ADD ESP,0xc
// 0046ece6: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0046eceb: MOV ESP,EBP
//   Label: LAB_0046eceb
// 0046eced: POP EBP
// 0046ecee: POP EDI
// 0046ecef: POP ESI
// 0046ecf0: POP EBX
// 0046ecf1: RET
