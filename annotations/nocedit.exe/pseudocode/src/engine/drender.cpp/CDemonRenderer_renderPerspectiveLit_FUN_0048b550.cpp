// Name: engine_drender.cpp_CDemonRenderer_renderPerspectiveLit_FUN_0048b550
// Address: 0048b550
// Address Range: [[0048b550, 0048b649]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderPerspectiveLit_FUN_0048b550(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
// Cross-references:
//   core_glass.cpp_CGlass_FUN_004e9ca0 (004e9ca0) at 004e9e31 [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   int[16] g_VertexIndexBuffer
//   undefined4 g_VertexIndexBuffer[1]
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_renderPerspectiveLit_FUN_0048b550
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_0000000c;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal), iVar3 != 0)) {
    iVar3 = 0;
    if (0 < *(int *)(in_stack_0000000c + 4)) {
      iVar4 = 0;
      iVar2 = in_stack_0000000c;
      do {
        iVar1 = *(int *)(iVar2 + 0x18);
        if (this_ptr->field8_0x20 == 0) {
          this_ptr->vertex_buffer_ptr[iVar1].u = *(float *)(iVar2 + 0x1c);
          this_ptr->vertex_buffer_ptr[iVar1].v = *(float *)(iVar2 + 0x20);
        }
        *(int *)((int)g_VertexIndexBuffer + iVar4) = iVar1;
        iVar2 = iVar2 + 0xc;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < *(int *)(in_stack_0000000c + 4));
    }
    if (this_ptr->face_count == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
      }
      else {
        g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
      }
      g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
      g_RenderStateFlags = RENDER_TEXTURE_PERSPECTIVE;
    }
    else {
      g_RenderStateFlags = RENDER_TEXTURE_ENABLE;
      g_RenderStateFlag2 = PREPROCESS_NONE;
      g_ScanlineRenderFunc = core_dstrender_cpp_renderTexturedAlphaMMXScanline_FUN_004907e7;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
              (this_ptr,*(int *)(in_stack_0000000c + 4),g_VertexIndexBuffer);
  }
  return;
}


// Assembly code:
// 0048b550: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_renderPerspectiveLit_FUN_0048b550
// 0048b551: PUSH EBP
// 0048b552: SUB ESP,0x4
// 0048b555: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0048b559: CMP dword ptr [EBX + 0xc],0x0
// 0048b55d: JNZ 0x0048b5fa
//   XREF to: 0048b5fa (CONDITIONAL_JUMP)
// 0048b563: PUSH EDI
//   Label: LAB_0048b563
// 0048b564: PUSH ESI
// 0048b565: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048b569: MOV ESI,dword ptr [EAX + 0x4]
// 0048b56c: XOR ECX,ECX
// 0048b56e: TEST ESI,ESI
// 0048b570: JLE 0x0048b5b9
//   XREF to: 0048b5b9 (CONDITIONAL_JUMP)
// 0048b572: XOR EDX,EDX
// 0048b574: MOV EDI,dword ptr [EBX + 0x20]
//   Label: LAB_0048b574
// 0048b577: MOV ESI,dword ptr [EAX + 0x18]
// 0048b57a: TEST EDI,EDI
// 0048b57c: JNZ 0x0048b5a1
//   XREF to: 0048b5a1 (CONDITIONAL_JUMP)
// 0048b57e: IMUL EDI,ESI,0x30
// 0048b581: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0xc] (WRITE)
// 0048b585: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (READ)
// 0048b589: MOV EDI,dword ptr [EBX]
// 0048b58b: ADD EDI,EBP
// 0048b58d: MOV EBP,dword ptr [EAX + 0x1c]
// 0048b590: MOV dword ptr [EDI + 0x18],EBP
// 0048b593: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (READ)
// 0048b597: MOV EDI,dword ptr [EBX]
// 0048b599: ADD EBP,EDI
// 0048b59b: MOV EDI,dword ptr [EAX + 0x20]
// 0048b59e: MOV dword ptr [EBP + 0x1c],EDI
// 0048b5a1: MOV dword ptr [EDX + 0x2c6d5ac],ESI
//   Label: LAB_0048b5a1
//   XREF to: 02c6d5ac (WRITE)
//   XREF to: 02c6d5b0 (WRITE)
// 0048b5a7: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048b5ab: ADD EAX,0xc
// 0048b5ae: INC ECX
// 0048b5af: MOV EDI,dword ptr [ESI + 0x4]
// 0048b5b2: ADD EDX,0x4
// 0048b5b5: CMP ECX,EDI
// 0048b5b7: JL 0x0048b574
//   XREF to: 0048b574 (CONDITIONAL_JUMP)
// 0048b5b9: CMP dword ptr [EBX + 0x4],0x0
//   Label: LAB_0048b5b9
// 0048b5bd: JZ 0x0048b613
//   XREF to: 0048b613 (CONDITIONAL_JUMP)
// 0048b5bf: MOV EAX,0x1
// 0048b5c4: MOV EBP,0x4907e7
//   XREF to: 004907e7 (DATA)
// 0048b5c9: XOR EDX,EDX
// 0048b5cb: MOV [0x02d052a0],EAX
//   XREF to: 02d052a0 (WRITE)
// 0048b5d0: MOV dword ptr [0x02d052a4],EDX
//   XREF to: 02d052a4 (WRITE)
// 0048b5d6: MOV dword ptr [0x02d0257c],EBP
//   XREF to: 02d0257c (WRITE)
// 0048b5dc: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0048b5dc
//   XREF to: Stack[0x8] (READ)
// 0048b5e0: PUSH 0x2c6d5ac
//   XREF to: 02c6d5ac (DATA)
// 0048b5e5: MOV ECX,dword ptr [EAX + 0x4]
// 0048b5e8: PUSH ECX
// 0048b5e9: PUSH EBX
// 0048b5ea: CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
//   XREF to: 0048a740 (UNCONDITIONAL_CALL)
// 0048b5ef: ADD ESP,0xc
// 0048b5f2: POP ESI
// 0048b5f3: POP EDI
// 0048b5f4: ADD ESP,0x4
//   Label: LAB_0048b5f4
// 0048b5f7: POP EBP
// 0048b5f8: POP EBX
// 0048b5f9: RET
// 0048b5fa: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_0048b5fa
//   XREF to: Stack[0x8] (READ)
// 0048b5fe: ADD EAX,0x8
// 0048b601: PUSH EAX
// 0048b602: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0048b607: ADD ESP,0x4
// 0048b60a: TEST EAX,EAX
// 0048b60c: JZ 0x0048b5f4
//   XREF to: 0048b5f4 (CONDITIONAL_JUMP)
// 0048b60e: JMP 0x0048b563
//   XREF to: 0048b563 (UNCONDITIONAL_JUMP)
// 0048b613: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0048b613
//   XREF to: 0067939c (READ)
// 0048b61a: JNZ 0x0048b63e
//   XREF to: 0048b63e (CONDITIONAL_JUMP)
// 0048b61c: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 0048b626: MOV EDI,0x6
//   Label: LAB_0048b626
// 0048b62b: MOV ESI,0xc3
// 0048b630: MOV dword ptr [0x02d052a4],EDI
//   XREF to: 02d052a4 (WRITE)
// 0048b636: MOV dword ptr [0x02d052a0],ESI
//   XREF to: 02d052a0 (WRITE)
// 0048b63c: JMP 0x0048b5dc
//   XREF to: 0048b5dc (UNCONDITIONAL_JUMP)
// 0048b63e: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_0048b63e
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0048b648: JMP 0x0048b626
//   XREF to: 0048b626 (UNCONDITIONAL_JUMP)
