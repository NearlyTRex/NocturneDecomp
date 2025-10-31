// Name: engine_clipper.c_clipPolygonBottomPlane_FUN_004361a0
// Address: 004361a0
// Address Range: [[004361a0, 004362c7]]
// Convention: __cdecl
// Signature: int engine_clipper.c_clipPolygonBottomPlane_FUN_004361a0(SRenderVertex * * input_vertices, SRenderVertex * * output_vertices, int vertex_count)
// Globals:
//   void* switchdataD_0043618c = 004361f1
//   void* PTR_caseD_1_00436190 = 0043621c
//   void* PTR_caseD_3_00436198 = 004361f6
//   TerminatedCString s_engine_clipper_c_00618103
//   TerminatedCString s_Ran_out_of_clipped_verts_00618117
//   SRenderVertex[12] g_ClipperTempBuffer
//   int g_ClipperTempCount
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00

#include "nocturne.h"

int __cdecl
engine_clipper_c_clipPolygonBottomPlane_FUN_004361a0
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
      bVar2 = (v1->projected_vertex).transformed_z <= (v1->projected_vertex).transformed_y;
      if ((v2->projected_vertex).transformed_z <= (v2->projected_vertex).transformed_y) {
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
        engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00(v2,v1,pSVar3);
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
        engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00(v1,v2,pSVar3);
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
// 004361a0: PUSH EBX
//   Label: engine_clipper.c_clipPolygonBottomPlane_FUN_004361a0
// 004361a1: PUSH ESI
// 004361a2: PUSH EDI
// 004361a3: PUSH EBP
// 004361a4: SUB ESP,0x8
// 004361a7: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 004361ab: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 004361af: XOR EBX,EBX
// 004361b1: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 004361b5: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x18] (DATA)
// 004361b8: MOV ESI,dword ptr [EDX + EAX*0x4 + -0x4]
// 004361bc: TEST EAX,EAX
// 004361be: JLE 0x00436212
//   XREF to: 00436212 (CONDITIONAL_JUMP)
// 004361c0: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004361c4: MOV EDI,dword ptr [ESP + 0x4]
//   Label: LAB_004361c4
//   XREF to: Stack[-0x14] (READ)
// 004361c8: MOV EDX,dword ptr [ESI + 0x4]
// 004361cb: MOV ECX,dword ptr [ESI + 0x8]
// 004361ce: XOR EAX,EAX
// 004361d0: MOV EDI,dword ptr [EDI]
// 004361d2: CMP EDX,ECX
// 004361d4: JL 0x004361db
//   XREF to: 004361db (CONDITIONAL_JUMP)
// 004361d6: MOV EAX,0x1
// 004361db: MOV ECX,dword ptr [EDI + 0x8]
//   Label: LAB_004361db
// 004361de: CMP ECX,dword ptr [EDI + 0x4]
// 004361e1: JG 0x004361e5
//   XREF to: 004361e5 (CONDITIONAL_JUMP)
// 004361e3: OR AL,0x2
// 004361e5: CMP EAX,0x3
//   Label: LAB_004361e5
// 004361e8: JA 0x004361f6
//   XREF to: 004361f6 (CONDITIONAL_JUMP)
// 004361ea: JMP dword ptr [EAX*0x4 + 0x43618c]
//   Label: switchD
//   XREF to: 004361f1 (COMPUTED_JUMP)
//   XREF to: 0043621c (COMPUTED_JUMP)
//   XREF to: 0043626d (COMPUTED_JUMP)
//   XREF to: 004361f6 (COMPUTED_JUMP)
//   XREF to: 00436198 (READ)
//   XREF to: 00436190 (READ)
//   XREF to: 0043618c (DATA)
// 004361f1: INC EBX
//   Label: caseD_0
// 004361f2: MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI
// 004361f6: MOV EAX,dword ptr [ESP + 0x4]
//   Label: caseD_3
//   XREF to: Stack[-0x14] (READ)
// 004361fa: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004361fd: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00436201: MOV ESI,EDI
// 00436203: ADD EAX,0x4
// 00436206: INC EDX
// 00436207: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0043620b: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x18] (DATA)
// 0043620e: CMP EDX,ECX
// 00436210: JL 0x004361c4
//   XREF to: 004361c4 (CONDITIONAL_JUMP)
// 00436212: MOV EAX,EBX
//   Label: LAB_00436212
// 00436214: ADD ESP,0x8
// 00436217: POP EBP
// 00436218: POP EDI
// 00436219: POP ESI
// 0043621a: POP EBX
// 0043621b: RET
// 0043621c: CMP dword ptr [0x00825cec],0xc
//   Label: caseD_1
//   XREF to: 00825cec (READ)
// 00436223: JL 0x00436247
//   XREF to: 00436247 (CONDITIONAL_JUMP)
// 00436225: MOV ECX,0x618103
//   XREF to: 00618103 (DATA)
// 0043622a: MOV EAX,0x5e
// 0043622f: PUSH 0x618117
//   XREF to: 00618117 (DATA)
// 00436234: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0043623a: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0043623f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00436244: ADD ESP,0x4
// 00436247: MOV EAX,[0x00825cec]
//   Label: LAB_00436247
//   XREF to: 00825cec (READ)
// 0043624c: IMUL EDX,EAX,0x30
// 0043624f: ADD EDX,0x825aac
//   XREF to: 00825aac (DATA)
// 00436255: PUSH EDX
// 00436256: PUSH ESI
// 00436257: INC EBX
// 00436258: INC EAX
// 00436259: PUSH EDI
// 0043625a: MOV [0x00825cec],EAX
//   XREF to: 00825cec (WRITE)
// 0043625f: MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX
// 00436263: CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00
//   XREF to: 00435c00 (UNCONDITIONAL_CALL)
// 00436268: ADD ESP,0xc
// 0043626b: JMP 0x004361f6
//   XREF to: 004361f6 (UNCONDITIONAL_JUMP)
// 0043626d: INC EBX
//   Label: caseD_2
// 0043626e: MOV EAX,[0x00825cec]
//   XREF to: 00825cec (READ)
// 00436273: MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI
// 00436277: CMP EAX,0xc
// 0043627a: JL 0x0043629f
//   XREF to: 0043629f (CONDITIONAL_JUMP)
// 0043627c: MOV EDX,0x618103
//   XREF to: 00618103 (DATA)
// 00436281: MOV ECX,0x5e
// 00436286: PUSH 0x618117
//   XREF to: 00618117 (DATA)
// 0043628b: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00436291: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00436297: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0043629c: ADD ESP,0x4
// 0043629f: MOV EAX,[0x00825cec]
//   Label: LAB_0043629f
//   XREF to: 00825cec (READ)
// 004362a4: IMUL EDX,EAX,0x30
// 004362a7: ADD EDX,0x825aac
//   XREF to: 00825aac (DATA)
// 004362ad: PUSH EDX
// 004362ae: PUSH EDI
// 004362af: INC EBX
// 004362b0: INC EAX
// 004362b1: PUSH ESI
// 004362b2: MOV [0x00825cec],EAX
//   XREF to: 00825cec (WRITE)
// 004362b7: MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX
// 004362bb: CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00
//   XREF to: 00435c00 (UNCONDITIONAL_CALL)
// 004362c0: ADD ESP,0xc
// 004362c3: JMP 0x004361f6
//   XREF to: 004361f6 (UNCONDITIONAL_JUMP)
