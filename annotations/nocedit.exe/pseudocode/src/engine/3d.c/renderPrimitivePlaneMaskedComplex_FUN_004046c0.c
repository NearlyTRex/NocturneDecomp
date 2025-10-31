// Name: engine_3d.c_renderPrimitivePlaneMaskedComplex_FUN_004046c0
// Address: 004046c0
// Address Range: [[004046c0, 00404831]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPrimitivePlaneMaskedComplex_FUN_004046c0(SMRGLHeaderPrimitive * primitive)
// Cross-references:
//   engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0 (00407aa0) at 00407c39 [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   undefined4 g_RenderVertexBuffer[0].u
//   undefined4 g_RenderVertexBuffer[0].v
//   uint g_ProcessedVertexOffset
//   int[24] g_ProcessedVertexIndices
//   undefined4 DAT_00772a9c
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   float g_PerspectiveReciprocal
//   BOOL g_MMXSupported
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_clipper.c_clipAndRasterize_FUN_004371b0

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPrimitivePlaneMaskedComplex_FUN_004046c0(SMRGLHeaderPrimitive *primitive)

{
  int iVar1;
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  int *piVar4;
  
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&primitive->surface_normal);
  if (iVar2 == 0) goto LAB_004046e0;
  engine_3d_c_calculatePolygonLighting_FUN_00403a00(primitive);
  if (g_PerspectiveReciprocal == 0.0) {
    if (g_MMXSupported == 0) {
      if (g_BitsPerPixel == 0x20) goto LAB_00404736;
      g_ScanlineRenderFunc = wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
    }
    else {
      if (g_BitsPerPixel != 0x20) goto LAB_004047c8;
      g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
    }
  }
  else if (g_MMXSupported == 0) {
    if (g_BitsPerPixel == 0x20) {
LAB_00404736:
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
LAB_004047c8:
    g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
  }
  piVar4 = g_ProcessedVertexIndices;
  g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
  g_RenderStateFlags = RENDER_FULL_FEATURED;
  pSVar3 = primitive + 1;
  for (iVar2 = 0; iVar1 = (primitive->base).count,
      SBORROW4(iVar2,iVar1 * 3) != iVar2 + iVar1 * -3 < 0; iVar2 = iVar2 + 3) {
    *piVar4 = (pSVar3->base).type + g_ProcessedVertexOffset;
    g_RenderVertexBuffer[(pSVar3->base).type + g_ProcessedVertexOffset].u =
         (float)(pSVar3->base).count;
    piVar4 = piVar4 + 1;
    g_RenderVertexBuffer[(pSVar3->base).type + g_ProcessedVertexOffset].v =
         (float)(pSVar3->surface_normal).A;
    pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
  }
  engine_clipper_c_clipAndRasterize_FUN_004371b0((primitive->base).count,g_ProcessedVertexIndices);
LAB_004046e0:
  return (SMRGLHeaderExtended *)((int)&primitive[1].base + (primitive->base).count * 0xc);
}


// Assembly code:
// 004046c0: PUSH ESI
//   Label: engine_3d.c_renderPrimitivePlaneMaskedComplex_FUN_004046c0
// 004046c1: PUSH EDI
// 004046c2: PUSH EBP
// 004046c3: MOV EBP,dword ptr [0x00772a60]
//   XREF to: 00772a60 (READ)
// 004046c9: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004046cd: LEA ESI,[EDI + 0x18]
// 004046d0: LEA EAX,[EDI + 0x8]
// 004046d3: PUSH EAX
// 004046d4: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 004046d9: ADD ESP,0x4
// 004046dc: TEST EAX,EAX
// 004046de: JNZ 0x00404702
//   XREF to: 00404702 (CONDITIONAL_JUMP)
// 004046e0: MOV EDX,dword ptr [EDI + 0x4]
//   Label: LAB_004046e0
// 004046e3: LEA EAX,[EDX*0x4 + 0x0]
// 004046ea: SUB EAX,EDX
// 004046ec: LEA EDX,[EAX*0x4 + 0x0]
// 004046f3: LEA EAX,[EDI + 0x18]
// 004046f6: MOV EBP,dword ptr [0x00772a60]
//   XREF to: 00772a60 (READ)
// 004046fc: ADD EAX,EDX
// 004046fe: POP EBP
// 004046ff: POP EDI
// 00404700: POP ESI
// 00404701: RET
// 00404702: PUSH EDI
//   Label: LAB_00404702
// 00404703: CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   XREF to: 00403a00 (UNCONDITIONAL_CALL)
// 00404708: MOV EDX,dword ptr [0x02d051f4]
//   XREF to: 02d051f4 (READ)
// 0040470e: ADD ESP,0x4
// 00404711: TEST EDX,EDX
// 00404713: JZ 0x004047d7
//   XREF to: 004047d7 (CONDITIONAL_JUMP)
// 00404719: MOV EDX,dword ptr [0x02d05248]
//   XREF to: 02d05248 (READ)
// 0040471f: MOV EBP,dword ptr [0x00772a60]
//   XREF to: 00772a60 (READ)
// 00404725: TEST EDX,EDX
// 00404727: JNZ 0x004047b0
//   XREF to: 004047b0 (CONDITIONAL_JUMP)
// 0040472d: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00404734: JNZ 0x004047a4
//   XREF to: 004047a4 (CONDITIONAL_JUMP)
// 00404736: MOV dword ptr [0x02d0257c],0x5b50ec
//   Label: LAB_00404736
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00404740: PUSH EBX
//   Label: LAB_00404740
// 00404741: MOV EAX,0x1
// 00404746: MOV EDX,0xd9
// 0040474b: MOV EBX,0x772a98
//   XREF to: 00772a98 (PARAM)
// 00404750: XOR ECX,ECX
// 00404752: MOV [0x02d052a4],EAX
//   XREF to: 02d052a4 (WRITE)
// 00404757: MOV dword ptr [0x02d052a0],EDX
//   XREF to: 02d052a0 (WRITE)
// 0040475d: MOV EAX,ESI
// 0040475f: MOV EDX,dword ptr [EDI + 0x4]
//   Label: LAB_0040475f
// 00404762: LEA EDX,[EDX + EDX*0x2]
// 00404765: MOV dword ptr [0x00772a60],EBP
//   XREF to: 00772a60 (WRITE)
// 0040476b: CMP ECX,EDX
// 0040476d: JGE 0x0040481b
//   XREF to: 0040481b (CONDITIONAL_JUMP)
// 00404773: MOV EDX,dword ptr [EAX]
// 00404775: ADD EDX,EBP
// 00404777: MOV dword ptr [EBX],EDX
//   XREF to: 00772a98 (WRITE)
//   XREF to: 00772a9c (WRITE)
// 00404779: MOV EDX,dword ptr [EAX]
// 0040477b: ADD EDX,EBP
// 0040477d: IMUL EDX,EDX,0x30
// 00404780: MOV ESI,dword ptr [EAX + 0x4]
// 00404783: MOV dword ptr [EDX + 0x68802c],ESI
//   XREF to: 0068802c (DATA)
// 00404789: MOV EDX,dword ptr [EAX]
// 0040478b: ADD EDX,EBP
// 0040478d: IMUL ESI,EDX,0x30
// 00404790: ADD EAX,0xc
// 00404793: ADD EBX,0x4
//   XREF to: 00772a9c (PARAM)
// 00404796: MOV EDX,dword ptr [EAX + -0x4]
// 00404799: ADD ECX,0x3
// 0040479c: MOV dword ptr [ESI + 0x688030],EDX
//   XREF to: 00688030 (DATA)
// 004047a2: JMP 0x0040475f
//   XREF to: 0040475f (UNCONDITIONAL_JUMP)
// 004047a4: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_004047a4
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 004047ae: JMP 0x00404740
//   XREF to: 00404740 (UNCONDITIONAL_JUMP)
// 004047b0: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_004047b0
//   XREF to: 0067939c (READ)
// 004047b7: JNZ 0x004047c8
//   XREF to: 004047c8 (CONDITIONAL_JUMP)
// 004047b9: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 004047c3: JMP 0x00404740
//   XREF to: 00404740 (UNCONDITIONAL_JUMP)
// 004047c8: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_004047c8
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 004047d2: JMP 0x00404740
//   XREF to: 00404740 (UNCONDITIONAL_JUMP)
// 004047d7: MOV ECX,dword ptr [0x02d05248]
//   Label: LAB_004047d7
//   XREF to: 02d05248 (READ)
// 004047dd: MOV EBP,dword ptr [0x00772a60]
//   XREF to: 00772a60 (READ)
// 004047e3: TEST ECX,ECX
// 004047e5: JNZ 0x00404803
//   XREF to: 00404803 (CONDITIONAL_JUMP)
// 004047e7: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 004047ee: JZ 0x00404736
//   XREF to: 00404736 (CONDITIONAL_JUMP)
// 004047f4: MOV dword ptr [0x02d0257c],0x5b5322
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 004047fe: JMP 0x00404740
//   XREF to: 00404740 (UNCONDITIONAL_JUMP)
// 00404803: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00404803
//   XREF to: 0067939c (READ)
// 0040480a: JNZ 0x004047c8
//   XREF to: 004047c8 (CONDITIONAL_JUMP)
// 0040480c: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00404816: JMP 0x00404740
//   XREF to: 00404740 (UNCONDITIONAL_JUMP)
// 0040481b: PUSH 0x772a98
//   Label: LAB_0040481b
//   XREF to: 00772a98 (DATA)
// 00404820: MOV ECX,dword ptr [EDI + 0x4]
// 00404823: PUSH ECX
// 00404824: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00404829: ADD ESP,0x8
// 0040482c: POP EBX
// 0040482d: JMP 0x004046e0
//   XREF to: 004046e0 (UNCONDITIONAL_JUMP)
