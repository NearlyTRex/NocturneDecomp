// Name: engine_3d.c_renderPolygonEnginePlaneMaskedEffect_FUN_00405690
// Address: 00405690
// Address Range: [[00405690, 004057a7]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonEnginePlaneMaskedEffect_FUN_00405690(SMRGLHeaderPrimitive * polygon_info)
// Cross-references:
//   engine_3d.c_renderPolygonSpecialEffectsPlaneMasked_FUN_00406de0 (00406de0) at 00406f0c [UNCONDITIONAL_CALL]
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
engine_3d_c_renderPolygonEnginePlaneMaskedEffect_FUN_00405690(SMRGLHeaderPrimitive *polygon_info)

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
      g_RenderStateFlag2 = PREPROCESS_NONE;
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
    g_RenderStateFlag2 = PREPROCESS_PRIMITIVE_SPECIAL;
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}


// Assembly code:
// 00405690: PUSH EBX
//   Label: engine_3d.c_renderPolygonEnginePlaneMaskedEffect_FUN_00405690
// 00405691: PUSH ESI
// 00405692: PUSH EBP
// 00405693: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00405697: LEA ESI,[EBX + 0x18]
// 0040569a: LEA EAX,[EBX + 0x8]
// 0040569d: PUSH EAX
// 0040569e: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 004056a3: ADD ESP,0x4
// 004056a6: TEST EAX,EAX
// 004056a8: JZ 0x004056f5
//   XREF to: 004056f5 (CONDITIONAL_JUMP)
// 004056aa: CMP dword ptr [0x02d02578],0x0
//   XREF to: 02d02578 (READ)
// 004056b1: JZ 0x00405731
//   XREF to: 00405731 (CONDITIONAL_JUMP)
// 004056b7: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 004056be: JNZ 0x00405710
//   XREF to: 00405710 (CONDITIONAL_JUMP)
// 004056c0: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 004056c7: JNZ 0x00405704
//   XREF to: 00405704 (CONDITIONAL_JUMP)
// 004056c9: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 004056d3: MOV EBP,0xd
//   Label: LAB_004056d3
// 004056d8: PUSH ESI
// 004056d9: MOV EDX,dword ptr [EBX + 0x4]
// 004056dc: MOV EAX,0x4
// 004056e1: PUSH EDX
// 004056e2: MOV dword ptr [0x02d052a0],EBP
//   XREF to: 02d052a0 (WRITE)
// 004056e8: MOV [0x02d052a4],EAX
//   XREF to: 02d052a4 (WRITE)
// 004056ed: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 004056f2: ADD ESP,0x8
// 004056f5: MOV ESI,dword ptr [EBX + 0x4]
//   Label: LAB_004056f5
// 004056f8: LEA EAX,[EBX + 0x18]
// 004056fb: SHL ESI,0x2
// 004056fe: ADD EAX,ESI
// 00405700: POP EBP
// 00405701: POP ESI
// 00405702: POP EBX
// 00405703: RET
// 00405704: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00405704
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 0040570e: JMP 0x004056d3
//   XREF to: 004056d3 (UNCONDITIONAL_JUMP)
// 00405710: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00405710
//   XREF to: 0067939c (READ)
// 00405717: JNZ 0x00405725
//   XREF to: 00405725 (CONDITIONAL_JUMP)
// 00405719: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00405723: JMP 0x004056d3
//   XREF to: 004056d3 (UNCONDITIONAL_JUMP)
// 00405725: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00405725
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0040572f: JMP 0x004056d3
//   XREF to: 004056d3 (UNCONDITIONAL_JUMP)
// 00405731: CMP dword ptr [0x02d05248],0x0
//   Label: LAB_00405731
//   XREF to: 02d05248 (READ)
// 00405738: JNZ 0x00405787
//   XREF to: 00405787 (CONDITIONAL_JUMP)
// 0040573a: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00405741: JNZ 0x0040577b
//   XREF to: 0040577b (CONDITIONAL_JUMP)
// 00405743: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 0040574d: MOV EBP,0x20d
//   Label: LAB_0040574d
// 00405752: PUSH ESI
// 00405753: MOV EDX,dword ptr [EBX + 0x4]
// 00405756: XOR EAX,EAX
// 00405758: PUSH EDX
// 00405759: MOV dword ptr [0x02d052a0],EBP
//   XREF to: 02d052a0 (WRITE)
// 0040575f: MOV [0x02d052a4],EAX
//   XREF to: 02d052a4 (WRITE)
// 00405764: CALL engine_clipper.c_clipPolygonToViewport_FUN_00438420
//   XREF to: 00438420 (UNCONDITIONAL_CALL)
// 00405769: ADD ESP,0x8
// 0040576c: MOV ESI,dword ptr [EBX + 0x4]
// 0040576f: LEA EAX,[EBX + 0x18]
// 00405772: SHL ESI,0x2
// 00405775: ADD EAX,ESI
// 00405777: POP EBP
// 00405778: POP ESI
// 00405779: POP EBX
// 0040577a: RET
// 0040577b: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_0040577b
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00405785: JMP 0x0040574d
//   XREF to: 0040574d (UNCONDITIONAL_JUMP)
// 00405787: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00405787
//   XREF to: 0067939c (READ)
// 0040578e: JNZ 0x0040579c
//   XREF to: 0040579c (CONDITIONAL_JUMP)
// 00405790: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 0040579a: JMP 0x0040574d
//   XREF to: 0040574d (UNCONDITIONAL_JUMP)
// 0040579c: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_0040579c
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 004057a6: JMP 0x0040574d
//   XREF to: 0040574d (UNCONDITIONAL_JUMP)
