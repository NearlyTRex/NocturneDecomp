// Name: engine_drender.cpp_CDemonRenderer_renderEnhancedQualityWithIndices_FUN_0048b730
// Address: 0048b730
// Address Range: [[0048b730, 0048b884]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderEnhancedQualityWithIndices_FUN_0048b730(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
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
engine_drender_cpp_CDemonRenderer_renderEnhancedQualityWithIndices_FUN_0048b730
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_0000000c;
  uint uVar5;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar4 = engine_3d_c_isVisiblePlane_FUN_00403950(&prim->surface_normal), iVar4 != 0)) {
    iVar4 = 0;
    uVar5 = 0xffffffff;
    if (0 < *(int *)(in_stack_0000000c + 4)) {
      iVar3 = 0;
      iVar2 = in_stack_0000000c;
      do {
        iVar1 = *(int *)(iVar2 + 0x18);
        *(int *)((int)g_VertexIndexBuffer + iVar3) = iVar1;
        iVar3 = iVar3 + 4;
        uVar5 = uVar5 & this_ptr->vertex_buffer_ptr[iVar1].projected_vertex.screen_x;
        iVar2 = iVar2 + 0xc;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(in_stack_0000000c + 4));
    }
    if (((uVar5 & 0x80000000) == 0) || ((uVar5 & 0x1f) == 0)) {
      if (this_ptr->face_count == 0) {
        if (g_BitsPerPixel == 0x20) {
          g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
        }
        else {
          g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
        }
        g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
        g_RenderStateFlags = 999;
        if ((this_ptr->field8_0x20 == 0) && (iVar4 = 0, 0 < *(int *)(in_stack_0000000c + 4))) {
          iVar3 = 0;
          iVar2 = in_stack_0000000c;
          do {
            iVar1 = *(int *)((int)g_VertexIndexBuffer + iVar3);
            this_ptr->vertex_buffer_ptr[iVar1].u = *(float *)(iVar2 + 0x1c);
            this_ptr->vertex_buffer_ptr[iVar1].v = *(float *)(iVar2 + 0x20);
            iVar2 = iVar2 + 0xc;
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 4;
          } while (iVar4 < *(int *)(in_stack_0000000c + 4));
        }
      }
      else {
        g_RenderStateFlags = RENDER_TEXTURE_ENABLE;
        g_RenderStateFlag2 = PREPROCESS_NONE;
        g_ScanlineRenderFunc = core_dstrender_cpp_renderTexturedAlphaMMXScanline_FUN_004907e7;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
                (this_ptr,*(int *)(in_stack_0000000c + 4),g_VertexIndexBuffer);
    }
  }
  return;
}


// Assembly code:
// 0048b730: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_renderEnhancedQualityWithIndices_FUN_0048b730
// 0048b731: PUSH ESI
// 0048b732: PUSH EDI
// 0048b733: PUSH EBP
// 0048b734: SUB ESP,0x4
// 0048b737: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0048b73b: CMP dword ptr [EBX + 0xc],0x0
// 0048b73f: JNZ 0x0048b7ee
//   XREF to: 0048b7ee (CONDITIONAL_JUMP)
// 0048b745: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0048b745
//   XREF to: Stack[0x8] (READ)
// 0048b749: MOV ECX,0xffffffff
// 0048b74e: XOR EDX,EDX
// 0048b750: MOV ESI,dword ptr [EAX + 0x4]
// 0048b753: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x14] (DATA)
// 0048b756: TEST ESI,ESI
// 0048b758: JLE 0x0048b790
//   XREF to: 0048b790 (CONDITIONAL_JUMP)
// 0048b75a: XOR ECX,ECX
// 0048b75c: MOV ESI,dword ptr [EAX + 0x18]
//   Label: LAB_0048b75c
// 0048b75f: MOV dword ptr [ECX + 0x2c6d5ac],ESI
//   XREF to: 02c6d5ac (WRITE)
//   XREF to: 02c6d5b0 (WRITE)
// 0048b765: IMUL ESI,ESI,0x30
// 0048b768: MOV EDI,dword ptr [EBX]
// 0048b76a: MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10]
// 0048b76e: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0048b771: ADD ECX,0x4
// 0048b774: AND EDI,ESI
// 0048b776: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048b77a: ADD EAX,0xc
// 0048b77d: INC EDX
// 0048b77e: MOV EBP,dword ptr [ESI + 0x4]
// 0048b781: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x14] (DATA)
// 0048b784: CMP EDX,EBP
// 0048b786: JL 0x0048b75c
//   XREF to: 0048b75c (CONDITIONAL_JUMP)
// 0048b788: LEA EAX,[EAX]
// 0048b78e: MOV EDX,EDX
// 0048b790: TEST byte ptr [ESP + 0x3],0x80
//   Label: LAB_0048b790
//   XREF to: Stack[-0x11] (READ)
// 0048b795: JZ 0x0048b79d
//   XREF to: 0048b79d (CONDITIONAL_JUMP)
// 0048b797: TEST byte ptr [ESP],0x1f
//   XREF to: Stack[-0x14] (DATA)
// 0048b79b: JNZ 0x0048b7e6
//   XREF to: 0048b7e6 (CONDITIONAL_JUMP)
// 0048b79d: CMP dword ptr [EBX + 0x4],0x0
//   Label: LAB_0048b79d
// 0048b7a1: JZ 0x0048b807
//   XREF to: 0048b807 (CONDITIONAL_JUMP)
// 0048b7a3: MOV ESI,0x1
// 0048b7a8: MOV ECX,0x4907e7
//   XREF to: 004907e7 (DATA)
// 0048b7ad: XOR EDI,EDI
// 0048b7af: MOV dword ptr [0x02d052a0],ESI
//   XREF to: 02d052a0 (WRITE)
// 0048b7b5: MOV dword ptr [0x02d052a4],EDI
//   XREF to: 02d052a4 (WRITE)
// 0048b7bb: MOV dword ptr [0x02d0257c],ECX
//   XREF to: 02d0257c (WRITE)
// 0048b7c1: LEA EAX,[EAX]
// 0048b7c7: LEA EDX,[EDX]
// 0048b7cd: LEA EAX,[EAX]
// 0048b7d0: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0048b7d0
//   XREF to: Stack[0x8] (READ)
// 0048b7d4: PUSH 0x2c6d5ac
//   XREF to: 02c6d5ac (DATA)
// 0048b7d9: MOV EDX,dword ptr [EAX + 0x4]
// 0048b7dc: PUSH EDX
// 0048b7dd: PUSH EBX
// 0048b7de: CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
//   XREF to: 0048a740 (UNCONDITIONAL_CALL)
// 0048b7e3: ADD ESP,0xc
// 0048b7e6: ADD ESP,0x4
//   Label: LAB_0048b7e6
// 0048b7e9: POP EBP
// 0048b7ea: POP EDI
// 0048b7eb: POP ESI
// 0048b7ec: POP EBX
// 0048b7ed: RET
// 0048b7ee: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0048b7ee
//   XREF to: Stack[0x8] (READ)
// 0048b7f2: ADD EAX,0x8
// 0048b7f5: PUSH EAX
// 0048b7f6: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0048b7fb: ADD ESP,0x4
// 0048b7fe: TEST EAX,EAX
// 0048b800: JZ 0x0048b7e6
//   XREF to: 0048b7e6 (CONDITIONAL_JUMP)
// 0048b802: JMP 0x0048b745
//   XREF to: 0048b745 (UNCONDITIONAL_JUMP)
// 0048b807: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0048b807
//   XREF to: 0067939c (READ)
// 0048b80e: JNZ 0x0048b879
//   XREF to: 0048b879 (CONDITIONAL_JUMP)
// 0048b810: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 0048b81a: MOV EBP,0x6
//   Label: LAB_0048b81a
// 0048b81f: MOV EDI,0x3e7
// 0048b824: MOV EAX,dword ptr [EBX + 0x20]
// 0048b827: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 0048b82d: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 0048b833: TEST EAX,EAX
// 0048b835: JNZ 0x0048b7d0
//   XREF to: 0048b7d0 (CONDITIONAL_JUMP)
// 0048b837: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048b83b: MOV EDX,dword ptr [EAX + 0x4]
// 0048b83e: XOR ECX,ECX
// 0048b840: TEST EDX,EDX
// 0048b842: JLE 0x0048b7d0
//   XREF to: 0048b7d0 (CONDITIONAL_JUMP)
// 0048b844: XOR EDX,EDX
// 0048b846: MOV ESI,dword ptr [EDX + 0x2c6d5ac]
//   Label: LAB_0048b846
//   XREF to: 02c6d5ac (READ)
//   XREF to: 02c6d5b0 (READ)
// 0048b84c: IMUL ESI,ESI,0x30
// 0048b84f: MOV EDI,dword ptr [EBX]
// 0048b851: MOV EBP,dword ptr [EAX + 0x1c]
// 0048b854: MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP
// 0048b858: MOV EDI,dword ptr [EBX]
// 0048b85a: ADD EDI,ESI
// 0048b85c: MOV ESI,dword ptr [EAX + 0x20]
// 0048b85f: MOV dword ptr [EDI + 0x1c],ESI
// 0048b862: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048b866: ADD EAX,0xc
// 0048b869: INC ECX
// 0048b86a: MOV EBP,dword ptr [ESI + 0x4]
// 0048b86d: ADD EDX,0x4
// 0048b870: CMP ECX,EBP
// 0048b872: JL 0x0048b846
//   XREF to: 0048b846 (CONDITIONAL_JUMP)
// 0048b874: JMP 0x0048b7d0
//   XREF to: 0048b7d0 (UNCONDITIONAL_JUMP)
// 0048b879: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_0048b879
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0048b883: JMP 0x0048b81a
//   XREF to: 0048b81a (UNCONDITIONAL_JUMP)
