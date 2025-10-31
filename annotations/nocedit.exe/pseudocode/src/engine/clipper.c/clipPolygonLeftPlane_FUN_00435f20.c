// Name: engine_clipper.c_clipPolygonLeftPlane_FUN_00435f20
// Address: 00435f20
// Address Range: [[00435f20, 00436045]]
// Convention: __cdecl
// Signature: int engine_clipper.c_clipPolygonLeftPlane_FUN_00435f20(SRenderVertex * * input_vertices, SRenderVertex * * output_vertices, int vertex_count)
// Globals:
//   void* switchdataD_00435f04 = 00435f6f
//   void* PTR_caseD_1_00435f08 = 00435f9a
//   void* PTR_caseD_3_00435f10 = 00435f74
//   TerminatedCString s_engine_clipper_c_00618103
//   TerminatedCString s_Ran_out_of_clipped_verts_00618117
//   SRenderVertex[12] g_ClipperTempBuffer
//   int g_ClipperTempCount
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00

#include "nocturne.h"

int __cdecl
engine_clipper_c_clipPolygonLeftPlane_FUN_00435f20
          (SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count)

{
  SRenderVertex *v2;
  int iVar1;
  byte bVar2;
  SRenderVertex *pSVar3;
  int iVar4;
  int iVar5;
  SRenderVertex *v1;
  int local_18;
  SRenderVertex **local_14;
  
  iVar4 = 0;
  local_18 = 0;
  if (0 < vertex_count) {
    local_14 = input_vertices;
    iVar5 = iVar4;
    v1 = input_vertices[vertex_count + -1];
    do {
      iVar1 = g_ClipperTempCount;
      v2 = *local_14;
      bVar2 = (v1->projected_vertex).transformed_z <= (v1->projected_vertex).transformed_x;
      if ((v2->projected_vertex).transformed_z <= (v2->projected_vertex).transformed_x) {
        bVar2 = bVar2 | 2;
      }
      iVar4 = iVar5;
      switch(bVar2) {
      case 0:
        iVar4 = iVar5 + 1;
        output_vertices[iVar5] = v1;
        break;
      case 1:
        if (0xb < g_ClipperTempCount) {
          g_CurrentFilename = "..\\engine\\clipper.c";
          g_CurrentLineNumber = 0x5e;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
        }
        pSVar3 = g_ClipperTempBuffer + g_ClipperTempCount;
        iVar4 = iVar5 + 1;
        g_ClipperTempCount = g_ClipperTempCount + 1;
        output_vertices[iVar5] = pSVar3;
        engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00(v2,v1,pSVar3);
        break;
      case 2:
        output_vertices[iVar5] = v1;
        if (0xb < iVar1) {
          g_CurrentFilename = "..\\engine\\clipper.c";
          g_CurrentLineNumber = 0x5e;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
        }
        pSVar3 = g_ClipperTempBuffer + g_ClipperTempCount;
        iVar4 = iVar5 + 2;
        g_ClipperTempCount = g_ClipperTempCount + 1;
        output_vertices[iVar5 + 1] = pSVar3;
        engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00(v1,v2,pSVar3);
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + 1;
      iVar5 = iVar4;
      v1 = v2;
    } while (local_18 < vertex_count);
  }
  return iVar4;
}


// Assembly code:
// 00435f20: PUSH EBX
//   Label: engine_clipper.c_clipPolygonLeftPlane_FUN_00435f20
// 00435f21: PUSH ESI
// 00435f22: PUSH EDI
// 00435f23: PUSH EBP
// 00435f24: SUB ESP,0x8
// 00435f27: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00435f2b: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00435f2f: XOR EBX,EBX
// 00435f31: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00435f35: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x18] (DATA)
// 00435f38: MOV ESI,dword ptr [EDX + EAX*0x4 + -0x4]
// 00435f3c: TEST EAX,EAX
// 00435f3e: JLE 0x00435f90
//   XREF to: 00435f90 (CONDITIONAL_JUMP)
// 00435f40: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00435f44: MOV EDI,dword ptr [ESP + 0x4]
//   Label: LAB_00435f44
//   XREF to: Stack[-0x14] (READ)
// 00435f48: MOV EDX,dword ptr [ESI]
// 00435f4a: MOV ECX,dword ptr [ESI + 0x8]
// 00435f4d: XOR EAX,EAX
// 00435f4f: MOV EDI,dword ptr [EDI]
// 00435f51: CMP EDX,ECX
// 00435f53: JL 0x00435f5a
//   XREF to: 00435f5a (CONDITIONAL_JUMP)
// 00435f55: MOV EAX,0x1
// 00435f5a: MOV ECX,dword ptr [EDI + 0x8]
//   Label: LAB_00435f5a
// 00435f5d: CMP ECX,dword ptr [EDI]
// 00435f5f: JG 0x00435f63
//   XREF to: 00435f63 (CONDITIONAL_JUMP)
// 00435f61: OR AL,0x2
// 00435f63: CMP EAX,0x3
//   Label: LAB_00435f63
// 00435f66: JA 0x00435f74
//   XREF to: 00435f74 (CONDITIONAL_JUMP)
// 00435f68: JMP dword ptr [EAX*0x4 + 0x435f04]
//   Label: switchD
//   XREF to: 00435f6f (COMPUTED_JUMP)
//   XREF to: 00435f9a (COMPUTED_JUMP)
//   XREF to: 00435feb (COMPUTED_JUMP)
//   XREF to: 00435f74 (COMPUTED_JUMP)
//   XREF to: 00435f10 (READ)
//   XREF to: 00435f08 (READ)
//   XREF to: 00435f04 (DATA)
// 00435f6f: INC EBX
//   Label: caseD_0
// 00435f70: MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI
// 00435f74: MOV EAX,dword ptr [ESP + 0x4]
//   Label: caseD_3
//   XREF to: Stack[-0x14] (READ)
// 00435f78: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00435f7b: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00435f7f: MOV ESI,EDI
// 00435f81: ADD EAX,0x4
// 00435f84: INC EDX
// 00435f85: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00435f89: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x18] (DATA)
// 00435f8c: CMP EDX,ECX
// 00435f8e: JL 0x00435f44
//   XREF to: 00435f44 (CONDITIONAL_JUMP)
// 00435f90: MOV EAX,EBX
//   Label: LAB_00435f90
// 00435f92: ADD ESP,0x8
// 00435f95: POP EBP
// 00435f96: POP EDI
// 00435f97: POP ESI
// 00435f98: POP EBX
// 00435f99: RET
// 00435f9a: CMP dword ptr [0x00825cec],0xc
//   Label: caseD_1
//   XREF to: 00825cec (READ)
// 00435fa1: JL 0x00435fc5
//   XREF to: 00435fc5 (CONDITIONAL_JUMP)
// 00435fa3: MOV ECX,0x618103
//   XREF to: 00618103 (DATA)
// 00435fa8: MOV EAX,0x5e
// 00435fad: PUSH 0x618117
//   XREF to: 00618117 (DATA)
// 00435fb2: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00435fb8: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00435fbd: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00435fc2: ADD ESP,0x4
// 00435fc5: MOV EAX,[0x00825cec]
//   Label: LAB_00435fc5
//   XREF to: 00825cec (READ)
// 00435fca: IMUL EDX,EAX,0x30
// 00435fcd: ADD EDX,0x825aac
//   XREF to: 00825aac (DATA)
// 00435fd3: PUSH EDX
// 00435fd4: PUSH ESI
// 00435fd5: INC EBX
// 00435fd6: INC EAX
// 00435fd7: PUSH EDI
// 00435fd8: MOV [0x00825cec],EAX
//   XREF to: 00825cec (WRITE)
// 00435fdd: MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX
// 00435fe1: CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00
//   XREF to: 00435a00 (UNCONDITIONAL_CALL)
// 00435fe6: ADD ESP,0xc
// 00435fe9: JMP 0x00435f74
//   XREF to: 00435f74 (UNCONDITIONAL_JUMP)
// 00435feb: INC EBX
//   Label: caseD_2
// 00435fec: MOV EAX,[0x00825cec]
//   XREF to: 00825cec (READ)
// 00435ff1: MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI
// 00435ff5: CMP EAX,0xc
// 00435ff8: JL 0x0043601d
//   XREF to: 0043601d (CONDITIONAL_JUMP)
// 00435ffa: MOV EDX,0x618103
//   XREF to: 00618103 (DATA)
// 00435fff: MOV ECX,0x5e
// 00436004: PUSH 0x618117
//   XREF to: 00618117 (DATA)
// 00436009: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0043600f: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00436015: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0043601a: ADD ESP,0x4
// 0043601d: MOV EAX,[0x00825cec]
//   Label: LAB_0043601d
//   XREF to: 00825cec (READ)
// 00436022: IMUL EDX,EAX,0x30
// 00436025: ADD EDX,0x825aac
//   XREF to: 00825aac (DATA)
// 0043602b: PUSH EDX
// 0043602c: PUSH EDI
// 0043602d: INC EBX
// 0043602e: INC EAX
// 0043602f: PUSH ESI
// 00436030: MOV [0x00825cec],EAX
//   XREF to: 00825cec (WRITE)
// 00436035: MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX
// 00436039: CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00
//   XREF to: 00435a00 (UNCONDITIONAL_CALL)
// 0043603e: ADD ESP,0xc
// 00436041: JMP 0x00435f74
//   XREF to: 00435f74 (UNCONDITIONAL_JUMP)
