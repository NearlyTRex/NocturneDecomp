// Name: engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
// Address: 0048ae10
// Address Range: [[0048ae10, 0048aea8]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info, int render_flags)
// Cross-references:
//   core_box.cpp_CBoundingBox3D_render_FUN_004210b0 (004210b0) at 00421463 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_00429b40 (00429b40) at 00429e6a [UNCONDITIONAL_CALL]
//   core_fire.cpp_CExplosion_FUN_004c3b10 (004c3b10) at 004c3e5d [UNCONDITIONAL_CALL]
//   core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004ef970 (004ef970) at 004ef981 [UNCONDITIONAL_CALL]
//   core_inv.cpp_drawItemIconBackground_FUN_005001e0 (005001e0) at 00500318 [UNCONDITIONAL_CALL]
//   core_inv.cpp_drawWeaponIconBackground_FUN_00500050 (00500050) at 00500188 [UNCONDITIONAL_CALL]
//   core_level.cpp_CLevelLoader_update_FUN_00504160 (00504160) at 00504558 [UNCONDITIONAL_CALL]
//   core_marquee.cpp_FUN_0050bec0 (0050bec0) at 0050c037 [UNCONDITIONAL_CALL]
//   core_menu.cpp_FUN_0050fe70 (0050fe70) at 0050ffc7 [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_FUN_005e00d0 (005e00d0) at 005e050d [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info,int render_flags)

{
  int iVar1;
  
  if (render_flags == -1) {
    render_flags = RENDER_ENGINE_CORE_PREMIUM;
  }
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal), iVar1 != 0)) {
    if (this_ptr->face_count == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
      }
      else {
        g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
      }
      g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
      g_RenderStateFlags = render_flags;
    }
    else {
      g_RenderStateFlags = 0;
      g_RenderStateFlag2 = PREPROCESS_NONE;
      g_ScanlineRenderFunc = core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
              (this_ptr,(polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return;
}


// Assembly code:
// 0048ae10: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
// 0048ae11: PUSH ESI
// 0048ae12: PUSH EDI
// 0048ae13: PUSH EBP
// 0048ae14: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048ae18: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048ae1c: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0048ae20: CMP ESI,-0x1
// 0048ae23: JNZ 0x0048ae2a
//   XREF to: 0048ae2a (CONDITIONAL_JUMP)
// 0048ae25: MOV ESI,0x2cd
// 0048ae2a: CMP dword ptr [EBX + 0xc],0x0
//   Label: LAB_0048ae2a
// 0048ae2e: JNZ 0x0048ae65
//   XREF to: 0048ae65 (CONDITIONAL_JUMP)
// 0048ae30: CMP dword ptr [EBX + 0x4],0x0
//   Label: LAB_0048ae30
// 0048ae34: JZ 0x0048ae77
//   XREF to: 0048ae77 (CONDITIONAL_JUMP)
// 0048ae36: XOR EBP,EBP
// 0048ae38: MOV ESI,0x49072f
//   XREF to: 0049072f (DATA)
// 0048ae3d: MOV dword ptr [0x02d052a0],EBP
//   XREF to: 02d052a0 (WRITE)
// 0048ae43: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 0048ae49: MOV dword ptr [0x02d0257c],ESI
//   XREF to: 02d0257c (WRITE)
// 0048ae4f: LEA EAX,[EDI + 0x18]
//   Label: LAB_0048ae4f
// 0048ae52: PUSH EAX
// 0048ae53: MOV EDX,dword ptr [EDI + 0x4]
// 0048ae56: PUSH EDX
// 0048ae57: PUSH EBX
// 0048ae58: CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
//   XREF to: 0048a740 (UNCONDITIONAL_CALL)
// 0048ae5d: ADD ESP,0xc
// 0048ae60: POP EBP
//   Label: LAB_0048ae60
// 0048ae61: POP EDI
// 0048ae62: POP ESI
// 0048ae63: POP EBX
// 0048ae64: RET
// 0048ae65: LEA EAX,[EDI + 0x8]
//   Label: LAB_0048ae65
// 0048ae68: PUSH EAX
// 0048ae69: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0048ae6e: ADD ESP,0x4
// 0048ae71: TEST EAX,EAX
// 0048ae73: JZ 0x0048ae60
//   XREF to: 0048ae60 (CONDITIONAL_JUMP)
// 0048ae75: JMP 0x0048ae30
//   XREF to: 0048ae30 (UNCONDITIONAL_JUMP)
// 0048ae77: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0048ae77
//   XREF to: 0067939c (READ)
// 0048ae7e: JNZ 0x0048ae9d
//   XREF to: 0048ae9d (CONDITIONAL_JUMP)
// 0048ae80: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 0048ae8a: MOV ECX,0x6
//   Label: LAB_0048ae8a
// 0048ae8f: MOV dword ptr [0x02d052a0],ESI
//   XREF to: 02d052a0 (WRITE)
// 0048ae95: MOV dword ptr [0x02d052a4],ECX
//   XREF to: 02d052a4 (WRITE)
// 0048ae9b: JMP 0x0048ae4f
//   XREF to: 0048ae4f (UNCONDITIONAL_JUMP)
// 0048ae9d: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_0048ae9d
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0048aea7: JMP 0x0048ae8a
//   XREF to: 0048ae8a (UNCONDITIONAL_JUMP)
