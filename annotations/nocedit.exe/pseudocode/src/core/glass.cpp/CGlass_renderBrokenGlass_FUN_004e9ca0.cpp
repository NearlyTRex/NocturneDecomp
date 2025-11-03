// Name: core_glass.cpp_CGlass_renderBrokenGlass_FUN_004e9ca0
// Address: 004e9ca0
// Address Range: [[004e9ca0, 004e9e88]]
// Convention: __cdecl
// Signature: void core_glass.cpp_CGlass_renderBrokenGlass_FUN_004e9ca0(CGlass * this_ptr)
// Cross-references:
//   core_glass.cpp_CGlass_renderBackground_FUN_004e9e90 (004e9e90) at 004ea01a [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 (0056a190) at 0056a421 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_0065eed0 = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_renderPerspectiveLit_FUN_0048b550
//   engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_renderBrokenGlass_FUN_004e9ca0(CGlass *this_ptr)

{
  CDemonRenderer *pCVar1;
  CBoundingBox3D *this_ptr_00;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  CDemonActor *pCVar4;
  float *pfVar5;
  SMRGLHeaderPrimitive *polygon_info;
  CDemonActor *in_stack_00000008;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  CDemonActor *in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  CDemonActor *in_stack_0000002c;
  float fStack_24;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  this_ptr_00 = (*in_stack_00000008->vtable->getBoundingBox)
                          (in_stack_00000008,(CBoundingBox3D *)&fStack_24);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000020);
    return;
  }
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar2 == 0) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,(SMRGLTextureBasic *)(in_stack_00000024 + 0x374));
  }
  else {
    engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr,0);
    fStack_24 = 7.219529e-39;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,(SMRGLTextureBasic *)(in_stack_00000024 + 0x374));
    engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr,1);
  }
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000028 + 0xb34)) {
    pfVar5 = (float *)(in_stack_00000028 + 0x38c);
    iVar3 = 0;
    do {
      in_stack_00000014 = (int)ROUND(*pfVar5 * FLOAT_0065eed0);
      in_stack_00000018 = (int)ROUND(pfVar5[1] * FLOAT_0065eed0);
      in_stack_0000001c = (int)ROUND(pfVar5[2] * FLOAT_0065eed0);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar3),(CVector3i *)&stack0x00000014);
      pCVar1 = g_CDemonRendererPtr;
      *(undefined4 *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar3) = 0xffff;
      *(undefined4 *)((int)&pCVar1->vertex_buffer_ptr->color + iVar3) = 0xffff;
      *(undefined4 *)((int)&pCVar1->vertex_buffer_ptr->fog + iVar3) = 0xffff;
      iVar2 = iVar2 + 1;
      pfVar5 = pfVar5 + 3;
      iVar3 = iVar3 + 0x30;
    } while (iVar2 < *(int *)(in_stack_00000028 + 0xb34));
  }
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr,*(int *)(in_stack_00000028 + 0x17c));
  iVar2 = 0;
  if (0 < *(int *)in_stack_0000002c[8].create_event) {
    polygon_info = (SMRGLHeaderPrimitive *)&in_stack_0000002c[4].next_actor;
    pCVar4 = in_stack_0000002c;
    do {
      pCVar4[4].vtable = (CDemonActor_vtable *)0x0;
      pCVar4[5].actor_name[0] = '\0';
      pCVar1 = g_CDemonRendererPtr;
      pCVar4[5].actor_name[1] = '\0';
      pCVar4[5].actor_name[2] = '\0';
      pCVar4[5].actor_name[3] = '\0';
      pCVar4[5].actor_name[4] = '\0';
      pCVar4[5].actor_name[5] = '\0';
      pCVar4[5].actor_name[6] = '\0';
      pCVar4[5].actor_name[7] = '\0';
      pCVar4[5].actor_name[8] = '\0';
      pCVar4[5].actor_name[9] = '\0';
      pCVar4[5].actor_name[10] = '\0';
      pCVar4[5].actor_name[0xb] = '\0';
      engine_drender_cpp_CDemonRenderer_renderPerspectiveLit_FUN_0048b550(pCVar1,polygon_info);
      pCVar4 = (CDemonActor *)((pCVar4->orient_matrix).m + 1);
      iVar2 = iVar2 + 1;
      polygon_info = polygon_info + 3;
    } while (iVar2 < *(int *)in_stack_0000002c[8].create_event);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_0000002c);
  return;
}


// Assembly code:
// 004e9ca0: PUSH EBP
//   Label: core_glass.cpp_CGlass_renderBrokenGlass_FUN_004e9ca0
// 004e9ca1: SUB ESP,0x24
// 004e9ca4: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 004e9ca8: PUSH EDX
// 004e9ca9: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 004e9cae: ADD ESP,0x4
// 004e9cb1: MOV EAX,ESP
// 004e9cb3: PUSH EAX
// 004e9cb4: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 004e9cb8: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 004e9cbc: PUSH ECX
// 004e9cbd: MOV EDX,dword ptr [EDX + 0x154]
// 004e9cc3: CALL dword ptr [EDX + 0x14]
// 004e9cc6: ADD ESP,0x8
// 004e9cc9: PUSH EAX
// 004e9cca: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 004e9ccf: ADD ESP,0x4
// 004e9cd2: TEST EAX,EAX
// 004e9cd4: JZ 0x004e9e65
//   XREF to: 004e9e65 (CONDITIONAL_JUMP)
// 004e9cda: PUSH EDI
// 004e9cdb: PUSH ESI
// 004e9cdc: PUSH EBX
// 004e9cdd: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004e9ce3: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004e9ce4: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 004e9ce9: ADD ESP,0x4
// 004e9cec: MOV EBX,dword ptr [ESP + 0x38]
// 004e9cf0: ADD EBX,0x374
// 004e9cf6: TEST EAX,EAX
// 004e9cf8: JZ 0x004e9e77
//   XREF to: 004e9e77 (CONDITIONAL_JUMP)
// 004e9cfe: PUSH 0x0
// 004e9d00: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004e9d06: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004e9d07: CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0
//   XREF to: 0048cac0 (UNCONDITIONAL_CALL)
// 004e9d0c: ADD ESP,0x8
// 004e9d0f: PUSH EBX
// 004e9d10: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004e9d16: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 004e9d17: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004e9d1c: ADD ESP,0x8
// 004e9d1f: PUSH 0x1
// 004e9d21: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004e9d26: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004e9d27: CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0
//   XREF to: 0048cac0 (UNCONDITIONAL_CALL)
// 004e9d2c: ADD ESP,0x8
//   Label: LAB_004e9d2c
// 004e9d2f: MOV EAX,dword ptr [ESP + 0x38]
// 004e9d33: MOV EDX,dword ptr [EAX + 0xb34]
// 004e9d39: XOR EBP,EBP
// 004e9d3b: TEST EDX,EDX
// 004e9d3d: JLE 0x004e9dd0
//   XREF to: 004e9dd0 (CONDITIONAL_JUMP)
// 004e9d43: LEA EDI,[EAX + 0x38c]
// 004e9d49: XOR ESI,ESI
// 004e9d4b: LEA EBX,[ESP + 0x24]
//   Label: LAB_004e9d4b
// 004e9d4f: MOV EAX,EDI
// 004e9d51: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004e9d57: FLD float ptr [EAX]
// 004e9d59: FMUL float ptr [0x0065eed0]
//   XREF to: 0065eed0 (READ)
// 004e9d5f: FISTP dword ptr [EBX]
// 004e9d61: FLD float ptr [EAX + 0x4]
// 004e9d64: FMUL float ptr [0x0065eed0]
//   XREF to: 0065eed0 (READ)
// 004e9d6a: FISTP dword ptr [EBX + 0x4]
// 004e9d6d: FLD float ptr [EAX + 0x8]
// 004e9d70: FMUL float ptr [0x0065eed0]
//   XREF to: 0065eed0 (READ)
// 004e9d76: FISTP dword ptr [EBX + 0x8]
// 004e9d79: LEA EAX,[ESP + 0x24]
// 004e9d7d: PUSH EAX
// 004e9d7e: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004e9d80: ADD EAX,ESI
// 004e9d82: PUSH EAX
// 004e9d83: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004e9d88: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004e9d8d: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004e9d8f: MOV dword ptr [EDX + ESI*0x1 + 0x20],0xffff
// 004e9d97: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004e9d99: MOV dword ptr [ESI + EBX*0x1 + 0x24],0xffff
// 004e9da1: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004e9da3: ADD ESP,0x8
// 004e9da6: MOV dword ptr [ESI + EAX*0x1 + 0x28],0xffff
// 004e9dae: MOV EAX,dword ptr [ESP + 0x38]
// 004e9db2: INC EBP
// 004e9db3: ADD EDI,0xc
// 004e9db6: MOV EBX,dword ptr [EAX + 0xb34]
// 004e9dbc: ADD ESI,0x30
// 004e9dbf: CMP EBP,EBX
// 004e9dc1: JL 0x004e9d4b
//   XREF to: 004e9d4b (CONDITIONAL_JUMP)
// 004e9dc3: LEA EAX,[EAX]
// 004e9dc9: LEA EDX,[EDX]
// 004e9dcf: NOP
// 004e9dd0: MOV EAX,dword ptr [ESP + 0x38]
//   Label: LAB_004e9dd0
// 004e9dd4: MOV ESI,dword ptr [EAX + 0x17c]
// 004e9dda: PUSH ESI
// 004e9ddb: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004e9de1: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004e9de2: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 004e9de7: ADD ESP,0x8
// 004e9dea: MOV EAX,dword ptr [ESP + 0x38]
// 004e9dee: MOV EBP,dword ptr [EAX + 0xb38]
// 004e9df4: XOR EBX,EBX
// 004e9df6: TEST EBP,EBP
// 004e9df8: JLE 0x004e9e50
//   XREF to: 004e9e50 (CONDITIONAL_JUMP)
// 004e9dfa: LEA EDI,[EAX + 0x6ac]
// 004e9e00: MOV ESI,EAX
// 004e9e02: MOV dword ptr [ESI + 0x6b4],0x0
//   Label: LAB_004e9e02
// 004e9e0c: PUSH EDI
// 004e9e0d: MOV dword ptr [ESI + 0x6b8],0x0
// 004e9e17: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004e9e1c: MOV dword ptr [ESI + 0x6bc],0x0
// 004e9e26: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004e9e27: MOV dword ptr [ESI + 0x6c0],0x0
// 004e9e31: CALL engine_drender.cpp_CDemonRenderer_renderPerspectiveLit_FUN_0048b550
//   XREF to: 0048b550 (UNCONDITIONAL_CALL)
// 004e9e36: ADD ESP,0x8
// 004e9e39: MOV EAX,dword ptr [ESP + 0x38]
// 004e9e3d: ADD ESI,0x48
// 004e9e40: INC EBX
// 004e9e41: MOV EDX,dword ptr [EAX + 0xb38]
// 004e9e47: ADD EDI,0x48
// 004e9e4a: CMP EBX,EDX
// 004e9e4c: JL 0x004e9e02
//   XREF to: 004e9e02 (CONDITIONAL_JUMP)
// 004e9e4e: MOV EAX,EAX
// 004e9e50: MOV ECX,dword ptr [ESP + 0x38]
//   Label: LAB_004e9e50
// 004e9e54: PUSH ECX
// 004e9e55: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 004e9e5a: ADD ESP,0x4
// 004e9e5d: POP EBX
// 004e9e5e: POP ESI
// 004e9e5f: POP EDI
// 004e9e60: ADD ESP,0x24
// 004e9e63: POP EBP
// 004e9e64: RET
// 004e9e65: MOV ECX,dword ptr [ESP + 0x2c]
//   Label: LAB_004e9e65
// 004e9e69: PUSH ECX
// 004e9e6a: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 004e9e6f: ADD ESP,0x4
// 004e9e72: ADD ESP,0x24
// 004e9e75: POP EBP
// 004e9e76: RET
// 004e9e77: PUSH EBX
//   Label: LAB_004e9e77
// 004e9e78: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004e9e7e: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 004e9e7f: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004e9e84: JMP 0x004e9d2c
//   XREF to: 004e9d2c (UNCONDITIONAL_JUMP)
