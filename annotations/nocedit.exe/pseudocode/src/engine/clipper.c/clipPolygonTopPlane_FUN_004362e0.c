// Name: engine_clipper.c_clipPolygonTopPlane_FUN_004362e0
// Address: 004362e0
// Address Range: [[004362e0, 0043640d]]
// Convention: __cdecl
// Signature: int engine_clipper.c_clipPolygonTopPlane_FUN_004362e0(SRenderVertex * * input_vertices, SRenderVertex * * output_vertices, int vertex_count)
// Globals:
//   void* switchdataD_004362c8 = 00436337
//   void* PTR_caseD_1_004362cc = 00436362
//   void* PTR_caseD_3_004362d4 = 0043633c
//   TerminatedCString s_engine_clipper_c_00618103
//   TerminatedCString s_Ran_out_of_clipped_verts_00618117
//   SRenderVertex[12] g_ClipperTempBuffer
//   int g_ClipperTempCount
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_clipper.c_interpolateVertexTopClip_FUN_00435d00

#include "nocturne.h"

int __cdecl
engine_clipper_c_clipPolygonTopPlane_FUN_004362e0
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
      bVar2 = (v1->projected_vertex).transformed_y <= -(v1->projected_vertex).transformed_z;
      if ((v2->projected_vertex).transformed_y <= -(v2->projected_vertex).transformed_z) {
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
        engine_clipper_c_interpolateVertexTopClip_FUN_00435d00(v2,v1,pSVar3);
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
        engine_clipper_c_interpolateVertexTopClip_FUN_00435d00(v1,v2,pSVar3);
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
// 004362e0: PUSH EBX
//   Label: engine_clipper.c_clipPolygonTopPlane_FUN_004362e0
// 004362e1: PUSH ESI
// 004362e2: PUSH EDI
// 004362e3: PUSH EBP
// 004362e4: SUB ESP,0x8
// 004362e7: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 004362eb: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 004362ef: XOR EBX,EBX
// 004362f1: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 004362f5: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x18] (DATA)
// 004362f8: MOV ESI,dword ptr [EDX + EAX*0x4 + -0x4]
// 004362fc: TEST EAX,EAX
// 004362fe: JLE 0x00436358
//   XREF to: 00436358 (CONDITIONAL_JUMP)
// 00436300: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00436304: MOV EDI,dword ptr [ESP + 0x4]
//   Label: LAB_00436304
//   XREF to: Stack[-0x14] (READ)
// 00436308: MOV EDX,dword ptr [ESI + 0x8]
// 0043630b: MOV ECX,dword ptr [ESI + 0x4]
// 0043630e: XOR EAX,EAX
// 00436310: NEG EDX
// 00436312: MOV EDI,dword ptr [EDI]
// 00436314: CMP EDX,ECX
// 00436316: JL 0x0043631d
//   XREF to: 0043631d (CONDITIONAL_JUMP)
// 00436318: MOV EAX,0x1
// 0043631d: MOV EDX,dword ptr [EDI + 0x8]
//   Label: LAB_0043631d
// 00436320: MOV ECX,dword ptr [EDI + 0x4]
// 00436323: NEG EDX
// 00436325: CMP EDX,ECX
// 00436327: JL 0x0043632b
//   XREF to: 0043632b (CONDITIONAL_JUMP)
// 00436329: OR AL,0x2
// 0043632b: CMP EAX,0x3
//   Label: LAB_0043632b
// 0043632e: JA 0x0043633c
//   XREF to: 0043633c (CONDITIONAL_JUMP)
// 00436330: JMP dword ptr [EAX*0x4 + 0x4362c8]
//   Label: switchD
//   XREF to: 00436337 (COMPUTED_JUMP)
//   XREF to: 00436362 (COMPUTED_JUMP)
//   XREF to: 004363b3 (COMPUTED_JUMP)
//   XREF to: 0043633c (COMPUTED_JUMP)
//   XREF to: 004362d4 (READ)
//   XREF to: 004362cc (READ)
//   XREF to: 004362c8 (DATA)
// 00436337: INC EBX
//   Label: caseD_0
// 00436338: MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI
// 0043633c: MOV EAX,dword ptr [ESP + 0x4]
//   Label: caseD_3
//   XREF to: Stack[-0x14] (READ)
// 00436340: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00436343: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00436347: MOV ESI,EDI
// 00436349: ADD EAX,0x4
// 0043634c: INC EDX
// 0043634d: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00436351: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x18] (DATA)
// 00436354: CMP EDX,ECX
// 00436356: JL 0x00436304
//   XREF to: 00436304 (CONDITIONAL_JUMP)
// 00436358: MOV EAX,EBX
//   Label: LAB_00436358
// 0043635a: ADD ESP,0x8
// 0043635d: POP EBP
// 0043635e: POP EDI
// 0043635f: POP ESI
// 00436360: POP EBX
// 00436361: RET
// 00436362: CMP dword ptr [0x00825cec],0xc
//   Label: caseD_1
//   XREF to: 00825cec (READ)
// 00436369: JL 0x0043638d
//   XREF to: 0043638d (CONDITIONAL_JUMP)
// 0043636b: MOV ECX,0x618103
//   XREF to: 00618103 (DATA)
// 00436370: MOV EAX,0x5e
// 00436375: PUSH 0x618117
//   XREF to: 00618117 (DATA)
// 0043637a: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00436380: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00436385: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0043638a: ADD ESP,0x4
// 0043638d: MOV EAX,[0x00825cec]
//   Label: LAB_0043638d
//   XREF to: 00825cec (READ)
// 00436392: IMUL EDX,EAX,0x30
// 00436395: ADD EDX,0x825aac
//   XREF to: 00825aac (DATA)
// 0043639b: PUSH EDX
// 0043639c: PUSH ESI
// 0043639d: INC EBX
// 0043639e: INC EAX
// 0043639f: PUSH EDI
// 004363a0: MOV [0x00825cec],EAX
//   XREF to: 00825cec (WRITE)
// 004363a5: MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX
// 004363a9: CALL engine_clipper.c_interpolateVertexTopClip_FUN_00435d00
//   XREF to: 00435d00 (UNCONDITIONAL_CALL)
// 004363ae: ADD ESP,0xc
// 004363b1: JMP 0x0043633c
//   XREF to: 0043633c (UNCONDITIONAL_JUMP)
// 004363b3: INC EBX
//   Label: caseD_2
// 004363b4: MOV EAX,[0x00825cec]
//   XREF to: 00825cec (READ)
// 004363b9: MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI
// 004363bd: CMP EAX,0xc
// 004363c0: JL 0x004363e5
//   XREF to: 004363e5 (CONDITIONAL_JUMP)
// 004363c2: MOV EDX,0x618103
//   XREF to: 00618103 (DATA)
// 004363c7: MOV ECX,0x5e
// 004363cc: PUSH 0x618117
//   XREF to: 00618117 (DATA)
// 004363d1: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004363d7: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004363dd: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004363e2: ADD ESP,0x4
// 004363e5: MOV EAX,[0x00825cec]
//   Label: LAB_004363e5
//   XREF to: 00825cec (READ)
// 004363ea: IMUL EDX,EAX,0x30
// 004363ed: ADD EDX,0x825aac
//   XREF to: 00825aac (DATA)
// 004363f3: PUSH EDX
// 004363f4: PUSH EDI
// 004363f5: INC EBX
// 004363f6: INC EAX
// 004363f7: PUSH ESI
// 004363f8: MOV [0x00825cec],EAX
//   XREF to: 00825cec (WRITE)
// 004363fd: MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX
// 00436401: CALL engine_clipper.c_interpolateVertexTopClip_FUN_00435d00
//   XREF to: 00435d00 (UNCONDITIONAL_CALL)
// 00436406: ADD ESP,0xc
// 00436409: JMP 0x0043633c
//   XREF to: 0043633c (UNCONDITIONAL_JUMP)
