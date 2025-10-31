// Name: engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
// Address: 0048bad0
// Address Range: [[0048bad0, 0048bb99]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
// Cross-references:
//   core_actor.cpp_FUN_0040dec0 (0040dec0) at 0040e020 [UNCONDITIONAL_CALL]
//   core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0 (004715e0) at 00471752 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20 (00473a20) at 00473f32 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210 (00475210) at 00475834 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0 (00474ad0) at 004751d5 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_renderConeLightGeometry_FUN_004760d0 (004760d0) at 00476590 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGunFlame_FUN_004c50b0 (004c50b0) at 004c55ca [UNCONDITIONAL_CALL]
//   core_fire.cpp_CLaserBeam_FUN_004c25c0 (004c25c0) at 004c2d37 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CPopcorn_render_FUN_004c64c0 (004c64c0) at 004c67f4 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CRainDrop_render_FUN_004c6830 (004c6830) at 004c6b9e [UNCONDITIONAL_CALL]
//   core_fire.cpp_CSpark_render_FUN_004c0420 (004c0420) at 004c0554 [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004ca110 (004ca110) at 004ca603 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_005817d0 (005817d0) at 00581a25 [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005b9c10 (005b9c10) at 005ba241 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_FUN_005f1230 (005f1230) at 005f17f9 [UNCONDITIONAL_CALL]
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
engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)

{
  SMRGLHeaderPrimitive *pSVar1;
  uint uVar2;
  int iVar3;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal), iVar3 != 0)) {
    uVar2 = 0xffffffff;
    iVar3 = 0;
    if (0 < (polygon_info->base).count) {
      pSVar1 = polygon_info;
      do {
        iVar3 = iVar3 + 1;
        uVar2 = uVar2 & this_ptr->vertex_buffer_ptr[pSVar1[1].base.type].projected_vertex.screen_x;
        pSVar1 = (SMRGLHeaderPrimitive *)&(pSVar1->base).count;
      } while (iVar3 < (polygon_info->base).count);
    }
    if (((uVar2 & 0x80000000) == 0) || ((uVar2 & 0x1f) == 0)) {
      if (this_ptr->face_count == 0) {
        if (g_BitsPerPixel == 0x20) {
          g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
        }
        else {
          g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
        }
        g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
        g_RenderStateFlags = RENDER_ENGINE_CORE_MAXIMUM;
      }
      else {
        g_RenderStateFlags = 0;
        g_RenderStateFlag2 = PREPROCESS_NONE;
        g_ScanlineRenderFunc = core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
                (this_ptr,(polygon_info->base).count,(int *)(polygon_info + 1));
    }
  }
  return;
}


// Assembly code:
// 0048bad0: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
// 0048bad1: PUSH ESI
// 0048bad2: PUSH EDI
// 0048bad3: PUSH EBP
// 0048bad4: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048bad8: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048badc: CMP dword ptr [EBP + 0xc],0x0
// 0048bae0: JNZ 0x0048bb51
//   XREF to: 0048bb51 (CONDITIONAL_JUMP)
// 0048bae6: MOV ECX,0xffffffff
//   Label: LAB_0048bae6
// 0048baeb: MOV EBX,dword ptr [ESI + 0x4]
// 0048baee: XOR EDX,EDX
// 0048baf0: TEST EBX,EBX
// 0048baf2: JLE 0x0048bb10
//   XREF to: 0048bb10 (CONDITIONAL_JUMP)
// 0048baf4: MOV EAX,ESI
// 0048baf6: MOV EDI,dword ptr [EBP]
// 0048baf9: MOV EBX,dword ptr [EAX + 0x18]
//   Label: LAB_0048baf9
// 0048bafc: IMUL EBX,EBX,0x30
// 0048baff: INC EDX
// 0048bb00: AND ECX,dword ptr [EDI + EBX*0x1 + 0x10]
// 0048bb04: MOV EBX,dword ptr [ESI + 0x4]
// 0048bb07: ADD EAX,0x4
// 0048bb0a: CMP EDX,EBX
// 0048bb0c: JL 0x0048baf9
//   XREF to: 0048baf9 (CONDITIONAL_JUMP)
// 0048bb0e: MOV EAX,EAX
// 0048bb10: TEST ECX,0x80000000
//   Label: LAB_0048bb10
// 0048bb16: JZ 0x0048bb1d
//   XREF to: 0048bb1d (CONDITIONAL_JUMP)
// 0048bb18: TEST CL,0x1f
// 0048bb1b: JNZ 0x0048bb4c
//   XREF to: 0048bb4c (CONDITIONAL_JUMP)
// 0048bb1d: CMP dword ptr [EBP + 0x4],0x0
//   Label: LAB_0048bb1d
// 0048bb21: JZ 0x0048bb63
//   XREF to: 0048bb63 (CONDITIONAL_JUMP)
// 0048bb23: XOR EDX,EDX
// 0048bb25: MOV EAX,0x49072f
//   XREF to: 0049072f (DATA)
// 0048bb2a: MOV dword ptr [0x02d052a0],EDX
//   XREF to: 02d052a0 (WRITE)
// 0048bb30: MOV dword ptr [0x02d052a4],EDX
//   XREF to: 02d052a4 (WRITE)
// 0048bb36: MOV [0x02d0257c],EAX
//   XREF to: 02d0257c (WRITE)
// 0048bb3b: LEA EAX,[ESI + 0x18]
//   Label: LAB_0048bb3b
// 0048bb3e: PUSH EAX
// 0048bb3f: MOV EBX,dword ptr [ESI + 0x4]
// 0048bb42: PUSH EBX
// 0048bb43: PUSH EBP
// 0048bb44: CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
//   XREF to: 0048a740 (UNCONDITIONAL_CALL)
// 0048bb49: ADD ESP,0xc
// 0048bb4c: POP EBP
//   Label: LAB_0048bb4c
// 0048bb4d: POP EDI
// 0048bb4e: POP ESI
// 0048bb4f: POP EBX
// 0048bb50: RET
// 0048bb51: LEA EAX,[ESI + 0x8]
//   Label: LAB_0048bb51
// 0048bb54: PUSH EAX
// 0048bb55: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0048bb5a: ADD ESP,0x4
// 0048bb5d: TEST EAX,EAX
// 0048bb5f: JZ 0x0048bb4c
//   XREF to: 0048bb4c (CONDITIONAL_JUMP)
// 0048bb61: JMP 0x0048bae6
//   XREF to: 0048bae6 (UNCONDITIONAL_JUMP)
// 0048bb63: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0048bb63
//   XREF to: 0067939c (READ)
// 0048bb6a: JNZ 0x0048bb8e
//   XREF to: 0048bb8e (CONDITIONAL_JUMP)
// 0048bb6c: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 0048bb76: MOV EDI,0x6
//   Label: LAB_0048bb76
// 0048bb7b: MOV EBX,0x367
// 0048bb80: MOV dword ptr [0x02d052a4],EDI
//   XREF to: 02d052a4 (WRITE)
// 0048bb86: MOV dword ptr [0x02d052a0],EBX
//   XREF to: 02d052a0 (WRITE)
// 0048bb8c: JMP 0x0048bb3b
//   XREF to: 0048bb3b (UNCONDITIONAL_JUMP)
// 0048bb8e: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_0048bb8e
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0048bb98: JMP 0x0048bb76
//   XREF to: 0048bb76 (UNCONDITIONAL_JUMP)
