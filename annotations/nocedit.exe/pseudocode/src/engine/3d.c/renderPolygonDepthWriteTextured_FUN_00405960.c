// Name: engine_3d.c_renderPolygonDepthWriteTextured_FUN_00405960
// Address: 00405960
// Address Range: [[00405960, 004059f6]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonDepthWriteTextured_FUN_00405960(SMRGLHeaderPrimitive * polygon_info)
// Cross-references:
//   engine_3d.c_renderPolygonSpecialEffectsAdvanced_FUN_00406f20 (00406f20) at 00407046 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonSpecialEffectsPlaneMasked_FUN_00406de0 (00406de0) at 00406f03 [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   BOOL g_MMXSupported
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_clipper.c_clipAndRasterize_FUN_004371b0

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonDepthWriteTextured_FUN_00405960(SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal);
  if (iVar1 != 0) {
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
    g_RenderStateFlags = RENDER_DEPTH_WRITE;
    g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}


// Assembly code:
// 00405960: PUSH EBX
//   Label: engine_3d.c_renderPolygonDepthWriteTextured_FUN_00405960
// 00405961: PUSH ESI
// 00405962: PUSH EBP
// 00405963: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00405967: LEA ESI,[EBX + 0x18]
// 0040596a: LEA EAX,[EBX + 0x8]
// 0040596d: PUSH EAX
// 0040596e: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00405973: ADD ESP,0x4
// 00405976: TEST EAX,EAX
// 00405978: JZ 0x004059bb
//   XREF to: 004059bb (CONDITIONAL_JUMP)
// 0040597a: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00405981: JNZ 0x004059d6
//   XREF to: 004059d6 (CONDITIONAL_JUMP)
// 00405983: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 0040598a: JNZ 0x004059ca
//   XREF to: 004059ca (CONDITIONAL_JUMP)
// 0040598c: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00405996: PUSH EDI
//   Label: LAB_00405996
// 00405997: MOV EDI,0x80
// 0040599c: PUSH ESI
// 0040599d: MOV EAX,dword ptr [EBX + 0x4]
// 004059a0: MOV EBP,0x1
// 004059a5: PUSH EAX
// 004059a6: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 004059ac: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 004059b2: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 004059b7: ADD ESP,0x8
// 004059ba: POP EDI
// 004059bb: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_004059bb
// 004059be: ADD EBX,0x18
// 004059c1: SHL EAX,0x2
// 004059c4: ADD EAX,EBX
// 004059c6: POP EBP
// 004059c7: POP ESI
// 004059c8: POP EBX
// 004059c9: RET
// 004059ca: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_004059ca
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 004059d4: JMP 0x00405996
//   XREF to: 00405996 (UNCONDITIONAL_JUMP)
// 004059d6: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_004059d6
//   XREF to: 0067939c (READ)
// 004059dd: JNZ 0x004059eb
//   XREF to: 004059eb (CONDITIONAL_JUMP)
// 004059df: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 004059e9: JMP 0x00405996
//   XREF to: 00405996 (UNCONDITIONAL_JUMP)
// 004059eb: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_004059eb
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 004059f5: JMP 0x00405996
//   XREF to: 00405996 (UNCONDITIONAL_JUMP)
