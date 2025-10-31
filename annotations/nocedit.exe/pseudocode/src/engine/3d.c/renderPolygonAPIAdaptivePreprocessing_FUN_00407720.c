// Name: engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407720
// Address: 00407720
// Address Range: [[00407720, 00407869]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407720(SMRGLHeaderPrimitive * polygon_info)
// Globals:
//   int g_BitsPerPixel = 0x8
//   undefined4 g_RenderVertexBuffer[0].u
//   undefined4 g_RenderVertexBuffer[0].v
//   int[24] g_ProcessedVertexIndices
//   undefined4 DAT_00772a9c
//   int g_CurrentLightingValue
//   int g_AdvancedClippingEnabled
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   BOOL g_MMXSupported
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_clipper.c_clipAndRasterize_FUN_004371b0
//   engine_clipper.c_clipPolygonToViewport_FUN_00438420
//   engine_light.cpp_calculateLighting_FUN_00505780

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonAPIAdaptivePreprocessing_FUN_00407720(SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  SMRGLHeaderExtended *pSVar2;
  SMRGLHeaderPrimitive *pSVar3;
  SMRGLHeaderExtended *extraout_EAX;
  SMRGLHeaderExtended *extraout_EAX_00;
  int iVar4;
  int iVar5;
  uint in_stack_00000008;
  int in_stack_00000014;
  
  pSVar2 = (SMRGLHeaderExtended *)
           engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal);
  if (pSVar2 != (SMRGLHeaderExtended *)0x0) {
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
    g_RenderStateFlags = in_stack_00000008;
    if ((in_stack_00000008 & 0x10) != 0) {
      g_CurrentLightingValue =
           engine_light_cpp_calculateLighting_FUN_00505780
                     ((polygon_info->surface_normal).A,(polygon_info->surface_normal).B,
                      (polygon_info->surface_normal).C);
    }
    g_RenderStateFlag2 = in_stack_00000014;
    if (in_stack_00000014 == 0) {
      if ((in_stack_00000008 & 0xc0) != 0) {
        g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
      }
    }
    else {
      g_RenderStateFlag2 = PREPROCESS_TEXTURE_NORMALIZE_ALT;
    }
    iVar4 = 0;
    if (0 < (polygon_info->base).count) {
      iVar5 = 0;
      pSVar3 = polygon_info;
      do {
        iVar1 = pSVar3[1].base.type;
        *(int *)((int)g_ProcessedVertexIndices + iVar5) = iVar1;
        g_RenderVertexBuffer[iVar1].u = (float)pSVar3[1].base.count;
        iVar5 = iVar5 + 4;
        g_RenderVertexBuffer[iVar1].v = (float)pSVar3[1].surface_normal.A;
        iVar4 = iVar4 + 1;
        pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
      } while (iVar4 < (polygon_info->base).count);
    }
    if (g_AdvancedClippingEnabled == 0) {
      engine_clipper_c_clipPolygonToViewport_FUN_00438420
                ((polygon_info->base).count,g_ProcessedVertexIndices);
      return extraout_EAX_00;
    }
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,g_ProcessedVertexIndices);
    pSVar2 = extraout_EAX;
  }
  return pSVar2;
}


// Assembly code:
// 00407720: PUSH EBX
//   Label: engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407720
// 00407721: PUSH ESI
// 00407722: PUSH EDI
// 00407723: PUSH EBP
// 00407724: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00407728: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0040772c: LEA EAX,[EDI + 0x8]
// 0040772f: PUSH EAX
// 00407730: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00407735: ADD ESP,0x4
// 00407738: TEST EAX,EAX
// 0040773a: JZ 0x004077fa
//   XREF to: 004077fa (CONDITIONAL_JUMP)
// 00407740: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00407747: JNZ 0x0040780e
//   XREF to: 0040780e (CONDITIONAL_JUMP)
// 0040774d: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00407754: JNZ 0x004077ff
//   XREF to: 004077ff (CONDITIONAL_JUMP)
// 0040775a: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00407764: MOV dword ptr [0x02d052a0],EBX
//   Label: LAB_00407764
//   XREF to: 02d052a0 (WRITE)
// 0040776a: TEST BL,0x10
// 0040776d: JZ 0x00407788
//   XREF to: 00407788 (CONDITIONAL_JUMP)
// 0040776f: MOV ESI,dword ptr [EDI + 0x10]
// 00407772: PUSH ESI
// 00407773: MOV EBP,dword ptr [EDI + 0xc]
// 00407776: PUSH EBP
// 00407777: MOV EAX,dword ptr [EDI + 0x8]
// 0040777a: PUSH EAX
// 0040777b: CALL engine_light.cpp_calculateLighting_FUN_00505780
//   XREF to: 00505780 (UNCONDITIONAL_CALL)
// 00407780: ADD ESP,0xc
// 00407783: MOV [0x02d02574],EAX
//   XREF to: 02d02574 (WRITE)
// 00407788: MOV EDX,dword ptr [ESP + 0x1c]
//   Label: LAB_00407788
//   XREF to: Stack[0xc] (READ)
// 0040778c: TEST EDX,EDX
// 0040778e: JZ 0x00407835
//   XREF to: 00407835 (CONDITIONAL_JUMP)
// 00407794: MOV dword ptr [0x02d052a4],0x5
//   XREF to: 02d052a4 (WRITE)
// 0040779e: MOV EBP,dword ptr [EDI + 0x4]
//   Label: LAB_0040779e
// 004077a1: XOR ECX,ECX
// 004077a3: TEST EBP,EBP
// 004077a5: JLE 0x004077e0
//   XREF to: 004077e0 (CONDITIONAL_JUMP)
// 004077a7: MOV EAX,EDI
// 004077a9: XOR EDX,EDX
// 004077ab: MOV EBX,dword ptr [EAX + 0x18]
//   Label: LAB_004077ab
// 004077ae: MOV dword ptr [EDX + 0x772a98],EBX
//   XREF to: 00772a98 (WRITE)
//   XREF to: 00772a9c (WRITE)
// 004077b4: IMUL EBX,EBX,0x30
// 004077b7: MOV ESI,dword ptr [EAX + 0x1c]
// 004077ba: MOV dword ptr [EBX + 0x68802c],ESI
//   XREF to: 0068802c (DATA)
// 004077c0: MOV ESI,dword ptr [EAX + 0x20]
// 004077c3: ADD EDX,0x4
// 004077c6: MOV dword ptr [EBX + 0x688030],ESI
//   XREF to: 00688030 (DATA)
// 004077cc: INC ECX
// 004077cd: MOV EBX,dword ptr [EDI + 0x4]
// 004077d0: ADD EAX,0xc
// 004077d3: CMP ECX,EBX
// 004077d5: JL 0x004077ab
//   XREF to: 004077ab (CONDITIONAL_JUMP)
// 004077d7: LEA EAX,[EAX]
// 004077dd: LEA EDX,[EDX]
// 004077e0: CMP dword ptr [0x02d02578],0x0
//   Label: LAB_004077e0
//   XREF to: 02d02578 (READ)
// 004077e7: JZ 0x00407854
//   XREF to: 00407854 (CONDITIONAL_JUMP)
// 004077e9: PUSH 0x772a98
//   XREF to: 00772a98 (DATA)
// 004077ee: MOV EAX,dword ptr [EDI + 0x4]
// 004077f1: PUSH EAX
// 004077f2: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 004077f7: ADD ESP,0x8
// 004077fa: POP EBP
//   Label: LAB_004077fa
// 004077fb: POP EDI
// 004077fc: POP ESI
// 004077fd: POP EBX
// 004077fe: RET
// 004077ff: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_004077ff
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00407809: JMP 0x00407764
//   XREF to: 00407764 (UNCONDITIONAL_JUMP)
// 0040780e: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0040780e
//   XREF to: 0067939c (READ)
// 00407815: JNZ 0x00407826
//   XREF to: 00407826 (CONDITIONAL_JUMP)
// 00407817: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00407821: JMP 0x00407764
//   XREF to: 00407764 (UNCONDITIONAL_JUMP)
// 00407826: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00407826
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00407830: JMP 0x00407764
//   XREF to: 00407764 (UNCONDITIONAL_JUMP)
// 00407835: TEST BL,0xc0
//   Label: LAB_00407835
// 00407838: JZ 0x00407849
//   XREF to: 00407849 (CONDITIONAL_JUMP)
// 0040783a: MOV dword ptr [0x02d052a4],0x1
//   XREF to: 02d052a4 (WRITE)
// 00407844: JMP 0x0040779e
//   XREF to: 0040779e (UNCONDITIONAL_JUMP)
// 00407849: MOV dword ptr [0x02d052a4],EDX
//   Label: LAB_00407849
//   XREF to: 02d052a4 (WRITE)
// 0040784f: JMP 0x0040779e
//   XREF to: 0040779e (UNCONDITIONAL_JUMP)
// 00407854: PUSH 0x772a98
//   Label: LAB_00407854
//   XREF to: 00772a98 (DATA)
// 00407859: MOV EBP,dword ptr [EDI + 0x4]
// 0040785c: PUSH EBP
// 0040785d: CALL engine_clipper.c_clipPolygonToViewport_FUN_00438420
//   XREF to: 00438420 (UNCONDITIONAL_CALL)
// 00407862: ADD ESP,0x8
// 00407865: POP EBP
// 00407866: POP EDI
// 00407867: POP ESI
// 00407868: POP EBX
// 00407869: RET
