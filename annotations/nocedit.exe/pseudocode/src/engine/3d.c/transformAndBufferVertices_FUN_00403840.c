// Name: engine_3d.c_transformAndBufferVertices_FUN_00403840
// Address: 00403840
// Address Range: [[00403840, 00403944]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_transformAndBufferVertices_FUN_00403840(SVertexBatch * vertex_source, SVertexBatch * processing_params)
// Cross-references:
//   engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0 (00407aa0) at 00407add [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_3d_c_006133d2
//   TerminatedCString s_vlist_too_many_verticies_006133e1
//   uint g_VertexProcessingEnabled = 0x1
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 DAT_00688024+3
//   undefined4 g_RenderVertexBuffer[0].w_recip
//   uint g_ProcessedVertexOffset
//   uint g_ProcessedVertexBackupOffset
//   void* g_CurrentVertexData
//   float g_PerspectiveReciprocal
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_transformAndBufferVertices_FUN_00403840
          (SVertexBatch *vertex_source,SVertexBatch *processing_params)

{
  int iVar1;
  SRenderVertex *output;
  CVector3i *input;
  uint uVar2;
  
  input = &vertex_source->vertex_buffer;
  g_CurrentVertexData = input;
  if (20000 < vertex_source->vertex_count) {
    g_CurrentFilename = "..\\engine\\3d.c";
    g_CurrentLineNumber = 0x15c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("vlist - too many verticies");
  }
  g_VertexProcessingEnabled = 1;
  output = g_RenderVertexBuffer + processing_params->render_queue_index + g_ProcessedVertexOffset;
  iVar1 = 0;
  uVar2 = 0;
  if (0 < processing_params->vertex_count) {
    do {
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c(&output->projected_vertex,input);
      output->w_recip = g_PerspectiveReciprocal;
      if ((int)((output->projected_vertex).screen_x & -0x80000000) == 0) {
        uVar2 = uVar2 + 1;
      }
      output = output + 1;
      iVar1 = iVar1 + 1;
      input = input + 1;
    } while (iVar1 < processing_params->vertex_count);
  }
  if (g_ProcessedVertexOffset == 0) {
    g_ProcessedVertexBackupOffset = g_ProcessedVertexOffset;
  }
  if (uVar2 == processing_params->vertex_count) {
    g_VertexProcessingEnabled = uVar2 ^ processing_params->vertex_count;
  }
  return (SMRGLHeaderExtended *)
         (&processing_params->vertex_buffer + processing_params->vertex_count);
}


// Assembly code:
// 00403840: PUSH EBX
//   Label: engine_3d.c_transformAndBufferVertices_FUN_00403840
// 00403841: PUSH ESI
// 00403842: PUSH EDI
// 00403843: PUSH EBP
// 00403844: SUB ESP,0x4
// 00403847: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0040384b: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0040384f: ADD EDI,0xc
// 00403852: MOV EDX,dword ptr [EAX + 0x8]
// 00403855: MOV dword ptr [0x00772a94],EDI
//   XREF to: 00772a94 (WRITE)
// 0040385b: CMP EDX,0x4e20
// 00403861: JG 0x00403914
//   XREF to: 00403914 (CONDITIONAL_JUMP)
// 00403867: MOV dword ptr [0x006793bc],0x1
//   Label: LAB_00403867
//   XREF to: 006793bc (WRITE)
// 00403871: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00403875: MOV EDX,dword ptr [0x00772a60]
//   XREF to: 00772a60 (READ)
// 0040387b: MOV ESI,dword ptr [ESI + 0x4]
// 0040387e: ADD ESI,EDX
// 00403880: LEA EAX,[ESI*0x4 + 0x0]
// 00403887: SUB EAX,ESI
// 00403889: MOV ESI,0x688014
//   XREF to: 00688014 (DATA)
// 0040388e: SHL EAX,0x4
// 00403891: ADD ESI,EAX
// 00403893: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00403897: XOR EBP,EBP
// 00403899: MOV ECX,dword ptr [EAX + 0x8]
// 0040389c: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x14] (DATA)
// 0040389f: TEST ECX,ECX
// 004038a1: JLE 0x004038d2
//   XREF to: 004038d2 (CONDITIONAL_JUMP)
// 004038a3: PUSH EDI
//   Label: LAB_004038a3
// 004038a4: PUSH ESI
// 004038a5: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004038aa: MOV EAX,[0x02d051f4]
//   XREF to: 02d051f4 (READ)
// 004038af: MOV dword ptr [ESI + 0x2c],EAX
//   XREF to: 00688040 (DATA)
// 004038b2: MOV AH,byte ptr [ESI + 0x13]
//   XREF to: 00688027 (DATA)
// 004038b5: ADD ESP,0x8
// 004038b8: TEST AH,0x80
// 004038bb: JNZ 0x004038c0
//   XREF to: 004038c0 (CONDITIONAL_JUMP)
// 004038bd: INC dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 004038c0: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_004038c0
//   XREF to: Stack[0x4] (READ)
// 004038c4: ADD ESI,0x30
// 004038c7: INC EBP
// 004038c8: MOV EBX,dword ptr [EAX + 0x8]
// 004038cb: ADD EDI,0xc
// 004038ce: CMP EBP,EBX
// 004038d0: JL 0x004038a3
//   XREF to: 004038a3 (CONDITIONAL_JUMP)
// 004038d2: MOV ESI,dword ptr [0x00772a60]
//   Label: LAB_004038d2
//   XREF to: 00772a60 (READ)
// 004038d8: TEST ESI,ESI
// 004038da: JNZ 0x004038e2
//   XREF to: 004038e2 (CONDITIONAL_JUMP)
// 004038dc: MOV dword ptr [0x00772a64],ESI
//   XREF to: 00772a64 (WRITE)
// 004038e2: MOV ESI,dword ptr [ESP + 0x18]
//   Label: LAB_004038e2
//   XREF to: Stack[0x4] (READ)
// 004038e6: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 004038e9: MOV EBP,dword ptr [ESI + 0x8]
// 004038ec: CMP EAX,EBP
// 004038ee: JZ 0x0040393c
//   XREF to: 0040393c (CONDITIONAL_JUMP)
// 004038f0: MOV ESI,dword ptr [ESP + 0x18]
//   Label: LAB_004038f0
//   XREF to: Stack[0x4] (READ)
// 004038f4: MOV ESI,dword ptr [ESI + 0x8]
// 004038f7: LEA EAX,[ESI*0x4 + 0x0]
// 004038fe: SUB EAX,ESI
// 00403900: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00403904: SHL EAX,0x2
// 00403907: ADD ESI,0xc
// 0040390a: ADD EAX,ESI
// 0040390c: ADD ESP,0x4
// 0040390f: POP EBP
// 00403910: POP EDI
// 00403911: POP ESI
// 00403912: POP EBX
// 00403913: RET
// 00403914: MOV ECX,0x6133d2
//   Label: LAB_00403914
//   XREF to: 006133d2 (PARAM)
// 00403919: MOV EBX,0x15c
// 0040391e: PUSH 0x6133e1
//   XREF to: 006133e1 (DATA)
// 00403923: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00403929: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0040392f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00403934: ADD ESP,0x4
// 00403937: JMP 0x00403867
//   XREF to: 00403867 (UNCONDITIONAL_JUMP)
// 0040393c: XOR EAX,EBP
//   Label: LAB_0040393c
// 0040393e: MOV [0x006793bc],EAX
//   XREF to: 006793bc (WRITE)
// 00403943: JMP 0x004038f0
//   XREF to: 004038f0 (UNCONDITIONAL_JUMP)
