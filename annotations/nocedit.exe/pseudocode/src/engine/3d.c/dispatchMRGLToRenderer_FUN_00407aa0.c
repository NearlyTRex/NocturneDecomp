// Name: engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0
// Address: 00407aa0
// Address Range: [[00407aa0, 00407ce9]]
// Convention: __cdecl
// Signature: void engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0(SVertexBatch * cmd)
// Globals:
//   TerminatedCString s_engine_3d_c_006134f3
//   TerminatedCString s_renderFaceList_too_many__00613502
//   TerminatedCString s_Unknown_primitive_d_00613522
//   TerminatedCString s_engine_3d_c_00613539
//   uint g_VertexProcessingEnabled = 0x1
//   SRenderVertex[16] g_RenderVertexBuffer
//   int g_RenderFaceCount
//   SMRGLHeaderPrimitive*[2000] g_RenderFaceArray
//   undefined4 g_RenderFaceArray[1]
//   int g_UseExternalRenderer
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_3d.c_dispatchMRGLBlockChain_FUN_00407890
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_3d.c_processVertexLighting_FUN_00403a20
//   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290
//   engine_3d.c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50
//   engine_3d.c_renderPrimitivePlaneMaskedComplex_FUN_004046c0
//   engine_3d.c_transformAndBufferVertices_FUN_00403840
//   engine_model.c_getMRGLSize_FUN_00528700
//   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
//   wincore_windll.cpp_drawPolyList_FUN_005b7640

#include "nocturne.h"

void __cdecl engine_3d_c_dispatchMRGLToRenderer_FUN_00407aa0(SVertexBatch *cmd)

{
  undefined4 *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  SVertexBatch *in_stack_fffffef0;
  
  cVar2 = (char)cmd->primitive_type;
  g_RenderFaceCount = 0;
  do {
    if (cVar2 == '\0') {
      if (g_RenderFaceCount != 0) {
        if (g_UseExternalRenderer == 0) {
          iVar5 = 0;
          iVar4 = 0;
          if (0 < g_RenderFaceCount) {
            do {
              puVar1 = (undefined4 *)((int)g_RenderFaceArray + iVar4);
              iVar4 = iVar4 + 4;
              iVar5 = iVar5 + 1;
              engine_3d_c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50
                        ((SMRGLHeaderPrimitive *)*puVar1);
            } while (iVar5 < g_RenderFaceCount);
          }
        }
        else {
          wincore_windll_cpp_drawPolyList_FUN_005b7640
                    (g_RenderVertexBuffer,g_RenderFaceArray,g_RenderFaceCount,0xcd);
        }
        g_RenderFaceCount = 0;
      }
      g_VertexProcessingEnabled = 1;
      return;
    }
    bVar3 = (byte)cmd->primitive_type;
    if (bVar3 < 0x14) {
      if (bVar3 < 3) {
        if (bVar3 == 2) {
          engine_3d_c_transformAndBufferVertices_FUN_00403840(cmd,in_stack_fffffef0);
          if (g_VertexProcessingEnabled != 0) {
            engine_3d_c_dispatchMRGLBlockChain_FUN_00407890((SMRGLHeaderExtended *)cmd);
            return;
          }
        }
        else {
LAB_00407c82:
          crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffef0,"Unknown primitive : %d");
          g_CurrentLineNumber = 0xcf1;
          g_CurrentFilename = "..\\engine\\3d.c";
          core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xfffffee8);
        }
      }
      else if (bVar3 < 4) {
        engine_3d_c_processVertexLighting_FUN_00403a20(cmd);
      }
      else {
        if (bVar3 != 0xd) goto LAB_00407c82;
        if ((g_RenderFaceCount != 0) && (g_RenderFaceCount != 0)) {
          if (g_UseExternalRenderer == 0) {
            iVar4 = 0;
            if (0 < g_RenderFaceCount) {
              iVar5 = 0;
              do {
                puVar1 = (undefined4 *)((int)g_RenderFaceArray + iVar5);
                iVar5 = iVar5 + 4;
                iVar4 = iVar4 + 1;
                engine_3d_c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50
                          ((SMRGLHeaderPrimitive *)*puVar1);
              } while (iVar4 < g_RenderFaceCount);
            }
          }
          else {
            wincore_windll_cpp_drawPolyList_FUN_005b7640
                      (g_RenderVertexBuffer,g_RenderFaceArray,g_RenderFaceCount,0xcd);
          }
          g_RenderFaceCount = 0;
        }
        engine_texture_cpp_ensureTextureLoaded_FUN_005dd800((SMRGLTextureBasic *)cmd);
      }
    }
    else if (0x14 < bVar3) {
      if (bVar3 < 0x29) {
        if (bVar3 != 0x18) goto LAB_00407c82;
        engine_3d_c_renderPrimitivePlaneMaskedComplex_FUN_004046c0((SMRGLHeaderPrimitive *)cmd);
      }
      else if (bVar3 < 0x2a) {
        iVar4 = engine_3d_c_isVisiblePlane_FUN_00403950((SClipPlane *)&cmd->vertex_count);
        if (iVar4 != 0) {
          if (1999 < g_RenderFaceCount) {
            g_CurrentFilename = "..\\engine\\3d.c";
            g_CurrentLineNumber = 0xca7;
            core_main_c_displayErrorAndQuit_FUN_00506f10("renderFaceList - too many faces");
          }
          g_RenderFaceArray[g_RenderFaceCount] = (SMRGLHeaderPrimitive *)cmd;
          g_RenderFaceCount = g_RenderFaceCount + 1;
        }
      }
      else {
        if (bVar3 != 0x41) goto LAB_00407c82;
        engine_3d_c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290
                  ((SMRGLHeaderPrimitive *)cmd);
      }
    }
    iVar4 = engine_model_c_getMRGLSize_FUN_00528700((SMRGLHeaderExtended *)cmd);
    cmd = (SVertexBatch *)((int)&cmd->primitive_type + iVar4);
    cVar2 = (char)cmd->primitive_type;
  } while( true );
}


// Assembly code:
// 00407aa0: PUSH EBX
//   Label: engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0
// 00407aa1: PUSH ESI
// 00407aa2: PUSH EDI
// 00407aa3: PUSH EBP
// 00407aa4: SUB ESP,0x100
// 00407aaa: MOV EDI,dword ptr [ESP + 0x114]
//   XREF to: Stack[0x4] (READ)
// 00407ab1: XOR EDX,EDX
// 00407ab3: MOV AH,byte ptr [EDI]
// 00407ab5: MOV dword ptr [0x00820070],EDX
//   XREF to: 00820070 (WRITE)
// 00407abb: TEST AH,AH
// 00407abd: JZ 0x00407b00
//   XREF to: 00407b00 (CONDITIONAL_JUMP)
// 00407abf: MOV BL,byte ptr [EDI]
//   Label: LAB_00407abf
// 00407ac1: CMP BL,0x14
// 00407ac4: JNC 0x00407c54
//   XREF to: 00407c54 (CONDITIONAL_JUMP)
// 00407aca: CMP BL,0x3
// 00407acd: JNC 0x00407c73
//   XREF to: 00407c73 (CONDITIONAL_JUMP)
// 00407ad3: CMP BL,0x2
// 00407ad6: JNZ 0x00407c82
//   XREF to: 00407c82 (CONDITIONAL_JUMP)
// 00407adc: PUSH EDI
// 00407add: CALL engine_3d.c_transformAndBufferVertices_FUN_00403840
//   XREF to: 00403840 (UNCONDITIONAL_CALL)
// 00407ae2: MOV ESI,dword ptr [0x006793bc]
//   XREF to: 006793bc (READ)
// 00407ae8: ADD ESP,0x4
// 00407aeb: TEST ESI,ESI
// 00407aed: JNZ 0x00407b4d
//   XREF to: 00407b4d (CONDITIONAL_JUMP)
// 00407aef: PUSH EDI
//   Label: LAB_00407aef
// 00407af0: CALL engine_model.c_getMRGLSize_FUN_00528700
//   XREF to: 00528700 (UNCONDITIONAL_CALL)
// 00407af5: ADD EDI,EAX
// 00407af7: MOV DL,byte ptr [EDI]
// 00407af9: ADD ESP,0x4
// 00407afc: TEST DL,DL
// 00407afe: JNZ 0x00407abf
//   XREF to: 00407abf (CONDITIONAL_JUMP)
// 00407b00: MOV ECX,dword ptr [0x00820070]
//   Label: LAB_00407b00
//   XREF to: 00820070 (READ)
// 00407b06: TEST ECX,ECX
// 00407b08: JZ 0x00407b38
//   XREF to: 00407b38 (CONDITIONAL_JUMP)
// 00407b0a: MOV EBX,dword ptr [0x02d03e94]
//   XREF to: 02d03e94 (READ)
// 00407b10: TEST EBX,EBX
// 00407b12: JZ 0x00407cbf
//   XREF to: 00407cbf (CONDITIONAL_JUMP)
// 00407b18: PUSH 0xcd
// 00407b1d: PUSH ECX
// 00407b1e: PUSH 0x820074
//   XREF to: 00820074 (DATA)
// 00407b23: PUSH 0x688014
//   XREF to: 00688014 (DATA)
// 00407b28: CALL wincore_windll.cpp_drawPolyList_FUN_005b7640
//   XREF to: 005b7640 (UNCONDITIONAL_CALL)
// 00407b2d: ADD ESP,0x10
// 00407b30: XOR EDX,EDX
//   Label: LAB_00407b30
// 00407b32: MOV dword ptr [0x00820070],EDX
//   XREF to: 00820070 (WRITE)
// 00407b38: MOV dword ptr [0x006793bc],0x1
//   Label: LAB_00407b38
//   XREF to: 006793bc (WRITE)
// 00407b42: ADD ESP,0x100
// 00407b48: POP EBP
// 00407b49: POP EDI
// 00407b4a: POP ESI
// 00407b4b: POP EBX
// 00407b4c: RET
// 00407b4d: PUSH EDI
//   Label: LAB_00407b4d
// 00407b4e: CALL engine_3d.c_dispatchMRGLBlockChain_FUN_00407890
//   XREF to: 00407890 (UNCONDITIONAL_CALL)
// 00407b53: ADD ESP,0x4
// 00407b56: ADD ESP,0x100
// 00407b5c: POP EBP
// 00407b5d: POP EDI
// 00407b5e: POP ESI
// 00407b5f: POP EBX
// 00407b60: RET
// 00407b61: PUSH EDI
//   Label: LAB_00407b61
// 00407b62: CALL engine_3d.c_processVertexLighting_FUN_00403a20
//   XREF to: 00403a20 (UNCONDITIONAL_CALL)
// 00407b67: ADD ESP,0x4
// 00407b6a: JMP 0x00407aef
//   XREF to: 00407aef (UNCONDITIONAL_JUMP)
// 00407b6c: MOV EBX,dword ptr [0x00820070]
//   Label: LAB_00407b6c
//   XREF to: 00820070 (READ)
// 00407b72: TEST EBX,EBX
// 00407b74: JZ 0x00407ba1
//   XREF to: 00407ba1 (CONDITIONAL_JUMP)
// 00407b76: JZ 0x00407ba1
//   XREF to: 00407ba1 (CONDITIONAL_JUMP)
// 00407b78: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 00407b7f: JZ 0x00407baf
//   XREF to: 00407baf (CONDITIONAL_JUMP)
// 00407b81: PUSH 0xcd
// 00407b86: PUSH EBX
// 00407b87: PUSH 0x820074
//   XREF to: 00820074 (DATA)
// 00407b8c: PUSH 0x688014
//   XREF to: 00688014 (DATA)
// 00407b91: CALL wincore_windll.cpp_drawPolyList_FUN_005b7640
//   XREF to: 005b7640 (UNCONDITIONAL_CALL)
// 00407b96: ADD ESP,0x10
// 00407b99: XOR EDX,EDX
//   Label: LAB_00407b99
// 00407b9b: MOV dword ptr [0x00820070],EDX
//   XREF to: 00820070 (WRITE)
// 00407ba1: PUSH EDI
//   Label: LAB_00407ba1
// 00407ba2: CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
//   XREF to: 005dd800 (UNCONDITIONAL_CALL)
// 00407ba7: ADD ESP,0x4
// 00407baa: JMP 0x00407aef
//   XREF to: 00407aef (UNCONDITIONAL_JUMP)
// 00407baf: MOV EAX,[0x00820070]
//   Label: LAB_00407baf
//   XREF to: 00820070 (READ)
// 00407bb4: XOR EBX,EBX
// 00407bb6: TEST EAX,EAX
// 00407bb8: JLE 0x00407b99
//   XREF to: 00407b99 (CONDITIONAL_JUMP)
// 00407bba: XOR ESI,ESI
// 00407bbc: MOV EBP,dword ptr [ESI + 0x820074]
//   Label: LAB_00407bbc
//   XREF to: 00820074 (READ)
//   XREF to: 00820078 (READ)
// 00407bc2: PUSH EBP
// 00407bc3: ADD ESI,0x4
// 00407bc6: INC EBX
// 00407bc7: CALL engine_3d.c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50
//   XREF to: 00405b50 (UNCONDITIONAL_CALL)
// 00407bcc: MOV EAX,[0x00820070]
//   XREF to: 00820070 (READ)
// 00407bd1: ADD ESP,0x4
// 00407bd4: CMP EBX,EAX
// 00407bd6: JL 0x00407bbc
//   XREF to: 00407bbc (CONDITIONAL_JUMP)
// 00407bd8: JMP 0x00407b99
//   XREF to: 00407b99 (UNCONDITIONAL_JUMP)
// 00407bda: MOV EBX,EDI
//   Label: LAB_00407bda
// 00407bdc: LEA EAX,[EDI + 0x8]
// 00407bdf: PUSH EAX
// 00407be0: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00407be5: ADD ESP,0x4
// 00407be8: TEST EAX,EAX
// 00407bea: JZ 0x00407aef
//   XREF to: 00407aef (CONDITIONAL_JUMP)
// 00407bf0: CMP dword ptr [0x00820070],0x7d0
//   XREF to: 00820070 (READ)
// 00407bfa: JL 0x00407c1e
//   XREF to: 00407c1e (CONDITIONAL_JUMP)
// 00407bfc: MOV EAX,0x6134f3
//   XREF to: 006134f3 (DATA)
// 00407c01: MOV EDX,0xca7
// 00407c06: PUSH 0x613502
//   XREF to: 00613502 (DATA)
// 00407c0b: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00407c10: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00407c16: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00407c1b: ADD ESP,0x4
// 00407c1e: MOV EAX,[0x00820070]
//   Label: LAB_00407c1e
//   XREF to: 00820070 (READ)
// 00407c23: LEA ECX,[EAX + 0x1]
// 00407c26: MOV dword ptr [EAX*0x4 + 0x820074],EBX
//   XREF to: 00820074 (WRITE)
// 00407c2d: MOV dword ptr [0x00820070],ECX
//   XREF to: 00820070 (WRITE)
// 00407c33: JMP 0x00407aef
//   XREF to: 00407aef (UNCONDITIONAL_JUMP)
// 00407c38: PUSH EDI
//   Label: LAB_00407c38
// 00407c39: CALL engine_3d.c_renderPrimitivePlaneMaskedComplex_FUN_004046c0
//   XREF to: 004046c0 (UNCONDITIONAL_CALL)
// 00407c3e: ADD ESP,0x4
// 00407c41: JMP 0x00407aef
//   XREF to: 00407aef (UNCONDITIONAL_JUMP)
// 00407c46: PUSH EDI
//   Label: LAB_00407c46
// 00407c47: CALL engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290
//   XREF to: 00407290 (UNCONDITIONAL_CALL)
// 00407c4c: ADD ESP,0x4
// 00407c4f: JMP 0x00407aef
//   XREF to: 00407aef (UNCONDITIONAL_JUMP)
// 00407c54: JBE 0x00407aef
//   Label: LAB_00407c54
//   XREF to: 00407aef (CONDITIONAL_JUMP)
// 00407c5a: CMP BL,0x29
// 00407c5d: JNC 0x00407c66
//   XREF to: 00407c66 (CONDITIONAL_JUMP)
// 00407c5f: CMP BL,0x18
// 00407c62: JZ 0x00407c38
//   XREF to: 00407c38 (CONDITIONAL_JUMP)
// 00407c64: JMP 0x00407c82
//   XREF to: 00407c82 (UNCONDITIONAL_JUMP)
// 00407c66: JBE 0x00407bda
//   Label: LAB_00407c66
//   XREF to: 00407bda (CONDITIONAL_JUMP)
// 00407c6c: CMP BL,0x41
// 00407c6f: JZ 0x00407c46
//   XREF to: 00407c46 (CONDITIONAL_JUMP)
// 00407c71: JMP 0x00407c82
//   XREF to: 00407c82 (UNCONDITIONAL_JUMP)
// 00407c73: JBE 0x00407b61
//   Label: LAB_00407c73
//   XREF to: 00407b61 (CONDITIONAL_JUMP)
// 00407c79: CMP BL,0xd
// 00407c7c: JZ 0x00407b6c
//   XREF to: 00407b6c (CONDITIONAL_JUMP)
// 00407c82: XOR EAX,EAX
//   Label: LAB_00407c82
// 00407c84: MOV AL,byte ptr [EDI]
// 00407c86: PUSH EAX
// 00407c87: PUSH 0x613522
//   XREF to: 00613522 (DATA)
// 00407c8c: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x110] (DATA)
// 00407c90: PUSH EAX
// 00407c91: MOV EBX,0xcf1
// 00407c96: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00407c9b: ADD ESP,0xc
// 00407c9e: MOV EAX,ESP
// 00407ca0: MOV ECX,0x613539
//   XREF to: 00613539 (DATA)
// 00407ca5: PUSH EAX
// 00407ca6: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00407cac: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00407cb2: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00407cb7: ADD ESP,0x4
// 00407cba: JMP 0x00407aef
//   XREF to: 00407aef (UNCONDITIONAL_JUMP)
// 00407cbf: XOR EDI,EDI
//   Label: LAB_00407cbf
// 00407cc1: TEST ECX,ECX
// 00407cc3: JLE 0x00407b30
//   XREF to: 00407b30 (CONDITIONAL_JUMP)
// 00407cc9: MOV EBP,dword ptr [EBX + 0x820074]
//   Label: LAB_00407cc9
//   XREF to: 00820074 (DATA)
//   XREF to: 00820078 (DATA)
// 00407ccf: PUSH EBP
// 00407cd0: ADD EBX,0x4
// 00407cd3: INC EDI
// 00407cd4: CALL engine_3d.c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50
//   XREF to: 00405b50 (UNCONDITIONAL_CALL)
// 00407cd9: MOV EAX,[0x00820070]
//   XREF to: 00820070 (READ)
// 00407cde: ADD ESP,0x4
// 00407ce1: CMP EDI,EAX
// 00407ce3: JL 0x00407cc9
//   XREF to: 00407cc9 (CONDITIONAL_JUMP)
// 00407ce5: JMP 0x00407b30
//   XREF to: 00407b30 (UNCONDITIONAL_JUMP)
