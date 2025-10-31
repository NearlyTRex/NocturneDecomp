// Name: engine_drender.cpp_CDemonRenderer_renderComplexMultiFeature_FUN_0048bf10
// Address: 0048bf10
// Address Range: [[0048bf10, 0048bfd6]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderComplexMultiFeature_FUN_0048bf10(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
// Cross-references:
//   core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90 (00473f90) at 004746d0 [UNCONDITIONAL_CALL]
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
engine_drender_cpp_CDemonRenderer_renderComplexMultiFeature_FUN_0048bf10
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
        g_RenderStateFlags = RENDER_ENGINE_CORE_COMPLEX;
      }
      else {
        g_RenderStateFlags = 0;
        g_ScanlineRenderFunc = core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
      }
      g_RenderStateFlag2 = PREPROCESS_NONE;
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
                (this_ptr,(polygon_info->base).count,(int *)(polygon_info + 1));
    }
  }
  return;
}


// Assembly code:
// 0048bf10: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_renderComplexMultiFeature_FUN_0048bf10
// 0048bf11: PUSH ESI
// 0048bf12: PUSH EDI
// 0048bf13: PUSH EBP
// 0048bf14: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048bf18: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048bf1c: CMP dword ptr [EBP + 0xc],0x0
// 0048bf20: JNZ 0x0048bf91
//   XREF to: 0048bf91 (CONDITIONAL_JUMP)
// 0048bf26: MOV ECX,0xffffffff
//   Label: LAB_0048bf26
// 0048bf2b: MOV EBX,dword ptr [ESI + 0x4]
// 0048bf2e: XOR EDX,EDX
// 0048bf30: TEST EBX,EBX
// 0048bf32: JLE 0x0048bf50
//   XREF to: 0048bf50 (CONDITIONAL_JUMP)
// 0048bf34: MOV EAX,ESI
// 0048bf36: MOV EDI,dword ptr [EBP]
// 0048bf39: MOV EBX,dword ptr [EAX + 0x18]
//   Label: LAB_0048bf39
// 0048bf3c: IMUL EBX,EBX,0x30
// 0048bf3f: INC EDX
// 0048bf40: AND ECX,dword ptr [EDI + EBX*0x1 + 0x10]
// 0048bf44: MOV EBX,dword ptr [ESI + 0x4]
// 0048bf47: ADD EAX,0x4
// 0048bf4a: CMP EDX,EBX
// 0048bf4c: JL 0x0048bf39
//   XREF to: 0048bf39 (CONDITIONAL_JUMP)
// 0048bf4e: MOV EAX,EAX
// 0048bf50: TEST ECX,0x80000000
//   Label: LAB_0048bf50
// 0048bf56: JZ 0x0048bf5d
//   XREF to: 0048bf5d (CONDITIONAL_JUMP)
// 0048bf58: TEST CL,0x1f
// 0048bf5b: JNZ 0x0048bf8c
//   XREF to: 0048bf8c (CONDITIONAL_JUMP)
// 0048bf5d: CMP dword ptr [EBP + 0x4],0x0
//   Label: LAB_0048bf5d
// 0048bf61: JZ 0x0048bfa3
//   XREF to: 0048bfa3 (CONDITIONAL_JUMP)
// 0048bf63: XOR EDX,EDX
// 0048bf65: MOV EAX,0x49072f
//   XREF to: 0049072f (DATA)
// 0048bf6a: MOV dword ptr [0x02d052a0],EDX
//   XREF to: 02d052a0 (WRITE)
// 0048bf70: MOV dword ptr [0x02d052a4],EDX
//   XREF to: 02d052a4 (WRITE)
// 0048bf76: MOV [0x02d0257c],EAX
//   XREF to: 02d0257c (WRITE)
// 0048bf7b: LEA EAX,[ESI + 0x18]
//   Label: LAB_0048bf7b
// 0048bf7e: PUSH EAX
// 0048bf7f: MOV EBX,dword ptr [ESI + 0x4]
// 0048bf82: PUSH EBX
// 0048bf83: PUSH EBP
// 0048bf84: CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
//   XREF to: 0048a740 (UNCONDITIONAL_CALL)
// 0048bf89: ADD ESP,0xc
// 0048bf8c: POP EBP
//   Label: LAB_0048bf8c
// 0048bf8d: POP EDI
// 0048bf8e: POP ESI
// 0048bf8f: POP EBX
// 0048bf90: RET
// 0048bf91: LEA EAX,[ESI + 0x8]
//   Label: LAB_0048bf91
// 0048bf94: PUSH EAX
// 0048bf95: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0048bf9a: ADD ESP,0x4
// 0048bf9d: TEST EAX,EAX
// 0048bf9f: JZ 0x0048bf8c
//   XREF to: 0048bf8c (CONDITIONAL_JUMP)
// 0048bfa1: JMP 0x0048bf26
//   XREF to: 0048bf26 (UNCONDITIONAL_JUMP)
// 0048bfa3: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0048bfa3
//   XREF to: 0067939c (READ)
// 0048bfaa: JNZ 0x0048bfcb
//   XREF to: 0048bfcb (CONDITIONAL_JUMP)
// 0048bfac: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 0048bfb6: XOR EDI,EDI
//   Label: LAB_0048bfb6
// 0048bfb8: MOV EBX,0x327
// 0048bfbd: MOV dword ptr [0x02d052a4],EDI
//   XREF to: 02d052a4 (WRITE)
// 0048bfc3: MOV dword ptr [0x02d052a0],EBX
//   XREF to: 02d052a0 (WRITE)
// 0048bfc9: JMP 0x0048bf7b
//   XREF to: 0048bf7b (UNCONDITIONAL_JUMP)
// 0048bfcb: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_0048bfcb
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0048bfd5: JMP 0x0048bfb6
//   XREF to: 0048bfb6 (UNCONDITIONAL_JUMP)
