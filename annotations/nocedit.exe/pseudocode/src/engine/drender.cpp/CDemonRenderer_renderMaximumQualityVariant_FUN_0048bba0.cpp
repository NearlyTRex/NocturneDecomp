// Name: engine_drender.cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
// Address: 0048bba0
// Address Range: [[0048bba0, 0048bce4]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
// Cross-references:
//   core_fire.cpp_CLaserBeam_FUN_004c25c0 (004c25c0) at 004c337e [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00509d50 (00509d50) at 0050a184 [UNCONDITIONAL_CALL]
//   core_path.cpp_FUN_00547fc0 (00547fc0) at 0054837e [UNCONDITIONAL_CALL]
//   core_path.cpp_debugRenderGridQuad_FUN_00547dd0 (00547dd0) at 00547fab [UNCONDITIONAL_CALL]
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
engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_0000000c;
  uint uVar5;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar4 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal), iVar4 != 0)) {
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
        g_RenderStateFlags = RENDER_ENGINE_CORE_MAXIMUM;
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
// 0048bba0: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
// 0048bba1: PUSH ESI
// 0048bba2: PUSH EDI
// 0048bba3: PUSH EBP
// 0048bba4: SUB ESP,0x4
// 0048bba7: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0048bbab: CMP dword ptr [EBX + 0xc],0x0
// 0048bbaf: JNZ 0x0048bc4e
//   XREF to: 0048bc4e (CONDITIONAL_JUMP)
// 0048bbb5: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0048bbb5
//   XREF to: Stack[0x8] (READ)
// 0048bbb9: MOV ECX,0xffffffff
// 0048bbbe: XOR EDX,EDX
// 0048bbc0: MOV ESI,dword ptr [EAX + 0x4]
// 0048bbc3: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x14] (DATA)
// 0048bbc6: TEST ESI,ESI
// 0048bbc8: JLE 0x0048bc00
//   XREF to: 0048bc00 (CONDITIONAL_JUMP)
// 0048bbca: XOR ECX,ECX
// 0048bbcc: MOV ESI,dword ptr [EAX + 0x18]
//   Label: LAB_0048bbcc
// 0048bbcf: MOV dword ptr [ECX + 0x2c6d5ac],ESI
//   XREF to: 02c6d5ac (WRITE)
//   XREF to: 02c6d5b0 (WRITE)
// 0048bbd5: IMUL ESI,ESI,0x30
// 0048bbd8: MOV EDI,dword ptr [EBX]
// 0048bbda: MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10]
// 0048bbde: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0048bbe1: ADD ECX,0x4
// 0048bbe4: AND EDI,ESI
// 0048bbe6: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048bbea: ADD EAX,0xc
// 0048bbed: INC EDX
// 0048bbee: MOV EBP,dword ptr [ESI + 0x4]
// 0048bbf1: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x14] (DATA)
// 0048bbf4: CMP EDX,EBP
// 0048bbf6: JL 0x0048bbcc
//   XREF to: 0048bbcc (CONDITIONAL_JUMP)
// 0048bbf8: LEA EAX,[EAX]
// 0048bbfe: MOV EDX,EDX
// 0048bc00: TEST byte ptr [ESP + 0x3],0x80
//   Label: LAB_0048bc00
//   XREF to: Stack[-0x11] (READ)
// 0048bc05: JZ 0x0048bc0d
//   XREF to: 0048bc0d (CONDITIONAL_JUMP)
// 0048bc07: TEST byte ptr [ESP],0x1f
//   XREF to: Stack[-0x14] (DATA)
// 0048bc0b: JNZ 0x0048bc46
//   XREF to: 0048bc46 (CONDITIONAL_JUMP)
// 0048bc0d: CMP dword ptr [EBX + 0x4],0x0
//   Label: LAB_0048bc0d
// 0048bc11: JZ 0x0048bc67
//   XREF to: 0048bc67 (CONDITIONAL_JUMP)
// 0048bc13: XOR ESI,ESI
// 0048bc15: MOV ECX,0x49072f
//   XREF to: 0049072f (PARAM)
// 0048bc1a: MOV dword ptr [0x02d052a0],ESI
//   XREF to: 02d052a0 (WRITE)
// 0048bc20: MOV dword ptr [0x02d052a4],ESI
//   XREF to: 02d052a4 (WRITE)
// 0048bc26: MOV dword ptr [0x02d0257c],ECX
//   XREF to: 02d0257c (WRITE)
// 0048bc2c: LEA EAX,[EAX]
// 0048bc30: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0048bc30
//   XREF to: Stack[0x8] (READ)
// 0048bc34: PUSH 0x2c6d5ac
//   XREF to: 02c6d5ac (DATA)
// 0048bc39: MOV EDX,dword ptr [EAX + 0x4]
// 0048bc3c: PUSH EDX
// 0048bc3d: PUSH EBX
// 0048bc3e: CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
//   XREF to: 0048a740 (UNCONDITIONAL_CALL)
// 0048bc43: ADD ESP,0xc
// 0048bc46: ADD ESP,0x4
//   Label: LAB_0048bc46
// 0048bc49: POP EBP
// 0048bc4a: POP EDI
// 0048bc4b: POP ESI
// 0048bc4c: POP EBX
// 0048bc4d: RET
// 0048bc4e: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0048bc4e
//   XREF to: Stack[0x8] (READ)
// 0048bc52: ADD EAX,0x8
// 0048bc55: PUSH EAX
// 0048bc56: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0048bc5b: ADD ESP,0x4
// 0048bc5e: TEST EAX,EAX
// 0048bc60: JZ 0x0048bc46
//   XREF to: 0048bc46 (CONDITIONAL_JUMP)
// 0048bc62: JMP 0x0048bbb5
//   XREF to: 0048bbb5 (UNCONDITIONAL_JUMP)
// 0048bc67: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0048bc67
//   XREF to: 0067939c (READ)
// 0048bc6e: JNZ 0x0048bcd9
//   XREF to: 0048bcd9 (CONDITIONAL_JUMP)
// 0048bc70: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 0048bc7a: MOV EBP,0x6
//   Label: LAB_0048bc7a
// 0048bc7f: MOV EDI,0x367
// 0048bc84: MOV EAX,dword ptr [EBX + 0x20]
// 0048bc87: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 0048bc8d: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 0048bc93: TEST EAX,EAX
// 0048bc95: JNZ 0x0048bc30
//   XREF to: 0048bc30 (CONDITIONAL_JUMP)
// 0048bc97: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048bc9b: MOV EDX,dword ptr [EAX + 0x4]
// 0048bc9e: XOR ECX,ECX
// 0048bca0: TEST EDX,EDX
// 0048bca2: JLE 0x0048bc30
//   XREF to: 0048bc30 (CONDITIONAL_JUMP)
// 0048bca4: XOR EDX,EDX
// 0048bca6: MOV ESI,dword ptr [EDX + 0x2c6d5ac]
//   Label: LAB_0048bca6
//   XREF to: 02c6d5ac (READ)
//   XREF to: 02c6d5b0 (READ)
// 0048bcac: IMUL ESI,ESI,0x30
// 0048bcaf: MOV EDI,dword ptr [EBX]
// 0048bcb1: MOV EBP,dword ptr [EAX + 0x1c]
// 0048bcb4: MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP
// 0048bcb8: MOV EDI,dword ptr [EBX]
// 0048bcba: ADD EDI,ESI
// 0048bcbc: MOV ESI,dword ptr [EAX + 0x20]
// 0048bcbf: MOV dword ptr [EDI + 0x1c],ESI
// 0048bcc2: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048bcc6: ADD EAX,0xc
// 0048bcc9: INC ECX
// 0048bcca: MOV EBP,dword ptr [ESI + 0x4]
// 0048bccd: ADD EDX,0x4
// 0048bcd0: CMP ECX,EBP
// 0048bcd2: JL 0x0048bca6
//   XREF to: 0048bca6 (CONDITIONAL_JUMP)
// 0048bcd4: JMP 0x0048bc30
//   XREF to: 0048bc30 (UNCONDITIONAL_JUMP)
// 0048bcd9: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_0048bcd9
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0048bce3: JMP 0x0048bc7a
//   XREF to: 0048bc7a (UNCONDITIONAL_JUMP)
