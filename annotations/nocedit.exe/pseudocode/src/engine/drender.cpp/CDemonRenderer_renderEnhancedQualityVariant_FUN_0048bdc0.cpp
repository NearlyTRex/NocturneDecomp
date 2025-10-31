// Name: engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
// Address: 0048bdc0
// Address Range: [[0048bdc0, 0048bf04]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
// Cross-references:
//   core_curtain.cpp_FUN_0044b060 (0044b060) at 0044b20a [UNCONDITIONAL_CALL]
//   core_fire.cpp_CLaserBeam_FUN_004c25c0 (004c25c0) at 004c3415 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_FUN_004e9930 (004e9930) at 004e9aba [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_FUN_004e9af0 (004e9af0) at 004e9c69 [UNCONDITIONAL_CALL]
//   core_water.cpp_CWater_render_FUN_005ea320 (005ea320) at 005ea767 [UNCONDITIONAL_CALL]
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
engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
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
        g_RenderStateFlags = RENDER_ENGINE_ULTRA_QUALITY;
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
// 0048bdc0: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
// 0048bdc1: PUSH ESI
// 0048bdc2: PUSH EDI
// 0048bdc3: PUSH EBP
// 0048bdc4: SUB ESP,0x4
// 0048bdc7: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0048bdcb: CMP dword ptr [EBX + 0xc],0x0
// 0048bdcf: JNZ 0x0048be6e
//   XREF to: 0048be6e (CONDITIONAL_JUMP)
// 0048bdd5: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0048bdd5
//   XREF to: Stack[0x8] (READ)
// 0048bdd9: MOV ECX,0xffffffff
// 0048bdde: XOR EDX,EDX
// 0048bde0: MOV ESI,dword ptr [EAX + 0x4]
// 0048bde3: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x14] (DATA)
// 0048bde6: TEST ESI,ESI
// 0048bde8: JLE 0x0048be20
//   XREF to: 0048be20 (CONDITIONAL_JUMP)
// 0048bdea: XOR ECX,ECX
// 0048bdec: MOV ESI,dword ptr [EAX + 0x18]
//   Label: LAB_0048bdec
// 0048bdef: MOV dword ptr [ECX + 0x2c6d5ac],ESI
//   XREF to: 02c6d5ac (WRITE)
//   XREF to: 02c6d5b0 (WRITE)
// 0048bdf5: IMUL ESI,ESI,0x30
// 0048bdf8: MOV EDI,dword ptr [EBX]
// 0048bdfa: MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10]
// 0048bdfe: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0048be01: ADD ECX,0x4
// 0048be04: AND EDI,ESI
// 0048be06: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048be0a: ADD EAX,0xc
// 0048be0d: INC EDX
// 0048be0e: MOV EBP,dword ptr [ESI + 0x4]
// 0048be11: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x14] (DATA)
// 0048be14: CMP EDX,EBP
// 0048be16: JL 0x0048bdec
//   XREF to: 0048bdec (CONDITIONAL_JUMP)
// 0048be18: LEA EAX,[EAX]
// 0048be1e: MOV EDX,EDX
// 0048be20: TEST byte ptr [ESP + 0x3],0x80
//   Label: LAB_0048be20
//   XREF to: Stack[-0x11] (READ)
// 0048be25: JZ 0x0048be2d
//   XREF to: 0048be2d (CONDITIONAL_JUMP)
// 0048be27: TEST byte ptr [ESP],0x1f
//   XREF to: Stack[-0x14] (DATA)
// 0048be2b: JNZ 0x0048be66
//   XREF to: 0048be66 (CONDITIONAL_JUMP)
// 0048be2d: CMP dword ptr [EBX + 0x4],0x0
//   Label: LAB_0048be2d
// 0048be31: JZ 0x0048be87
//   XREF to: 0048be87 (CONDITIONAL_JUMP)
// 0048be33: XOR ESI,ESI
// 0048be35: MOV ECX,0x49072f
//   XREF to: 0049072f (PARAM)
// 0048be3a: MOV dword ptr [0x02d052a0],ESI
//   XREF to: 02d052a0 (WRITE)
// 0048be40: MOV dword ptr [0x02d052a4],ESI
//   XREF to: 02d052a4 (WRITE)
// 0048be46: MOV dword ptr [0x02d0257c],ECX
//   XREF to: 02d0257c (WRITE)
// 0048be4c: LEA EAX,[EAX]
// 0048be50: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0048be50
//   XREF to: Stack[0x8] (READ)
// 0048be54: PUSH 0x2c6d5ac
//   XREF to: 02c6d5ac (DATA)
// 0048be59: MOV EDX,dword ptr [EAX + 0x4]
// 0048be5c: PUSH EDX
// 0048be5d: PUSH EBX
// 0048be5e: CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
//   XREF to: 0048a740 (UNCONDITIONAL_CALL)
// 0048be63: ADD ESP,0xc
// 0048be66: ADD ESP,0x4
//   Label: LAB_0048be66
// 0048be69: POP EBP
// 0048be6a: POP EDI
// 0048be6b: POP ESI
// 0048be6c: POP EBX
// 0048be6d: RET
// 0048be6e: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0048be6e
//   XREF to: Stack[0x8] (READ)
// 0048be72: ADD EAX,0x8
// 0048be75: PUSH EAX
// 0048be76: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0048be7b: ADD ESP,0x4
// 0048be7e: TEST EAX,EAX
// 0048be80: JZ 0x0048be66
//   XREF to: 0048be66 (CONDITIONAL_JUMP)
// 0048be82: JMP 0x0048bdd5
//   XREF to: 0048bdd5 (UNCONDITIONAL_JUMP)
// 0048be87: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0048be87
//   XREF to: 0067939c (READ)
// 0048be8e: JNZ 0x0048bef9
//   XREF to: 0048bef9 (CONDITIONAL_JUMP)
// 0048be90: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 0048be9a: MOV EBP,0x6
//   Label: LAB_0048be9a
// 0048be9f: MOV EDI,0x267
// 0048bea4: MOV EAX,dword ptr [EBX + 0x20]
// 0048bea7: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 0048bead: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 0048beb3: TEST EAX,EAX
// 0048beb5: JNZ 0x0048be50
//   XREF to: 0048be50 (CONDITIONAL_JUMP)
// 0048beb7: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048bebb: MOV EDX,dword ptr [EAX + 0x4]
// 0048bebe: XOR ECX,ECX
// 0048bec0: TEST EDX,EDX
// 0048bec2: JLE 0x0048be50
//   XREF to: 0048be50 (CONDITIONAL_JUMP)
// 0048bec4: XOR EDX,EDX
// 0048bec6: MOV ESI,dword ptr [EDX + 0x2c6d5ac]
//   Label: LAB_0048bec6
//   XREF to: 02c6d5ac (READ)
//   XREF to: 02c6d5b0 (READ)
// 0048becc: IMUL ESI,ESI,0x30
// 0048becf: MOV EDI,dword ptr [EBX]
// 0048bed1: MOV EBP,dword ptr [EAX + 0x1c]
// 0048bed4: MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP
// 0048bed8: MOV EDI,dword ptr [EBX]
// 0048beda: ADD EDI,ESI
// 0048bedc: MOV ESI,dword ptr [EAX + 0x20]
// 0048bedf: MOV dword ptr [EDI + 0x1c],ESI
// 0048bee2: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048bee6: ADD EAX,0xc
// 0048bee9: INC ECX
// 0048beea: MOV EBP,dword ptr [ESI + 0x4]
// 0048beed: ADD EDX,0x4
// 0048bef0: CMP ECX,EBP
// 0048bef2: JL 0x0048bec6
//   XREF to: 0048bec6 (CONDITIONAL_JUMP)
// 0048bef4: JMP 0x0048be50
//   XREF to: 0048be50 (UNCONDITIONAL_JUMP)
// 0048bef9: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_0048bef9
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0048bf03: JMP 0x0048be9a
//   XREF to: 0048be9a (UNCONDITIONAL_JUMP)
