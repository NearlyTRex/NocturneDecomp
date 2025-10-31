// Name: engine_3d.c_renderOverlayTextureEnable_FUN_00404020
// Address: 00404020
// Address Range: [[00404020, 00404119]]
// Convention: __cdecl
// Signature: void * engine_3d.c_renderOverlayTextureEnable_FUN_00404020(SMRGLHeaderPrimitive * polygon_info)
// Globals:
//   int g_BitsPerPixel = 0x8
//   undefined4 g_RenderVertexBuffer[0].u
//   undefined4 g_RenderVertexBuffer[0].v
//   uint g_ProcessedVertexOffset
//   int[24] g_ProcessedVertexIndices
//   undefined4 DAT_00772a9c
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   BOOL g_MMXSupported
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   engine_clipper.c_clipAndRasterize_FUN_004371b0

#include "nocturne.h"

void * __cdecl
engine_3d_c_renderOverlayTextureEnable_FUN_00404020(SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  uint uVar2;
  SMRGLHeaderPrimitive *pSVar3;
  int *piVar4;
  int iVar5;
  
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
  g_RenderStateFlags = RENDER_TEXTURE_ENABLE;
  g_RenderStateFlag2 = PREPROCESS_NONE;
  engine_3d_c_calculatePolygonLighting_FUN_00403a00(polygon_info);
  piVar4 = g_ProcessedVertexIndices;
  pSVar3 = polygon_info + 1;
  for (iVar5 = 0; uVar2 = g_ProcessedVertexOffset, iVar1 = (polygon_info->base).count,
      SBORROW4(iVar5,iVar1 * 3) != iVar5 + iVar1 * -3 < 0; iVar5 = iVar5 + 3) {
    *piVar4 = (pSVar3->base).type + g_ProcessedVertexOffset;
    g_RenderVertexBuffer[(pSVar3->base).type + uVar2].u = (float)(pSVar3->base).count;
    piVar4 = piVar4 + 1;
    g_RenderVertexBuffer[(pSVar3->base).type + uVar2].v = (float)(pSVar3->surface_normal).A;
    pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
  }
  engine_clipper_c_clipAndRasterize_FUN_004371b0
            ((polygon_info->base).count,g_ProcessedVertexIndices);
  return (void *)((int)&polygon_info[1].base + (polygon_info->base).count * 0xc);
}


// Assembly code:
// 00404020: PUSH EBX
//   Label: engine_3d.c_renderOverlayTextureEnable_FUN_00404020
// 00404021: PUSH ESI
// 00404022: PUSH EDI
// 00404023: PUSH EBP
// 00404024: MOV EBP,dword ptr [0x00772a60]
//   XREF to: 00772a60 (READ)
// 0040402a: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0040402e: MOV EDX,dword ptr [0x02d05248]
//   XREF to: 02d05248 (READ)
// 00404034: LEA ESI,[EDI + 0x18]
// 00404037: TEST EDX,EDX
// 00404039: JNZ 0x004040c3
//   XREF to: 004040c3 (CONDITIONAL_JUMP)
// 0040403f: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00404046: JNZ 0x004040b7
//   XREF to: 004040b7 (CONDITIONAL_JUMP)
// 00404048: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00404052: MOV EAX,0x1
//   Label: LAB_00404052
// 00404057: PUSH EDI
// 00404058: XOR EDX,EDX
// 0040405a: XOR EBX,EBX
// 0040405c: MOV [0x02d052a0],EAX
//   XREF to: 02d052a0 (WRITE)
// 00404061: MOV dword ptr [0x02d052a4],EDX
//   XREF to: 02d052a4 (WRITE)
// 00404067: CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   XREF to: 00403a00 (UNCONDITIONAL_CALL)
// 0040406c: MOV ECX,0x772a98
//   XREF to: 00772a98 (DATA)
// 00404071: ADD ESP,0x4
// 00404074: MOV EAX,ESI
// 00404076: MOV EDX,dword ptr [EDI + 0x4]
//   Label: LAB_00404076
// 00404079: LEA EDX,[EDX + EDX*0x2]
// 0040407c: MOV EBP,dword ptr [0x00772a60]
//   XREF to: 00772a60 (READ)
// 00404082: CMP EBX,EDX
// 00404084: JGE 0x004040ea
//   XREF to: 004040ea (CONDITIONAL_JUMP)
// 00404086: MOV EDX,dword ptr [EAX]
// 00404088: ADD EDX,EBP
// 0040408a: MOV dword ptr [ECX],EDX
//   XREF to: 00772a98 (WRITE)
//   XREF to: 00772a9c (WRITE)
// 0040408c: MOV EDX,dword ptr [EAX]
// 0040408e: ADD EDX,EBP
// 00404090: IMUL EDX,EDX,0x30
// 00404093: MOV ESI,dword ptr [EAX + 0x4]
// 00404096: MOV dword ptr [EDX + 0x68802c],ESI
//   XREF to: 0068802c (DATA)
// 0040409c: MOV EDX,dword ptr [EAX]
// 0040409e: ADD EDX,EBP
// 004040a0: IMUL ESI,EDX,0x30
// 004040a3: ADD EAX,0xc
// 004040a6: ADD ECX,0x4
// 004040a9: MOV EDX,dword ptr [EAX + -0x4]
// 004040ac: ADD EBX,0x3
// 004040af: MOV dword ptr [ESI + 0x688030],EDX
//   XREF to: 00688030 (DATA)
// 004040b5: JMP 0x00404076
//   XREF to: 00404076 (UNCONDITIONAL_JUMP)
// 004040b7: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_004040b7
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 004040c1: JMP 0x00404052
//   XREF to: 00404052 (UNCONDITIONAL_JUMP)
// 004040c3: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_004040c3
//   XREF to: 0067939c (READ)
// 004040ca: JNZ 0x004040db
//   XREF to: 004040db (CONDITIONAL_JUMP)
// 004040cc: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 004040d6: JMP 0x00404052
//   XREF to: 00404052 (UNCONDITIONAL_JUMP)
// 004040db: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_004040db
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 004040e5: JMP 0x00404052
//   XREF to: 00404052 (UNCONDITIONAL_JUMP)
// 004040ea: PUSH 0x772a98
//   Label: LAB_004040ea
//   XREF to: 00772a98 (DATA)
// 004040ef: MOV ECX,dword ptr [EDI + 0x4]
// 004040f2: PUSH ECX
// 004040f3: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 004040f8: MOV EDX,dword ptr [EDI + 0x4]
// 004040fb: LEA EAX,[EDX*0x4 + 0x0]
// 00404102: ADD EDI,0x18
// 00404105: SUB EAX,EDX
// 00404107: MOV EBP,dword ptr [0x00772a60]
//   XREF to: 00772a60 (READ)
// 0040410d: SHL EAX,0x2
// 00404110: ADD ESP,0x8
// 00404113: ADD EAX,EDI
// 00404115: POP EBP
// 00404116: POP EDI
// 00404117: POP ESI
// 00404118: POP EBX
// 00404119: RET
