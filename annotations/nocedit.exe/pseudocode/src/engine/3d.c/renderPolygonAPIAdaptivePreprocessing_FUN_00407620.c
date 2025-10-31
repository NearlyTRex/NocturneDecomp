// Name: engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620
// Address: 00407620
// Address Range: [[00407620, 00407712]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620(SMRGLHeaderPrimitive * primitive, int render_flags, int render_state_flags, int alpha_blend_flags, int special_render_mode)
// Cross-references:
//   engine_font.cpp_CBitFont_render3DCharacter_FUN_004ce2d0 (004ce2d0) at 004ce736 [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   int g_CurrentLightingValue
//   int g_AdvancedClippingEnabled
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   BOOL g_MMXSupported
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_clipper.c_clipAndRasterize_FUN_004371b0
//   engine_clipper.c_clipPolygonToViewport_FUN_00438420
//   engine_light.cpp_calculateLighting_FUN_00505780

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620
          (SMRGLHeaderPrimitive *primitive,int render_flags,int render_state_flags,
          int alpha_blend_flags,int special_render_mode)

{
  SMRGLHeaderExtended *pSVar1;
  SMRGLHeaderExtended *extraout_EAX;
  SMRGLHeaderExtended *extraout_EAX_00;
  
  pSVar1 = (SMRGLHeaderExtended *)
           engine_3d_c_isVisiblePlane_FUN_00403950(&primitive->surface_normal);
  if (pSVar1 != (SMRGLHeaderExtended *)0x0) {
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
    g_RenderStateFlags = render_state_flags;
    if ((render_state_flags & 0x10U) != 0) {
      g_CurrentLightingValue =
           engine_light_cpp_calculateLighting_FUN_00505780
                     ((primitive->surface_normal).A,(primitive->surface_normal).B,
                      (primitive->surface_normal).C);
    }
    g_RenderStateFlag2 = special_render_mode;
    if (special_render_mode == 0) {
      if ((alpha_blend_flags & 0xc0U) != 0) {
        g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
      }
    }
    else {
      g_RenderStateFlag2 = PREPROCESS_TEXTURE_NORMALIZE_ALT;
    }
    if (g_AdvancedClippingEnabled == 0) {
      engine_clipper_c_clipPolygonToViewport_FUN_00438420
                ((primitive->base).count,(int *)(primitive + 1));
      return extraout_EAX_00;
    }
    engine_clipper_c_clipAndRasterize_FUN_004371b0((primitive->base).count,(int *)(primitive + 1));
    pSVar1 = extraout_EAX;
  }
  return pSVar1;
}


// Assembly code:
// 00407620: PUSH EBX
//   Label: engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620
// 00407621: PUSH ESI
// 00407622: PUSH EDI
// 00407623: PUSH EBP
// 00407624: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00407628: LEA EAX,[EBX + 0x8]
// 0040762b: PUSH EAX
// 0040762c: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00407631: ADD ESP,0x4
// 00407634: TEST EAX,EAX
// 00407636: JZ 0x004076b1
//   XREF to: 004076b1 (CONDITIONAL_JUMP)
// 0040763c: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00407643: JNZ 0x004076c2
//   XREF to: 004076c2 (CONDITIONAL_JUMP)
// 00407649: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00407650: JNZ 0x004076b6
//   XREF to: 004076b6 (CONDITIONAL_JUMP)
// 00407652: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 0040765c: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_0040765c
//   XREF to: Stack[0x8] (READ)
// 00407660: MOV [0x02d052a0],EAX
//   XREF to: 02d052a0 (WRITE)
// 00407665: TEST byte ptr [ESP + 0x18],0x10
//   XREF to: Stack[0x8] (READ)
// 0040766a: JZ 0x00407685
//   XREF to: 00407685 (CONDITIONAL_JUMP)
// 0040766c: MOV ECX,dword ptr [EBX + 0x10]
// 0040766f: PUSH ECX
// 00407670: MOV ESI,dword ptr [EBX + 0xc]
// 00407673: PUSH ESI
// 00407674: MOV EDI,dword ptr [EBX + 0x8]
// 00407677: PUSH EDI
// 00407678: CALL engine_light.cpp_calculateLighting_FUN_00505780
//   XREF to: 00505780 (UNCONDITIONAL_CALL)
// 0040767d: ADD ESP,0xc
// 00407680: MOV [0x02d02574],EAX
//   XREF to: 02d02574 (WRITE)
// 00407685: MOV EBP,dword ptr [ESP + 0x1c]
//   Label: LAB_00407685
//   XREF to: Stack[0xc] (READ)
// 00407689: TEST EBP,EBP
// 0040768b: JZ 0x004076e6
//   XREF to: 004076e6 (CONDITIONAL_JUMP)
// 0040768d: MOV dword ptr [0x02d052a4],0x5
//   XREF to: 02d052a4 (WRITE)
// 00407697: MOV ESI,dword ptr [0x02d02578]
//   Label: LAB_00407697
//   XREF to: 02d02578 (READ)
// 0040769d: LEA EAX,[EBX + 0x18]
// 004076a0: TEST ESI,ESI
// 004076a2: JZ 0x00407701
//   XREF to: 00407701 (CONDITIONAL_JUMP)
// 004076a4: PUSH EAX
// 004076a5: MOV EBP,dword ptr [EBX + 0x4]
// 004076a8: PUSH EBP
// 004076a9: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 004076ae: ADD ESP,0x8
// 004076b1: POP EBP
//   Label: LAB_004076b1
// 004076b2: POP EDI
// 004076b3: POP ESI
// 004076b4: POP EBX
// 004076b5: RET
// 004076b6: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_004076b6
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 004076c0: JMP 0x0040765c
//   XREF to: 0040765c (UNCONDITIONAL_JUMP)
// 004076c2: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_004076c2
//   XREF to: 0067939c (READ)
// 004076c9: JNZ 0x004076d7
//   XREF to: 004076d7 (CONDITIONAL_JUMP)
// 004076cb: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 004076d5: JMP 0x0040765c
//   XREF to: 0040765c (UNCONDITIONAL_JUMP)
// 004076d7: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_004076d7
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 004076e1: JMP 0x0040765c
//   XREF to: 0040765c (UNCONDITIONAL_JUMP)
// 004076e6: TEST byte ptr [ESP + 0x18],0xc0
//   Label: LAB_004076e6
//   XREF to: Stack[0x8] (READ)
// 004076eb: JZ 0x004076f9
//   XREF to: 004076f9 (CONDITIONAL_JUMP)
// 004076ed: MOV dword ptr [0x02d052a4],0x1
//   XREF to: 02d052a4 (WRITE)
// 004076f7: JMP 0x00407697
//   XREF to: 00407697 (UNCONDITIONAL_JUMP)
// 004076f9: MOV dword ptr [0x02d052a4],EBP
//   Label: LAB_004076f9
//   XREF to: 02d052a4 (WRITE)
// 004076ff: JMP 0x00407697
//   XREF to: 00407697 (UNCONDITIONAL_JUMP)
// 00407701: PUSH EAX
//   Label: LAB_00407701
// 00407702: MOV EDI,dword ptr [EBX + 0x4]
// 00407705: PUSH EDI
// 00407706: CALL engine_clipper.c_clipPolygonToViewport_FUN_00438420
//   XREF to: 00438420 (UNCONDITIONAL_CALL)
// 0040770b: ADD ESP,0x8
// 0040770e: POP EBP
// 0040770f: POP EDI
// 00407710: POP ESI
// 00407711: POP EBX
// 00407712: RET
