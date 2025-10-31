// Name: engine_drender.cpp_CDemonRenderer_renderUltraPremium_FUN_0048b970
// Address: 0048b970
// Address Range: [[0048b970, 0048bac4]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderUltraPremium_FUN_0048b970(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_00570040 (00570040) at 005702a2 [UNCONDITIONAL_CALL]
//   core_set.cpp_FUN_005702b0 (005702b0) at 005706eb [UNCONDITIONAL_CALL]
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
engine_drender_cpp_CDemonRenderer_renderUltraPremium_FUN_0048b970
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
        g_RenderStateFlags = RENDER_ENGINE_CORE_ULTRA;
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
// 0048b970: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_renderUltraPremium_FUN_0048b970
// 0048b971: PUSH ESI
// 0048b972: PUSH EDI
// 0048b973: PUSH EBP
// 0048b974: SUB ESP,0x4
// 0048b977: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0048b97b: CMP dword ptr [EBX + 0xc],0x0
// 0048b97f: JNZ 0x0048ba2e
//   XREF to: 0048ba2e (CONDITIONAL_JUMP)
// 0048b985: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0048b985
//   XREF to: Stack[0x8] (READ)
// 0048b989: MOV ECX,0xffffffff
// 0048b98e: XOR EDX,EDX
// 0048b990: MOV ESI,dword ptr [EAX + 0x4]
// 0048b993: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x14] (DATA)
// 0048b996: TEST ESI,ESI
// 0048b998: JLE 0x0048b9d0
//   XREF to: 0048b9d0 (CONDITIONAL_JUMP)
// 0048b99a: XOR ECX,ECX
// 0048b99c: MOV ESI,dword ptr [EAX + 0x18]
//   Label: LAB_0048b99c
// 0048b99f: MOV dword ptr [ECX + 0x2c6d5ac],ESI
//   XREF to: 02c6d5ac (WRITE)
//   XREF to: 02c6d5b0 (WRITE)
// 0048b9a5: IMUL ESI,ESI,0x30
// 0048b9a8: MOV EDI,dword ptr [EBX]
// 0048b9aa: MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10]
// 0048b9ae: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0048b9b1: ADD ECX,0x4
// 0048b9b4: AND EDI,ESI
// 0048b9b6: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048b9ba: ADD EAX,0xc
// 0048b9bd: INC EDX
// 0048b9be: MOV EBP,dword ptr [ESI + 0x4]
// 0048b9c1: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x14] (DATA)
// 0048b9c4: CMP EDX,EBP
// 0048b9c6: JL 0x0048b99c
//   XREF to: 0048b99c (CONDITIONAL_JUMP)
// 0048b9c8: LEA EAX,[EAX]
// 0048b9ce: MOV EDX,EDX
// 0048b9d0: TEST byte ptr [ESP + 0x3],0x80
//   Label: LAB_0048b9d0
//   XREF to: Stack[-0x11] (READ)
// 0048b9d5: JZ 0x0048b9dd
//   XREF to: 0048b9dd (CONDITIONAL_JUMP)
// 0048b9d7: TEST byte ptr [ESP],0x1f
//   XREF to: Stack[-0x14] (DATA)
// 0048b9db: JNZ 0x0048ba26
//   XREF to: 0048ba26 (CONDITIONAL_JUMP)
// 0048b9dd: CMP dword ptr [EBX + 0x4],0x0
//   Label: LAB_0048b9dd
// 0048b9e1: JZ 0x0048ba47
//   XREF to: 0048ba47 (CONDITIONAL_JUMP)
// 0048b9e3: MOV ESI,0x1
// 0048b9e8: MOV ECX,0x4907e7
//   XREF to: 004907e7 (PARAM)
// 0048b9ed: XOR EDI,EDI
// 0048b9ef: MOV dword ptr [0x02d052a0],ESI
//   XREF to: 02d052a0 (WRITE)
// 0048b9f5: MOV dword ptr [0x02d052a4],EDI
//   XREF to: 02d052a4 (WRITE)
// 0048b9fb: MOV dword ptr [0x02d0257c],ECX
//   XREF to: 02d0257c (WRITE)
// 0048ba01: LEA EAX,[EAX]
// 0048ba07: LEA EDX,[EDX]
// 0048ba0d: LEA EAX,[EAX]
// 0048ba10: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0048ba10
//   XREF to: Stack[0x8] (READ)
// 0048ba14: PUSH 0x2c6d5ac
//   XREF to: 02c6d5ac (DATA)
// 0048ba19: MOV EDX,dword ptr [EAX + 0x4]
// 0048ba1c: PUSH EDX
// 0048ba1d: PUSH EBX
// 0048ba1e: CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
//   XREF to: 0048a740 (UNCONDITIONAL_CALL)
// 0048ba23: ADD ESP,0xc
// 0048ba26: ADD ESP,0x4
//   Label: LAB_0048ba26
// 0048ba29: POP EBP
// 0048ba2a: POP EDI
// 0048ba2b: POP ESI
// 0048ba2c: POP EBX
// 0048ba2d: RET
// 0048ba2e: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0048ba2e
//   XREF to: Stack[0x8] (READ)
// 0048ba32: ADD EAX,0x8
// 0048ba35: PUSH EAX
// 0048ba36: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0048ba3b: ADD ESP,0x4
// 0048ba3e: TEST EAX,EAX
// 0048ba40: JZ 0x0048ba26
//   XREF to: 0048ba26 (CONDITIONAL_JUMP)
// 0048ba42: JMP 0x0048b985
//   XREF to: 0048b985 (UNCONDITIONAL_JUMP)
// 0048ba47: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0048ba47
//   XREF to: 0067939c (READ)
// 0048ba4e: JNZ 0x0048bab9
//   XREF to: 0048bab9 (CONDITIONAL_JUMP)
// 0048ba50: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 0048ba5a: MOV EBP,0x6
//   Label: LAB_0048ba5a
// 0048ba5f: MOV EDI,0x2e7
// 0048ba64: MOV EAX,dword ptr [EBX + 0x20]
// 0048ba67: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 0048ba6d: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 0048ba73: TEST EAX,EAX
// 0048ba75: JNZ 0x0048ba10
//   XREF to: 0048ba10 (CONDITIONAL_JUMP)
// 0048ba77: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048ba7b: MOV EDX,dword ptr [EAX + 0x4]
// 0048ba7e: XOR ECX,ECX
// 0048ba80: TEST EDX,EDX
// 0048ba82: JLE 0x0048ba10
//   XREF to: 0048ba10 (CONDITIONAL_JUMP)
// 0048ba84: XOR EDX,EDX
// 0048ba86: MOV ESI,dword ptr [EDX + 0x2c6d5ac]
//   Label: LAB_0048ba86
//   XREF to: 02c6d5ac (READ)
//   XREF to: 02c6d5b0 (READ)
// 0048ba8c: IMUL ESI,ESI,0x30
// 0048ba8f: MOV EDI,dword ptr [EBX]
// 0048ba91: MOV EBP,dword ptr [EAX + 0x1c]
// 0048ba94: MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP
// 0048ba98: MOV EDI,dword ptr [EBX]
// 0048ba9a: ADD EDI,ESI
// 0048ba9c: MOV ESI,dword ptr [EAX + 0x20]
// 0048ba9f: MOV dword ptr [EDI + 0x1c],ESI
// 0048baa2: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048baa6: ADD EAX,0xc
// 0048baa9: INC ECX
// 0048baaa: MOV EBP,dword ptr [ESI + 0x4]
// 0048baad: ADD EDX,0x4
// 0048bab0: CMP ECX,EBP
// 0048bab2: JL 0x0048ba86
//   XREF to: 0048ba86 (CONDITIONAL_JUMP)
// 0048bab4: JMP 0x0048ba10
//   XREF to: 0048ba10 (UNCONDITIONAL_JUMP)
// 0048bab9: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_0048bab9
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0048bac3: JMP 0x0048ba5a
//   XREF to: 0048ba5a (UNCONDITIONAL_JUMP)
