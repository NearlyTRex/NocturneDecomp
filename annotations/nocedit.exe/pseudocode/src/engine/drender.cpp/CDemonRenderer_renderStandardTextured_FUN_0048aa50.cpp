// Name: engine_drender.cpp_CDemonRenderer_renderStandardTextured_FUN_0048aa50
// Address: 0048aa50
// Address Range: [[0048aa50, 0048ab40]]
// Convention: __cdecl
// Signature: int engine_drender.cpp_CDemonRenderer_renderStandardTextured_FUN_0048aa50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
// Cross-references:
//   core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0 (00574ba0) at 00574d94 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_drender_cpp_00621fae
//   TerminatedCString s_Can_t_use_demonZFacetCou_00621fc4
//   int g_RenderPixelCounter
//   int[16] g_VertexIndexBuffer
//   undefined4 g_VertexIndexBuffer[1]
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740

#include "nocturne.h"

int __cdecl
engine_drender_cpp_CDemonRenderer_renderStandardTextured_FUN_0048aa50
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SMRGLHeaderPrimitive *pSVar4;
  uint uVar5;
  
  g_RenderPixelCounter = 0;
  if ((this_ptr->plane_culling_enabled != 0) &&
     (iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal), iVar2 == 0)) {
    return 0;
  }
  iVar2 = 0;
  uVar5 = 0xffffffff;
  if (0 < (polygon_info->base).count) {
    iVar3 = 0;
    pSVar4 = polygon_info;
    do {
      iVar1 = pSVar4[1].base.type;
      *(int *)((int)g_VertexIndexBuffer + iVar3) = iVar1;
      iVar3 = iVar3 + 4;
      pSVar4 = (SMRGLHeaderPrimitive *)&(pSVar4->surface_normal).B;
      iVar2 = iVar2 + 1;
      uVar5 = uVar5 & this_ptr->vertex_buffer_ptr[iVar1].projected_vertex.screen_x;
    } while (iVar2 < (polygon_info->base).count);
  }
  if (((uVar5 & 0x80000000) == 0) || ((uVar5 & 0x1f) == 0)) {
    if (this_ptr->face_count == 0) {
      g_RenderStateFlags = RENDER_TEXTURE_BASE;
      g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
      g_ScanlineRenderFunc = core_dstrender_cpp_renderDepthTestStatistics16xUnrolled_FUN_00490d35;
    }
    else {
      g_CurrentFilename = "..\\engine\\drender.cpp";
      g_CurrentLineNumber = 0x29d;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't use demonZFacetCount in shadow mode!");
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
              (this_ptr,(polygon_info->base).count,g_VertexIndexBuffer);
    iVar2 = g_RenderPixelCounter;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}


// Assembly code:
// 0048aa50: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_renderStandardTextured_FUN_0048aa50
// 0048aa51: PUSH ESI
// 0048aa52: PUSH EDI
// 0048aa53: PUSH EBP
// 0048aa54: SUB ESP,0x4
// 0048aa57: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0048aa5b: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048aa5f: XOR EDX,EDX
// 0048aa61: MOV ECX,dword ptr [EBP + 0xc]
// 0048aa64: MOV dword ptr [0x02c6d5a4],EDX
//   XREF to: 02c6d5a4 (WRITE)
// 0048aa6a: TEST ECX,ECX
// 0048aa6c: JNZ 0x0048ab05
//   XREF to: 0048ab05 (CONDITIONAL_JUMP)
// 0048aa72: MOV EBX,0xffffffff
//   Label: LAB_0048aa72
// 0048aa77: MOV ESI,dword ptr [EDI + 0x4]
// 0048aa7a: XOR EAX,EAX
// 0048aa7c: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x14] (DATA)
// 0048aa7f: TEST ESI,ESI
// 0048aa81: JLE 0x0048aab0
//   XREF to: 0048aab0 (CONDITIONAL_JUMP)
// 0048aa83: MOV EDX,EDI
// 0048aa85: XOR ECX,ECX
// 0048aa87: MOV EBX,dword ptr [EDX + 0x18]
//   Label: LAB_0048aa87
// 0048aa8a: MOV dword ptr [ECX + 0x2c6d5ac],EBX
//   XREF to: 02c6d5ac (WRITE)
//   XREF to: 02c6d5b0 (WRITE)
// 0048aa90: IMUL ESI,EBX,0x30
// 0048aa93: MOV EBX,dword ptr [EBP]
// 0048aa96: ADD ECX,0x4
// 0048aa99: ADD EDX,0xc
// 0048aa9c: MOV EBX,dword ptr [ESI + EBX*0x1 + 0x10]
// 0048aaa0: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0048aaa3: INC EAX
// 0048aaa4: AND ESI,EBX
// 0048aaa6: MOV EBX,dword ptr [EDI + 0x4]
// 0048aaa9: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x14] (DATA)
// 0048aaac: CMP EAX,EBX
// 0048aaae: JL 0x0048aa87
//   XREF to: 0048aa87 (CONDITIONAL_JUMP)
// 0048aab0: TEST byte ptr [ESP + 0x3],0x80
//   Label: LAB_0048aab0
//   XREF to: Stack[-0x11] (READ)
// 0048aab5: JZ 0x0048aabd
//   XREF to: 0048aabd (CONDITIONAL_JUMP)
// 0048aab7: TEST byte ptr [ESP],0x1f
//   XREF to: Stack[-0x14] (DATA)
// 0048aabb: JNZ 0x0048ab1b
//   XREF to: 0048ab1b (CONDITIONAL_JUMP)
// 0048aabd: CMP dword ptr [EBP + 0x4],0x0
//   Label: LAB_0048aabd
// 0048aac1: JZ 0x0048ab1f
//   XREF to: 0048ab1f (CONDITIONAL_JUMP)
// 0048aac3: MOV EBX,0x621fae
//   XREF to: 00621fae (PARAM)
// 0048aac8: MOV ESI,0x29d
// 0048aacd: PUSH 0x621fc4
//   XREF to: 00621fc4 (DATA)
// 0048aad2: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0048aad8: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0048aade: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0048aae3: ADD ESP,0x4
// 0048aae6: PUSH 0x2c6d5ac
//   Label: LAB_0048aae6
//   XREF to: 02c6d5ac (DATA)
// 0048aaeb: MOV EAX,dword ptr [EDI + 0x4]
// 0048aaee: PUSH EAX
// 0048aaef: PUSH EBP
// 0048aaf0: CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
//   XREF to: 0048a740 (UNCONDITIONAL_CALL)
// 0048aaf5: MOV EAX,[0x02c6d5a4]
//   XREF to: 02c6d5a4 (READ)
// 0048aafa: ADD ESP,0xc
// 0048aafd: ADD ESP,0x4
//   Label: LAB_0048aafd
// 0048ab00: POP EBP
// 0048ab01: POP EDI
// 0048ab02: POP ESI
// 0048ab03: POP EBX
// 0048ab04: RET
// 0048ab05: LEA EAX,[EDI + 0x8]
//   Label: LAB_0048ab05
// 0048ab08: PUSH EAX
// 0048ab09: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0048ab0e: ADD ESP,0x4
// 0048ab11: TEST EAX,EAX
// 0048ab13: JNZ 0x0048aa72
//   XREF to: 0048aa72 (CONDITIONAL_JUMP)
// 0048ab19: JMP 0x0048aafd
//   XREF to: 0048aafd (UNCONDITIONAL_JUMP)
// 0048ab1b: XOR EAX,EAX
//   Label: LAB_0048ab1b
// 0048ab1d: JMP 0x0048aafd
//   XREF to: 0048aafd (UNCONDITIONAL_JUMP)
// 0048ab1f: MOV EDX,0xc0
//   Label: LAB_0048ab1f
// 0048ab24: MOV ECX,0x6
// 0048ab29: MOV EAX,0x490d35
//   XREF to: 00490d35 (DATA)
// 0048ab2e: MOV dword ptr [0x02d052a0],EDX
//   XREF to: 02d052a0 (WRITE)
// 0048ab34: MOV dword ptr [0x02d052a4],ECX
//   XREF to: 02d052a4 (WRITE)
// 0048ab3a: MOV [0x02d0257c],EAX
//   XREF to: 02d0257c (WRITE)
// 0048ab3f: JMP 0x0048aae6
//   XREF to: 0048aae6 (UNCONDITIONAL_JUMP)
