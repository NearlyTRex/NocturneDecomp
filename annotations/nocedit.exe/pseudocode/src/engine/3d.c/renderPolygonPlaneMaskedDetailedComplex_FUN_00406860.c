// Name: engine_3d.c_renderPolygonPlaneMaskedDetailedComplex_FUN_00406860
// Address: 00406860
// Address Range: [[00406860, 00406a14]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonPlaneMaskedDetailedComplex_FUN_00406860(SMRGLHeaderPrimitive * polygon_info)
// Globals:
//   int g_BitsPerPixel = 0x8
//   int g_CurrentTextureDimension = 0x100
//   int g_CurrentAlphaValue = 0xff
//   undefined4 g_RenderVertexBuffer[0].u
//   undefined4 g_RenderVertexBuffer[0].v
//   int[24] g_ProcessedVertexIndices
//   undefined4 DAT_00772a9c
//   undefined4 DAT_00fbffff
//   undefined4 DAT_00feffff
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   BOOL g_MMXSupported
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_clipper.c_clipAndRasterize_FUN_004371b0

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonPlaneMaskedDetailedComplex_FUN_00406860(SMRGLHeaderPrimitive *polygon_info)

{
  SMRGLHeaderBasic *pSVar1;
  int iVar2;
  float fVar3;
  SMRGLHeaderPrimitive *pSVar4;
  float fVar5;
  int iVar6;
  int vertex_count;
  SMRGLHeaderPrimitive *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  pSVar4 = polygon_info + 1;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal);
  if (iVar2 != 0) {
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
    g_RenderStateFlags = RENDER_PLANE_MASKED_COMPLEX;
    engine_3d_c_calculatePolygonLighting_FUN_00403a00(in_stack_00000008);
    if (g_CurrentAlphaValue < 0xff) {
      g_RenderStateFlags = g_RenderStateFlags | 0x20;
    }
    iVar6 = 0;
    g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
    vertex_count = 0;
    for (iVar2 = 0;
        SBORROW4(iVar2,*(int *)(in_stack_0000000c + 4) * 3) !=
        iVar2 + *(int *)(in_stack_0000000c + 4) * -3 < 0; iVar2 = iVar2 + 3) {
      *(int *)((int)g_ProcessedVertexIndices + iVar6) = (pSVar4->base).type;
      fVar3 = (float)(pSVar4->base).count;
      fVar5 = (float)(pSVar4->surface_normal).A;
      if (g_CurrentTextureDimension < 0x41) {
        if ((int)fVar3 < 0x40000) {
          fVar3 = 3.67342e-40;
        }
        if ((int)fVar5 < 0x40000) {
          fVar5 = 3.67342e-40;
        }
        if (0xfbffff < (int)fVar3) {
          fVar3 = 2.3142544e-38;
        }
        if (0xfbffff < (int)fVar5) {
          fVar5 = 2.3142544e-38;
        }
      }
      else {
        if ((int)fVar3 < 0x10000) {
          fVar3 = 9.18355e-41;
        }
        if ((int)fVar5 < 0x10000) {
          fVar5 = 9.18355e-41;
        }
        if (0xfeffff < (int)fVar3) {
          fVar3 = 2.341805e-38;
        }
        if (0xfeffff < (int)fVar5) {
          fVar5 = 2.341805e-38;
        }
      }
      g_RenderVertexBuffer[(pSVar4->base).type].u = fVar3;
      pSVar1 = &pSVar4->base;
      iVar6 = iVar6 + 4;
      vertex_count = vertex_count + 1;
      pSVar4 = (SMRGLHeaderPrimitive *)&(pSVar4->surface_normal).B;
      g_RenderVertexBuffer[pSVar1->type].v = fVar5;
    }
    engine_clipper_c_clipAndRasterize_FUN_004371b0(vertex_count,g_ProcessedVertexIndices);
  }
  return (SMRGLHeaderExtended *)(in_stack_00000010 + 0x18 + *(int *)(in_stack_00000010 + 4) * 0xc);
}


// Assembly code:
// 00406860: PUSH EBP
//   Label: engine_3d.c_renderPolygonPlaneMaskedDetailedComplex_FUN_00406860
// 00406861: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00406865: ADD EAX,0x8
// 00406868: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0040686c: PUSH EAX
// 0040686d: ADD EBP,0x18
// 00406870: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00406875: ADD ESP,0x4
// 00406878: TEST EAX,EAX
// 0040687a: JZ 0x004069f3
//   XREF to: 004069f3 (CONDITIONAL_JUMP)
// 00406880: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00406887: JNZ 0x0040696d
//   XREF to: 0040696d (CONDITIONAL_JUMP)
// 0040688d: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00406894: JNZ 0x0040695e
//   XREF to: 0040695e (CONDITIONAL_JUMP)
// 0040689a: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 004068a4: PUSH EDI
//   Label: LAB_004068a4
// 004068a5: PUSH ESI
// 004068a6: PUSH EBX
// 004068a7: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004068ab: MOV ECX,0xd3
// 004068b0: PUSH EBX
// 004068b1: MOV dword ptr [0x02d052a0],ECX
//   XREF to: 02d052a0 (WRITE)
// 004068b7: CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   XREF to: 00403a00 (UNCONDITIONAL_CALL)
// 004068bc: MOV ESI,dword ptr [0x006793b4]
//   XREF to: 006793b4 (READ)
// 004068c2: ADD ESP,0x4
// 004068c5: CMP ESI,0xff
// 004068cb: JL 0x00406994
//   XREF to: 00406994 (CONDITIONAL_JUMP)
// 004068d1: MOV EDI,0x1
//   Label: LAB_004068d1
// 004068d6: MOV ECX,EBP
// 004068d8: XOR EBX,EBX
// 004068da: XOR ESI,ESI
// 004068dc: MOV dword ptr [0x02d052a4],EDI
//   XREF to: 02d052a4 (WRITE)
// 004068e2: XOR EDI,EDI
// 004068e4: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_004068e4
//   XREF to: Stack[0x4] (READ)
// 004068e8: MOV EAX,dword ptr [EAX + 0x4]
// 004068eb: LEA EAX,[EAX + EAX*0x2]
// 004068ee: CMP EBX,EAX
// 004068f0: JGE 0x004069e2
//   XREF to: 004069e2 (CONDITIONAL_JUMP)
// 004068f6: MOV EAX,dword ptr [ECX]
// 004068f8: MOV dword ptr [ESI + 0x772a98],EAX
//   XREF to: 00772a98 (WRITE)
//   XREF to: 00772a9c (WRITE)
// 004068fe: MOV EBP,dword ptr [0x006793a4]
//   XREF to: 006793a4 (READ)
// 00406904: MOV EAX,dword ptr [ECX + 0x4]
// 00406907: MOV EDX,dword ptr [ECX + 0x8]
// 0040690a: CMP EBP,0x40
// 0040690d: JG 0x004069a7
//   XREF to: 004069a7 (CONDITIONAL_JUMP)
// 00406913: CMP EAX,0x40000
// 00406918: JGE 0x0040691f
//   XREF to: 0040691f (CONDITIONAL_JUMP)
// 0040691a: MOV EAX,0x40000
// 0040691f: CMP EDX,0x40000
//   Label: LAB_0040691f
// 00406925: JGE 0x0040692c
//   XREF to: 0040692c (CONDITIONAL_JUMP)
// 00406927: MOV EDX,0x40000
// 0040692c: CMP EAX,0xfbffff
//   Label: LAB_0040692c
//   XREF to: 00fbffff (DATA)
// 00406931: JLE 0x00406938
//   XREF to: 00406938 (CONDITIONAL_JUMP)
// 00406933: MOV EAX,0xfbffff
//   XREF to: 00fbffff (DATA)
// 00406938: CMP EDX,0xfbffff
//   Label: LAB_00406938
//   XREF to: 00fbffff (DATA)
// 0040693e: JG 0x004069a0
//   XREF to: 004069a0 (CONDITIONAL_JUMP)
// 00406940: IMUL EBP,dword ptr [ECX],0x30
//   Label: LAB_00406940
// 00406943: MOV dword ptr [EBP + 0x68802c],EAX
//   XREF to: 0068802c (DATA)
//   XREF to: 00fbffff (DATA)
// 00406949: IMUL EAX,dword ptr [ECX],0x30
// 0040694c: ADD ESI,0x4
// 0040694f: INC EDI
// 00406950: ADD EBX,0x3
// 00406953: ADD ECX,0xc
// 00406956: MOV dword ptr [EAX + 0x688030],EDX
//   XREF to: 00688030 (DATA)
//   XREF to: 00fbffff (DATA)
//   XREF to: 00feffff (DATA)
// 0040695c: JMP 0x004068e4
//   XREF to: 004068e4 (UNCONDITIONAL_JUMP)
// 0040695e: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_0040695e
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00406968: JMP 0x004068a4
//   XREF to: 004068a4 (UNCONDITIONAL_JUMP)
// 0040696d: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0040696d
//   XREF to: 0067939c (READ)
// 00406974: JNZ 0x00406985
//   XREF to: 00406985 (CONDITIONAL_JUMP)
// 00406976: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00406980: JMP 0x004068a4
//   XREF to: 004068a4 (UNCONDITIONAL_JUMP)
// 00406985: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00406985
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0040698f: JMP 0x004068a4
//   XREF to: 004068a4 (UNCONDITIONAL_JUMP)
// 00406994: OR byte ptr [0x02d052a0],0x20
//   Label: LAB_00406994
//   XREF to: 02d052a0 (READ_WRITE)
// 0040699b: JMP 0x004068d1
//   XREF to: 004068d1 (UNCONDITIONAL_JUMP)
// 004069a0: MOV EDX,0xfbffff
//   Label: LAB_004069a0
//   XREF to: 00fbffff (DATA)
// 004069a5: JMP 0x00406940
//   XREF to: 00406940 (UNCONDITIONAL_JUMP)
// 004069a7: CMP EAX,0x10000
//   Label: LAB_004069a7
// 004069ac: JGE 0x004069b3
//   XREF to: 004069b3 (CONDITIONAL_JUMP)
// 004069ae: MOV EAX,0x10000
// 004069b3: CMP EDX,0x10000
//   Label: LAB_004069b3
// 004069b9: JGE 0x004069c0
//   XREF to: 004069c0 (CONDITIONAL_JUMP)
// 004069bb: MOV EDX,0x10000
// 004069c0: CMP EAX,0xfeffff
//   Label: LAB_004069c0
//   XREF to: 00feffff (DATA)
// 004069c5: JLE 0x004069cc
//   XREF to: 004069cc (CONDITIONAL_JUMP)
// 004069c7: MOV EAX,0xfeffff
//   XREF to: 00feffff (DATA)
// 004069cc: CMP EDX,0xfeffff
//   Label: LAB_004069cc
//   XREF to: 00feffff (DATA)
// 004069d2: JLE 0x00406940
//   XREF to: 00406940 (CONDITIONAL_JUMP)
// 004069d8: MOV EDX,0xfeffff
//   XREF to: 00feffff (DATA)
// 004069dd: JMP 0x00406940
//   XREF to: 00406940 (UNCONDITIONAL_JUMP)
// 004069e2: PUSH 0x772a98
//   Label: LAB_004069e2
//   XREF to: 00772a98 (DATA)
// 004069e7: PUSH EDI
// 004069e8: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 004069ed: ADD ESP,0x8
// 004069f0: POP EBX
// 004069f1: POP ESI
// 004069f2: POP EDI
// 004069f3: MOV EDX,dword ptr [ESP + 0x8]
//   Label: LAB_004069f3
//   XREF to: Stack[0x4] (READ)
// 004069f7: MOV EDX,dword ptr [EDX + 0x4]
// 004069fa: LEA EAX,[EDX*0x4 + 0x0]
// 00406a01: SUB EAX,EDX
// 00406a03: LEA EDX,[EAX*0x4 + 0x0]
// 00406a0a: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00406a0e: ADD EAX,0x18
// 00406a11: ADD EAX,EDX
// 00406a13: POP EBP
// 00406a14: RET
