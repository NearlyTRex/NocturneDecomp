// Name: engine_drender.cpp_CDemonRenderer_renderAlternativeDepth_FUN_0048a950
// Address: 0048a950
// Address Range: [[0048a950, 0048aa49]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderAlternativeDepth_FUN_0048a950(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
// Cross-references:
//   core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_00522800 (00522800) at 0052298e [UNCONDITIONAL_CALL]
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
engine_drender_cpp_CDemonRenderer_renderAlternativeDepth_FUN_0048a950
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  int iVar4;
  int local_14;
  uint uVar5;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar4 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal), iVar4 != 0)) {
    iVar4 = 0;
    uVar5 = 0xffffffff;
    local_14 = 0;
    if (0 < (polygon_info->base).count) {
      iVar2 = 0;
      pSVar3 = polygon_info;
      do {
        iVar1 = pSVar3[1].base.type;
        *(int *)((int)g_VertexIndexBuffer + iVar2) = iVar1;
        uVar5 = uVar5 & this_ptr->vertex_buffer_ptr[iVar1].projected_vertex.screen_x;
        if ((int)(this_ptr->vertex_buffer_ptr[iVar1].projected_vertex.screen_x & -0x80000000) != 0)
        {
          local_14 = 1;
        }
        iVar2 = iVar2 + 4;
        iVar4 = iVar4 + 1;
        pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
      } while (iVar4 < (polygon_info->base).count);
    }
    if (((uVar5 & 0x80000000) == 0) || ((uVar5 & 0x1f) == 0)) {
      iVar4 = this_ptr->face_capture_enabled;
      if ((iVar4 != 0) && (this_ptr->face_count != 0)) {
        this_ptr->face_capture_enabled = local_14;
      }
      if (this_ptr->face_count == 0) {
        g_RenderStateFlags = RENDER_ALTERNATIVE_DEPTH;
        g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
        g_ScanlineRenderFunc = core_dstrender_cpp_renderZBufferFill16xUnrolled_FUN_00490902;
      }
      else {
        g_RenderStateFlags = 0;
        g_RenderStateFlag2 = PREPROCESS_NONE;
        g_ScanlineRenderFunc = core_dstrender_cpp_renderDepth16BitConditional_FUN_0049077d;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
                (this_ptr,(polygon_info->base).count,g_VertexIndexBuffer);
      this_ptr->face_capture_enabled = iVar4;
    }
  }
  return;
}


// Assembly code:
// 0048a950: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_renderAlternativeDepth_FUN_0048a950
// 0048a951: PUSH ESI
// 0048a952: PUSH EDI
// 0048a953: PUSH EBP
// 0048a954: SUB ESP,0x8
// 0048a957: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0048a95b: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0048a95f: CMP dword ptr [EDI + 0xc],0x0
// 0048a963: JNZ 0x0048aa12
//   XREF to: 0048aa12 (CONDITIONAL_JUMP)
// 0048a969: MOV EBX,0xffffffff
//   Label: LAB_0048a969
// 0048a96e: MOV ESI,dword ptr [EBP + 0x4]
// 0048a971: XOR ECX,ECX
// 0048a973: XOR EDX,EDX
// 0048a975: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0048a979: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x18] (DATA)
// 0048a97c: TEST ESI,ESI
// 0048a97e: JLE 0x0048a9b6
//   XREF to: 0048a9b6 (CONDITIONAL_JUMP)
// 0048a980: MOV ECX,EBP
// 0048a982: XOR EAX,EAX
// 0048a984: MOV EBX,dword ptr [ECX + 0x18]
//   Label: LAB_0048a984
// 0048a987: MOV dword ptr [EAX + 0x2c6d5ac],EBX
//   XREF to: 02c6d5ac (WRITE)
//   XREF to: 02c6d5b0 (WRITE)
// 0048a98d: IMUL ESI,EBX,0x30
// 0048a990: MOV EBX,dword ptr [EDI]
// 0048a992: ADD EBX,ESI
// 0048a994: MOV ESI,dword ptr [EBX + 0x10]
// 0048a997: AND dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0048a99b: TEST byte ptr [EBX + 0x13],0x80
// 0048a99f: JZ 0x0048a9a8
//   XREF to: 0048a9a8 (CONDITIONAL_JUMP)
// 0048a9a1: MOV dword ptr [ESP],0x1
//   XREF to: Stack[-0x18] (DATA)
// 0048a9a8: ADD EAX,0x4
//   Label: LAB_0048a9a8
// 0048a9ab: INC EDX
// 0048a9ac: MOV EBX,dword ptr [EBP + 0x4]
// 0048a9af: ADD ECX,0xc
// 0048a9b2: CMP EDX,EBX
// 0048a9b4: JL 0x0048a984
//   XREF to: 0048a984 (CONDITIONAL_JUMP)
// 0048a9b6: TEST byte ptr [ESP + 0x7],0x80
//   Label: LAB_0048a9b6
//   XREF to: Stack[-0x11] (READ)
// 0048a9bb: JZ 0x0048a9c4
//   XREF to: 0048a9c4 (CONDITIONAL_JUMP)
// 0048a9bd: TEST byte ptr [ESP + 0x4],0x1f
//   XREF to: Stack[-0x14] (READ)
// 0048a9c2: JNZ 0x0048aa0a
//   XREF to: 0048aa0a (CONDITIONAL_JUMP)
// 0048a9c4: MOV EBX,dword ptr [EDI + 0x10]
//   Label: LAB_0048a9c4
// 0048a9c7: TEST EBX,EBX
// 0048a9c9: JZ 0x0048a9d7
//   XREF to: 0048a9d7 (CONDITIONAL_JUMP)
// 0048a9cb: CMP dword ptr [EDI + 0x4],0x0
// 0048a9cf: JZ 0x0048a9d7
//   XREF to: 0048a9d7 (CONDITIONAL_JUMP)
// 0048a9d1: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0048a9d4: MOV dword ptr [EDI + 0x10],EAX
// 0048a9d7: CMP dword ptr [EDI + 0x4],0x0
//   Label: LAB_0048a9d7
// 0048a9db: JZ 0x0048aa27
//   XREF to: 0048aa27 (CONDITIONAL_JUMP)
// 0048a9dd: XOR EDX,EDX
// 0048a9df: MOV EAX,0x49077d
//   XREF to: 0049077d (PARAM)
// 0048a9e4: MOV dword ptr [0x02d052a0],EDX
//   XREF to: 02d052a0 (WRITE)
// 0048a9ea: MOV dword ptr [0x02d052a4],EDX
//   XREF to: 02d052a4 (WRITE)
// 0048a9f0: MOV [0x02d0257c],EAX
//   XREF to: 02d0257c (WRITE)
// 0048a9f5: PUSH 0x2c6d5ac
//   Label: LAB_0048a9f5
//   XREF to: 02c6d5ac (DATA)
// 0048a9fa: MOV ESI,dword ptr [EBP + 0x4]
// 0048a9fd: PUSH ESI
// 0048a9fe: PUSH EDI
// 0048a9ff: CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
//   XREF to: 0048a740 (UNCONDITIONAL_CALL)
// 0048aa04: ADD ESP,0xc
// 0048aa07: MOV dword ptr [EDI + 0x10],EBX
// 0048aa0a: ADD ESP,0x8
//   Label: LAB_0048aa0a
// 0048aa0d: POP EBP
// 0048aa0e: POP EDI
// 0048aa0f: POP ESI
// 0048aa10: POP EBX
// 0048aa11: RET
// 0048aa12: LEA EAX,[EBP + 0x8]
//   Label: LAB_0048aa12
// 0048aa15: PUSH EAX
// 0048aa16: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0048aa1b: ADD ESP,0x4
// 0048aa1e: TEST EAX,EAX
// 0048aa20: JZ 0x0048aa0a
//   XREF to: 0048aa0a (CONDITIONAL_JUMP)
// 0048aa22: JMP 0x0048a969
//   XREF to: 0048a969 (UNCONDITIONAL_JUMP)
// 0048aa27: MOV ECX,0x90
//   Label: LAB_0048aa27
// 0048aa2c: MOV ESI,0x6
// 0048aa31: MOV EDX,0x490902
//   XREF to: 00490902 (PARAM)
// 0048aa36: MOV dword ptr [0x02d052a0],ECX
//   XREF to: 02d052a0 (WRITE)
// 0048aa3c: MOV dword ptr [0x02d052a4],ESI
//   XREF to: 02d052a4 (WRITE)
// 0048aa42: MOV dword ptr [0x02d0257c],EDX
//   XREF to: 02d0257c (WRITE)
// 0048aa48: JMP 0x0048a9f5
//   XREF to: 0048a9f5 (UNCONDITIONAL_JUMP)
