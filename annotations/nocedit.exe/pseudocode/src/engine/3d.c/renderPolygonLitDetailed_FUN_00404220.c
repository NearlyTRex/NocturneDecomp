// Name: engine_3d.c_renderPolygonLitDetailed_FUN_00404220
// Address: 00404220
// Address Range: [[00404220, 0040441e]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonLitDetailed_FUN_00404220(SMRGLHeaderPrimitive * polygon_info)
// Globals:
//   int g_BitsPerPixel = 0x8
//   int g_CurrentAlphaValue = 0xff
//   undefined4 g_RenderVertexBuffer[0].u
//   undefined4 g_RenderVertexBuffer[0].v
//   undefined4 DAT_00772a78
//   int[24] g_ProcessedVertexIndices
//   undefined4 DAT_00772a9c
//   undefined4 DAT_00fdffff
//   undefined4 DAT_00feffff
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   int g_UseExternalRenderer
//   BOOL g_MMXSupported
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_clipper.c_clipAndRasterize_FUN_004371b0

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonLitDetailed_FUN_00404220(SMRGLHeaderPrimitive *polygon_info)

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
  if (iVar2 == 0) goto LAB_004043ff;
  if (DAT_00772a78 == 0) {
    if (g_MMXSupported == 0) {
      if (g_BitsPerPixel == 0x20) {
LAB_00404269:
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
LAB_00404350:
      g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
    }
  }
  else if (g_MMXSupported == 0) {
    if (g_BitsPerPixel == 0x20) goto LAB_00404269;
    g_ScanlineRenderFunc = wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
  }
  else {
    if (g_BitsPerPixel != 0x20) goto LAB_00404350;
    g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
  }
  engine_3d_c_calculatePolygonLighting_FUN_00403a00(in_stack_00000008);
  g_RenderStateFlags = RENDER_LIT_DETAILED;
  if (g_CurrentAlphaValue < 0xff) {
    g_RenderStateFlags = RENDER_ALPHA_DETAILED;
  }
  vertex_count = 0;
  iVar6 = 0;
  g_RenderStateFlag2 = PREPROCESS_NONE;
  for (iVar2 = 0;
      SBORROW4(iVar2,*(int *)(in_stack_0000000c + 4) * 3) !=
      iVar2 + *(int *)(in_stack_0000000c + 4) * -3 < 0; iVar2 = iVar2 + 3) {
    *(int *)((int)g_ProcessedVertexIndices + iVar6) = (pSVar4->base).type;
    fVar3 = (float)(pSVar4->base).count;
    fVar5 = (float)(pSVar4->surface_normal).A;
    if (g_UseExternalRenderer == 0) {
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
    else {
      if ((int)fVar3 < 0x20000) {
        fVar3 = 1.83671e-40;
      }
      if ((int)fVar5 < 0x20000) {
        fVar5 = 1.83671e-40;
      }
      if (0xfdffff < (int)fVar3) {
        fVar3 = 2.3326215e-38;
      }
      if (0xfdffff < (int)fVar5) {
        fVar5 = 2.3326215e-38;
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
LAB_004043ff:
  return (SMRGLHeaderExtended *)(*(int *)(in_stack_00000010 + 4) * 0xc + in_stack_00000010 + 0x18);
}


// Assembly code:
// 00404220: PUSH ESI
//   Label: engine_3d.c_renderPolygonLitDetailed_FUN_00404220
// 00404221: PUSH EDI
// 00404222: PUSH EBP
// 00404223: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00404227: ADD EAX,0x8
// 0040422a: MOV EBP,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0040422e: PUSH EAX
// 0040422f: ADD EBP,0x18
// 00404232: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00404237: ADD ESP,0x4
// 0040423a: TEST EAX,EAX
// 0040423c: JZ 0x004043ff
//   XREF to: 004043ff (CONDITIONAL_JUMP)
// 00404242: CMP dword ptr [0x00772a78],0x0
//   XREF to: 00772a78 (READ)
// 00404249: JNZ 0x0040435f
//   XREF to: 0040435f (CONDITIONAL_JUMP)
// 0040424f: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00404256: JNZ 0x00404338
//   XREF to: 00404338 (CONDITIONAL_JUMP)
// 0040425c: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00404263: JNZ 0x00404329
//   XREF to: 00404329 (CONDITIONAL_JUMP)
// 00404269: MOV dword ptr [0x02d0257c],0x5b50ec
//   Label: LAB_00404269
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00404273: MOV ESI,dword ptr [ESP + 0x10]
//   Label: LAB_00404273
//   XREF to: Stack[0x4] (READ)
// 00404277: PUSH ESI
// 00404278: MOV EDI,0x13
// 0040427d: CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   XREF to: 00403a00 (UNCONDITIONAL_CALL)
// 00404282: MOV EAX,[0x006793b4]
//   XREF to: 006793b4 (READ)
// 00404287: ADD ESP,0x4
// 0040428a: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 00404290: CMP EAX,0xff
// 00404295: JL 0x0040439c
//   XREF to: 0040439c (CONDITIONAL_JUMP)
// 0040429b: PUSH EBX
//   Label: LAB_0040429b
// 0040429c: XOR ECX,ECX
// 0040429e: XOR EDI,EDI
// 004042a0: XOR EBX,EBX
// 004042a2: XOR ESI,ESI
// 004042a4: MOV dword ptr [0x02d052a4],ECX
//   XREF to: 02d052a4 (WRITE)
// 004042aa: MOV ECX,EBP
// 004042ac: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_004042ac
//   XREF to: Stack[0x4] (READ)
// 004042b0: MOV EAX,dword ptr [EAX + 0x4]
// 004042b3: LEA EAX,[EAX + EAX*0x2]
// 004042b6: CMP EBX,EAX
// 004042b8: JGE 0x004043f0
//   XREF to: 004043f0 (CONDITIONAL_JUMP)
// 004042be: MOV EAX,dword ptr [ECX]
// 004042c0: MOV dword ptr [ESI + 0x772a98],EAX
//   XREF to: 00772a98 (WRITE)
//   XREF to: 00772a9c (WRITE)
// 004042c6: MOV EBP,dword ptr [0x02d03e94]
//   XREF to: 02d03e94 (READ)
// 004042cc: MOV EAX,dword ptr [ECX + 0x4]
// 004042cf: MOV EDX,dword ptr [ECX + 0x8]
// 004042d2: TEST EBP,EBP
// 004042d4: JZ 0x004043b5
//   XREF to: 004043b5 (CONDITIONAL_JUMP)
// 004042da: CMP EAX,0x20000
// 004042df: JGE 0x004042e6
//   XREF to: 004042e6 (CONDITIONAL_JUMP)
// 004042e1: MOV EAX,0x20000
// 004042e6: CMP EDX,0x20000
//   Label: LAB_004042e6
// 004042ec: JGE 0x004042f3
//   XREF to: 004042f3 (CONDITIONAL_JUMP)
// 004042ee: MOV EDX,0x20000
// 004042f3: CMP EAX,0xfdffff
//   Label: LAB_004042f3
//   XREF to: 00fdffff (DATA)
// 004042f8: JLE 0x004042ff
//   XREF to: 004042ff (CONDITIONAL_JUMP)
// 004042fa: MOV EAX,0xfdffff
//   XREF to: 00fdffff (DATA)
// 004042ff: CMP EDX,0xfdffff
//   Label: LAB_004042ff
//   XREF to: 00fdffff (DATA)
// 00404305: JG 0x004043ab
//   XREF to: 004043ab (CONDITIONAL_JUMP)
// 0040430b: IMUL EBP,dword ptr [ECX],0x30
//   Label: LAB_0040430b
// 0040430e: MOV dword ptr [EBP + 0x68802c],EAX
//   XREF to: 0068802c (DATA)
//   XREF to: 00fdffff (DATA)
// 00404314: IMUL EAX,dword ptr [ECX],0x30
// 00404317: ADD ESI,0x4
// 0040431a: INC EDI
// 0040431b: ADD EBX,0x3
// 0040431e: ADD ECX,0xc
// 00404321: MOV dword ptr [EAX + 0x688030],EDX
//   XREF to: 00688030 (DATA)
//   XREF to: 00fdffff (DATA)
//   XREF to: 00feffff (DATA)
// 00404327: JMP 0x004042ac
//   XREF to: 004042ac (UNCONDITIONAL_JUMP)
// 00404329: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00404329
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00404333: JMP 0x00404273
//   XREF to: 00404273 (UNCONDITIONAL_JUMP)
// 00404338: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00404338
//   XREF to: 0067939c (READ)
// 0040433f: JNZ 0x00404350
//   XREF to: 00404350 (CONDITIONAL_JUMP)
// 00404341: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 0040434b: JMP 0x00404273
//   XREF to: 00404273 (UNCONDITIONAL_JUMP)
// 00404350: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00404350
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0040435a: JMP 0x00404273
//   XREF to: 00404273 (UNCONDITIONAL_JUMP)
// 0040435f: CMP dword ptr [0x02d05248],0x0
//   Label: LAB_0040435f
//   XREF to: 02d05248 (READ)
// 00404366: JNZ 0x00404384
//   XREF to: 00404384 (CONDITIONAL_JUMP)
// 00404368: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 0040436f: JZ 0x00404269
//   XREF to: 00404269 (CONDITIONAL_JUMP)
// 00404375: MOV dword ptr [0x02d0257c],0x5b5322
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 0040437f: JMP 0x00404273
//   XREF to: 00404273 (UNCONDITIONAL_JUMP)
// 00404384: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00404384
//   XREF to: 0067939c (READ)
// 0040438b: JNZ 0x00404350
//   XREF to: 00404350 (CONDITIONAL_JUMP)
// 0040438d: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00404397: JMP 0x00404273
//   XREF to: 00404273 (UNCONDITIONAL_JUMP)
// 0040439c: MOV dword ptr [0x02d052a0],0x33
//   Label: LAB_0040439c
//   XREF to: 02d052a0 (WRITE)
// 004043a6: JMP 0x0040429b
//   XREF to: 0040429b (UNCONDITIONAL_JUMP)
// 004043ab: MOV EDX,0xfdffff
//   Label: LAB_004043ab
//   XREF to: 00fdffff (DATA)
// 004043b0: JMP 0x0040430b
//   XREF to: 0040430b (UNCONDITIONAL_JUMP)
// 004043b5: CMP EAX,0x10000
//   Label: LAB_004043b5
// 004043ba: JGE 0x004043c1
//   XREF to: 004043c1 (CONDITIONAL_JUMP)
// 004043bc: MOV EAX,0x10000
// 004043c1: CMP EDX,0x10000
//   Label: LAB_004043c1
// 004043c7: JGE 0x004043ce
//   XREF to: 004043ce (CONDITIONAL_JUMP)
// 004043c9: MOV EDX,0x10000
// 004043ce: CMP EAX,0xfeffff
//   Label: LAB_004043ce
//   XREF to: 00feffff (DATA)
// 004043d3: JLE 0x004043da
//   XREF to: 004043da (CONDITIONAL_JUMP)
// 004043d5: MOV EAX,0xfeffff
//   XREF to: 00feffff (DATA)
// 004043da: CMP EDX,0xfeffff
//   Label: LAB_004043da
//   XREF to: 00feffff (DATA)
// 004043e0: JLE 0x0040430b
//   XREF to: 0040430b (CONDITIONAL_JUMP)
// 004043e6: MOV EDX,0xfeffff
//   XREF to: 00feffff (DATA)
// 004043eb: JMP 0x0040430b
//   XREF to: 0040430b (UNCONDITIONAL_JUMP)
// 004043f0: PUSH 0x772a98
//   Label: LAB_004043f0
//   XREF to: 00772a98 (DATA)
// 004043f5: PUSH EDI
// 004043f6: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 004043fb: ADD ESP,0x8
// 004043fe: POP EBX
// 004043ff: MOV EDX,dword ptr [ESP + 0x10]
//   Label: LAB_004043ff
//   XREF to: Stack[0x4] (READ)
// 00404403: MOV EDX,dword ptr [EDX + 0x4]
// 00404406: LEA EAX,[EDX*0x4 + 0x0]
// 0040440d: SUB EAX,EDX
// 0040440f: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00404413: SHL EAX,0x2
// 00404416: ADD EDX,0x18
// 00404419: ADD EAX,EDX
// 0040441b: POP EBP
// 0040441c: POP EDI
// 0040441d: POP ESI
// 0040441e: RET
