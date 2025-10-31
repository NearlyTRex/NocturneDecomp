// Name: core_chain.cpp_FUN_004308f0
// Address: 004308f0
// Address Range: [[004308f0, 00430eae]]
// Convention: unknown
// Signature: undefined core_chain.cpp_FUN_004308f0()
// Globals:
//   undefined4 DAT_0065b9e0
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 DAT_00f80000
//   CDemonRenderer g_CDemonRendererInstance
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_set.cpp_CDemonSet_CallLightVertexColor_FUN_0056e110
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   wincore_windll.cpp_transformPoint_FUN_005b5a25

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_chain.cpp_FUN_004308f0(undefined4 param_1) */

undefined4 core_chain_cpp_FUN_004308f0(void)

{
  int *piVar1;
  CDemonRenderer *pCVar2;
  CDemonActor *this_ptr;
  int iVar3;
  CBoundingBox3D *this_ptr_00;
  BADSPACEBASE *in_ESP;
  float *pfVar4;
  float *pfVar5;
  int in_stack_00000004;
  CDemonActor *in_stack_00000008;
  CDemonActor *in_stack_0000000c;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000038;
  int in_stack_0000003c;
  int in_stack_00000040;
  undefined1 auStack_50 [20];
  int iStack_3c;
  int iStack_38;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar3 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000008);
    this_ptr = in_stack_0000000c;
    this_ptr_00 = (*((in_stack_0000000c->metadata).vtable)->getBoundingBox)
                            (in_stack_0000000c,(CBoundingBox3D *)&stack0xffffff78);
    iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    *(int *)(this_ptr[4].actor_name + 0x14) = iVar3;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(this_ptr);
    if (*(int *)(this_ptr[4].actor_name + 0x14) != 0) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr,(SMRGLTextureBasic *)(this_ptr[1].actor_name + 0x14));
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
      pfVar5 = (float *)(in_stack_00000038 + 0x28c);
      pfVar4 = (float *)(in_stack_00000038 + 0x2b0);
      for (iVar3 = 0; iVar3 < *(int *)(in_stack_00000038 + 0x158) + -1; iVar3 = iVar3 + 1) {
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
                   (CVector3i *)&stack0xfffffff8);
        auStack_50._16_4_ = (undefined4)ROUND(*pfVar5 * _DAT_0065b9e0);
        iStack_3c = (int)ROUND(pfVar5[1] * _DAT_0065b9e0);
        iStack_38 = (int)ROUND(pfVar5[2] * _DAT_0065b9e0);
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
                   (CVector3i *)(auStack_50 + 0x10));
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
                   (CVector3i *)&stack0xfffffff4);
        in_stack_00000028 = (int)ROUND(*pfVar4 * _DAT_0065b9e0);
        in_stack_0000002c = (int)ROUND(pfVar4[1] * _DAT_0065b9e0);
        in_stack_00000030 = (int)ROUND(pfVar4[2] * _DAT_0065b9e0);
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,
                   (CVector3i *)&stack0x00000028);
        pCVar2 = g_CDemonRendererPtr;
        piVar1 = &(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_y;
        *piVar1 = *piVar1 + -0x40;
        piVar1 = &pCVar2->vertex_buffer_ptr[1].projected_vertex.transformed_y;
        *piVar1 = *piVar1 + 0x40;
        piVar1 = &pCVar2->vertex_buffer_ptr[2].projected_vertex.transformed_y;
        *piVar1 = *piVar1 + 0x40;
        piVar1 = &pCVar2->vertex_buffer_ptr[3].projected_vertex.transformed_y;
        *piVar1 = *piVar1 + -0x40;
        (pCVar2->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
        pCVar2->vertex_buffer_ptr[1].projected_vertex.screen_x = -0x80000000;
        pCVar2->vertex_buffer_ptr[2].projected_vertex.screen_x = -0x80000000;
        pCVar2->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
        pCVar2->vertex_buffer_ptr->u = 7.34684e-40;
        pCVar2->vertex_buffer_ptr->v = 7.34684e-40;
        pCVar2->vertex_buffer_ptr[1].u = 7.34684e-40;
        pCVar2->vertex_buffer_ptr[1].v = 2.2775203e-38;
        pCVar2->vertex_buffer_ptr[2].u = 2.2775203e-38;
        pCVar2->vertex_buffer_ptr[2].v = 2.2775203e-38;
        pCVar2->vertex_buffer_ptr[3].u = 2.2775203e-38;
        pCVar2->vertex_buffer_ptr[3].v = 7.34684e-40;
        iStack_28 = (int)ROUND(*pfVar5 * _DAT_0065b9e0);
        iStack_24 = (int)ROUND(pfVar5[1] * _DAT_0065b9e0);
        iStack_20 = (int)ROUND(pfVar5[2] * _DAT_0065b9e0);
        core_set_cpp_CDemonSet_CallLightVertexColor_FUN_0056e110(g_CDemonSetPtr);
        iStack_24 = (int)ROUND(*pfVar4 * _DAT_0065b9e0);
        iStack_20 = (int)ROUND(pfVar4[1] * _DAT_0065b9e0);
        iStack_1c = (int)ROUND(pfVar4[2] * _DAT_0065b9e0);
        core_set_cpp_CDemonSet_CallLightVertexColor_FUN_0056e110(g_CDemonSetPtr);
        engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff94);
        in_stack_0000001c = (int)ROUND(*pfVar5 * _DAT_0065b9e0);
        in_stack_00000020 = (int)ROUND(pfVar5[1] * _DAT_0065b9e0);
        in_stack_00000024 = (int)ROUND(pfVar5[2] * _DAT_0065b9e0);
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
                   (CVector3i *)&stack0x00000020);
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
                   (CVector3i *)&stack0xfffffff4);
        in_stack_00000004 = (int)ROUND(*pfVar4 * _DAT_0065b9e0);
        in_stack_00000008 = (CDemonActor *)(int)ROUND(pfVar4[1] * _DAT_0065b9e0);
        in_stack_0000000c = (CDemonActor *)(int)ROUND(pfVar4[2] * _DAT_0065b9e0);
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
                   (CVector3i *)&stack0x00000004);
        in_stack_00000038 = (int)ROUND(*pfVar4 * _DAT_0065b9e0);
        in_stack_0000003c = (int)ROUND(pfVar4[1] * _DAT_0065b9e0);
        in_stack_00000040 = (int)ROUND(pfVar4[2] * _DAT_0065b9e0);
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,
                   (CVector3i *)&stack0x00000038);
        pCVar2 = g_CDemonRendererPtr;
        (g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x =
             (g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x + -0x40;
        pCVar2->vertex_buffer_ptr[1].projected_vertex.transformed_x =
             pCVar2->vertex_buffer_ptr[1].projected_vertex.transformed_x + 0x40;
        pCVar2->vertex_buffer_ptr[2].projected_vertex.transformed_x =
             pCVar2->vertex_buffer_ptr[2].projected_vertex.transformed_x + 0x40;
        pCVar2->vertex_buffer_ptr[3].projected_vertex.transformed_x =
             pCVar2->vertex_buffer_ptr[3].projected_vertex.transformed_x + -0x40;
        (pCVar2->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
        pCVar2->vertex_buffer_ptr[1].projected_vertex.screen_x = -0x80000000;
        pCVar2->vertex_buffer_ptr[2].projected_vertex.screen_x = -0x80000000;
        pCVar2->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
        pCVar2->vertex_buffer_ptr->u = 7.34684e-40;
        pCVar2->vertex_buffer_ptr->v = 7.34684e-40;
        pCVar2->vertex_buffer_ptr[1].u = 7.34684e-40;
        pCVar2->vertex_buffer_ptr[1].v = 2.2775203e-38;
        pCVar2->vertex_buffer_ptr[2].u = 2.2775203e-38;
        pCVar2->vertex_buffer_ptr[2].v = 2.2775203e-38;
        pCVar2->vertex_buffer_ptr[3].u = 2.2775203e-38;
        pCVar2->vertex_buffer_ptr[3].v = 7.34684e-40;
        core_set_cpp_CDemonSet_CallLightVertexColor_FUN_0056e110(g_CDemonSetPtr);
        core_set_cpp_CDemonSet_CallLightVertexColor_FUN_0056e110(g_CDemonSetPtr);
        pfVar5 = pfVar5 + 9;
        pfVar4 = pfVar4 + 9;
        engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)auStack_50);
      }
      return 1;
    }
  }
  return 0;
}


// Assembly code:
// 004308f0: PUSH EBX
//   Label: core_chain.cpp_FUN_004308f0
// 004308f1: PUSH EDI
// 004308f2: PUSH EBP
// 004308f3: SUB ESP,0xac
// 004308f9: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004308ff: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00430900: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 00430905: ADD ESP,0x4
// 00430908: TEST EAX,EAX
// 0043090a: JZ 0x00430918
//   XREF to: 00430918 (CONDITIONAL_JUMP)
// 0043090c: XOR EAX,EAX
//   Label: LAB_0043090c
// 0043090e: ADD ESP,0xac
// 00430914: POP EBP
// 00430915: POP EDI
// 00430916: POP EBX
// 00430917: RET
// 00430918: MOV ECX,dword ptr [ESP + 0xbc]
//   Label: LAB_00430918
//   XREF to: Stack[0x4] (READ)
// 0043091f: PUSH ECX
// 00430920: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 00430925: ADD ESP,0x4
// 00430928: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x90] (DATA)
// 0043092c: PUSH EAX
// 0043092d: MOV EBX,dword ptr [ESP + 0xc0]
//   XREF to: Stack[0x4] (READ)
// 00430934: MOV EDX,dword ptr [ESP + 0xc0]
//   XREF to: Stack[0x4] (READ)
// 0043093b: PUSH EBX
// 0043093c: MOV EDX,dword ptr [EDX + 0x154]
// 00430942: CALL dword ptr [EDX + 0x14]
// 00430945: ADD ESP,0x8
// 00430948: PUSH EAX
// 00430949: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 0043094e: ADD ESP,0x4
// 00430951: PUSH EBX
// 00430952: MOV dword ptr [EBX + 0x574],EAX
// 00430958: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 0043095d: MOV EDI,dword ptr [EBX + 0x574]
// 00430963: ADD ESP,0x4
// 00430966: TEST EDI,EDI
// 00430968: JZ 0x0043090c
//   XREF to: 0043090c (CONDITIONAL_JUMP)
// 0043096a: PUSH ESI
// 0043096b: LEA EAX,[EBX + 0x16c]
// 00430971: PUSH EAX
// 00430972: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00430978: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 00430979: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 0043097e: ADD ESP,0x8
// 00430981: PUSH 0x0
// 00430983: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00430988: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00430989: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 0043098e: MOV EDX,0x4
// 00430993: MOV EAX,0x1
// 00430998: ADD ESP,0x8
// 0043099b: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004309a1: XOR ECX,ECX
// 004309a3: PUSH 0xffff
// 004309a8: MOV dword ptr [ESP + 0xc],EDX
// 004309ac: MOV dword ptr [ESP + 0x1c],ECX
// 004309b0: MOV dword ptr [ESP + 0x18],ECX
// 004309b4: MOV dword ptr [ESP + 0x14],ECX
// 004309b8: MOV dword ptr [ESP + 0x10],ECX
// 004309bc: MOV dword ptr [ESP + 0x20],ECX
// 004309c0: MOV dword ptr [ESP + 0x24],EAX
// 004309c4: MOV EDX,0x2
// 004309c9: MOV ECX,0x3
// 004309ce: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004309cf: MOV dword ptr [ESP + 0x2c],EDX
// 004309d3: MOV dword ptr [ESP + 0x30],ECX
// 004309d7: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 004309dc: ADD ESP,0x8
// 004309df: XOR ESI,ESI
// 004309e1: PUSH ESI
// 004309e2: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004309e8: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 004309e9: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 004309ee: ADD ESP,0x8
// 004309f1: XOR EBP,EBP
// 004309f3: MOV EDI,dword ptr [ESP + 0xc0]
// 004309fa: MOV ESI,dword ptr [ESP + 0xc0]
// 00430a01: ADD EDI,0x28c
// 00430a07: ADD ESI,0x2b0
// 00430a0d: MOV EAX,dword ptr [ESP + 0xc0]
//   Label: LAB_00430a0d
// 00430a14: MOV EAX,dword ptr [EAX + 0x158]
// 00430a1a: DEC EAX
// 00430a1b: CMP EBP,EAX
// 00430a1d: JGE 0x00430e9f
//   XREF to: 00430e9f (CONDITIONAL_JUMP)
// 00430a23: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00430a28: LEA EBX,[ESP + 0x80]
// 00430a2f: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430a31: MOV EAX,EDI
// 00430a33: FLD float ptr [EAX]
// 00430a35: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430a3b: FISTP dword ptr [EBX]
// 00430a3d: FLD float ptr [EAX + 0x4]
// 00430a40: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430a46: FISTP dword ptr [EBX + 0x4]
// 00430a49: FLD float ptr [EAX + 0x8]
// 00430a4c: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430a52: FISTP dword ptr [EBX + 0x8]
// 00430a55: LEA EAX,[ESP + 0x80]
// 00430a5c: PUSH EAX
// 00430a5d: PUSH EDX
// 00430a5e: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 00430a63: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00430a68: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430a6a: ADD ESP,0x8
// 00430a6d: LEA EDX,[EAX + 0x30]
// 00430a70: LEA EBX,[ESP + 0x44]
// 00430a74: MOV EAX,EDI
// 00430a76: FLD float ptr [EAX]
// 00430a78: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430a7e: FISTP dword ptr [EBX]
// 00430a80: FLD float ptr [EAX + 0x4]
// 00430a83: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430a89: FISTP dword ptr [EBX + 0x4]
// 00430a8c: FLD float ptr [EAX + 0x8]
// 00430a8f: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430a95: FISTP dword ptr [EBX + 0x8]
// 00430a98: LEA EAX,[ESP + 0x44]
// 00430a9c: PUSH EAX
// 00430a9d: PUSH EDX
// 00430a9e: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 00430aa3: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00430aa8: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430aaa: ADD ESP,0x8
// 00430aad: LEA EDX,[EAX + 0x60]
// 00430ab0: LEA EBX,[ESP + 0x74]
// 00430ab4: MOV EAX,ESI
// 00430ab6: FLD float ptr [EAX]
// 00430ab8: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430abe: FISTP dword ptr [EBX]
// 00430ac0: FLD float ptr [EAX + 0x4]
// 00430ac3: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430ac9: FISTP dword ptr [EBX + 0x4]
// 00430acc: FLD float ptr [EAX + 0x8]
// 00430acf: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430ad5: FISTP dword ptr [EBX + 0x8]
// 00430ad8: LEA EAX,[ESP + 0x74]
// 00430adc: PUSH EAX
// 00430add: PUSH EDX
// 00430ade: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 00430ae3: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00430ae8: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430aea: ADD ESP,0x8
// 00430aed: LEA EDX,[EAX + 0x90]
// 00430af3: LEA EBX,[ESP + 0xa4]
// 00430afa: MOV EAX,ESI
// 00430afc: FLD float ptr [EAX]
// 00430afe: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430b04: FISTP dword ptr [EBX]
// 00430b06: FLD float ptr [EAX + 0x4]
// 00430b09: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430b0f: FISTP dword ptr [EBX + 0x4]
// 00430b12: FLD float ptr [EAX + 0x8]
// 00430b15: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430b1b: FISTP dword ptr [EBX + 0x8]
// 00430b1e: LEA EAX,[ESP + 0xa4]
// 00430b25: PUSH EAX
// 00430b26: PUSH EDX
// 00430b27: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 00430b2c: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00430b31: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430b33: SUB dword ptr [EBX + 0x4],0x40
// 00430b37: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430b39: ADD dword ptr [EBX + 0x34],0x40
// 00430b3d: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430b3f: ADD dword ptr [EBX + 0x64],0x40
// 00430b43: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430b45: SUB dword ptr [EBX + 0x94],0x40
// 00430b4c: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430b4e: MOV dword ptr [EDX + 0x10],0x80000000
// 00430b55: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430b57: MOV dword ptr [EDX + 0x40],0x80000000
// 00430b5e: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430b60: MOV dword ptr [EDX + 0x70],0x80000000
// 00430b67: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430b69: MOV dword ptr [EDX + 0xa0],0x80000000
// 00430b73: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430b75: MOV dword ptr [EDX + 0x18],0x80000
// 00430b7c: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430b7e: MOV dword ptr [EDX + 0x1c],0x80000
// 00430b85: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430b87: MOV dword ptr [EDX + 0x48],0x80000
// 00430b8e: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430b90: MOV dword ptr [EDX + 0x4c],0xf80000
//   XREF to: 00f80000 (DATA)
// 00430b97: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430b99: MOV dword ptr [EDX + 0x78],0xf80000
//   XREF to: 00f80000 (DATA)
// 00430ba0: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430ba2: MOV dword ptr [EDX + 0x7c],0xf80000
//   XREF to: 00f80000 (DATA)
// 00430ba9: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430bab: MOV dword ptr [EDX + 0xa8],0xf80000
//   XREF to: 00f80000 (DATA)
// 00430bb5: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430bb7: ADD ESP,0x8
// 00430bba: LEA EBX,[ESP + 0x50]
// 00430bbe: MOV dword ptr [EAX + 0xac],0x80000
// 00430bc8: MOV EAX,EDI
// 00430bca: FLD float ptr [EAX]
// 00430bcc: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430bd2: FISTP dword ptr [EBX]
// 00430bd4: FLD float ptr [EAX + 0x4]
// 00430bd7: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430bdd: FISTP dword ptr [EBX + 0x4]
// 00430be0: FLD float ptr [EAX + 0x8]
// 00430be3: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430be9: FISTP dword ptr [EBX + 0x8]
// 00430bec: PUSH 0x2
// 00430bee: PUSH 0x0
// 00430bf0: PUSH 0x0
// 00430bf2: LEA EAX,[ESP + 0x5c]
// 00430bf6: PUSH EAX
// 00430bf7: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00430bfd: PUSH EBX
//   XREF to: 03114278 (DATA)
// 00430bfe: CALL core_set.cpp_CDemonSet_CallLightVertexColor_FUN_0056e110
//   XREF to: 0056e110 (UNCONDITIONAL_CALL)
// 00430c03: ADD ESP,0x14
// 00430c06: LEA EBX,[ESP + 0x50]
// 00430c0a: MOV EAX,ESI
// 00430c0c: FLD float ptr [EAX]
// 00430c0e: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430c14: FISTP dword ptr [EBX]
// 00430c16: FLD float ptr [EAX + 0x4]
// 00430c19: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430c1f: FISTP dword ptr [EBX + 0x4]
// 00430c22: FLD float ptr [EAX + 0x8]
// 00430c25: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430c2b: FISTP dword ptr [EBX + 0x8]
// 00430c2e: PUSH 0x2
// 00430c30: PUSH 0x2
// 00430c32: PUSH 0x0
// 00430c34: LEA EAX,[ESP + 0x5c]
// 00430c38: PUSH EAX
// 00430c39: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00430c3e: PUSH EAX
//   XREF to: 03114278 (DATA)
// 00430c3f: CALL core_set.cpp_CDemonSet_CallLightVertexColor_FUN_0056e110
//   XREF to: 0056e110 (UNCONDITIONAL_CALL)
// 00430c44: ADD ESP,0x14
// 00430c47: LEA EAX,[ESP + 0x4]
// 00430c4b: PUSH EAX
// 00430c4c: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00430c52: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00430c53: LEA EBX,[ESP + 0x94]
// 00430c5a: CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)
// 00430c5f: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00430c65: ADD ESP,0x8
// 00430c68: MOV EAX,EDI
// 00430c6a: MOV EDX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00430c6c: FLD float ptr [EAX]
// 00430c6e: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430c74: FISTP dword ptr [EBX]
// 00430c76: FLD float ptr [EAX + 0x4]
// 00430c79: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430c7f: FISTP dword ptr [EBX + 0x4]
// 00430c82: FLD float ptr [EAX + 0x8]
// 00430c85: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430c8b: FISTP dword ptr [EBX + 0x8]
// 00430c8e: LEA EAX,[ESP + 0x8c]
// 00430c95: PUSH EAX
// 00430c96: PUSH EDX
// 00430c97: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 00430c9c: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00430ca1: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430ca3: ADD ESP,0x8
// 00430ca6: LEA EDX,[EAX + 0x30]
// 00430ca9: LEA EBX,[ESP + 0x5c]
// 00430cad: MOV EAX,EDI
// 00430caf: FLD float ptr [EAX]
// 00430cb1: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430cb7: FISTP dword ptr [EBX]
// 00430cb9: FLD float ptr [EAX + 0x4]
// 00430cbc: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430cc2: FISTP dword ptr [EBX + 0x4]
// 00430cc5: FLD float ptr [EAX + 0x8]
// 00430cc8: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430cce: FISTP dword ptr [EBX + 0x8]
// 00430cd1: LEA EAX,[ESP + 0x5c]
// 00430cd5: PUSH EAX
// 00430cd6: PUSH EDX
// 00430cd7: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 00430cdc: ADD ESP,0x8
// 00430cdf: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00430ce4: LEA EBX,[ESP + 0x68]
// 00430ce8: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430cea: MOV EAX,ESI
// 00430cec: FLD float ptr [EAX]
// 00430cee: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430cf4: FISTP dword ptr [EBX]
// 00430cf6: FLD float ptr [EAX + 0x4]
// 00430cf9: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430cff: FISTP dword ptr [EBX + 0x4]
// 00430d02: FLD float ptr [EAX + 0x8]
// 00430d05: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430d0b: FISTP dword ptr [EBX + 0x8]
// 00430d0e: LEA EAX,[ESP + 0x68]
// 00430d12: PUSH EAX
// 00430d13: ADD EDX,0x60
// 00430d16: PUSH EDX
// 00430d17: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 00430d1c: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00430d21: LEA EBX,[ESP + 0xa0]
// 00430d28: ADD ESP,0x8
// 00430d2b: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430d2d: MOV EAX,ESI
// 00430d2f: FLD float ptr [EAX]
// 00430d31: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430d37: FISTP dword ptr [EBX]
// 00430d39: FLD float ptr [EAX + 0x4]
// 00430d3c: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430d42: FISTP dword ptr [EBX + 0x4]
// 00430d45: FLD float ptr [EAX + 0x8]
// 00430d48: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430d4e: FISTP dword ptr [EBX + 0x8]
// 00430d51: LEA EAX,[ESP + 0x98]
// 00430d58: PUSH EAX
// 00430d59: ADD EDX,0x90
// 00430d5f: PUSH EDX
// 00430d60: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 00430d65: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00430d6a: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430d6c: SUB dword ptr [EBX],0x40
// 00430d6f: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430d71: ADD dword ptr [EBX + 0x30],0x40
// 00430d75: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430d77: ADD dword ptr [EBX + 0x60],0x40
// 00430d7b: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430d7d: SUB dword ptr [EBX + 0x90],0x40
// 00430d84: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430d86: MOV dword ptr [EDX + 0x10],0x80000000
// 00430d8d: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430d8f: MOV dword ptr [EDX + 0x40],0x80000000
// 00430d96: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430d98: MOV dword ptr [EDX + 0x70],0x80000000
// 00430d9f: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430da1: MOV dword ptr [EDX + 0xa0],0x80000000
// 00430dab: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430dad: MOV dword ptr [EDX + 0x18],0x80000
// 00430db4: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430db6: MOV dword ptr [EDX + 0x1c],0x80000
// 00430dbd: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430dbf: MOV dword ptr [EDX + 0x48],0x80000
// 00430dc6: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430dc8: MOV dword ptr [EDX + 0x4c],0xf80000
//   XREF to: 00f80000 (DATA)
// 00430dcf: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430dd1: MOV dword ptr [EDX + 0x78],0xf80000
//   XREF to: 00f80000 (DATA)
// 00430dd8: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430dda: MOV dword ptr [EDX + 0x7c],0xf80000
//   XREF to: 00f80000 (DATA)
// 00430de1: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430de3: MOV dword ptr [EDX + 0xa8],0xf80000
//   XREF to: 00f80000 (DATA)
// 00430ded: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00430def: ADD ESP,0x8
// 00430df2: LEA EBX,[ESP + 0x50]
// 00430df6: MOV dword ptr [EAX + 0xac],0x80000
// 00430e00: MOV EAX,EDI
// 00430e02: FLD float ptr [EAX]
// 00430e04: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430e0a: FISTP dword ptr [EBX]
// 00430e0c: FLD float ptr [EAX + 0x4]
// 00430e0f: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430e15: FISTP dword ptr [EBX + 0x4]
// 00430e18: FLD float ptr [EAX + 0x8]
// 00430e1b: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430e21: FISTP dword ptr [EBX + 0x8]
// 00430e24: PUSH 0x2
// 00430e26: PUSH 0x0
// 00430e28: PUSH 0x0
// 00430e2a: LEA EAX,[ESP + 0x5c]
// 00430e2e: PUSH EAX
// 00430e2f: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00430e35: PUSH ECX
//   XREF to: 03114278 (DATA)
// 00430e36: CALL core_set.cpp_CDemonSet_CallLightVertexColor_FUN_0056e110
//   XREF to: 0056e110 (UNCONDITIONAL_CALL)
// 00430e3b: ADD ESP,0x14
// 00430e3e: LEA EBX,[ESP + 0x50]
// 00430e42: MOV EAX,ESI
// 00430e44: FLD float ptr [EAX]
// 00430e46: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430e4c: FISTP dword ptr [EBX]
// 00430e4e: FLD float ptr [EAX + 0x4]
// 00430e51: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430e57: FISTP dword ptr [EBX + 0x4]
// 00430e5a: FLD float ptr [EAX + 0x8]
// 00430e5d: FMUL float ptr [0x0065b9e0]
//   XREF to: 0065b9e0 (READ)
// 00430e63: FISTP dword ptr [EBX + 0x8]
// 00430e66: PUSH 0x2
// 00430e68: PUSH 0x2
// 00430e6a: PUSH 0x0
// 00430e6c: LEA EAX,[ESP + 0x5c]
// 00430e70: PUSH EAX
// 00430e71: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00430e77: PUSH EBX
//   XREF to: 03114278 (DATA)
// 00430e78: CALL core_set.cpp_CDemonSet_CallLightVertexColor_FUN_0056e110
//   XREF to: 0056e110 (UNCONDITIONAL_CALL)
// 00430e7d: ADD ESP,0x14
// 00430e80: LEA EAX,[ESP + 0x4]
// 00430e84: PUSH EAX
// 00430e85: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00430e8a: ADD EDI,0x24
// 00430e8d: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00430e8e: INC EBP
// 00430e8f: ADD ESI,0x24
// 00430e92: CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)
// 00430e97: ADD ESP,0x8
// 00430e9a: JMP 0x00430a0d
//   XREF to: 00430a0d (UNCONDITIONAL_JUMP)
// 00430e9f: MOV EAX,0x1
//   Label: LAB_00430e9f
// 00430ea4: POP ESI
// 00430ea5: ADD ESP,0xac
// 00430eab: POP EBP
// 00430eac: POP EDI
// 00430ead: POP EBX
// 00430eae: RET
