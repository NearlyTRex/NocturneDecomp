// Name: engine_3d.c_renderPrimitiveAdaptivePlaneMasked_FUN_00404840
// Address: 00404840
// Address Range: [[00404840, 00404a39]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPrimitiveAdaptivePlaneMasked_FUN_00404840(SMRGLHeaderPrimitive * primitive)
// Globals:
//   int g_BitsPerPixel = 0x8
//   undefined4 g_RenderVertexBuffer[0].u
//   undefined4 g_RenderVertexBuffer[0].v
//   int g_CurrentPolygonColor
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
//   engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_3d.c_makeGrayscaleColor_FUN_004039c0
//   engine_clipper.c_clipAndRasterize_FUN_004371b0
//   engine_light.cpp_calculateLighting_FUN_00505780

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPrimitiveAdaptivePlaneMasked_FUN_00404840(SMRGLHeaderPrimitive *primitive)

{
  int iVar1;
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  int iVar4;
  int vertex_count;
  
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&primitive->surface_normal);
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
        g_RenderStateFlags = RENDER_PLANE_MASKED_LIT;
        g_RenderStateFlag2 = PREPROCESS_NEAR_PLANE_CORRECT;
        engine_3d_c_calculatePolygonLighting_FUN_00403a00(primitive);
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
        g_RenderStateFlags = RENDER_PLANE_MASKED;
        g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
        engine_light_cpp_calculateLighting_FUN_00505780
                  ((primitive->surface_normal).A,(primitive->surface_normal).B,
                   (primitive->surface_normal).C);
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
      g_RenderStateFlag2 = 0;
      g_RenderStateFlags = 0;
    }
    iVar2 = 0;
    vertex_count = 0;
    pSVar3 = primitive + 1;
    for (iVar4 = 0; iVar1 = (primitive->base).count,
        SBORROW4(iVar4,iVar1 * 3) != iVar4 + iVar1 * -3 < 0; iVar4 = iVar4 + 3) {
      iVar1 = (pSVar3->base).type;
      *(int *)((int)g_ProcessedVertexIndices + iVar2) = iVar1;
      g_RenderVertexBuffer[iVar1].u = (float)(pSVar3->base).count;
      iVar2 = iVar2 + 4;
      vertex_count = vertex_count + 1;
      g_RenderVertexBuffer[(pSVar3->base).type].v = (float)(pSVar3->surface_normal).A;
      pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
    }
    engine_clipper_c_clipAndRasterize_FUN_004371b0(vertex_count,g_ProcessedVertexIndices);
  }
  return (SMRGLHeaderExtended *)((int)&primitive[1].base + (primitive->base).count * 0xc);
}


// Assembly code:
// 00404840: PUSH ESI
//   Label: engine_3d.c_renderPrimitiveAdaptivePlaneMasked_FUN_00404840
// 00404841: PUSH EBP
// 00404842: MOV EBP,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00404846: LEA ESI,[EBP + 0x18]
// 00404849: LEA EAX,[EBP + 0x8]
// 0040484c: PUSH EAX
// 0040484d: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00404852: ADD ESP,0x4
// 00404855: TEST EAX,EAX
// 00404857: JZ 0x00404a1f
//   XREF to: 00404a1f (CONDITIONAL_JUMP)
// 0040485d: PUSH EDI
// 0040485e: PUSH EBX
// 0040485f: CMP dword ptr [0x00772a74],0x0
//   XREF to: 00772a74 (READ)
// 00404866: JZ 0x00404905
//   XREF to: 00404905 (CONDITIONAL_JUMP)
// 0040486c: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00404873: JNZ 0x004048e4
//   XREF to: 004048e4 (CONDITIONAL_JUMP)
// 00404875: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 0040487c: JNZ 0x004048d8
//   XREF to: 004048d8 (CONDITIONAL_JUMP)
// 0040487e: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00404888: XOR EBX,EBX
//   Label: LAB_00404888
// 0040488a: MOV dword ptr [0x02d052a4],EBX
//   XREF to: 02d052a4 (WRITE)
// 00404890: MOV dword ptr [0x02d052a0],EBX
//   XREF to: 02d052a0 (WRITE)
// 00404896: MOV EAX,ESI
//   Label: LAB_00404896
// 00404898: XOR EDX,EDX
// 0040489a: XOR ECX,ECX
// 0040489c: XOR EBX,EBX
// 0040489e: MOV ESI,dword ptr [EBP + 0x4]
//   Label: LAB_0040489e
// 004048a1: LEA ESI,[ESI + ESI*0x2]
// 004048a4: CMP EDX,ESI
// 004048a6: JGE 0x00404a0f
//   XREF to: 00404a0f (CONDITIONAL_JUMP)
// 004048ac: MOV ESI,dword ptr [EAX]
// 004048ae: MOV dword ptr [ECX + 0x772a98],ESI
//   XREF to: 00772a98 (WRITE)
//   XREF to: 00772a9c (WRITE)
// 004048b4: IMUL EDI,ESI,0x30
// 004048b7: MOV ESI,dword ptr [EAX + 0x4]
// 004048ba: MOV dword ptr [EDI + 0x68802c],ESI
//   XREF to: 0068802c (DATA)
// 004048c0: IMUL EDI,dword ptr [EAX],0x30
// 004048c3: ADD EAX,0xc
// 004048c6: ADD ECX,0x4
// 004048c9: INC EBX
// 004048ca: MOV ESI,dword ptr [EAX + -0x4]
// 004048cd: ADD EDX,0x3
// 004048d0: MOV dword ptr [EDI + 0x688030],ESI
//   XREF to: 00688030 (DATA)
// 004048d6: JMP 0x0040489e
//   XREF to: 0040489e (UNCONDITIONAL_JUMP)
// 004048d8: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_004048d8
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 004048e2: JMP 0x00404888
//   XREF to: 00404888 (UNCONDITIONAL_JUMP)
// 004048e4: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_004048e4
//   XREF to: 0067939c (READ)
// 004048eb: JNZ 0x004048f9
//   XREF to: 004048f9 (CONDITIONAL_JUMP)
// 004048ed: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 004048f7: JMP 0x00404888
//   XREF to: 00404888 (UNCONDITIONAL_JUMP)
// 004048f9: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_004048f9
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00404903: JMP 0x00404888
//   XREF to: 00404888 (UNCONDITIONAL_JUMP)
// 00404905: CMP dword ptr [0x00772a70],0x0
//   Label: LAB_00404905
//   XREF to: 00772a70 (READ)
// 0040490c: JNZ 0x0040497e
//   XREF to: 0040497e (CONDITIONAL_JUMP)
// 00404912: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00404919: JNZ 0x0040495d
//   XREF to: 0040495d (CONDITIONAL_JUMP)
// 0040491b: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00404922: JNZ 0x00404951
//   XREF to: 00404951 (CONDITIONAL_JUMP)
// 00404924: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 0040492e: MOV EDI,0xd1
//   Label: LAB_0040492e
// 00404933: MOV EAX,0x3
// 00404938: PUSH EBP
// 00404939: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 0040493f: MOV [0x02d052a4],EAX
//   XREF to: 02d052a4 (WRITE)
// 00404944: CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   XREF to: 00403a00 (UNCONDITIONAL_CALL)
// 00404949: ADD ESP,0x4
// 0040494c: JMP 0x00404896
//   XREF to: 00404896 (UNCONDITIONAL_JUMP)
// 00404951: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00404951
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 0040495b: JMP 0x0040492e
//   XREF to: 0040492e (UNCONDITIONAL_JUMP)
// 0040495d: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0040495d
//   XREF to: 0067939c (READ)
// 00404964: JNZ 0x00404972
//   XREF to: 00404972 (CONDITIONAL_JUMP)
// 00404966: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00404970: JMP 0x0040492e
//   XREF to: 0040492e (UNCONDITIONAL_JUMP)
// 00404972: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00404972
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0040497c: JMP 0x0040492e
//   XREF to: 0040492e (UNCONDITIONAL_JUMP)
// 0040497e: CMP dword ptr [0x02d05248],0x0
//   Label: LAB_0040497e
//   XREF to: 02d05248 (READ)
// 00404985: JNZ 0x004049ee
//   XREF to: 004049ee (CONDITIONAL_JUMP)
// 00404987: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 0040498e: JNZ 0x004049e2
//   XREF to: 004049e2 (CONDITIONAL_JUMP)
// 00404990: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 0040499a: MOV ECX,dword ptr [EBP + 0x10]
//   Label: LAB_0040499a
// 0040499d: PUSH ECX
// 0040499e: MOV EBX,dword ptr [EBP + 0xc]
// 004049a1: MOV EAX,0xd0
// 004049a6: PUSH EBX
// 004049a7: MOV EDI,dword ptr [EBP + 0x8]
// 004049aa: MOV EDX,0x1
// 004049af: PUSH EDI
// 004049b0: MOV [0x02d052a0],EAX
//   XREF to: 02d052a0 (WRITE)
// 004049b5: MOV dword ptr [0x02d052a4],EDX
//   XREF to: 02d052a4 (WRITE)
// 004049bb: CALL engine_light.cpp_calculateLighting_FUN_00505780
//   XREF to: 00505780 (UNCONDITIONAL_CALL)
// 004049c0: ADD ESP,0xc
// 004049c3: MOV EAX,[0x02d02574]
//   XREF to: 02d02574 (READ)
// 004049c8: PUSH EAX
// 004049c9: MOV EDX,dword ptr [0x00772a5c]
//   XREF to: 00772a5c (READ)
// 004049cf: PUSH EDX
// 004049d0: CALL engine_3d.c_makeGrayscaleColor_FUN_004039c0
//   XREF to: 004039c0 (UNCONDITIONAL_CALL)
// 004049d5: ADD ESP,0x8
// 004049d8: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 004049dd: JMP 0x00404896
//   XREF to: 00404896 (UNCONDITIONAL_JUMP)
// 004049e2: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_004049e2
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 004049ec: JMP 0x0040499a
//   XREF to: 0040499a (UNCONDITIONAL_JUMP)
// 004049ee: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_004049ee
//   XREF to: 0067939c (READ)
// 004049f5: JNZ 0x00404a03
//   XREF to: 00404a03 (CONDITIONAL_JUMP)
// 004049f7: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00404a01: JMP 0x0040499a
//   XREF to: 0040499a (UNCONDITIONAL_JUMP)
// 00404a03: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00404a03
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00404a0d: JMP 0x0040499a
//   XREF to: 0040499a (UNCONDITIONAL_JUMP)
// 00404a0f: PUSH 0x772a98
//   Label: LAB_00404a0f
//   XREF to: 00772a98 (DATA)
// 00404a14: PUSH EBX
// 00404a15: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00404a1a: ADD ESP,0x8
// 00404a1d: POP EBX
// 00404a1e: POP EDI
// 00404a1f: MOV EDX,dword ptr [EBP + 0x4]
//   Label: LAB_00404a1f
// 00404a22: LEA EAX,[EDX*0x4 + 0x0]
// 00404a29: SUB EAX,EDX
// 00404a2b: LEA EDX,[EAX*0x4 + 0x0]
// 00404a32: LEA EAX,[EBP + 0x18]
// 00404a35: ADD EAX,EDX
// 00404a37: POP EBP
// 00404a38: POP ESI
// 00404a39: RET
