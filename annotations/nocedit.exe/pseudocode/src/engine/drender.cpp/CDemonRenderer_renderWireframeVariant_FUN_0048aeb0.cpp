// Name: engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
// Address: 0048aeb0
// Address Range: [[0048aeb0, 0048b021]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info, int render_flags)
// Cross-references:
//   core_bodypart.cpp_FUN_00419340 (00419340) at 00419485 [UNCONDITIONAL_CALL]
//   core_dskybox.cpp_renderSkyDome_FUN_004901f0 (004901f0) at 0049064d [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004cc300 (004cc300) at 004cc6a0 [UNCONDITIONAL_CALL]
//   core_glass.cpp_FUN_004e9e90 (004e9e90) at 004e9fc3 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052b160 (0052b160) at 0052b229 [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_FUN_005eb280 (005eb280) at 005eb48f [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00 (0048cf00) at 0048cf27 [UNCONDITIONAL_CALL]
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
//   engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info,int render_flags)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000010;
  
  if (render_flags == -1) {
    render_flags = RENDER_ENGINE_CORE_PREMIUM;
  }
  if (this_ptr->texture_capture_enabled == 0) {
    if ((this_ptr->plane_culling_enabled == 0) ||
       (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal), iVar3 != 0))
    {
      if (this_ptr->face_count == 0) {
        iVar3 = 0;
        if (0 < *(int *)(render_flags + 4)) {
          iVar4 = 0;
          iVar2 = render_flags;
          do {
            iVar1 = *(int *)(iVar2 + 0x18);
            if (this_ptr->field8_0x20 == 0) {
              this_ptr->vertex_buffer_ptr[iVar1].u = *(float *)(iVar2 + 0x1c);
              this_ptr->vertex_buffer_ptr[iVar1].v = *(float *)(iVar2 + 0x20);
            }
            *(int *)((int)g_VertexIndexBuffer + iVar4) = iVar1;
            iVar2 = iVar2 + 0xc;
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + 4;
          } while (iVar3 < *(int *)(render_flags + 4));
        }
      }
      else {
        iVar3 = 0;
        if (0 < *(int *)(render_flags + 4)) {
          iVar4 = 0;
          iVar2 = render_flags;
          do {
            *(undefined4 *)((int)g_VertexIndexBuffer + iVar4) = *(undefined4 *)(iVar2 + 0x18);
            iVar4 = iVar4 + 4;
            iVar3 = iVar3 + 1;
            iVar2 = iVar2 + 0xc;
          } while (iVar3 < *(int *)(render_flags + 4));
        }
      }
      if (this_ptr->face_count == 0) {
        if (g_BitsPerPixel == 0x20) {
          g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
        }
        else {
          g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
        }
        g_RenderStateFlags = in_stack_00000010;
        g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
      }
      else {
        g_RenderStateFlags = 0;
        g_RenderStateFlag2 = PREPROCESS_NONE;
        g_ScanlineRenderFunc = core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
                (this_ptr,*(int *)(render_flags + 4),g_VertexIndexBuffer);
    }
    return;
  }
  engine_drender_cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0
            (this_ptr,polygon_info,render_flags);
  return;
}


// Assembly code:
// 0048aeb0: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
// 0048aeb1: PUSH EDI
// 0048aeb2: PUSH EBP
// 0048aeb3: SUB ESP,0x4
// 0048aeb6: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048aeba: CMP dword ptr [ESP + 0x1c],-0x1
//   XREF to: Stack[0xc] (READ)
// 0048aebf: JZ 0x0048af4f
//   XREF to: 0048af4f (CONDITIONAL_JUMP)
// 0048aec5: CMP dword ptr [EBX + 0x1c],0x0
//   Label: LAB_0048aec5
// 0048aec9: JNZ 0x0048af5c
//   XREF to: 0048af5c (CONDITIONAL_JUMP)
// 0048aecf: CMP dword ptr [EBX + 0xc],0x0
// 0048aed3: JNZ 0x0048af76
//   XREF to: 0048af76 (CONDITIONAL_JUMP)
// 0048aed9: PUSH ESI
//   Label: LAB_0048aed9
// 0048aeda: CMP dword ptr [EBX + 0x4],0x0
// 0048aede: JZ 0x0048af8f
//   XREF to: 0048af8f (CONDITIONAL_JUMP)
// 0048aee4: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048aee8: MOV ESI,dword ptr [EAX + 0x4]
// 0048aeeb: XOR ECX,ECX
// 0048aeed: TEST ESI,ESI
// 0048aeef: JLE 0x0048af10
//   XREF to: 0048af10 (CONDITIONAL_JUMP)
// 0048aef1: XOR EDX,EDX
// 0048aef3: MOV ESI,dword ptr [EAX + 0x18]
//   Label: LAB_0048aef3
// 0048aef6: MOV dword ptr [EDX + 0x2c6d5ac],ESI
//   XREF to: 02c6d5ac (WRITE)
//   XREF to: 02c6d5b0 (WRITE)
// 0048aefc: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048af00: ADD EDX,0x4
// 0048af03: INC ECX
// 0048af04: MOV EBP,dword ptr [ESI + 0x4]
// 0048af07: ADD EAX,0xc
// 0048af0a: CMP ECX,EBP
// 0048af0c: JL 0x0048aef3
//   XREF to: 0048aef3 (CONDITIONAL_JUMP)
// 0048af0e: MOV EAX,EAX
// 0048af10: CMP dword ptr [EBX + 0x4],0x0
//   Label: LAB_0048af10
// 0048af14: JZ 0x0048afea
//   XREF to: 0048afea (CONDITIONAL_JUMP)
// 0048af1a: XOR EAX,EAX
// 0048af1c: MOV EBP,0x49072f
//   XREF to: 0049072f (DATA)
// 0048af21: MOV [0x02d052a0],EAX
//   XREF to: 02d052a0 (WRITE)
// 0048af26: MOV [0x02d052a4],EAX
//   XREF to: 02d052a4 (WRITE)
// 0048af2b: MOV dword ptr [0x02d0257c],EBP
//   XREF to: 02d0257c (WRITE)
// 0048af31: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0048af31
//   XREF to: Stack[0x8] (READ)
// 0048af35: PUSH 0x2c6d5ac
//   XREF to: 02c6d5ac (DATA)
// 0048af3a: MOV ECX,dword ptr [EAX + 0x4]
// 0048af3d: PUSH ECX
// 0048af3e: PUSH EBX
// 0048af3f: CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
//   XREF to: 0048a740 (UNCONDITIONAL_CALL)
// 0048af44: ADD ESP,0xc
// 0048af47: POP ESI
// 0048af48: ADD ESP,0x4
//   Label: LAB_0048af48
// 0048af4b: POP EBP
// 0048af4c: POP EDI
// 0048af4d: POP EBX
// 0048af4e: RET
// 0048af4f: MOV dword ptr [ESP + 0x1c],0x2cd
//   Label: LAB_0048af4f
//   XREF to: Stack[0xc] (WRITE)
// 0048af57: JMP 0x0048aec5
//   XREF to: 0048aec5 (UNCONDITIONAL_JUMP)
// 0048af5c: MOV EDI,dword ptr [ESP + 0x1c]
//   Label: LAB_0048af5c
//   XREF to: Stack[0xc] (READ)
// 0048af60: PUSH EDI
// 0048af61: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048af65: PUSH EBP
// 0048af66: PUSH EBX
// 0048af67: CALL engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0
//   XREF to: 0048d7a0 (UNCONDITIONAL_CALL)
// 0048af6c: ADD ESP,0xc
// 0048af6f: ADD ESP,0x4
// 0048af72: POP EBP
// 0048af73: POP EDI
// 0048af74: POP EBX
// 0048af75: RET
// 0048af76: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_0048af76
//   XREF to: Stack[0x8] (READ)
// 0048af7a: ADD EAX,0x8
// 0048af7d: PUSH EAX
// 0048af7e: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0048af83: ADD ESP,0x4
// 0048af86: TEST EAX,EAX
// 0048af88: JZ 0x0048af48
//   XREF to: 0048af48 (CONDITIONAL_JUMP)
// 0048af8a: JMP 0x0048aed9
//   XREF to: 0048aed9 (UNCONDITIONAL_JUMP)
// 0048af8f: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0048af8f
//   XREF to: Stack[0x8] (READ)
// 0048af93: MOV EDX,dword ptr [EAX + 0x4]
// 0048af96: XOR ECX,ECX
// 0048af98: TEST EDX,EDX
// 0048af9a: JLE 0x0048af10
//   XREF to: 0048af10 (CONDITIONAL_JUMP)
// 0048afa0: XOR EDX,EDX
// 0048afa2: MOV ESI,dword ptr [EAX + 0x18]
//   Label: LAB_0048afa2
// 0048afa5: MOV EBP,dword ptr [EBX + 0x20]
// 0048afa8: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x10] (WRITE)
// 0048afac: TEST EBP,EBP
// 0048afae: JZ 0x0048afd2
//   XREF to: 0048afd2 (CONDITIONAL_JUMP)
// 0048afb0: MOV ESI,dword ptr [ESP + 0x4]
//   Label: LAB_0048afb0
//   XREF to: Stack[-0x10] (READ)
// 0048afb4: MOV dword ptr [EDX + 0x2c6d5ac],ESI
//   XREF to: 02c6d5ac (WRITE)
//   XREF to: 02c6d5b0 (WRITE)
// 0048afba: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048afbe: ADD EAX,0xc
// 0048afc1: INC ECX
// 0048afc2: MOV EDI,dword ptr [ESI + 0x4]
// 0048afc5: ADD EDX,0x4
// 0048afc8: CMP ECX,EDI
// 0048afca: JGE 0x0048af10
//   XREF to: 0048af10 (CONDITIONAL_JUMP)
// 0048afd0: JMP 0x0048afa2
//   XREF to: 0048afa2 (UNCONDITIONAL_JUMP)
// 0048afd2: IMUL ESI,ESI,0x30
//   Label: LAB_0048afd2
// 0048afd5: MOV EDI,dword ptr [EBX]
// 0048afd7: MOV EBP,dword ptr [EAX + 0x1c]
// 0048afda: MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP
// 0048afde: MOV EDI,dword ptr [EBX]
// 0048afe0: ADD EDI,ESI
// 0048afe2: MOV ESI,dword ptr [EAX + 0x20]
// 0048afe5: MOV dword ptr [EDI + 0x1c],ESI
// 0048afe8: JMP 0x0048afb0
//   XREF to: 0048afb0 (UNCONDITIONAL_JUMP)
// 0048afea: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0048afea
//   XREF to: 0067939c (READ)
// 0048aff1: JNZ 0x0048b016
//   XREF to: 0048b016 (CONDITIONAL_JUMP)
// 0048aff3: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 0048affd: MOV EDI,0x6
//   Label: LAB_0048affd
// 0048b002: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0048b006: MOV dword ptr [0x02d052a4],EDI
//   XREF to: 02d052a4 (WRITE)
// 0048b00c: MOV [0x02d052a0],EAX
//   XREF to: 02d052a0 (WRITE)
// 0048b011: JMP 0x0048af31
//   XREF to: 0048af31 (UNCONDITIONAL_JUMP)
// 0048b016: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_0048b016
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0048b020: JMP 0x0048affd
//   XREF to: 0048affd (UNCONDITIONAL_JUMP)
