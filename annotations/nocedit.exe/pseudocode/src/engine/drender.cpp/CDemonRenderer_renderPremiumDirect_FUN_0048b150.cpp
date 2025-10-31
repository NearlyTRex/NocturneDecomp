// Name: engine_drender.cpp_CDemonRenderer_renderPremiumDirect_FUN_0048b150
// Address: 0048b150
// Address Range: [[0048b150, 0048b1df]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderPremiumDirect_FUN_0048b150(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
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
engine_drender_cpp_CDemonRenderer_renderPremiumDirect_FUN_0048b150
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&prim->surface_normal), iVar1 != 0)) {
    if (this_ptr->face_count == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
      }
      else {
        g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
      }
      g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
      g_RenderStateFlags = RENDER_ENGINE_CORE_PREMIUM;
    }
    else {
      g_RenderStateFlags = 0;
      g_RenderStateFlag2 = PREPROCESS_NONE;
      g_ScanlineRenderFunc = core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
              (this_ptr,(prim->base).count,(int *)(prim + 1));
  }
  return;
}


// Assembly code:
// 0048b150: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_renderPremiumDirect_FUN_0048b150
// 0048b151: PUSH ESI
// 0048b152: PUSH EBP
// 0048b153: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0048b157: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0048b15b: CMP dword ptr [ESI + 0xc],0x0
// 0048b15f: JNZ 0x0048b197
//   XREF to: 0048b197 (CONDITIONAL_JUMP)
// 0048b161: CMP dword ptr [ESI + 0x4],0x0
//   Label: LAB_0048b161
// 0048b165: JZ 0x0048b1a9
//   XREF to: 0048b1a9 (CONDITIONAL_JUMP)
// 0048b167: PUSH EDI
// 0048b168: XOR EBP,EBP
// 0048b16a: MOV EDI,0x49072f
//   XREF to: 0049072f (DATA)
// 0048b16f: MOV dword ptr [0x02d052a0],EBP
//   XREF to: 02d052a0 (WRITE)
// 0048b175: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 0048b17b: MOV dword ptr [0x02d0257c],EDI
//   XREF to: 02d0257c (WRITE)
// 0048b181: POP EDI
// 0048b182: LEA EAX,[EBX + 0x18]
//   Label: LAB_0048b182
// 0048b185: PUSH EAX
// 0048b186: MOV EDX,dword ptr [EBX + 0x4]
// 0048b189: PUSH EDX
// 0048b18a: PUSH ESI
// 0048b18b: CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
//   XREF to: 0048a740 (UNCONDITIONAL_CALL)
// 0048b190: ADD ESP,0xc
// 0048b193: POP EBP
//   Label: LAB_0048b193
// 0048b194: POP ESI
// 0048b195: POP EBX
// 0048b196: RET
// 0048b197: LEA EAX,[EBX + 0x8]
//   Label: LAB_0048b197
// 0048b19a: PUSH EAX
// 0048b19b: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0048b1a0: ADD ESP,0x4
// 0048b1a3: TEST EAX,EAX
// 0048b1a5: JZ 0x0048b193
//   XREF to: 0048b193 (CONDITIONAL_JUMP)
// 0048b1a7: JMP 0x0048b161
//   XREF to: 0048b161 (UNCONDITIONAL_JUMP)
// 0048b1a9: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0048b1a9
//   XREF to: 0067939c (READ)
// 0048b1b0: JNZ 0x0048b1d4
//   XREF to: 0048b1d4 (CONDITIONAL_JUMP)
// 0048b1b2: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 0048b1bc: MOV ECX,0x6
//   Label: LAB_0048b1bc
// 0048b1c1: MOV EDX,0x2cd
// 0048b1c6: MOV dword ptr [0x02d052a4],ECX
//   XREF to: 02d052a4 (WRITE)
// 0048b1cc: MOV dword ptr [0x02d052a0],EDX
//   XREF to: 02d052a0 (WRITE)
// 0048b1d2: JMP 0x0048b182
//   XREF to: 0048b182 (UNCONDITIONAL_JUMP)
// 0048b1d4: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_0048b1d4
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0048b1de: JMP 0x0048b1bc
//   XREF to: 0048b1bc (UNCONDITIONAL_JUMP)
