// Name: engine_drender.cpp_CDemonRenderer_renderSpecialDepth_FUN_0048b420
// Address: 0048b420
// Address Range: [[0048b420, 0048b548]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderSpecialDepth_FUN_0048b420(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
// Cross-references:
//   core_water.cpp_CWater_render_FUN_005ea320 (005ea320) at 005ea801 [UNCONDITIONAL_CALL]
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
engine_drender_cpp_CDemonRenderer_renderSpecialDepth_FUN_0048b420
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_0000000c;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal), iVar2 != 0)) {
    if (this_ptr->face_count == 0) {
      if (0 < *(int *)(in_stack_0000000c + 4)) {
        iVar4 = 0;
        iVar2 = 0;
        iVar3 = in_stack_0000000c;
        do {
          iVar1 = *(int *)(iVar3 + 0x18);
          if (this_ptr->field8_0x20 == 0) {
            this_ptr->vertex_buffer_ptr[iVar1].u = *(float *)(iVar3 + 0x1c);
            this_ptr->vertex_buffer_ptr[iVar1].v = *(float *)(iVar3 + 0x20);
          }
          *(int *)((int)g_VertexIndexBuffer + iVar4) = iVar1;
          iVar3 = iVar3 + 0xc;
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar2 < *(int *)(in_stack_0000000c + 4));
      }
    }
    else {
      iVar2 = 0;
      if (0 < *(int *)(in_stack_0000000c + 4)) {
        iVar4 = 0;
        iVar3 = in_stack_0000000c;
        do {
          *(undefined4 *)((int)g_VertexIndexBuffer + iVar4) = *(undefined4 *)(iVar3 + 0x18);
          iVar4 = iVar4 + 4;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0xc;
        } while (iVar2 < *(int *)(in_stack_0000000c + 4));
      }
    }
    if (this_ptr->face_count == 0) {
      g_RenderStateFlags = RENDER_ENGINE_SPECIAL_DEPTH;
      g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
      g_ScanlineRenderFunc = core_dstrender_cpp_renderTexturedDecalMMXScanline_FUN_0049169d;
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
// 0048b420: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_renderSpecialDepth_FUN_0048b420
// 0048b421: PUSH EBP
// 0048b422: SUB ESP,0x4
// 0048b425: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0048b429: CMP dword ptr [EBX + 0xc],0x0
// 0048b42d: JNZ 0x0048b4b1
//   XREF to: 0048b4b1 (CONDITIONAL_JUMP)
// 0048b433: PUSH EDI
//   Label: LAB_0048b433
// 0048b434: PUSH ESI
// 0048b435: MOV ECX,dword ptr [EBX + 0x4]
// 0048b438: TEST ECX,ECX
// 0048b43a: JZ 0x0048b4ca
//   XREF to: 0048b4ca (CONDITIONAL_JUMP)
// 0048b440: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048b444: MOV EDI,dword ptr [EDX + 0x4]
// 0048b447: XOR EAX,EAX
// 0048b449: TEST EDI,EDI
// 0048b44b: JLE 0x0048b470
//   XREF to: 0048b470 (CONDITIONAL_JUMP)
// 0048b44d: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048b451: XOR EDX,EDX
// 0048b453: MOV ESI,dword ptr [ECX + 0x18]
//   Label: LAB_0048b453
// 0048b456: MOV dword ptr [EDX + 0x2c6d5ac],ESI
//   XREF to: 02c6d5ac (WRITE)
//   XREF to: 02c6d5b0 (WRITE)
// 0048b45c: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048b460: ADD EDX,0x4
// 0048b463: INC EAX
// 0048b464: MOV EBP,dword ptr [ESI + 0x4]
// 0048b467: ADD ECX,0xc
// 0048b46a: CMP EAX,EBP
// 0048b46c: JL 0x0048b453
//   XREF to: 0048b453 (CONDITIONAL_JUMP)
// 0048b46e: MOV EAX,EAX
// 0048b470: CMP dword ptr [EBX + 0x4],0x0
//   Label: LAB_0048b470
// 0048b474: JZ 0x0048b523
//   XREF to: 0048b523 (CONDITIONAL_JUMP)
// 0048b47a: XOR EBP,EBP
// 0048b47c: MOV EDI,0x49072f
//   XREF to: 0049072f (DATA)
// 0048b481: MOV dword ptr [0x02d052a0],EBP
//   XREF to: 02d052a0 (WRITE)
// 0048b487: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 0048b48d: MOV dword ptr [0x02d0257c],EDI
//   XREF to: 02d0257c (WRITE)
// 0048b493: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0048b493
//   XREF to: Stack[0x8] (READ)
// 0048b497: PUSH 0x2c6d5ac
//   XREF to: 02c6d5ac (DATA)
// 0048b49c: MOV EDX,dword ptr [EAX + 0x4]
// 0048b49f: PUSH EDX
// 0048b4a0: PUSH EBX
// 0048b4a1: CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
//   XREF to: 0048a740 (UNCONDITIONAL_CALL)
// 0048b4a6: ADD ESP,0xc
// 0048b4a9: POP ESI
// 0048b4aa: POP EDI
// 0048b4ab: ADD ESP,0x4
//   Label: LAB_0048b4ab
// 0048b4ae: POP EBP
// 0048b4af: POP EBX
// 0048b4b0: RET
// 0048b4b1: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_0048b4b1
//   XREF to: Stack[0x8] (READ)
// 0048b4b5: ADD EAX,0x8
// 0048b4b8: PUSH EAX
// 0048b4b9: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0048b4be: ADD ESP,0x4
// 0048b4c1: TEST EAX,EAX
// 0048b4c3: JZ 0x0048b4ab
//   XREF to: 0048b4ab (CONDITIONAL_JUMP)
// 0048b4c5: JMP 0x0048b433
//   XREF to: 0048b433 (UNCONDITIONAL_JUMP)
// 0048b4ca: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0048b4ca
//   XREF to: Stack[0x8] (READ)
// 0048b4ce: CMP dword ptr [EAX + 0x4],0x0
// 0048b4d2: JLE 0x0048b470
//   XREF to: 0048b470 (CONDITIONAL_JUMP)
// 0048b4d4: XOR EDX,EDX
// 0048b4d6: MOV EDI,dword ptr [EBX + 0x20]
//   Label: LAB_0048b4d6
// 0048b4d9: MOV ESI,dword ptr [EAX + 0x18]
// 0048b4dc: TEST EDI,EDI
// 0048b4de: JZ 0x0048b4fe
//   XREF to: 0048b4fe (CONDITIONAL_JUMP)
// 0048b4e0: MOV dword ptr [EDX + 0x2c6d5ac],ESI
//   Label: LAB_0048b4e0
//   XREF to: 02c6d5ac (WRITE)
//   XREF to: 02c6d5b0 (WRITE)
// 0048b4e6: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048b4ea: ADD EAX,0xc
// 0048b4ed: INC ECX
// 0048b4ee: MOV EBP,dword ptr [ESI + 0x4]
// 0048b4f1: ADD EDX,0x4
// 0048b4f4: CMP ECX,EBP
// 0048b4f6: JGE 0x0048b470
//   XREF to: 0048b470 (CONDITIONAL_JUMP)
// 0048b4fc: JMP 0x0048b4d6
//   XREF to: 0048b4d6 (UNCONDITIONAL_JUMP)
// 0048b4fe: IMUL EDI,ESI,0x30
//   Label: LAB_0048b4fe
// 0048b501: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0xc] (WRITE)
// 0048b505: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (READ)
// 0048b509: MOV EDI,dword ptr [EBX]
// 0048b50b: ADD EBP,EDI
// 0048b50d: MOV EDI,dword ptr [EAX + 0x1c]
// 0048b510: MOV dword ptr [EBP + 0x18],EDI
// 0048b513: MOV EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (READ)
// 0048b517: MOV EBP,dword ptr [EBX]
// 0048b519: ADD EBP,EDI
// 0048b51b: MOV EDI,dword ptr [EAX + 0x20]
// 0048b51e: MOV dword ptr [EBP + 0x1c],EDI
// 0048b521: JMP 0x0048b4e0
//   XREF to: 0048b4e0 (UNCONDITIONAL_JUMP)
// 0048b523: MOV ECX,0x41
//   Label: LAB_0048b523
// 0048b528: MOV ESI,0x6
// 0048b52d: MOV EDX,0x49169d
//   XREF to: 0049169d (DATA)
// 0048b532: MOV dword ptr [0x02d052a0],ECX
//   XREF to: 02d052a0 (WRITE)
// 0048b538: MOV dword ptr [0x02d052a4],ESI
//   XREF to: 02d052a4 (WRITE)
// 0048b53e: MOV dword ptr [0x02d0257c],EDX
//   XREF to: 02d0257c (WRITE)
// 0048b544: JMP 0x0048b493
//   XREF to: 0048b493 (UNCONDITIONAL_JUMP)
