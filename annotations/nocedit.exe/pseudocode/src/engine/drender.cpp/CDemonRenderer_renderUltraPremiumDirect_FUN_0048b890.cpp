// Name: engine_drender.cpp_CDemonRenderer_renderUltraPremiumDirect_FUN_0048b890
// Address: 0048b890
// Address Range: [[0048b890, 0048b961]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderUltraPremiumDirect_FUN_0048b890(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
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
engine_drender_cpp_CDemonRenderer_renderUltraPremiumDirect_FUN_0048b890
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

{
  SMRGLHeaderPrimitive *pSVar1;
  uint uVar2;
  int iVar3;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403950(&prim->surface_normal), iVar3 != 0)) {
    uVar2 = 0xffffffff;
    iVar3 = 0;
    if (0 < (prim->base).count) {
      pSVar1 = prim;
      do {
        iVar3 = iVar3 + 1;
        uVar2 = uVar2 & this_ptr->vertex_buffer_ptr[pSVar1[1].base.type].projected_vertex.screen_x;
        pSVar1 = (SMRGLHeaderPrimitive *)&(pSVar1->base).count;
      } while (iVar3 < (prim->base).count);
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
        g_RenderStateFlags = RENDER_ENGINE_CORE_ULTRA;
      }
      else {
        g_RenderStateFlags = RENDER_TEXTURE_ENABLE;
        g_RenderStateFlag2 = PREPROCESS_NONE;
        g_ScanlineRenderFunc = core_dstrender_cpp_renderTexturedAlphaMMXScanline_FUN_004907e7;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
                (this_ptr,(prim->base).count,(int *)(prim + 1));
    }
  }
  return;
}


// Assembly code:
// 0048b890: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_renderUltraPremiumDirect_FUN_0048b890
// 0048b891: PUSH ESI
// 0048b892: PUSH EDI
// 0048b893: PUSH EBP
// 0048b894: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048b898: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048b89c: CMP dword ptr [EBP + 0xc],0x0
// 0048b8a0: JNZ 0x0048b916
//   XREF to: 0048b916 (CONDITIONAL_JUMP)
// 0048b8a6: MOV ECX,0xffffffff
//   Label: LAB_0048b8a6
// 0048b8ab: MOV EBX,dword ptr [ESI + 0x4]
// 0048b8ae: XOR EDX,EDX
// 0048b8b0: TEST EBX,EBX
// 0048b8b2: JLE 0x0048b8d0
//   XREF to: 0048b8d0 (CONDITIONAL_JUMP)
// 0048b8b4: MOV EAX,ESI
// 0048b8b6: MOV EDI,dword ptr [EBP]
// 0048b8b9: MOV EBX,dword ptr [EAX + 0x18]
//   Label: LAB_0048b8b9
// 0048b8bc: IMUL EBX,EBX,0x30
// 0048b8bf: INC EDX
// 0048b8c0: AND ECX,dword ptr [EDI + EBX*0x1 + 0x10]
// 0048b8c4: MOV EBX,dword ptr [ESI + 0x4]
// 0048b8c7: ADD EAX,0x4
// 0048b8ca: CMP EDX,EBX
// 0048b8cc: JL 0x0048b8b9
//   XREF to: 0048b8b9 (CONDITIONAL_JUMP)
// 0048b8ce: MOV EAX,EAX
// 0048b8d0: TEST ECX,0x80000000
//   Label: LAB_0048b8d0
// 0048b8d6: JZ 0x0048b8dd
//   XREF to: 0048b8dd (CONDITIONAL_JUMP)
// 0048b8d8: TEST CL,0x1f
// 0048b8db: JNZ 0x0048b911
//   XREF to: 0048b911 (CONDITIONAL_JUMP)
// 0048b8dd: CMP dword ptr [EBP + 0x4],0x0
//   Label: LAB_0048b8dd
// 0048b8e1: JZ 0x0048b92b
//   XREF to: 0048b92b (CONDITIONAL_JUMP)
// 0048b8e3: MOV EDX,0x1
// 0048b8e8: MOV EAX,0x4907e7
//   XREF to: 004907e7 (DATA)
// 0048b8ed: XOR ECX,ECX
// 0048b8ef: MOV dword ptr [0x02d052a0],EDX
//   XREF to: 02d052a0 (WRITE)
// 0048b8f5: MOV dword ptr [0x02d052a4],ECX
//   XREF to: 02d052a4 (WRITE)
// 0048b8fb: MOV [0x02d0257c],EAX
//   XREF to: 02d0257c (WRITE)
// 0048b900: LEA EAX,[ESI + 0x18]
//   Label: LAB_0048b900
// 0048b903: PUSH EAX
// 0048b904: MOV EBX,dword ptr [ESI + 0x4]
// 0048b907: PUSH EBX
// 0048b908: PUSH EBP
// 0048b909: CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
//   XREF to: 0048a740 (UNCONDITIONAL_CALL)
// 0048b90e: ADD ESP,0xc
// 0048b911: POP EBP
//   Label: LAB_0048b911
// 0048b912: POP EDI
// 0048b913: POP ESI
// 0048b914: POP EBX
// 0048b915: RET
// 0048b916: LEA EAX,[ESI + 0x8]
//   Label: LAB_0048b916
// 0048b919: PUSH EAX
// 0048b91a: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0048b91f: ADD ESP,0x4
// 0048b922: TEST EAX,EAX
// 0048b924: JZ 0x0048b911
//   XREF to: 0048b911 (CONDITIONAL_JUMP)
// 0048b926: JMP 0x0048b8a6
//   XREF to: 0048b8a6 (UNCONDITIONAL_JUMP)
// 0048b92b: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0048b92b
//   XREF to: 0067939c (READ)
// 0048b932: JNZ 0x0048b956
//   XREF to: 0048b956 (CONDITIONAL_JUMP)
// 0048b934: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 0048b93e: MOV EDI,0x6
//   Label: LAB_0048b93e
// 0048b943: MOV EBX,0x2e7
// 0048b948: MOV dword ptr [0x02d052a4],EDI
//   XREF to: 02d052a4 (WRITE)
// 0048b94e: MOV dword ptr [0x02d052a0],EBX
//   XREF to: 02d052a0 (WRITE)
// 0048b954: JMP 0x0048b900
//   XREF to: 0048b900 (UNCONDITIONAL_JUMP)
// 0048b956: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_0048b956
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0048b960: JMP 0x0048b93e
//   XREF to: 0048b93e (UNCONDITIONAL_JUMP)
