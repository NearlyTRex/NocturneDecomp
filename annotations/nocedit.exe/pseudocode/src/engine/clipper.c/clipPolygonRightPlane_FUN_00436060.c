// Name: engine_clipper.c_clipPolygonRightPlane_FUN_00436060
// Address: 00436060
// Address Range: [[00436060, 0043618b]]
// Convention: __cdecl
// Signature: int engine_clipper.c_clipPolygonRightPlane_FUN_00436060(SRenderVertex * * input_vertices, SRenderVertex * * output_vertices, int vertex_count)
// Globals:
//   void* switchdataD_00436048 = 004360b5
//   void* PTR_caseD_1_0043604c = 004360e0
//   void* PTR_caseD_3_00436054 = 004360ba
//   TerminatedCString s_engine_clipper_c_00618103
//   TerminatedCString s_Ran_out_of_clipped_verts_00618117
//   SRenderVertex[12] g_ClipperTempBuffer
//   int g_ClipperTempCount
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_clipper.c_interpolateVertexRightClip_FUN_00435b00

#include "nocturne.h"

int __cdecl
engine_clipper_c_clipPolygonRightPlane_FUN_00436060
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
      bVar2 = (v1->projected_vertex).transformed_x <= -(v1->projected_vertex).transformed_z;
      if ((v2->projected_vertex).transformed_x <= -(v2->projected_vertex).transformed_z) {
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
        engine_clipper_c_interpolateVertexRightClip_FUN_00435b00(v2,v1,pSVar3);
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
        engine_clipper_c_interpolateVertexRightClip_FUN_00435b00(v1,v2,pSVar3);
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
// 00436060: PUSH EBX
//   Label: engine_clipper.c_clipPolygonRightPlane_FUN_00436060
// 00436061: PUSH ESI
// 00436062: PUSH EDI
// 00436063: PUSH EBP
// 00436064: SUB ESP,0x8
// 00436067: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0043606b: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0043606f: XOR EBX,EBX
// 00436071: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00436075: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x18] (DATA)
// 00436078: MOV ESI,dword ptr [EDX + EAX*0x4 + -0x4]
// 0043607c: TEST EAX,EAX
// 0043607e: JLE 0x004360d6
//   XREF to: 004360d6 (CONDITIONAL_JUMP)
// 00436080: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00436084: MOV EDI,dword ptr [ESP + 0x4]
//   Label: LAB_00436084
//   XREF to: Stack[-0x14] (READ)
// 00436088: MOV EDX,dword ptr [ESI + 0x8]
// 0043608b: MOV ECX,dword ptr [ESI]
// 0043608d: XOR EAX,EAX
// 0043608f: NEG EDX
// 00436091: MOV EDI,dword ptr [EDI]
// 00436093: CMP EDX,ECX
// 00436095: JL 0x0043609c
//   XREF to: 0043609c (CONDITIONAL_JUMP)
// 00436097: MOV EAX,0x1
// 0043609c: MOV EDX,dword ptr [EDI + 0x8]
//   Label: LAB_0043609c
// 0043609f: MOV ECX,dword ptr [EDI]
// 004360a1: NEG EDX
// 004360a3: CMP EDX,ECX
// 004360a5: JL 0x004360a9
//   XREF to: 004360a9 (CONDITIONAL_JUMP)
// 004360a7: OR AL,0x2
// 004360a9: CMP EAX,0x3
//   Label: LAB_004360a9
// 004360ac: JA 0x004360ba
//   XREF to: 004360ba (CONDITIONAL_JUMP)
// 004360ae: JMP dword ptr [EAX*0x4 + 0x436048]
//   Label: switchD
//   XREF to: 004360b5 (COMPUTED_JUMP)
//   XREF to: 004360e0 (COMPUTED_JUMP)
//   XREF to: 00436131 (COMPUTED_JUMP)
//   XREF to: 004360ba (COMPUTED_JUMP)
//   XREF to: 00436054 (READ)
//   XREF to: 0043604c (READ)
//   XREF to: 00436048 (DATA)
// 004360b5: INC EBX
//   Label: caseD_0
// 004360b6: MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI
// 004360ba: MOV EAX,dword ptr [ESP + 0x4]
//   Label: caseD_3
//   XREF to: Stack[-0x14] (READ)
// 004360be: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004360c1: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 004360c5: MOV ESI,EDI
// 004360c7: ADD EAX,0x4
// 004360ca: INC EDX
// 004360cb: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004360cf: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x18] (DATA)
// 004360d2: CMP EDX,ECX
// 004360d4: JL 0x00436084
//   XREF to: 00436084 (CONDITIONAL_JUMP)
// 004360d6: MOV EAX,EBX
//   Label: LAB_004360d6
// 004360d8: ADD ESP,0x8
// 004360db: POP EBP
// 004360dc: POP EDI
// 004360dd: POP ESI
// 004360de: POP EBX
// 004360df: RET
// 004360e0: CMP dword ptr [0x00825cec],0xc
//   Label: caseD_1
//   XREF to: 00825cec (READ)
// 004360e7: JL 0x0043610b
//   XREF to: 0043610b (CONDITIONAL_JUMP)
// 004360e9: MOV ECX,0x618103
//   XREF to: 00618103 (DATA)
// 004360ee: MOV EAX,0x5e
// 004360f3: PUSH 0x618117
//   XREF to: 00618117 (DATA)
// 004360f8: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004360fe: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00436103: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00436108: ADD ESP,0x4
// 0043610b: MOV EAX,[0x00825cec]
//   Label: LAB_0043610b
//   XREF to: 00825cec (READ)
// 00436110: IMUL EDX,EAX,0x30
// 00436113: ADD EDX,0x825aac
//   XREF to: 00825aac (DATA)
// 00436119: PUSH EDX
// 0043611a: PUSH ESI
// 0043611b: INC EBX
// 0043611c: INC EAX
// 0043611d: PUSH EDI
// 0043611e: MOV [0x00825cec],EAX
//   XREF to: 00825cec (WRITE)
// 00436123: MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX
// 00436127: CALL engine_clipper.c_interpolateVertexRightClip_FUN_00435b00
//   XREF to: 00435b00 (UNCONDITIONAL_CALL)
// 0043612c: ADD ESP,0xc
// 0043612f: JMP 0x004360ba
//   XREF to: 004360ba (UNCONDITIONAL_JUMP)
// 00436131: INC EBX
//   Label: caseD_2
// 00436132: MOV EAX,[0x00825cec]
//   XREF to: 00825cec (READ)
// 00436137: MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI
// 0043613b: CMP EAX,0xc
// 0043613e: JL 0x00436163
//   XREF to: 00436163 (CONDITIONAL_JUMP)
// 00436140: MOV EDX,0x618103
//   XREF to: 00618103 (DATA)
// 00436145: MOV ECX,0x5e
// 0043614a: PUSH 0x618117
//   XREF to: 00618117 (DATA)
// 0043614f: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00436155: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0043615b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00436160: ADD ESP,0x4
// 00436163: MOV EAX,[0x00825cec]
//   Label: LAB_00436163
//   XREF to: 00825cec (READ)
// 00436168: IMUL EDX,EAX,0x30
// 0043616b: ADD EDX,0x825aac
//   XREF to: 00825aac (DATA)
// 00436171: PUSH EDX
// 00436172: PUSH EDI
// 00436173: INC EBX
// 00436174: INC EAX
// 00436175: PUSH ESI
// 00436176: MOV [0x00825cec],EAX
//   XREF to: 00825cec (WRITE)
// 0043617b: MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX
// 0043617f: CALL engine_clipper.c_interpolateVertexRightClip_FUN_00435b00
//   XREF to: 00435b00 (UNCONDITIONAL_CALL)
// 00436184: ADD ESP,0xc
// 00436187: JMP 0x004360ba
//   XREF to: 004360ba (UNCONDITIONAL_JUMP)
