// Name: engine_3d.c_renderPolygonTextureAdaptiveWrapped_FUN_00406430
// Address: 00406430
// Address Range: [[00406430, 004066c3]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonTextureAdaptiveWrapped_FUN_00406430(SMRGLHeaderPrimitive * polygon_info)
// Globals:
//   int INT_0066df80 = 0x1
//   int g_BitsPerPixel = 0x8
//   undefined4 g_RenderVertexBuffer[0].u
//   undefined4 g_RenderVertexBuffer[0].v
//   int g_CurrentPolygonColor
//   uint g_ProcessedVertexOffset
//   undefined4 DAT_00772a70
//   int g_TexturesDisabled
//   int[24] g_ProcessedVertexIndices
//   undefined4 DAT_00772a9c
//   int g_ActiveRenderColor
//   int g_CurrentLightingValue
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   BOOL g_MMXSupported
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_3d.c_makeGrayscaleColor_FUN_004039c0
//   engine_clipper.c_clipAndRasterize_FUN_004371b0
//   engine_light.cpp_calculateLighting_FUN_00505780

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonTextureAdaptiveWrapped_FUN_00406430(SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  int *piVar4;
  
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal);
  if (iVar2 != 0) {
    if (g_TexturesDisabled == 0) {
      if (DAT_00772a70 == 0) {
        if (g_MMXSupported == 0) {
          if (g_BitsPerPixel == 0x20) {
            g_ScanlineRenderFunc =
                 wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
          }
          else {
            g_ScanlineRenderFunc =
                 wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
          }
        }
        else if (g_BitsPerPixel == 0x20) {
          g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
        }
        else {
          g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
        }
        if (INT_0066df80 == 0) {
          if (g_MMXSupported == 0) {
            if (g_BitsPerPixel == 0x20) {
              g_ScanlineRenderFunc =
                   wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
            }
            else {
              g_ScanlineRenderFunc =
                   wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
            }
          }
          else if (g_BitsPerPixel == 0x20) {
            g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
          }
          else {
            g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
          }
          g_RenderStateFlag2 = PREPROCESS_NONE;
          g_RenderStateFlags = RENDER_TEXTURE_LIT;
        }
        else {
          g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
          g_RenderStateFlags = RENDER_TEXTURE_LIT;
        }
      }
      else {
        if (g_MMXSupported == 0) {
          if (g_BitsPerPixel == 0x20) {
            g_ScanlineRenderFunc =
                 wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
          }
          else {
            g_ScanlineRenderFunc =
                 wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
          }
        }
        else if (g_BitsPerPixel == 0x20) {
          g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
        }
        else {
          g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
        }
        g_RenderStateFlags = RENDER_TEXTURE_BASE;
        g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
        engine_light_cpp_calculateLighting_FUN_00505780
                  ((polygon_info->surface_normal).A,(polygon_info->surface_normal).B,
                   (polygon_info->surface_normal).C);
        g_ActiveRenderColor = engine_3d_c_makeGrayscaleColor_FUN_004039c0(g_CurrentPolygonColor);
      }
    }
    else {
      if (g_MMXSupported == 0) {
        if (g_BitsPerPixel == 0x20) {
          g_ScanlineRenderFunc = wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
        }
        else {
          g_ScanlineRenderFunc = wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
        }
      }
      else if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
      }
      else {
        g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
      }
      g_RenderStateFlags = 0;
      g_RenderStateFlag2 = PREPROCESS_NONE;
    }
    piVar4 = g_ProcessedVertexIndices;
    pSVar3 = polygon_info + 1;
    for (iVar2 = 0; iVar1 = (polygon_info->base).count,
        SBORROW4(iVar2,iVar1 * 3) != iVar2 + iVar1 * -3 < 0; iVar2 = iVar2 + 3) {
      *piVar4 = (pSVar3->base).type + g_ProcessedVertexOffset;
      g_RenderVertexBuffer[(pSVar3->base).type + g_ProcessedVertexOffset].u =
           (float)(pSVar3->base).count;
      piVar4 = piVar4 + 1;
      g_RenderVertexBuffer[(pSVar3->base).type + g_ProcessedVertexOffset].v =
           (float)(pSVar3->surface_normal).A;
      pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
    }
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,g_ProcessedVertexIndices);
  }
  return (SMRGLHeaderExtended *)((int)&polygon_info[1].base + (polygon_info->base).count * 0xc);
}


// Assembly code:
// 00406430: PUSH ESI
//   Label: engine_3d.c_renderPolygonTextureAdaptiveWrapped_FUN_00406430
// 00406431: PUSH EDI
// 00406432: PUSH EBP
// 00406433: MOV EBP,dword ptr [0x00772a60]
//   XREF to: 00772a60 (READ)
// 00406439: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0040643d: LEA ESI,[EDI + 0x18]
// 00406440: LEA EAX,[EDI + 0x8]
// 00406443: PUSH EAX
// 00406444: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00406449: ADD ESP,0x4
// 0040644c: TEST EAX,EAX
// 0040644e: JZ 0x004066a6
//   XREF to: 004066a6 (CONDITIONAL_JUMP)
// 00406454: PUSH EBX
// 00406455: MOV EDX,dword ptr [0x00772a74]
//   XREF to: 00772a74 (READ)
// 0040645b: MOV EBP,dword ptr [0x00772a60]
//   XREF to: 00772a60 (READ)
// 00406461: TEST EDX,EDX
// 00406463: JZ 0x00406524
//   XREF to: 00406524 (CONDITIONAL_JUMP)
// 00406469: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00406470: JNZ 0x004064fd
//   XREF to: 004064fd (CONDITIONAL_JUMP)
// 00406476: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 0040647d: JNZ 0x004064f1
//   XREF to: 004064f1 (CONDITIONAL_JUMP)
// 0040647f: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00406489: XOR ECX,ECX
//   Label: LAB_00406489
// 0040648b: MOV dword ptr [0x00772a60],EBP
//   XREF to: 00772a60 (WRITE)
// 00406491: MOV dword ptr [0x02d052a4],ECX
//   XREF to: 02d052a4 (WRITE)
// 00406497: MOV dword ptr [0x02d052a0],ECX
//   Label: LAB_00406497
//   XREF to: 02d052a0 (WRITE)
// 0040649d: MOV EBX,0x772a98
//   Label: LAB_0040649d
//   XREF to: 00772a98 (PARAM)
// 004064a2: MOV EBP,dword ptr [0x00772a60]
//   XREF to: 00772a60 (READ)
// 004064a8: MOV EAX,ESI
// 004064aa: XOR ECX,ECX
// 004064ac: MOV EDX,dword ptr [EDI + 0x4]
//   Label: LAB_004064ac
// 004064af: LEA EDX,[EDX + EDX*0x2]
// 004064b2: MOV dword ptr [0x00772a60],EBP
//   XREF to: 00772a60 (WRITE)
// 004064b8: CMP ECX,EDX
// 004064ba: JGE 0x00406694
//   XREF to: 00406694 (CONDITIONAL_JUMP)
// 004064c0: MOV EDX,dword ptr [EAX]
// 004064c2: ADD EDX,EBP
// 004064c4: MOV dword ptr [EBX],EDX
//   XREF to: 00772a98 (WRITE)
//   XREF to: 00772a9c (WRITE)
// 004064c6: MOV EDX,dword ptr [EAX]
// 004064c8: ADD EDX,EBP
// 004064ca: IMUL ESI,EDX,0x30
// 004064cd: MOV EDX,dword ptr [EAX + 0x4]
// 004064d0: MOV dword ptr [ESI + 0x68802c],EDX
//   XREF to: 0068802c (DATA)
// 004064d6: MOV EDX,dword ptr [EAX]
// 004064d8: ADD EDX,EBP
// 004064da: IMUL ESI,EDX,0x30
// 004064dd: ADD EAX,0xc
// 004064e0: ADD EBX,0x4
//   XREF to: 00772a9c (PARAM)
// 004064e3: MOV EDX,dword ptr [EAX + -0x4]
// 004064e6: ADD ECX,0x3
// 004064e9: MOV dword ptr [ESI + 0x688030],EDX
//   XREF to: 00688030 (DATA)
// 004064ef: JMP 0x004064ac
//   XREF to: 004064ac (UNCONDITIONAL_JUMP)
// 004064f1: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_004064f1
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 004064fb: JMP 0x00406489
//   XREF to: 00406489 (UNCONDITIONAL_JUMP)
// 004064fd: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_004064fd
//   XREF to: 0067939c (READ)
// 00406504: JNZ 0x00406515
//   XREF to: 00406515 (CONDITIONAL_JUMP)
// 00406506: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00406510: JMP 0x00406489
//   XREF to: 00406489 (UNCONDITIONAL_JUMP)
// 00406515: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00406515
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0040651f: JMP 0x00406489
//   XREF to: 00406489 (UNCONDITIONAL_JUMP)
// 00406524: CMP dword ptr [0x00772a70],0x0
//   Label: LAB_00406524
//   XREF to: 00772a70 (READ)
// 0040652b: JNZ 0x00406602
//   XREF to: 00406602 (CONDITIONAL_JUMP)
// 00406531: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00406538: JNZ 0x0040659a
//   XREF to: 0040659a (CONDITIONAL_JUMP)
// 0040653a: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00406541: JNZ 0x0040658e
//   XREF to: 0040658e (CONDITIONAL_JUMP)
// 00406543: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 0040654d: CMP dword ptr [0x0066df80],0x0
//   Label: LAB_0040654d
//   XREF to: 0066df80 (READ)
// 00406554: JNZ 0x004065e8
//   XREF to: 004065e8 (CONDITIONAL_JUMP)
// 0040655a: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00406561: JNZ 0x004065c7
//   XREF to: 004065c7 (CONDITIONAL_JUMP)
// 00406563: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 0040656a: JNZ 0x004065bb
//   XREF to: 004065bb (CONDITIONAL_JUMP)
// 0040656c: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00406576: XOR EDX,EDX
//   Label: LAB_00406576
// 00406578: MOV dword ptr [0x02d052a4],EDX
//   XREF to: 02d052a4 (WRITE)
// 0040657e: MOV ECX,0xc1
// 00406583: MOV dword ptr [0x00772a60],EBP
//   XREF to: 00772a60 (WRITE)
// 00406589: JMP 0x00406497
//   XREF to: 00406497 (UNCONDITIONAL_JUMP)
// 0040658e: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_0040658e
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00406598: JMP 0x0040654d
//   XREF to: 0040654d (UNCONDITIONAL_JUMP)
// 0040659a: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0040659a
//   XREF to: 0067939c (READ)
// 004065a1: JNZ 0x004065af
//   XREF to: 004065af (CONDITIONAL_JUMP)
// 004065a3: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 004065ad: JMP 0x0040654d
//   XREF to: 0040654d (UNCONDITIONAL_JUMP)
// 004065af: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_004065af
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 004065b9: JMP 0x0040654d
//   XREF to: 0040654d (UNCONDITIONAL_JUMP)
// 004065bb: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_004065bb
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 004065c5: JMP 0x00406576
//   XREF to: 00406576 (UNCONDITIONAL_JUMP)
// 004065c7: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_004065c7
//   XREF to: 0067939c (READ)
// 004065ce: JNZ 0x004065dc
//   XREF to: 004065dc (CONDITIONAL_JUMP)
// 004065d0: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 004065da: JMP 0x00406576
//   XREF to: 00406576 (UNCONDITIONAL_JUMP)
// 004065dc: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_004065dc
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 004065e6: JMP 0x00406576
//   XREF to: 00406576 (UNCONDITIONAL_JUMP)
// 004065e8: MOV dword ptr [0x02d052a4],0x1
//   Label: LAB_004065e8
//   XREF to: 02d052a4 (WRITE)
// 004065f2: MOV ECX,0xc1
// 004065f7: MOV dword ptr [0x00772a60],EBP
//   XREF to: 00772a60 (WRITE)
// 004065fd: JMP 0x00406497
//   XREF to: 00406497 (UNCONDITIONAL_JUMP)
// 00406602: CMP dword ptr [0x02d05248],0x0
//   Label: LAB_00406602
//   XREF to: 02d05248 (READ)
// 00406609: JNZ 0x00406673
//   XREF to: 00406673 (CONDITIONAL_JUMP)
// 0040660b: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00406612: JNZ 0x00406667
//   XREF to: 00406667 (CONDITIONAL_JUMP)
// 00406614: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 0040661e: MOV EAX,dword ptr [EDI + 0x10]
//   Label: LAB_0040661e
// 00406621: MOV ECX,0xc0
// 00406626: PUSH EAX
// 00406627: MOV EDX,dword ptr [EDI + 0xc]
// 0040662a: MOV dword ptr [0x02d052a0],ECX
//   XREF to: 02d052a0 (WRITE)
// 00406630: PUSH EDX
// 00406631: MOV ECX,dword ptr [EDI + 0x8]
// 00406634: MOV EBX,0x1
// 00406639: PUSH ECX
// 0040663a: MOV dword ptr [0x02d052a4],EBX
//   XREF to: 02d052a4 (WRITE)
// 00406640: CALL engine_light.cpp_calculateLighting_FUN_00505780
//   XREF to: 00505780 (UNCONDITIONAL_CALL)
// 00406645: ADD ESP,0xc
// 00406648: MOV EBX,dword ptr [0x02d02574]
//   XREF to: 02d02574 (READ)
// 0040664e: PUSH EBX
// 0040664f: MOV EAX,[0x00772a5c]
//   XREF to: 00772a5c (READ)
// 00406654: PUSH EAX
// 00406655: CALL engine_3d.c_makeGrayscaleColor_FUN_004039c0
//   XREF to: 004039c0 (UNCONDITIONAL_CALL)
// 0040665a: ADD ESP,0x8
// 0040665d: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 00406662: JMP 0x0040649d
//   XREF to: 0040649d (UNCONDITIONAL_JUMP)
// 00406667: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00406667
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00406671: JMP 0x0040661e
//   XREF to: 0040661e (UNCONDITIONAL_JUMP)
// 00406673: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00406673
//   XREF to: 0067939c (READ)
// 0040667a: JNZ 0x00406688
//   XREF to: 00406688 (CONDITIONAL_JUMP)
// 0040667c: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00406686: JMP 0x0040661e
//   XREF to: 0040661e (UNCONDITIONAL_JUMP)
// 00406688: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00406688
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00406692: JMP 0x0040661e
//   XREF to: 0040661e (UNCONDITIONAL_JUMP)
// 00406694: PUSH 0x772a98
//   Label: LAB_00406694
//   XREF to: 00772a98 (DATA)
// 00406699: MOV ESI,dword ptr [EDI + 0x4]
// 0040669c: PUSH ESI
// 0040669d: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 004066a2: ADD ESP,0x8
// 004066a5: POP EBX
// 004066a6: MOV EDX,dword ptr [EDI + 0x4]
//   Label: LAB_004066a6
// 004066a9: LEA EAX,[EDX*0x4 + 0x0]
// 004066b0: SUB EAX,EDX
// 004066b2: ADD EDI,0x18
// 004066b5: SHL EAX,0x2
// 004066b8: MOV EBP,dword ptr [0x00772a60]
//   XREF to: 00772a60 (READ)
// 004066be: ADD EAX,EDI
// 004066c0: POP EBP
// 004066c1: POP EDI
// 004066c2: POP ESI
// 004066c3: RET
