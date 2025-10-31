// Name: engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
// Address: 0048b1e0
// Address Range: [[0048b1e0, 0048b31b]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_00570040 (00570040) at 0057021f [UNCONDITIONAL_CALL]
//   core_set.cpp_FUN_005702b0 (005702b0) at 00570640 [UNCONDITIONAL_CALL]
//   core_water.cpp_CWater_render_FUN_005ea320 (005ea320) at 005ea7c8 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051ead0 (0051ead0) at 0051ec5a [UNCONDITIONAL_CALL]
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
engine_drender_cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_0000000c;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar4 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal), iVar4 != 0)) {
    if (this_ptr->face_count == 0) {
      if (0 < *(int *)(in_stack_0000000c + 4)) {
        iVar2 = 0;
        iVar4 = 0;
        iVar3 = in_stack_0000000c;
        do {
          iVar1 = *(int *)(iVar3 + 0x18);
          if (this_ptr->field8_0x20 == 0) {
            this_ptr->vertex_buffer_ptr[iVar1].u = *(float *)(iVar3 + 0x1c);
            this_ptr->vertex_buffer_ptr[iVar1].v = *(float *)(iVar3 + 0x20);
          }
          *(int *)((int)g_VertexIndexBuffer + iVar2) = iVar1;
          iVar3 = iVar3 + 0xc;
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar4 < *(int *)(in_stack_0000000c + 4));
      }
    }
    else {
      iVar4 = 0;
      if (0 < *(int *)(in_stack_0000000c + 4)) {
        iVar2 = 0;
        iVar3 = in_stack_0000000c;
        do {
          *(undefined4 *)((int)g_VertexIndexBuffer + iVar2) = *(undefined4 *)(iVar3 + 0x18);
          iVar2 = iVar2 + 4;
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 0xc;
        } while (iVar4 < *(int *)(in_stack_0000000c + 4));
      }
    }
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
              (this_ptr,*(int *)(in_stack_0000000c + 4),g_VertexIndexBuffer);
  }
  return;
}


// Assembly code:
// 0048b1e0: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
// 0048b1e1: PUSH EBP
// 0048b1e2: SUB ESP,0x4
// 0048b1e5: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0048b1e9: CMP dword ptr [EBX + 0xc],0x0
// 0048b1ed: JNZ 0x0048b270
//   XREF to: 0048b270 (CONDITIONAL_JUMP)
// 0048b1f3: PUSH EDI
//   Label: LAB_0048b1f3
// 0048b1f4: PUSH ESI
// 0048b1f5: MOV ECX,dword ptr [EBX + 0x4]
// 0048b1f8: TEST ECX,ECX
// 0048b1fa: JZ 0x0048b289
//   XREF to: 0048b289 (CONDITIONAL_JUMP)
// 0048b200: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048b204: MOV EDI,dword ptr [EAX + 0x4]
// 0048b207: XOR EDX,EDX
// 0048b209: TEST EDI,EDI
// 0048b20b: JLE 0x0048b230
//   XREF to: 0048b230 (CONDITIONAL_JUMP)
// 0048b20d: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048b211: XOR EAX,EAX
// 0048b213: MOV ESI,dword ptr [ECX + 0x18]
//   Label: LAB_0048b213
// 0048b216: MOV dword ptr [EAX + 0x2c6d5ac],ESI
//   XREF to: 02c6d5ac (WRITE)
//   XREF to: 02c6d5b0 (WRITE)
// 0048b21c: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048b220: ADD EAX,0x4
// 0048b223: INC EDX
// 0048b224: MOV EBP,dword ptr [ESI + 0x4]
// 0048b227: ADD ECX,0xc
// 0048b22a: CMP EDX,EBP
// 0048b22c: JL 0x0048b213
//   XREF to: 0048b213 (CONDITIONAL_JUMP)
// 0048b22e: MOV EAX,EAX
// 0048b230: CMP dword ptr [EBX + 0x4],0x0
//   Label: LAB_0048b230
// 0048b234: JZ 0x0048b2e2
//   XREF to: 0048b2e2 (CONDITIONAL_JUMP)
// 0048b23a: XOR EDX,EDX
// 0048b23c: MOV EAX,0x49072f
//   XREF to: 0049072f (DATA)
// 0048b241: MOV dword ptr [0x02d052a0],EDX
//   XREF to: 02d052a0 (WRITE)
// 0048b247: MOV dword ptr [0x02d052a4],EDX
//   XREF to: 02d052a4 (WRITE)
// 0048b24d: MOV [0x02d0257c],EAX
//   XREF to: 02d0257c (WRITE)
// 0048b252: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0048b252
//   XREF to: Stack[0x8] (READ)
// 0048b256: PUSH 0x2c6d5ac
//   XREF to: 02c6d5ac (DATA)
// 0048b25b: MOV ESI,dword ptr [EAX + 0x4]
// 0048b25e: PUSH ESI
// 0048b25f: PUSH EBX
// 0048b260: CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
//   XREF to: 0048a740 (UNCONDITIONAL_CALL)
// 0048b265: ADD ESP,0xc
// 0048b268: POP ESI
// 0048b269: POP EDI
// 0048b26a: ADD ESP,0x4
//   Label: LAB_0048b26a
// 0048b26d: POP EBP
// 0048b26e: POP EBX
// 0048b26f: RET
// 0048b270: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_0048b270
//   XREF to: Stack[0x8] (READ)
// 0048b274: ADD EAX,0x8
// 0048b277: PUSH EAX
// 0048b278: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0048b27d: ADD ESP,0x4
// 0048b280: TEST EAX,EAX
// 0048b282: JZ 0x0048b26a
//   XREF to: 0048b26a (CONDITIONAL_JUMP)
// 0048b284: JMP 0x0048b1f3
//   XREF to: 0048b1f3 (UNCONDITIONAL_JUMP)
// 0048b289: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0048b289
//   XREF to: Stack[0x8] (READ)
// 0048b28d: CMP dword ptr [EAX + 0x4],0x0
// 0048b291: JLE 0x0048b230
//   XREF to: 0048b230 (CONDITIONAL_JUMP)
// 0048b293: XOR EDX,EDX
// 0048b295: MOV EDI,dword ptr [EBX + 0x20]
//   Label: LAB_0048b295
// 0048b298: MOV ESI,dword ptr [EAX + 0x18]
// 0048b29b: TEST EDI,EDI
// 0048b29d: JZ 0x0048b2bd
//   XREF to: 0048b2bd (CONDITIONAL_JUMP)
// 0048b29f: MOV dword ptr [EDX + 0x2c6d5ac],ESI
//   Label: LAB_0048b29f
//   XREF to: 02c6d5ac (WRITE)
//   XREF to: 02c6d5b0 (WRITE)
// 0048b2a5: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048b2a9: ADD EAX,0xc
// 0048b2ac: INC ECX
// 0048b2ad: MOV EBP,dword ptr [ESI + 0x4]
// 0048b2b0: ADD EDX,0x4
// 0048b2b3: CMP ECX,EBP
// 0048b2b5: JGE 0x0048b230
//   XREF to: 0048b230 (CONDITIONAL_JUMP)
// 0048b2bb: JMP 0x0048b295
//   XREF to: 0048b295 (UNCONDITIONAL_JUMP)
// 0048b2bd: IMUL EDI,ESI,0x30
//   Label: LAB_0048b2bd
// 0048b2c0: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0xc] (WRITE)
// 0048b2c4: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (READ)
// 0048b2c8: MOV EDI,dword ptr [EBX]
// 0048b2ca: ADD EDI,EBP
// 0048b2cc: MOV EBP,dword ptr [EAX + 0x1c]
// 0048b2cf: MOV dword ptr [EDI + 0x18],EBP
// 0048b2d2: MOV EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (READ)
// 0048b2d6: MOV EBP,dword ptr [EBX]
// 0048b2d8: ADD EBP,EDI
// 0048b2da: MOV EDI,dword ptr [EAX + 0x20]
// 0048b2dd: MOV dword ptr [EBP + 0x1c],EDI
// 0048b2e0: JMP 0x0048b29f
//   XREF to: 0048b29f (UNCONDITIONAL_JUMP)
// 0048b2e2: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0048b2e2
//   XREF to: 0067939c (READ)
// 0048b2e9: JNZ 0x0048b310
//   XREF to: 0048b310 (CONDITIONAL_JUMP)
// 0048b2eb: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 0048b2f5: MOV EBP,0x6
//   Label: LAB_0048b2f5
// 0048b2fa: MOV EDI,0x2cd
// 0048b2ff: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 0048b305: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 0048b30b: JMP 0x0048b252
//   XREF to: 0048b252 (UNCONDITIONAL_JUMP)
// 0048b310: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_0048b310
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0048b31a: JMP 0x0048b2f5
//   XREF to: 0048b2f5 (UNCONDITIONAL_JUMP)
