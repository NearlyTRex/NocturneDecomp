// Name: engine_drender.cpp_CDemonRenderer_renderTexturedLitNearPlane_FUN_0048ac40
// Address: 0048ac40
// Address Range: [[0048ac40, 0048ad85]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderTexturedLitNearPlane_FUN_0048ac40(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
// Cross-references:
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 00597538 [UNCONDITIONAL_CALL]
// Globals:
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
engine_drender_cpp_CDemonRenderer_renderTexturedLitNearPlane_FUN_0048ac40
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_0000000c;
  uint uVar5;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal), iVar3 != 0)) {
    uVar5 = 0xffffffff;
    iVar3 = 0;
    if (0 < *(int *)(in_stack_0000000c + 4)) {
      iVar4 = 0;
      iVar2 = in_stack_0000000c;
      do {
        iVar1 = *(int *)(iVar2 + 0x18);
        *(int *)((int)g_VertexIndexBuffer + iVar4) = iVar1;
        iVar4 = iVar4 + 4;
        uVar5 = uVar5 & this_ptr->vertex_buffer_ptr[iVar1].projected_vertex.screen_x;
        iVar2 = iVar2 + 0xc;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(in_stack_0000000c + 4));
    }
    if (((uVar5 & 0x80000000) == 0) || ((uVar5 & 0x1f) == 0)) {
      if ((this_ptr->face_count == 0) && (this_ptr->field8_0x20 == 0)) {
        iVar4 = 0;
        iVar3 = 0;
        iVar2 = in_stack_0000000c;
        if (0 < *(int *)(in_stack_0000000c + 4)) {
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
      if (this_ptr->face_count == 0) {
        g_RenderStateFlags = RENDER_TEXTURE_LIT;
        g_RenderStateFlag2 = PREPROCESS_NEAR_PLANE_CORRECT;
        g_ScanlineRenderFunc =
             core_dstrender_cpp_renderPerspectiveCorrectTextured16xCached_FUN_00490ec0;
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
// 0048ac40: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_renderTexturedLitNearPlane_FUN_0048ac40
// 0048ac41: PUSH ESI
// 0048ac42: PUSH EDI
// 0048ac43: PUSH EBP
// 0048ac44: SUB ESP,0x4
// 0048ac47: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0048ac4b: CMP dword ptr [EBX + 0xc],0x0
// 0048ac4f: JNZ 0x0048ad01
//   XREF to: 0048ad01 (CONDITIONAL_JUMP)
// 0048ac55: MOV ECX,0xffffffff
//   Label: LAB_0048ac55
// 0048ac5a: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048ac5e: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x14] (DATA)
// 0048ac61: MOV ESI,dword ptr [EAX + 0x4]
// 0048ac64: XOR ECX,ECX
// 0048ac66: TEST ESI,ESI
// 0048ac68: JLE 0x0048aca0
//   XREF to: 0048aca0 (CONDITIONAL_JUMP)
// 0048ac6a: XOR EDX,EDX
// 0048ac6c: MOV ESI,dword ptr [EAX + 0x18]
//   Label: LAB_0048ac6c
// 0048ac6f: MOV dword ptr [EDX + 0x2c6d5ac],ESI
//   XREF to: 02c6d5ac (WRITE)
//   XREF to: 02c6d5b0 (WRITE)
// 0048ac75: IMUL ESI,ESI,0x30
// 0048ac78: MOV EDI,dword ptr [EBX]
// 0048ac7a: MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10]
// 0048ac7e: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0048ac81: ADD EDX,0x4
// 0048ac84: AND EDI,ESI
// 0048ac86: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048ac8a: ADD EAX,0xc
// 0048ac8d: INC ECX
// 0048ac8e: MOV EBP,dword ptr [ESI + 0x4]
// 0048ac91: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x14] (DATA)
// 0048ac94: CMP ECX,EBP
// 0048ac96: JL 0x0048ac6c
//   XREF to: 0048ac6c (CONDITIONAL_JUMP)
// 0048ac98: LEA EAX,[EAX]
// 0048ac9e: MOV EDX,EDX
// 0048aca0: TEST byte ptr [ESP + 0x3],0x80
//   Label: LAB_0048aca0
//   XREF to: Stack[-0x11] (READ)
// 0048aca5: JZ 0x0048acad
//   XREF to: 0048acad (CONDITIONAL_JUMP)
// 0048aca7: TEST byte ptr [ESP],0x1f
//   XREF to: Stack[-0x14] (DATA)
// 0048acab: JNZ 0x0048acf9
//   XREF to: 0048acf9 (CONDITIONAL_JUMP)
// 0048acad: CMP dword ptr [EBX + 0x4],0x0
//   Label: LAB_0048acad
// 0048acb1: JZ 0x0048ad1a
//   XREF to: 0048ad1a (CONDITIONAL_JUMP)
// 0048acb3: LEA EAX,[EAX]
// 0048acb9: LEA EDX,[EDX]
// 0048acbf: NOP
// 0048acc0: CMP dword ptr [EBX + 0x4],0x0
//   Label: LAB_0048acc0
// 0048acc4: JZ 0x0048ad61
//   XREF to: 0048ad61 (CONDITIONAL_JUMP)
// 0048acca: XOR EDI,EDI
// 0048accc: MOV ESI,0x49072f
//   XREF to: 0049072f (DATA)
// 0048acd1: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 0048acd7: MOV dword ptr [0x02d052a4],EDI
//   XREF to: 02d052a4 (WRITE)
// 0048acdd: MOV dword ptr [0x02d0257c],ESI
//   XREF to: 02d0257c (WRITE)
// 0048ace3: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0048ace3
//   XREF to: Stack[0x8] (READ)
// 0048ace7: PUSH 0x2c6d5ac
//   XREF to: 02c6d5ac (DATA)
// 0048acec: MOV EDX,dword ptr [EAX + 0x4]
// 0048acef: PUSH EDX
// 0048acf0: PUSH EBX
// 0048acf1: CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
//   XREF to: 0048a740 (UNCONDITIONAL_CALL)
// 0048acf6: ADD ESP,0xc
// 0048acf9: ADD ESP,0x4
//   Label: LAB_0048acf9
// 0048acfc: POP EBP
// 0048acfd: POP EDI
// 0048acfe: POP ESI
// 0048acff: POP EBX
// 0048ad00: RET
// 0048ad01: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0048ad01
//   XREF to: Stack[0x8] (READ)
// 0048ad05: ADD EAX,0x8
// 0048ad08: PUSH EAX
// 0048ad09: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0048ad0e: ADD ESP,0x4
// 0048ad11: TEST EAX,EAX
// 0048ad13: JZ 0x0048acf9
//   XREF to: 0048acf9 (CONDITIONAL_JUMP)
// 0048ad15: JMP 0x0048ac55
//   XREF to: 0048ac55 (UNCONDITIONAL_JUMP)
// 0048ad1a: MOV EDX,dword ptr [EBX + 0x20]
//   Label: LAB_0048ad1a
// 0048ad1d: TEST EDX,EDX
// 0048ad1f: JNZ 0x0048acc0
//   XREF to: 0048acc0 (CONDITIONAL_JUMP)
// 0048ad21: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048ad25: MOV ESI,dword ptr [EAX + 0x4]
// 0048ad28: XOR ECX,ECX
// 0048ad2a: TEST ESI,ESI
// 0048ad2c: JLE 0x0048acc0
//   XREF to: 0048acc0 (CONDITIONAL_JUMP)
// 0048ad2e: MOV ESI,dword ptr [EDX + 0x2c6d5ac]
//   Label: LAB_0048ad2e
//   XREF to: 02c6d5ac (DATA)
//   XREF to: 02c6d5b0 (DATA)
// 0048ad34: IMUL ESI,ESI,0x30
// 0048ad37: MOV EDI,dword ptr [EBX]
// 0048ad39: MOV EBP,dword ptr [EAX + 0x1c]
// 0048ad3c: MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP
// 0048ad40: MOV EDI,dword ptr [EBX]
// 0048ad42: ADD EDI,ESI
// 0048ad44: MOV ESI,dword ptr [EAX + 0x20]
// 0048ad47: MOV dword ptr [EDI + 0x1c],ESI
// 0048ad4a: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048ad4e: ADD EAX,0xc
// 0048ad51: INC ECX
// 0048ad52: MOV EDI,dword ptr [ESI + 0x4]
// 0048ad55: ADD EDX,0x4
// 0048ad58: CMP ECX,EDI
// 0048ad5a: JL 0x0048ad2e
//   XREF to: 0048ad2e (CONDITIONAL_JUMP)
// 0048ad5c: JMP 0x0048acc0
//   XREF to: 0048acc0 (UNCONDITIONAL_JUMP)
// 0048ad61: MOV EDX,0xc1
//   Label: LAB_0048ad61
// 0048ad66: MOV ECX,0x3
// 0048ad6b: MOV EAX,0x490ec0
//   XREF to: 00490ec0 (DATA)
// 0048ad70: MOV dword ptr [0x02d052a0],EDX
//   XREF to: 02d052a0 (WRITE)
// 0048ad76: MOV dword ptr [0x02d052a4],ECX
//   XREF to: 02d052a4 (WRITE)
// 0048ad7c: MOV [0x02d0257c],EAX
//   XREF to: 02d0257c (WRITE)
// 0048ad81: JMP 0x0048ace3
//   XREF to: 0048ace3 (UNCONDITIONAL_JUMP)
