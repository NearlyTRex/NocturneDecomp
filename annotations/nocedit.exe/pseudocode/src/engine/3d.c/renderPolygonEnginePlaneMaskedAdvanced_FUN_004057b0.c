// Name: engine_3d.c_renderPolygonEnginePlaneMaskedAdvanced_FUN_004057b0
// Address: 004057b0
// Address Range: [[004057b0, 004058ca]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonEnginePlaneMaskedAdvanced_FUN_004057b0(SMRGLHeaderPrimitive * polygon_info)
// Cross-references:
//   engine_3d.c_renderPolygonSpecialEffectsAdvanced_FUN_00406f20 (00406f20) at 0040704f [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   int g_AdvancedClippingEnabled
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   BOOL g_MMXSupported
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_clipper.c_clipAndRasterize_FUN_004371b0
//   engine_clipper.c_clipPolygonToViewport_FUN_00438420

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonEnginePlaneMaskedAdvanced_FUN_004057b0(SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal);
  if (iVar1 != 0) {
    if (g_AdvancedClippingEnabled == 0) {
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
      g_RenderStateFlags = RENDER_PERSPECTIVE_ENHANCED;
      g_RenderStateFlag2 = PREPROCESS_TEXTURE_NORMALIZE_ALT;
      engine_clipper_c_clipPolygonToViewport_FUN_00438420
                ((polygon_info->base).count,(int *)(polygon_info + 1));
      return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
    }
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
    g_RenderStateFlags = RENDER_PLANEMASK;
    g_RenderStateFlag2 = PREPROCESS_TEXTURE_NORMALIZE_ALT;
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}


// Assembly code:
// 004057b0: PUSH EBX
//   Label: engine_3d.c_renderPolygonEnginePlaneMaskedAdvanced_FUN_004057b0
// 004057b1: PUSH ESI
// 004057b2: PUSH EBP
// 004057b3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004057b7: LEA ESI,[EBX + 0x18]
// 004057ba: LEA EAX,[EBX + 0x8]
// 004057bd: PUSH EAX
// 004057be: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 004057c3: ADD ESP,0x4
// 004057c6: TEST EAX,EAX
// 004057c8: JZ 0x00405815
//   XREF to: 00405815 (CONDITIONAL_JUMP)
// 004057ca: CMP dword ptr [0x02d02578],0x0
//   XREF to: 02d02578 (READ)
// 004057d1: JZ 0x00405851
//   XREF to: 00405851 (CONDITIONAL_JUMP)
// 004057d7: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 004057de: JNZ 0x00405830
//   XREF to: 00405830 (CONDITIONAL_JUMP)
// 004057e0: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 004057e7: JNZ 0x00405824
//   XREF to: 00405824 (CONDITIONAL_JUMP)
// 004057e9: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 004057f3: MOV EBP,0xd
//   Label: LAB_004057f3
// 004057f8: PUSH ESI
// 004057f9: MOV EDX,dword ptr [EBX + 0x4]
// 004057fc: MOV EAX,0x5
// 00405801: PUSH EDX
// 00405802: MOV dword ptr [0x02d052a0],EBP
//   XREF to: 02d052a0 (WRITE)
// 00405808: MOV [0x02d052a4],EAX
//   XREF to: 02d052a4 (WRITE)
// 0040580d: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00405812: ADD ESP,0x8
// 00405815: MOV ESI,dword ptr [EBX + 0x4]
//   Label: LAB_00405815
// 00405818: LEA EAX,[EBX + 0x18]
// 0040581b: SHL ESI,0x2
// 0040581e: ADD EAX,ESI
// 00405820: POP EBP
// 00405821: POP ESI
// 00405822: POP EBX
// 00405823: RET
// 00405824: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00405824
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 0040582e: JMP 0x004057f3
//   XREF to: 004057f3 (UNCONDITIONAL_JUMP)
// 00405830: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00405830
//   XREF to: 0067939c (READ)
// 00405837: JNZ 0x00405845
//   XREF to: 00405845 (CONDITIONAL_JUMP)
// 00405839: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00405843: JMP 0x004057f3
//   XREF to: 004057f3 (UNCONDITIONAL_JUMP)
// 00405845: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00405845
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0040584f: JMP 0x004057f3
//   XREF to: 004057f3 (UNCONDITIONAL_JUMP)
// 00405851: CMP dword ptr [0x02d05248],0x0
//   Label: LAB_00405851
//   XREF to: 02d05248 (READ)
// 00405858: JNZ 0x004058aa
//   XREF to: 004058aa (CONDITIONAL_JUMP)
// 0040585a: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00405861: JNZ 0x0040589e
//   XREF to: 0040589e (CONDITIONAL_JUMP)
// 00405863: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 0040586d: MOV EBP,0x20d
//   Label: LAB_0040586d
// 00405872: PUSH ESI
// 00405873: MOV EDX,dword ptr [EBX + 0x4]
// 00405876: MOV EAX,0x5
// 0040587b: PUSH EDX
// 0040587c: MOV dword ptr [0x02d052a0],EBP
//   XREF to: 02d052a0 (WRITE)
// 00405882: MOV [0x02d052a4],EAX
//   XREF to: 02d052a4 (WRITE)
// 00405887: CALL engine_clipper.c_clipPolygonToViewport_FUN_00438420
//   XREF to: 00438420 (UNCONDITIONAL_CALL)
// 0040588c: ADD ESP,0x8
// 0040588f: MOV ESI,dword ptr [EBX + 0x4]
// 00405892: LEA EAX,[EBX + 0x18]
// 00405895: SHL ESI,0x2
// 00405898: ADD EAX,ESI
// 0040589a: POP EBP
// 0040589b: POP ESI
// 0040589c: POP EBX
// 0040589d: RET
// 0040589e: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_0040589e
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 004058a8: JMP 0x0040586d
//   XREF to: 0040586d (UNCONDITIONAL_JUMP)
// 004058aa: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_004058aa
//   XREF to: 0067939c (READ)
// 004058b1: JNZ 0x004058bf
//   XREF to: 004058bf (CONDITIONAL_JUMP)
// 004058b3: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 004058bd: JMP 0x0040586d
//   XREF to: 0040586d (UNCONDITIONAL_JUMP)
// 004058bf: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_004058bf
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 004058c9: JMP 0x0040586d
//   XREF to: 0040586d (UNCONDITIONAL_JUMP)
