// Name: engine_3d.c_renderPolygonTexturePerspectiveCorrect_FUN_00406290
// Address: 00406290
// Address Range: [[00406290, 00406422]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonTexturePerspectiveCorrect_FUN_00406290(SMRGLHeaderPrimitive * polygon_info)
// Globals:
//   int g_BitsPerPixel = 0x8
//   int g_CurrentTextureDimension = 0x100
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
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_3d.c_setRenderAlpha_FUN_00406d80
//   engine_clipper.c_clipAndRasterize_FUN_004371b0

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonTexturePerspectiveCorrect_FUN_00406290(SMRGLHeaderPrimitive *polygon_info)

{
  SMRGLHeaderBasic *pSVar1;
  int iVar2;
  float fVar3;
  SMRGLHeaderPrimitive *pSVar4;
  float fVar5;
  int iVar6;
  int vertex_count;
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
    vertex_count = 0;
    g_RenderStateFlags = RENDER_TEXTURE_PERSPECTIVE;
    engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
    g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
    iVar2 = 0;
    for (iVar6 = 0;
        SBORROW4(iVar6,*(int *)(in_stack_0000000c + 4) * 3) !=
        iVar6 + *(int *)(in_stack_0000000c + 4) * -3 < 0; iVar6 = iVar6 + 3) {
      *(int *)((int)g_ProcessedVertexIndices + iVar2) = (pSVar4->base).type;
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
      iVar2 = iVar2 + 4;
      vertex_count = vertex_count + 1;
      pSVar4 = (SMRGLHeaderPrimitive *)&(pSVar4->surface_normal).B;
      g_RenderVertexBuffer[pSVar1->type].v = fVar5;
    }
    engine_clipper_c_clipAndRasterize_FUN_004371b0(vertex_count,g_ProcessedVertexIndices);
  }
  return (SMRGLHeaderExtended *)(*(int *)(in_stack_00000010 + 4) * 0xc + in_stack_00000010 + 0x18);
}


// Assembly code:
// 00406290: PUSH EBP
//   Label: engine_3d.c_renderPolygonTexturePerspectiveCorrect_FUN_00406290
// 00406291: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00406295: ADD EAX,0x8
// 00406298: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0040629c: PUSH EAX
// 0040629d: ADD EBP,0x18
// 004062a0: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 004062a5: ADD ESP,0x4
// 004062a8: TEST EAX,EAX
// 004062aa: JZ 0x00406405
//   XREF to: 00406405 (CONDITIONAL_JUMP)
// 004062b0: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 004062b7: JNZ 0x0040638b
//   XREF to: 0040638b (CONDITIONAL_JUMP)
// 004062bd: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 004062c4: JNZ 0x0040637c
//   XREF to: 0040637c (CONDITIONAL_JUMP)
// 004062ca: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 004062d4: PUSH EDI
//   Label: LAB_004062d4
// 004062d5: PUSH ESI
// 004062d6: PUSH EBX
// 004062d7: MOV ECX,0xc3
// 004062dc: PUSH 0xffff
// 004062e1: MOV EBX,0x1
// 004062e6: XOR EDI,EDI
// 004062e8: XOR ESI,ESI
// 004062ea: MOV dword ptr [0x02d052a0],ECX
//   XREF to: 02d052a0 (WRITE)
// 004062f0: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 004062f5: ADD ESP,0x4
// 004062f8: MOV dword ptr [0x02d052a4],EBX
//   XREF to: 02d052a4 (WRITE)
// 004062fe: MOV ECX,EBP
// 00406300: XOR EBX,EBX
// 00406302: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_00406302
//   XREF to: Stack[0x4] (READ)
// 00406306: MOV EAX,dword ptr [EAX + 0x4]
// 00406309: LEA EAX,[EAX + EAX*0x2]
// 0040630c: CMP ESI,EAX
// 0040630e: JGE 0x004063f4
//   XREF to: 004063f4 (CONDITIONAL_JUMP)
// 00406314: MOV EAX,dword ptr [ECX]
// 00406316: MOV dword ptr [EBX + 0x772a98],EAX
//   XREF to: 00772a98 (WRITE)
//   XREF to: 00772a9c (WRITE)
// 0040631c: MOV EBP,dword ptr [0x006793a4]
//   XREF to: 006793a4 (READ)
// 00406322: MOV EAX,dword ptr [ECX + 0x4]
// 00406325: MOV EDX,dword ptr [ECX + 0x8]
// 00406328: CMP EBP,0x40
// 0040632b: JG 0x004063b9
//   XREF to: 004063b9 (CONDITIONAL_JUMP)
// 00406331: CMP EAX,0x40000
// 00406336: JGE 0x0040633d
//   XREF to: 0040633d (CONDITIONAL_JUMP)
// 00406338: MOV EAX,0x40000
// 0040633d: CMP EDX,0x40000
//   Label: LAB_0040633d
// 00406343: JGE 0x0040634a
//   XREF to: 0040634a (CONDITIONAL_JUMP)
// 00406345: MOV EDX,0x40000
// 0040634a: CMP EAX,0xfbffff
//   Label: LAB_0040634a
//   XREF to: 00fbffff (DATA)
// 0040634f: JLE 0x00406356
//   XREF to: 00406356 (CONDITIONAL_JUMP)
// 00406351: MOV EAX,0xfbffff
//   XREF to: 00fbffff (DATA)
// 00406356: CMP EDX,0xfbffff
//   Label: LAB_00406356
//   XREF to: 00fbffff (DATA)
// 0040635c: JG 0x004063b2
//   XREF to: 004063b2 (CONDITIONAL_JUMP)
// 0040635e: IMUL EBP,dword ptr [ECX],0x30
//   Label: LAB_0040635e
// 00406361: MOV dword ptr [EBP + 0x68802c],EAX
//   XREF to: 0068802c (DATA)
//   XREF to: 00fbffff (DATA)
// 00406367: IMUL EAX,dword ptr [ECX],0x30
// 0040636a: ADD EBX,0x4
// 0040636d: INC EDI
// 0040636e: ADD ESI,0x3
// 00406371: ADD ECX,0xc
// 00406374: MOV dword ptr [EAX + 0x688030],EDX
//   XREF to: 00688030 (DATA)
//   XREF to: 00fbffff (DATA)
//   XREF to: 00feffff (DATA)
// 0040637a: JMP 0x00406302
//   XREF to: 00406302 (UNCONDITIONAL_JUMP)
// 0040637c: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_0040637c
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00406386: JMP 0x004062d4
//   XREF to: 004062d4 (UNCONDITIONAL_JUMP)
// 0040638b: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0040638b
//   XREF to: 0067939c (READ)
// 00406392: JNZ 0x004063a3
//   XREF to: 004063a3 (CONDITIONAL_JUMP)
// 00406394: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 0040639e: JMP 0x004062d4
//   XREF to: 004062d4 (UNCONDITIONAL_JUMP)
// 004063a3: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_004063a3
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 004063ad: JMP 0x004062d4
//   XREF to: 004062d4 (UNCONDITIONAL_JUMP)
// 004063b2: MOV EDX,0xfbffff
//   Label: LAB_004063b2
//   XREF to: 00fbffff (DATA)
// 004063b7: JMP 0x0040635e
//   XREF to: 0040635e (UNCONDITIONAL_JUMP)
// 004063b9: CMP EAX,0x10000
//   Label: LAB_004063b9
// 004063be: JGE 0x004063c5
//   XREF to: 004063c5 (CONDITIONAL_JUMP)
// 004063c0: MOV EAX,0x10000
// 004063c5: CMP EDX,0x10000
//   Label: LAB_004063c5
// 004063cb: JGE 0x004063d2
//   XREF to: 004063d2 (CONDITIONAL_JUMP)
// 004063cd: MOV EDX,0x10000
// 004063d2: CMP EAX,0xfeffff
//   Label: LAB_004063d2
//   XREF to: 00feffff (DATA)
// 004063d7: JLE 0x004063de
//   XREF to: 004063de (CONDITIONAL_JUMP)
// 004063d9: MOV EAX,0xfeffff
//   XREF to: 00feffff (DATA)
// 004063de: CMP EDX,0xfeffff
//   Label: LAB_004063de
//   XREF to: 00feffff (DATA)
// 004063e4: JLE 0x0040635e
//   XREF to: 0040635e (CONDITIONAL_JUMP)
// 004063ea: MOV EDX,0xfeffff
//   XREF to: 00feffff (DATA)
// 004063ef: JMP 0x0040635e
//   XREF to: 0040635e (UNCONDITIONAL_JUMP)
// 004063f4: PUSH 0x772a98
//   Label: LAB_004063f4
//   XREF to: 00772a98 (DATA)
// 004063f9: PUSH EDI
// 004063fa: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 004063ff: ADD ESP,0x8
// 00406402: POP EBX
// 00406403: POP ESI
// 00406404: POP EDI
// 00406405: MOV EDX,dword ptr [ESP + 0x8]
//   Label: LAB_00406405
//   XREF to: Stack[0x4] (READ)
// 00406409: MOV EDX,dword ptr [EDX + 0x4]
// 0040640c: LEA EAX,[EDX*0x4 + 0x0]
// 00406413: SUB EAX,EDX
// 00406415: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00406419: SHL EAX,0x2
// 0040641c: ADD EDX,0x18
// 0040641f: ADD EAX,EDX
// 00406421: POP EBP
// 00406422: RET
