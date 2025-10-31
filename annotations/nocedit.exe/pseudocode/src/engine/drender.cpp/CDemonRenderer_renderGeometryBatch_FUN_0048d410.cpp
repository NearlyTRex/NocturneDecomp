// Name: engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410
// Address: 0048d410
// Address Range: [[0048d410, 0048d6b2]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410(CDemonRenderer * this_ptr, int * vertex_indices, int face_count, int vertices_per_face, int render_mode)
// Globals:
//   TerminatedCString s_engine_drender_cpp_00622147
//   TerminatedCString s_Can_t_capture_this_type__0062215d
//   int g_BitsPerPixel = 0x8
//   int g_CullingMode
//   int g_ClippedVertexCount
//   SRenderVertex[16] g_ClippedVertexBuffer
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   int g_RenderStateFlags
//   undefined4 DAT_02d052a1
//   int g_RenderStateFlag2
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_xform.cpp_transformAndClipGeometry_FUN_005f8550
//   engine_3d.c_rasterizeTriangle_FUN_005fcfc0
//   engine_clipper.c_clipAndRasterize_FUN_004371b0
//   engine_clipper.c_clipPolygonToViewport_FUN_00438420
//   engine_drender.cpp_renderTriangleSimple_FUN_004839f0
//   engine_prim.c_calculateTriangleWindingOrder_FUN_00552150

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410
          (CDemonRenderer *this_ptr,int *vertex_indices,int face_count,int vertices_per_face,
          int render_mode)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  SRenderVertex *pSVar4;
  ushort *puVar5;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int unaff_EDI;
  int in_stack_ffffffa0;
  
  if (render_mode == -1) {
    render_mode = RENDER_ENGINE_CORE_PREMIUM;
  }
  if (this_ptr->texture_capture_enabled != 0) {
    g_CurrentFilename = "..\\engine\\drender.cpp";
    g_CurrentLineNumber = 0xa6a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't capture this type of face!");
  }
  if (vertex_indices[1] == 0) {
    if (render_mode == 0xc0) {
      g_ScanlineRenderFunc = core_dstrender_cpp_renderDepthOnlyReversed_FUN_004906e9;
    }
    else if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
    }
    else {
      g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
    }
    g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
    puVar5 = (ushort *)vertex_indices;
    g_RenderStateFlags = render_mode;
    if (0 < face_count) {
      do {
        while ((g_CullingMode != 0 &&
               (pSVar4 = (SRenderVertex *)((uint)puVar5[1] * 0x30 + *vertex_indices),
               iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                                 ((SRenderVertex *)(*vertex_indices + (uint)*puVar5 * 0x30),pSVar4,
                                  pSVar4), iVar3 == 0))) {
          face_count = face_count + -1;
          puVar5 = (ushort *)((int)puVar5 + unaff_EDI);
          if (face_count < 1) {
            return;
          }
        }
        iVar3 = 0;
        if (0 < vertices_per_face) {
          puVar1 = puVar5;
          iVar2 = 0;
          do {
            if (*puVar1 == 0xffff) break;
            iVar3 = iVar3 + 1;
            *(uint *)(&stack0xffffff9c + iVar2) = (uint)*puVar1;
            puVar1 = puVar1 + 1;
            iVar2 = iVar2 + 4;
          } while (iVar3 < vertices_per_face);
        }
        if ((vertex_indices[4] == 0) &&
           (((vertex_indices[1] != 0 && ((g_RenderStateFlags & 1U) == 0)) ||
            ((g_RenderStateFlags & 5U) == 0)))) {
          core_xform_cpp_transformAndClipGeometry_FUN_005f8550(iVar3,(int *)&stack0xffffff9c);
          if (2 < g_ClippedVertexCount) {
            engine_3d_c_rasterizeTriangle_FUN_005fcfc0
                      (g_ClippedVertexBuffer,g_ClippedVertexCount,in_stack_ffffffa0);
          }
        }
        else if ((g_RenderStateFlags & 0x200U) == 0) {
          engine_clipper_c_clipAndRasterize_FUN_004371b0(iVar3,(int *)&stack0xffffff9c);
        }
        else {
          engine_clipper_c_clipPolygonToViewport_FUN_00438420(iVar3,(int *)&stack0xffffff9c);
        }
        face_count = face_count + -1;
        puVar5 = puVar5 + vertices_per_face;
        if (face_count < 1) {
          return;
        }
      } while( true );
    }
  }
  else {
    g_RenderStateFlags = 0;
    g_RenderStateFlag2 = PREPROCESS_NONE;
    g_ScanlineRenderFunc = core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
    puVar5 = (ushort *)vertex_indices;
    if (0 < face_count) {
      do {
        if ((g_CullingMode == 0) ||
           (pSVar4 = (SRenderVertex *)((uint)puVar5[1] * 0x30 + *vertex_indices),
           iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                             ((SRenderVertex *)(*vertex_indices + (uint)*puVar5 * 0x30),pSVar4,
                              pSVar4), iVar3 != 0)) {
          iVar3 = 0;
          if (0 < vertices_per_face) {
            puVar1 = puVar5;
            iVar2 = 0;
            do {
              if (*puVar1 == 0xffff) break;
              iVar3 = iVar3 + 1;
              *(uint *)(&stack0xffffff9c + iVar2) = (uint)*puVar1;
              puVar1 = puVar1 + 1;
              iVar2 = iVar2 + 4;
            } while (iVar3 < vertices_per_face);
          }
          if (vertex_indices[4] == 0) {
            engine_drender_cpp_renderTriangleSimple_FUN_004839f0((int *)&stack0xffffff9c,iVar3);
          }
          else {
            core_xform_cpp_transformAndClipGeometry_FUN_005f8550(iVar3,(int *)&stack0xffffff9c);
            if (2 < g_ClippedVertexCount) {
              engine_3d_c_rasterizeTriangle_FUN_005fcfc0
                        (g_ClippedVertexBuffer,g_ClippedVertexCount,in_stack_ffffffa0);
            }
          }
        }
        face_count = face_count + -1;
        puVar5 = (ushort *)((int)puVar5 + unaff_EBP);
      } while (0 < face_count);
    }
  }
  return;
}


// Assembly code:
// 0048d410: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410
// 0048d411: PUSH ESI
// 0048d412: PUSH EDI
// 0048d413: PUSH EBP
// 0048d414: SUB ESP,0x58
// 0048d417: MOV EBX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 0048d41b: MOV ESI,dword ptr [ESP + 0x74]
//   XREF to: Stack[0xc] (READ)
// 0048d41f: MOV EBP,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x10] (READ)
// 0048d423: MOV EDI,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x14] (READ)
// 0048d427: CMP EDI,-0x1
// 0048d42a: JNZ 0x0048d431
//   XREF to: 0048d431 (CONDITIONAL_JUMP)
// 0048d42c: MOV EDI,0x2cd
// 0048d431: MOV EAX,dword ptr [ESP + 0x6c]
//   Label: LAB_0048d431
//   XREF to: Stack[0x4] (READ)
// 0048d435: CMP dword ptr [EAX + 0x1c],0x0
// 0048d439: JZ 0x0048d45d
//   XREF to: 0048d45d (CONDITIONAL_JUMP)
// 0048d43b: MOV ECX,0x622147
//   XREF to: 00622147 (DATA)
// 0048d440: MOV EAX,0xa6a
// 0048d445: PUSH 0x62215d
//   XREF to: 0062215d (DATA)
// 0048d44a: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0048d450: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0048d455: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0048d45a: ADD ESP,0x4
// 0048d45d: MOV EAX,dword ptr [ESP + 0x6c]
//   Label: LAB_0048d45d
//   XREF to: Stack[0x4] (READ)
// 0048d461: CMP dword ptr [EAX + 0x4],0x0
// 0048d465: JZ 0x0048d54b
//   XREF to: 0048d54b (CONDITIONAL_JUMP)
// 0048d46b: XOR EDX,EDX
// 0048d46d: MOV EAX,0x49072f
//   XREF to: 0049072f (DATA)
// 0048d472: MOV dword ptr [0x02d052a0],EDX
//   XREF to: 02d052a0 (WRITE)
// 0048d478: MOV dword ptr [0x02d052a4],EDX
//   XREF to: 02d052a4 (WRITE)
// 0048d47e: MOV [0x02d0257c],EAX
//   XREF to: 02d0257c (WRITE)
// 0048d483: TEST ESI,ESI
// 0048d485: JLE 0x0048d4ff
//   XREF to: 0048d4ff (CONDITIONAL_JUMP)
// 0048d48b: LEA EAX,[EBP + EBP*0x1]
// 0048d48f: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0048d493: CMP dword ptr [0x00772a7c],0x0
//   Label: LAB_0048d493
//   XREF to: 00772a7c (READ)
// 0048d49a: JNZ 0x0048d507
//   XREF to: 0048d507 (CONDITIONAL_JUMP)
// 0048d4a0: XOR EDX,EDX
//   Label: LAB_0048d4a0
// 0048d4a2: TEST EBP,EBP
// 0048d4a4: JLE 0x0048d4c5
//   XREF to: 0048d4c5 (CONDITIONAL_JUMP)
// 0048d4a6: MOV EAX,EBX
// 0048d4a8: XOR ECX,ECX
// 0048d4aa: CMP word ptr [EAX],-0x1
//   Label: LAB_0048d4aa
// 0048d4ae: JZ 0x0048d4c5
//   XREF to: 0048d4c5 (CONDITIONAL_JUMP)
// 0048d4b0: ADD EAX,0x2
// 0048d4b3: XOR EDI,EDI
// 0048d4b5: ADD ECX,0x4
// 0048d4b8: MOV DI,word ptr [EAX + -0x2]
// 0048d4bc: INC EDX
// 0048d4bd: MOV dword ptr [ESP + ECX*0x1 + -0x4],EDI
//   XREF to: Stack[-0x68] (DATA)
// 0048d4c1: CMP EDX,EBP
// 0048d4c3: JL 0x0048d4aa
//   XREF to: 0048d4aa (CONDITIONAL_JUMP)
// 0048d4c5: MOV EAX,dword ptr [ESP + 0x6c]
//   Label: LAB_0048d4c5
//   XREF to: Stack[0x4] (READ)
// 0048d4c9: CMP dword ptr [EAX + 0x10],0x0
// 0048d4cd: JZ 0x0048d53e
//   XREF to: 0048d53e (CONDITIONAL_JUMP)
// 0048d4cf: MOV EAX,ESP
// 0048d4d1: PUSH EAX
// 0048d4d2: PUSH EDX
// 0048d4d3: CALL core_xform.cpp_transformAndClipGeometry_FUN_005f8550
//   XREF to: 005f8550 (UNCONDITIONAL_CALL)
// 0048d4d8: MOV EDI,dword ptr [0x00824e24]
//   XREF to: 00824e24 (READ)
// 0048d4de: ADD ESP,0x8
// 0048d4e1: CMP EDI,0x2
// 0048d4e4: JLE 0x0048d4f4
//   XREF to: 0048d4f4 (CONDITIONAL_JUMP)
// 0048d4e6: PUSH EDI
// 0048d4e7: PUSH 0x824e28
//   XREF to: 00824e28 (DATA)
// 0048d4ec: CALL engine_3d.c_rasterizeTriangle_FUN_005fcfc0
//   XREF to: 005fcfc0 (UNCONDITIONAL_CALL)
// 0048d4f1: ADD ESP,0x8
//   Label: LAB_0048d4f1
// 0048d4f4: MOV EDX,dword ptr [ESP + 0x50]
//   Label: LAB_0048d4f4
//   XREF to: Stack[-0x18] (READ)
// 0048d4f8: DEC ESI
// 0048d4f9: ADD EBX,EDX
// 0048d4fb: TEST ESI,ESI
//   Label: LAB_0048d4fb
// 0048d4fd: JG 0x0048d493
//   XREF to: 0048d493 (CONDITIONAL_JUMP)
// 0048d4ff: ADD ESP,0x58
//   Label: LAB_0048d4ff
// 0048d502: POP EBP
// 0048d503: POP EDI
// 0048d504: POP ESI
// 0048d505: POP EBX
// 0048d506: RET
// 0048d507: XOR EDX,EDX
//   Label: LAB_0048d507
// 0048d509: MOV DX,word ptr [EBX + 0x2]
// 0048d50d: IMUL EDX,EDX,0x30
// 0048d510: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 0048d514: MOV EAX,dword ptr [EAX]
// 0048d516: ADD EDX,EAX
// 0048d518: PUSH EDX
// 0048d519: PUSH EDX
// 0048d51a: XOR EDX,EDX
// 0048d51c: MOV DX,word ptr [EBX]
// 0048d51f: IMUL EDX,EDX,0x30
// 0048d522: ADD EAX,EDX
// 0048d524: PUSH EAX
// 0048d525: CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   XREF to: 00552150 (UNCONDITIONAL_CALL)
// 0048d52a: ADD ESP,0xc
// 0048d52d: TEST EAX,EAX
// 0048d52f: JNZ 0x0048d4a0
//   XREF to: 0048d4a0 (CONDITIONAL_JUMP)
// 0048d535: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x18] (READ)
// 0048d539: DEC ESI
// 0048d53a: ADD EBX,EAX
// 0048d53c: JMP 0x0048d4fb
//   XREF to: 0048d4fb (UNCONDITIONAL_JUMP)
// 0048d53e: PUSH EDX
//   Label: LAB_0048d53e
// 0048d53f: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x68] (DATA)
// 0048d543: PUSH EAX
// 0048d544: CALL engine_drender.cpp_renderTriangleSimple_FUN_004839f0
//   XREF to: 004839f0 (UNCONDITIONAL_CALL)
// 0048d549: JMP 0x0048d4f1
//   XREF to: 0048d4f1 (UNCONDITIONAL_JUMP)
// 0048d54b: CMP EDI,0xc0
//   Label: LAB_0048d54b
// 0048d551: JNZ 0x0048d5e9
//   XREF to: 0048d5e9 (CONDITIONAL_JUMP)
// 0048d557: MOV dword ptr [0x02d0257c],0x4906e9
//   XREF to: 02d0257c (WRITE)
//   XREF to: 004906e9 (DATA)
// 0048d561: MOV dword ptr [0x02d052a0],EDI
//   Label: LAB_0048d561
//   XREF to: 02d052a0 (WRITE)
// 0048d567: MOV dword ptr [0x02d052a4],0x6
//   XREF to: 02d052a4 (WRITE)
// 0048d571: TEST ESI,ESI
// 0048d573: JLE 0x0048d4ff
//   XREF to: 0048d4ff (CONDITIONAL_JUMP)
// 0048d575: LEA EAX,[EBP + EBP*0x1]
// 0048d579: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0048d57d: CMP dword ptr [0x00772a7c],0x0
//   Label: LAB_0048d57d
//   XREF to: 00772a7c (READ)
// 0048d584: JNZ 0x0048d610
//   XREF to: 0048d610 (CONDITIONAL_JUMP)
// 0048d58a: XOR EDX,EDX
//   Label: LAB_0048d58a
// 0048d58c: TEST EBP,EBP
// 0048d58e: JLE 0x0048d5af
//   XREF to: 0048d5af (CONDITIONAL_JUMP)
// 0048d590: MOV EAX,EBX
// 0048d592: XOR ECX,ECX
// 0048d594: CMP word ptr [EAX],-0x1
//   Label: LAB_0048d594
// 0048d598: JZ 0x0048d5af
//   XREF to: 0048d5af (CONDITIONAL_JUMP)
// 0048d59a: ADD EAX,0x2
// 0048d59d: XOR EDI,EDI
// 0048d59f: ADD ECX,0x4
// 0048d5a2: MOV DI,word ptr [EAX + -0x2]
// 0048d5a6: INC EDX
// 0048d5a7: MOV dword ptr [ESP + ECX*0x1 + -0x4],EDI
//   XREF to: Stack[-0x68] (DATA)
// 0048d5ab: CMP EDX,EBP
// 0048d5ad: JL 0x0048d594
//   XREF to: 0048d594 (CONDITIONAL_JUMP)
// 0048d5af: MOV EAX,dword ptr [ESP + 0x6c]
//   Label: LAB_0048d5af
//   XREF to: Stack[0x4] (READ)
// 0048d5b3: CMP dword ptr [EAX + 0x10],0x0
// 0048d5b7: JZ 0x0048d663
//   XREF to: 0048d663 (CONDITIONAL_JUMP)
// 0048d5bd: TEST byte ptr [0x02d052a1],0x2
//   XREF to: 02d052a1 (READ)
// 0048d5c4: JZ 0x0048d655
//   XREF to: 0048d655 (CONDITIONAL_JUMP)
// 0048d5ca: MOV EAX,ESP
//   Label: LAB_0048d5ca
// 0048d5cc: PUSH EAX
// 0048d5cd: PUSH EDX
// 0048d5ce: CALL engine_clipper.c_clipPolygonToViewport_FUN_00438420
//   XREF to: 00438420 (UNCONDITIONAL_CALL)
// 0048d5d3: ADD ESP,0x8
//   Label: LAB_0048d5d3
// 0048d5d6: MOV ECX,dword ptr [ESP + 0x54]
//   Label: LAB_0048d5d6
//   XREF to: Stack[-0x14] (READ)
// 0048d5da: DEC ESI
// 0048d5db: ADD EBX,ECX
// 0048d5dd: TEST ESI,ESI
// 0048d5df: JG 0x0048d57d
//   XREF to: 0048d57d (CONDITIONAL_JUMP)
// 0048d5e1: ADD ESP,0x58
// 0048d5e4: POP EBP
// 0048d5e5: POP EDI
// 0048d5e6: POP ESI
// 0048d5e7: POP EBX
// 0048d5e8: RET
// 0048d5e9: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0048d5e9
//   XREF to: 0067939c (READ)
// 0048d5f0: JNZ 0x0048d601
//   XREF to: 0048d601 (CONDITIONAL_JUMP)
// 0048d5f2: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 0048d5fc: JMP 0x0048d561
//   XREF to: 0048d561 (UNCONDITIONAL_JUMP)
// 0048d601: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_0048d601
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0048d60b: JMP 0x0048d561
//   XREF to: 0048d561 (UNCONDITIONAL_JUMP)
// 0048d610: XOR EAX,EAX
//   Label: LAB_0048d610
// 0048d612: MOV AX,word ptr [EBX + 0x2]
// 0048d616: IMUL EDX,EAX,0x30
// 0048d619: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 0048d61d: MOV EAX,dword ptr [EAX]
// 0048d61f: ADD EDX,EAX
// 0048d621: PUSH EDX
// 0048d622: PUSH EDX
// 0048d623: XOR EDX,EDX
// 0048d625: MOV DX,word ptr [EBX]
// 0048d628: IMUL EDX,EDX,0x30
// 0048d62b: ADD EAX,EDX
// 0048d62d: PUSH EAX
// 0048d62e: CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   XREF to: 00552150 (UNCONDITIONAL_CALL)
// 0048d633: ADD ESP,0xc
// 0048d636: TEST EAX,EAX
// 0048d638: JNZ 0x0048d58a
//   XREF to: 0048d58a (CONDITIONAL_JUMP)
// 0048d63e: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x14] (READ)
// 0048d642: DEC ESI
// 0048d643: ADD EBX,EAX
// 0048d645: TEST ESI,ESI
// 0048d647: JG 0x0048d57d
//   XREF to: 0048d57d (CONDITIONAL_JUMP)
// 0048d64d: ADD ESP,0x58
// 0048d650: POP EBP
// 0048d651: POP EDI
// 0048d652: POP ESI
// 0048d653: POP EBX
// 0048d654: RET
// 0048d655: MOV EAX,ESP
//   Label: LAB_0048d655
// 0048d657: PUSH EAX
// 0048d658: PUSH EDX
// 0048d659: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 0048d65e: JMP 0x0048d5d3
//   XREF to: 0048d5d3 (UNCONDITIONAL_JUMP)
// 0048d663: CMP dword ptr [EAX + 0x4],0x0
//   Label: LAB_0048d663
// 0048d667: JZ 0x0048d672
//   XREF to: 0048d672 (CONDITIONAL_JUMP)
// 0048d669: TEST byte ptr [0x02d052a0],0x1
//   XREF to: 02d052a0 (READ)
// 0048d670: JZ 0x0048d689
//   XREF to: 0048d689 (CONDITIONAL_JUMP)
// 0048d672: TEST byte ptr [0x02d052a0],0x5
//   Label: LAB_0048d672
//   XREF to: 02d052a0 (READ)
// 0048d679: JZ 0x0048d689
//   XREF to: 0048d689 (CONDITIONAL_JUMP)
// 0048d67b: TEST byte ptr [0x02d052a1],0x2
//   XREF to: 02d052a1 (READ)
// 0048d682: JZ 0x0048d655
//   XREF to: 0048d655 (CONDITIONAL_JUMP)
// 0048d684: JMP 0x0048d5ca
//   XREF to: 0048d5ca (UNCONDITIONAL_JUMP)
// 0048d689: MOV EAX,ESP
//   Label: LAB_0048d689
// 0048d68b: PUSH EAX
// 0048d68c: PUSH EDX
// 0048d68d: CALL core_xform.cpp_transformAndClipGeometry_FUN_005f8550
//   XREF to: 005f8550 (UNCONDITIONAL_CALL)
// 0048d692: MOV EAX,[0x00824e24]
//   XREF to: 00824e24 (READ)
// 0048d697: ADD ESP,0x8
// 0048d69a: CMP EAX,0x2
// 0048d69d: JLE 0x0048d5d6
//   XREF to: 0048d5d6 (CONDITIONAL_JUMP)
// 0048d6a3: PUSH EAX
// 0048d6a4: PUSH 0x824e28
//   XREF to: 00824e28 (DATA)
// 0048d6a9: CALL engine_3d.c_rasterizeTriangle_FUN_005fcfc0
//   XREF to: 005fcfc0 (UNCONDITIONAL_CALL)
// 0048d6ae: JMP 0x0048d5d3
//   XREF to: 0048d5d3 (UNCONDITIONAL_JUMP)
