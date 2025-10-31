// Name: engine_drender.cpp_CDemonRenderer_renderEnhancedQualityDirect_FUN_0048b650
// Address: 0048b650
// Address Range: [[0048b650, 0048b721]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderEnhancedQualityDirect_FUN_0048b650(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
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
engine_drender_cpp_CDemonRenderer_renderEnhancedQualityDirect_FUN_0048b650
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
        g_RenderStateFlags = 999;
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
// 0048b650: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_renderEnhancedQualityDirect_FUN_0048b650
// 0048b651: PUSH ESI
// 0048b652: PUSH EDI
// 0048b653: PUSH EBP
// 0048b654: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048b658: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048b65c: CMP dword ptr [EBP + 0xc],0x0
// 0048b660: JNZ 0x0048b6d6
//   XREF to: 0048b6d6 (CONDITIONAL_JUMP)
// 0048b666: MOV ECX,0xffffffff
//   Label: LAB_0048b666
// 0048b66b: MOV EBX,dword ptr [ESI + 0x4]
// 0048b66e: XOR EDX,EDX
// 0048b670: TEST EBX,EBX
// 0048b672: JLE 0x0048b690
//   XREF to: 0048b690 (CONDITIONAL_JUMP)
// 0048b674: MOV EAX,ESI
// 0048b676: MOV EDI,dword ptr [EBP]
// 0048b679: MOV EBX,dword ptr [EAX + 0x18]
//   Label: LAB_0048b679
// 0048b67c: IMUL EBX,EBX,0x30
// 0048b67f: INC EDX
// 0048b680: AND ECX,dword ptr [EDI + EBX*0x1 + 0x10]
// 0048b684: MOV EBX,dword ptr [ESI + 0x4]
// 0048b687: ADD EAX,0x4
// 0048b68a: CMP EDX,EBX
// 0048b68c: JL 0x0048b679
//   XREF to: 0048b679 (CONDITIONAL_JUMP)
// 0048b68e: MOV EAX,EAX
// 0048b690: TEST ECX,0x80000000
//   Label: LAB_0048b690
// 0048b696: JZ 0x0048b69d
//   XREF to: 0048b69d (CONDITIONAL_JUMP)
// 0048b698: TEST CL,0x1f
// 0048b69b: JNZ 0x0048b6d1
//   XREF to: 0048b6d1 (CONDITIONAL_JUMP)
// 0048b69d: CMP dword ptr [EBP + 0x4],0x0
//   Label: LAB_0048b69d
// 0048b6a1: JZ 0x0048b6eb
//   XREF to: 0048b6eb (CONDITIONAL_JUMP)
// 0048b6a3: MOV EDX,0x1
// 0048b6a8: MOV EAX,0x4907e7
//   XREF to: 004907e7 (DATA)
// 0048b6ad: XOR ECX,ECX
// 0048b6af: MOV dword ptr [0x02d052a0],EDX
//   XREF to: 02d052a0 (WRITE)
// 0048b6b5: MOV dword ptr [0x02d052a4],ECX
//   XREF to: 02d052a4 (WRITE)
// 0048b6bb: MOV [0x02d0257c],EAX
//   XREF to: 02d0257c (WRITE)
// 0048b6c0: LEA EAX,[ESI + 0x18]
//   Label: LAB_0048b6c0
// 0048b6c3: PUSH EAX
// 0048b6c4: MOV EBX,dword ptr [ESI + 0x4]
// 0048b6c7: PUSH EBX
// 0048b6c8: PUSH EBP
// 0048b6c9: CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
//   XREF to: 0048a740 (UNCONDITIONAL_CALL)
// 0048b6ce: ADD ESP,0xc
// 0048b6d1: POP EBP
//   Label: LAB_0048b6d1
// 0048b6d2: POP EDI
// 0048b6d3: POP ESI
// 0048b6d4: POP EBX
// 0048b6d5: RET
// 0048b6d6: LEA EAX,[ESI + 0x8]
//   Label: LAB_0048b6d6
// 0048b6d9: PUSH EAX
// 0048b6da: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0048b6df: ADD ESP,0x4
// 0048b6e2: TEST EAX,EAX
// 0048b6e4: JZ 0x0048b6d1
//   XREF to: 0048b6d1 (CONDITIONAL_JUMP)
// 0048b6e6: JMP 0x0048b666
//   XREF to: 0048b666 (UNCONDITIONAL_JUMP)
// 0048b6eb: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0048b6eb
//   XREF to: 0067939c (READ)
// 0048b6f2: JNZ 0x0048b716
//   XREF to: 0048b716 (CONDITIONAL_JUMP)
// 0048b6f4: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 0048b6fe: MOV EDI,0x6
//   Label: LAB_0048b6fe
// 0048b703: MOV EBX,0x3e7
// 0048b708: MOV dword ptr [0x02d052a4],EDI
//   XREF to: 02d052a4 (WRITE)
// 0048b70e: MOV dword ptr [0x02d052a0],EBX
//   XREF to: 02d052a0 (WRITE)
// 0048b714: JMP 0x0048b6c0
//   XREF to: 0048b6c0 (UNCONDITIONAL_JUMP)
// 0048b716: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_0048b716
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0048b720: JMP 0x0048b6fe
//   XREF to: 0048b6fe (UNCONDITIONAL_JUMP)
