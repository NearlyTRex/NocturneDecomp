// Name: engine_drender.cpp_CDemonRenderer_renderComplexMultiFeatureWithIndices_FUN_0048bfe0
// Address: 0048bfe0
// Address Range: [[0048bfe0, 0048c121]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderComplexMultiFeatureWithIndices_FUN_0048bfe0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
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
engine_drender_cpp_CDemonRenderer_renderComplexMultiFeatureWithIndices_FUN_0048bfe0
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
        g_RenderStateFlag2 = PREPROCESS_NONE;
        g_RenderStateFlags = RENDER_ENGINE_CORE_COMPLEX;
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
        g_RenderStateFlags = 0;
        g_RenderStateFlag2 = PREPROCESS_NONE;
        g_ScanlineRenderFunc = core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
                (this_ptr,*(int *)(in_stack_0000000c + 4),g_VertexIndexBuffer);
    }
  }
  return;
}


// Assembly code:
// 0048bfe0: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_renderComplexMultiFeatureWithIndices_FUN_0048bfe0
// 0048bfe1: PUSH ESI
// 0048bfe2: PUSH EDI
// 0048bfe3: PUSH EBP
// 0048bfe4: SUB ESP,0x4
// 0048bfe7: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0048bfeb: CMP dword ptr [EBX + 0xc],0x0
// 0048bfef: JNZ 0x0048c08e
//   XREF to: 0048c08e (CONDITIONAL_JUMP)
// 0048bff5: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0048bff5
//   XREF to: Stack[0x8] (READ)
// 0048bff9: MOV ECX,0xffffffff
// 0048bffe: XOR EDX,EDX
// 0048c000: MOV ESI,dword ptr [EAX + 0x4]
// 0048c003: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x14] (DATA)
// 0048c006: TEST ESI,ESI
// 0048c008: JLE 0x0048c040
//   XREF to: 0048c040 (CONDITIONAL_JUMP)
// 0048c00a: XOR ECX,ECX
// 0048c00c: MOV ESI,dword ptr [EAX + 0x18]
//   Label: LAB_0048c00c
// 0048c00f: MOV dword ptr [ECX + 0x2c6d5ac],ESI
//   XREF to: 02c6d5ac (WRITE)
//   XREF to: 02c6d5b0 (WRITE)
// 0048c015: IMUL ESI,ESI,0x30
// 0048c018: MOV EDI,dword ptr [EBX]
// 0048c01a: MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10]
// 0048c01e: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0048c021: ADD ECX,0x4
// 0048c024: AND EDI,ESI
// 0048c026: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048c02a: ADD EAX,0xc
// 0048c02d: INC EDX
// 0048c02e: MOV EBP,dword ptr [ESI + 0x4]
// 0048c031: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x14] (DATA)
// 0048c034: CMP EDX,EBP
// 0048c036: JL 0x0048c00c
//   XREF to: 0048c00c (CONDITIONAL_JUMP)
// 0048c038: LEA EAX,[EAX]
// 0048c03e: MOV EDX,EDX
// 0048c040: TEST byte ptr [ESP + 0x3],0x80
//   Label: LAB_0048c040
//   XREF to: Stack[-0x11] (READ)
// 0048c045: JZ 0x0048c04d
//   XREF to: 0048c04d (CONDITIONAL_JUMP)
// 0048c047: TEST byte ptr [ESP],0x1f
//   XREF to: Stack[-0x14] (DATA)
// 0048c04b: JNZ 0x0048c086
//   XREF to: 0048c086 (CONDITIONAL_JUMP)
// 0048c04d: CMP dword ptr [EBX + 0x4],0x0
//   Label: LAB_0048c04d
// 0048c051: JZ 0x0048c0a7
//   XREF to: 0048c0a7 (CONDITIONAL_JUMP)
// 0048c053: XOR ESI,ESI
// 0048c055: MOV ECX,0x49072f
//   XREF to: 0049072f (DATA)
// 0048c05a: MOV dword ptr [0x02d052a0],ESI
//   XREF to: 02d052a0 (WRITE)
// 0048c060: MOV dword ptr [0x02d052a4],ESI
//   XREF to: 02d052a4 (WRITE)
// 0048c066: MOV dword ptr [0x02d0257c],ECX
//   XREF to: 02d0257c (WRITE)
// 0048c06c: LEA EAX,[EAX]
// 0048c070: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0048c070
//   XREF to: Stack[0x8] (READ)
// 0048c074: PUSH 0x2c6d5ac
//   XREF to: 02c6d5ac (DATA)
// 0048c079: MOV EDX,dword ptr [EAX + 0x4]
// 0048c07c: PUSH EDX
// 0048c07d: PUSH EBX
// 0048c07e: CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
//   XREF to: 0048a740 (UNCONDITIONAL_CALL)
// 0048c083: ADD ESP,0xc
// 0048c086: ADD ESP,0x4
//   Label: LAB_0048c086
// 0048c089: POP EBP
// 0048c08a: POP EDI
// 0048c08b: POP ESI
// 0048c08c: POP EBX
// 0048c08d: RET
// 0048c08e: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0048c08e
//   XREF to: Stack[0x8] (READ)
// 0048c092: ADD EAX,0x8
// 0048c095: PUSH EAX
// 0048c096: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0048c09b: ADD ESP,0x4
// 0048c09e: TEST EAX,EAX
// 0048c0a0: JZ 0x0048c086
//   XREF to: 0048c086 (CONDITIONAL_JUMP)
// 0048c0a2: JMP 0x0048bff5
//   XREF to: 0048bff5 (UNCONDITIONAL_JUMP)
// 0048c0a7: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0048c0a7
//   XREF to: 0067939c (READ)
// 0048c0ae: JNZ 0x0048c116
//   XREF to: 0048c116 (CONDITIONAL_JUMP)
// 0048c0b0: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 0048c0ba: MOV EDI,0x327
//   Label: LAB_0048c0ba
// 0048c0bf: XOR EBP,EBP
// 0048c0c1: MOV EAX,dword ptr [EBX + 0x20]
// 0048c0c4: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 0048c0ca: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 0048c0d0: TEST EAX,EAX
// 0048c0d2: JNZ 0x0048c070
//   XREF to: 0048c070 (CONDITIONAL_JUMP)
// 0048c0d4: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048c0d8: MOV EDX,dword ptr [EAX + 0x4]
// 0048c0db: XOR ECX,ECX
// 0048c0dd: TEST EDX,EDX
// 0048c0df: JLE 0x0048c070
//   XREF to: 0048c070 (CONDITIONAL_JUMP)
// 0048c0e1: XOR EDX,EDX
// 0048c0e3: MOV ESI,dword ptr [EDX + 0x2c6d5ac]
//   Label: LAB_0048c0e3
//   XREF to: 02c6d5ac (READ)
//   XREF to: 02c6d5b0 (READ)
// 0048c0e9: IMUL ESI,ESI,0x30
// 0048c0ec: MOV EDI,dword ptr [EBX]
// 0048c0ee: MOV EBP,dword ptr [EAX + 0x1c]
// 0048c0f1: MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP
// 0048c0f5: MOV EDI,dword ptr [EBX]
// 0048c0f7: ADD EDI,ESI
// 0048c0f9: MOV ESI,dword ptr [EAX + 0x20]
// 0048c0fc: MOV dword ptr [EDI + 0x1c],ESI
// 0048c0ff: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048c103: ADD EAX,0xc
// 0048c106: INC ECX
// 0048c107: MOV EBP,dword ptr [ESI + 0x4]
// 0048c10a: ADD EDX,0x4
// 0048c10d: CMP ECX,EBP
// 0048c10f: JL 0x0048c0e3
//   XREF to: 0048c0e3 (CONDITIONAL_JUMP)
// 0048c111: JMP 0x0048c070
//   XREF to: 0048c070 (UNCONDITIONAL_JUMP)
// 0048c116: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_0048c116
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0048c120: JMP 0x0048c0ba
//   XREF to: 0048c0ba (UNCONDITIONAL_JUMP)
