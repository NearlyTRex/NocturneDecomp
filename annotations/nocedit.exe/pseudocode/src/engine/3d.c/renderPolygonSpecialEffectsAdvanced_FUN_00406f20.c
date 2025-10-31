// Name: engine_3d.c_renderPolygonSpecialEffectsAdvanced_FUN_00406f20
// Address: 00406f20
// Address Range: [[00406f20, 00407058]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonSpecialEffectsAdvanced_FUN_00406f20(SMRGLHeaderPrimitive * polygon_info)
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
//   engine_3d.c_renderPolygonEnginePlaneMaskedAdvanced_FUN_004057b0
//   engine_clipper.c_clipAndRasterize_FUN_004371b0
//   engine_clipper.c_clipPolygonToViewport_FUN_00438420

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonSpecialEffectsAdvanced_FUN_00406f20(SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  SMRGLHeaderExtended *pSVar2;
  
  if (g_UseExternalRenderer == 0) {
    engine_3d_c_renderPolygonDepthWriteTextured_FUN_00405960(polygon_info);
    pSVar2 = engine_3d_c_renderPolygonEnginePlaneMaskedAdvanced_FUN_004057b0(polygon_info);
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
    g_RenderStateFlags = RENDER_COMPLEX_EFFECTS;
    g_RenderStateFlag2 = PREPROCESS_TEXTURE_NORMALIZE_ALT;
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}


// Assembly code:
// 00406f20: PUSH EBX
//   Label: engine_3d.c_renderPolygonSpecialEffectsAdvanced_FUN_00406f20
// 00406f21: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00406f25: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 00406f2c: JZ 0x00407045
//   XREF to: 00407045 (CONDITIONAL_JUMP)
// 00406f32: PUSH ESI
// 00406f33: LEA ESI,[EBX + 0x18]
// 00406f36: LEA EAX,[EBX + 0x8]
// 00406f39: PUSH EAX
// 00406f3a: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00406f3f: ADD ESP,0x4
// 00406f42: TEST EAX,EAX
// 00406f44: JZ 0x00406f91
//   XREF to: 00406f91 (CONDITIONAL_JUMP)
// 00406f46: CMP dword ptr [0x02d02578],0x0
//   XREF to: 02d02578 (READ)
// 00406f4d: JZ 0x00406fcc
//   XREF to: 00406fcc (CONDITIONAL_JUMP)
// 00406f53: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00406f5a: JNZ 0x00406fab
//   XREF to: 00406fab (CONDITIONAL_JUMP)
// 00406f5c: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00406f63: JNZ 0x00406f9f
//   XREF to: 00406f9f (CONDITIONAL_JUMP)
// 00406f65: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00406f6f: MOV EAX,0x8d
//   Label: LAB_00406f6f
// 00406f74: PUSH ESI
// 00406f75: MOV ECX,dword ptr [EBX + 0x4]
// 00406f78: MOV EDX,0x5
// 00406f7d: PUSH ECX
// 00406f7e: MOV [0x02d052a0],EAX
//   XREF to: 02d052a0 (WRITE)
// 00406f83: MOV dword ptr [0x02d052a4],EDX
//   XREF to: 02d052a4 (WRITE)
// 00406f89: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00406f8e: ADD ESP,0x8
// 00406f91: MOV ESI,dword ptr [EBX + 0x4]
//   Label: LAB_00406f91
// 00406f94: LEA EAX,[EBX + 0x18]
// 00406f97: SHL ESI,0x2
// 00406f9a: ADD EAX,ESI
// 00406f9c: POP ESI
// 00406f9d: POP EBX
// 00406f9e: RET
// 00406f9f: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00406f9f
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00406fa9: JMP 0x00406f6f
//   XREF to: 00406f6f (UNCONDITIONAL_JUMP)
// 00406fab: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00406fab
//   XREF to: 0067939c (READ)
// 00406fb2: JNZ 0x00406fc0
//   XREF to: 00406fc0 (CONDITIONAL_JUMP)
// 00406fb4: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00406fbe: JMP 0x00406f6f
//   XREF to: 00406f6f (UNCONDITIONAL_JUMP)
// 00406fc0: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00406fc0
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00406fca: JMP 0x00406f6f
//   XREF to: 00406f6f (UNCONDITIONAL_JUMP)
// 00406fcc: CMP dword ptr [0x02d05248],0x0
//   Label: LAB_00406fcc
//   XREF to: 02d05248 (READ)
// 00406fd3: JNZ 0x00407024
//   XREF to: 00407024 (CONDITIONAL_JUMP)
// 00406fd5: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00406fdc: JNZ 0x00407018
//   XREF to: 00407018 (CONDITIONAL_JUMP)
// 00406fde: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00406fe8: MOV EAX,0x28d
//   Label: LAB_00406fe8
// 00406fed: PUSH ESI
// 00406fee: MOV ECX,dword ptr [EBX + 0x4]
// 00406ff1: MOV EDX,0x5
// 00406ff6: PUSH ECX
// 00406ff7: MOV [0x02d052a0],EAX
//   XREF to: 02d052a0 (WRITE)
// 00406ffc: MOV dword ptr [0x02d052a4],EDX
//   XREF to: 02d052a4 (WRITE)
// 00407002: CALL engine_clipper.c_clipPolygonToViewport_FUN_00438420
//   XREF to: 00438420 (UNCONDITIONAL_CALL)
// 00407007: ADD ESP,0x8
// 0040700a: MOV ESI,dword ptr [EBX + 0x4]
// 0040700d: LEA EAX,[EBX + 0x18]
// 00407010: SHL ESI,0x2
// 00407013: ADD EAX,ESI
// 00407015: POP ESI
// 00407016: POP EBX
// 00407017: RET
// 00407018: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00407018
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00407022: JMP 0x00406fe8
//   XREF to: 00406fe8 (UNCONDITIONAL_JUMP)
// 00407024: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00407024
//   XREF to: 0067939c (READ)
// 0040702b: JNZ 0x00407039
//   XREF to: 00407039 (CONDITIONAL_JUMP)
// 0040702d: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00407037: JMP 0x00406fe8
//   XREF to: 00406fe8 (UNCONDITIONAL_JUMP)
// 00407039: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00407039
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00407043: JMP 0x00406fe8
//   XREF to: 00406fe8 (UNCONDITIONAL_JUMP)
// 00407045: PUSH EBX
//   Label: LAB_00407045
// 00407046: CALL engine_3d.c_renderPolygonDepthWriteTextured_FUN_00405960
//   XREF to: 00405960 (UNCONDITIONAL_CALL)
// 0040704b: ADD ESP,0x4
// 0040704e: PUSH EBX
// 0040704f: CALL engine_3d.c_renderPolygonEnginePlaneMaskedAdvanced_FUN_004057b0
//   XREF to: 004057b0 (UNCONDITIONAL_CALL)
// 00407054: ADD ESP,0x4
// 00407057: POP EBX
// 00407058: RET
