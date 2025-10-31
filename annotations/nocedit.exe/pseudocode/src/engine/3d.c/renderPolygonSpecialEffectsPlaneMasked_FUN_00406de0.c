// Name: engine_3d.c_renderPolygonSpecialEffectsPlaneMasked_FUN_00406de0
// Address: 00406de0
// Address Range: [[00406de0, 00406f15]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonSpecialEffectsPlaneMasked_FUN_00406de0(SMRGLHeaderPrimitive * polygon_info)
// Globals:
//   int g_BitsPerPixel = 0x8
//   int g_AdvancedClippingEnabled
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   int g_UseExternalRenderer
//   BOOL g_MMXSupported
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_3d.c_renderPolygonDepthWriteTextured_FUN_00405960
//   engine_3d.c_renderPolygonEnginePlaneMaskedEffect_FUN_00405690
//   engine_clipper.c_clipAndRasterize_FUN_004371b0
//   engine_clipper.c_clipPolygonToViewport_FUN_00438420

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonSpecialEffectsPlaneMasked_FUN_00406de0(SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  SMRGLHeaderExtended *pSVar2;
  
  if (g_UseExternalRenderer == 0) {
    engine_3d_c_renderPolygonDepthWriteTextured_FUN_00405960(polygon_info);
    pSVar2 = engine_3d_c_renderPolygonEnginePlaneMaskedEffect_FUN_00405690(polygon_info);
    return pSVar2;
  }
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
      g_RenderStateFlags = RENDER_SPECIAL_EFFECTS;
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
    g_RenderStateFlags = RENDER_COMPLEX_EFFECTS;
    g_RenderStateFlag2 = PREPROCESS_PRIMITIVE_SPECIAL;
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}


// Assembly code:
// 00406de0: PUSH EBX
//   Label: engine_3d.c_renderPolygonSpecialEffectsPlaneMasked_FUN_00406de0
// 00406de1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00406de5: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 00406dec: JZ 0x00406f02
//   XREF to: 00406f02 (CONDITIONAL_JUMP)
// 00406df2: PUSH ESI
// 00406df3: LEA ESI,[EBX + 0x18]
// 00406df6: LEA EAX,[EBX + 0x8]
// 00406df9: PUSH EAX
// 00406dfa: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00406dff: ADD ESP,0x4
// 00406e02: TEST EAX,EAX
// 00406e04: JZ 0x00406e51
//   XREF to: 00406e51 (CONDITIONAL_JUMP)
// 00406e06: CMP dword ptr [0x02d02578],0x0
//   XREF to: 02d02578 (READ)
// 00406e0d: JZ 0x00406e8c
//   XREF to: 00406e8c (CONDITIONAL_JUMP)
// 00406e13: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00406e1a: JNZ 0x00406e6b
//   XREF to: 00406e6b (CONDITIONAL_JUMP)
// 00406e1c: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00406e23: JNZ 0x00406e5f
//   XREF to: 00406e5f (CONDITIONAL_JUMP)
// 00406e25: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00406e2f: MOV EAX,0x8d
//   Label: LAB_00406e2f
// 00406e34: PUSH ESI
// 00406e35: MOV ECX,dword ptr [EBX + 0x4]
// 00406e38: MOV EDX,0x4
// 00406e3d: PUSH ECX
// 00406e3e: MOV [0x02d052a0],EAX
//   XREF to: 02d052a0 (WRITE)
// 00406e43: MOV dword ptr [0x02d052a4],EDX
//   XREF to: 02d052a4 (WRITE)
// 00406e49: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00406e4e: ADD ESP,0x8
// 00406e51: MOV ESI,dword ptr [EBX + 0x4]
//   Label: LAB_00406e51
// 00406e54: LEA EAX,[EBX + 0x18]
// 00406e57: SHL ESI,0x2
// 00406e5a: ADD EAX,ESI
// 00406e5c: POP ESI
// 00406e5d: POP EBX
// 00406e5e: RET
// 00406e5f: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00406e5f
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00406e69: JMP 0x00406e2f
//   XREF to: 00406e2f (UNCONDITIONAL_JUMP)
// 00406e6b: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00406e6b
//   XREF to: 0067939c (READ)
// 00406e72: JNZ 0x00406e80
//   XREF to: 00406e80 (CONDITIONAL_JUMP)
// 00406e74: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00406e7e: JMP 0x00406e2f
//   XREF to: 00406e2f (UNCONDITIONAL_JUMP)
// 00406e80: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00406e80
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00406e8a: JMP 0x00406e2f
//   XREF to: 00406e2f (UNCONDITIONAL_JUMP)
// 00406e8c: CMP dword ptr [0x02d05248],0x0
//   Label: LAB_00406e8c
//   XREF to: 02d05248 (READ)
// 00406e93: JNZ 0x00406ee1
//   XREF to: 00406ee1 (CONDITIONAL_JUMP)
// 00406e95: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00406e9c: JNZ 0x00406ed5
//   XREF to: 00406ed5 (CONDITIONAL_JUMP)
// 00406e9e: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00406ea8: MOV EAX,0x28d
//   Label: LAB_00406ea8
// 00406ead: PUSH ESI
// 00406eae: MOV ECX,dword ptr [EBX + 0x4]
// 00406eb1: XOR EDX,EDX
// 00406eb3: PUSH ECX
// 00406eb4: MOV [0x02d052a0],EAX
//   XREF to: 02d052a0 (WRITE)
// 00406eb9: MOV dword ptr [0x02d052a4],EDX
//   XREF to: 02d052a4 (WRITE)
// 00406ebf: CALL engine_clipper.c_clipPolygonToViewport_FUN_00438420
//   XREF to: 00438420 (UNCONDITIONAL_CALL)
// 00406ec4: ADD ESP,0x8
// 00406ec7: MOV ESI,dword ptr [EBX + 0x4]
// 00406eca: LEA EAX,[EBX + 0x18]
// 00406ecd: SHL ESI,0x2
// 00406ed0: ADD EAX,ESI
// 00406ed2: POP ESI
// 00406ed3: POP EBX
// 00406ed4: RET
// 00406ed5: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00406ed5
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00406edf: JMP 0x00406ea8
//   XREF to: 00406ea8 (UNCONDITIONAL_JUMP)
// 00406ee1: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00406ee1
//   XREF to: 0067939c (READ)
// 00406ee8: JNZ 0x00406ef6
//   XREF to: 00406ef6 (CONDITIONAL_JUMP)
// 00406eea: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00406ef4: JMP 0x00406ea8
//   XREF to: 00406ea8 (UNCONDITIONAL_JUMP)
// 00406ef6: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00406ef6
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00406f00: JMP 0x00406ea8
//   XREF to: 00406ea8 (UNCONDITIONAL_JUMP)
// 00406f02: PUSH EBX
//   Label: LAB_00406f02
// 00406f03: CALL engine_3d.c_renderPolygonDepthWriteTextured_FUN_00405960
//   XREF to: 00405960 (UNCONDITIONAL_CALL)
// 00406f08: ADD ESP,0x4
// 00406f0b: PUSH EBX
// 00406f0c: CALL engine_3d.c_renderPolygonEnginePlaneMaskedEffect_FUN_00405690
//   XREF to: 00405690 (UNCONDITIONAL_CALL)
// 00406f11: ADD ESP,0x4
// 00406f14: POP EBX
// 00406f15: RET
