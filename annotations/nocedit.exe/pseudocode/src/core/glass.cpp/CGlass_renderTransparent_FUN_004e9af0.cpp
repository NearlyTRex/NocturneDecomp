// Name: core_glass.cpp_CGlass_renderTransparent_FUN_004e9af0
// Address: 004e9af0
// Address Range: [[004e9af0, 004e9c94]]
// Convention: __cdecl
// Signature: int core_glass.cpp_CGlass_renderTransparent_FUN_004e9af0(CGlass * this_ptr)
// Globals:
//   float FLOAT_0065eed0 = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   float g_PerspectiveReciprocal
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
//   core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60

#include "nocturne.h"

int __cdecl core_glass_cpp_CGlass_renderTransparent_FUN_004e9af0(CGlass *this_ptr)

{
  char *input_vertices;
  longlong lVar1;
  CDemonRenderer *this_ptr_00;
  int iVar2;
  CBoundingBox3D *this_ptr_01;
  char *pcVar3;
  CVector3f *pCVar4;
  CGlass *pCVar5;
  BADSPACEBASE *in_ESP;
  SMRGLHeaderPrimitive *polygon_info;
  int iStack00000014;
  int in_stack_00000028;
  
  if ((((this_ptr->background_flag == 0) && (this_ptr->opacity != 0)) && (this_ptr->shattered == 0))
     && (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
        iVar2 == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
    this_ptr_01 = (*((this_ptr->base).vtable)->getBoundingBox)
                            (&this_ptr->base,(CBoundingBox3D *)&stack0xffffffe4);
    iStack00000014 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_01);
    iVar2 = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,&this_ptr->glass_texture);
    pCVar4 = this_ptr->broken_vertices;
    input_vertices = this_ptr->field12_0x4b8;
    pcVar3 = input_vertices;
    if (0 < this_ptr->broken_vertex_count) {
      do {
        *(int *)pcVar3 = (int)ROUND(pCVar4->x * FLOAT_0065eed0);
        *(int *)(pcVar3 + 4) = (int)ROUND(pCVar4->y * FLOAT_0065eed0);
        *(int *)(pcVar3 + 8) = (int)ROUND(pCVar4->z * FLOAT_0065eed0);
        iVar2 = iVar2 + 1;
        pCVar4 = pCVar4 + 1;
        pcVar3 = pcVar3 + 0xc;
      } while (iVar2 < this_ptr->broken_vertex_count);
    }
    core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0
              (g_CDemonSetPtr,this_ptr->broken_vertex_count,(int *)input_vertices);
    lVar1 = (longlong)(0xffff - (int)g_PerspectiveReciprocal) * (longlong)this_ptr->opacity;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
              (g_CDemonRendererPtr,(uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    polygon_info = &this_ptr->broken_quads[0].base;
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,this_ptr->broken_vertex_count,this_ptr->broken_polygon_count,
               (SInputFace *)polygon_info,(int)input_vertices,4,0);
    iVar2 = 0;
    pCVar5 = this_ptr;
    if (0 < this_ptr->broken_polygon_count) {
      do {
        this_ptr_00 = g_CDemonRendererPtr;
        pCVar5->broken_quads[0].base.surface_normal.A = 0;
        pCVar5->broken_quads[0].base.surface_normal.B = 0;
        iVar2 = iVar2 + 1;
        pCVar5->broken_quads[0].base.surface_normal.C = 0;
        pCVar5->broken_quads[0].base.surface_normal.D = 0;
        engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
                  (this_ptr_00,polygon_info);
        polygon_info = polygon_info + 3;
        pCVar5 = (CGlass *)((pCVar5->base).orient_matrix.m + 1);
      } while (iVar2 < this_ptr->broken_polygon_count);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
    return in_stack_00000028;
  }
  return 0;
}


// Assembly code:
// 004e9af0: PUSH ESI
//   Label: core_glass.cpp_CGlass_renderTransparent_FUN_004e9af0
// 004e9af1: PUSH EBP
// 004e9af2: SUB ESP,0x1c
// 004e9af5: MOV EBP,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 004e9af9: CMP dword ptr [EBP + 0x370],0x0
// 004e9b00: JNZ 0x004e9b14
//   XREF to: 004e9b14 (CONDITIONAL_JUMP)
// 004e9b02: CMP dword ptr [EBP + 0x17c],0x0
// 004e9b09: JZ 0x004e9b14
//   XREF to: 004e9b14 (CONDITIONAL_JUMP)
// 004e9b0b: CMP dword ptr [EBP + 0x180],0x0
// 004e9b12: JZ 0x004e9b1c
//   XREF to: 004e9b1c (CONDITIONAL_JUMP)
// 004e9b14: XOR EAX,EAX
//   Label: LAB_004e9b14
// 004e9b16: ADD ESP,0x1c
// 004e9b19: POP EBP
// 004e9b1a: POP ESI
// 004e9b1b: RET
// 004e9b1c: MOV ESI,dword ptr [0x006703ec]
//   Label: LAB_004e9b1c
//   XREF to: 006703ec (READ)
// 004e9b22: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 004e9b23: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 004e9b28: ADD ESP,0x4
// 004e9b2b: TEST EAX,EAX
// 004e9b2d: JNZ 0x004e9b14
//   XREF to: 004e9b14 (CONDITIONAL_JUMP)
// 004e9b2f: PUSH EDI
// 004e9b30: PUSH EBX
// 004e9b31: PUSH EBP
// 004e9b32: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 004e9b37: ADD ESP,0x4
// 004e9b3a: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x24] (DATA)
// 004e9b3e: PUSH EAX
// 004e9b3f: MOV EDX,dword ptr [EBP + 0x154]
// 004e9b45: PUSH EBP
// 004e9b46: CALL dword ptr [EDX + 0x14]
// 004e9b49: ADD ESP,0x8
// 004e9b4c: PUSH EAX
// 004e9b4d: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 004e9b52: ADD ESP,0x4
// 004e9b55: MOV dword ptr [ESP + 0x20],EAX
// 004e9b59: LEA EAX,[EBP + 0x164]
// 004e9b5f: PUSH EAX
// 004e9b60: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004e9b66: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004e9b67: XOR ESI,ESI
// 004e9b69: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004e9b6e: LEA EDX,[EBP + 0x38c]
// 004e9b74: ADD ESP,0x8
// 004e9b77: LEA EDI,[EBP + 0x4b8]
// 004e9b7d: MOV EAX,dword ptr [EBP + 0xb34]
// 004e9b83: MOV ECX,EDI
// 004e9b85: TEST EAX,EAX
// 004e9b87: JLE 0x004e9bc0
//   XREF to: 004e9bc0 (CONDITIONAL_JUMP)
// 004e9b89: MOV EBX,ECX
//   Label: LAB_004e9b89
// 004e9b8b: MOV EAX,EDX
// 004e9b8d: FLD float ptr [EAX]
// 004e9b8f: FMUL float ptr [0x0065eed0]
//   XREF to: 0065eed0 (READ)
// 004e9b95: FISTP dword ptr [EBX]
// 004e9b97: FLD float ptr [EAX + 0x4]
// 004e9b9a: FMUL float ptr [0x0065eed0]
//   XREF to: 0065eed0 (READ)
// 004e9ba0: FISTP dword ptr [EBX + 0x4]
// 004e9ba3: FLD float ptr [EAX + 0x8]
// 004e9ba6: FMUL float ptr [0x0065eed0]
//   XREF to: 0065eed0 (READ)
// 004e9bac: FISTP dword ptr [EBX + 0x8]
// 004e9baf: INC ESI
// 004e9bb0: ADD EDX,0xc
// 004e9bb3: MOV EBX,dword ptr [EBP + 0xb34]
// 004e9bb9: ADD ECX,0xc
// 004e9bbc: CMP ESI,EBX
// 004e9bbe: JL 0x004e9b89
//   XREF to: 004e9b89 (CONDITIONAL_JUMP)
// 004e9bc0: PUSH EDI
//   Label: LAB_004e9bc0
// 004e9bc1: MOV ESI,dword ptr [EBP + 0xb34]
// 004e9bc7: PUSH ESI
// 004e9bc8: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004e9bcd: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004e9bce: CALL core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
//   XREF to: 0056e7c0 (UNCONDITIONAL_CALL)
// 004e9bd3: MOV EAX,0xffff
// 004e9bd8: MOV EDX,dword ptr [0x02d051f4]
//   XREF to: 02d051f4 (READ)
// 004e9bde: ADD ESP,0xc
// 004e9be1: SUB EAX,EDX
// 004e9be3: MOV EDX,dword ptr [EBP + 0x17c]
// 004e9be9: IMUL EDX
// 004e9beb: SHRD EAX,EDX,0x10
// 004e9bef: PUSH EAX
// 004e9bf0: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004e9bf6: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004e9bf7: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 004e9bfc: ADD ESP,0x8
// 004e9bff: PUSH 0x0
// 004e9c01: PUSH 0x4
// 004e9c03: PUSH EDI
// 004e9c04: LEA EDI,[EBP + 0x6ac]
// 004e9c0a: PUSH EDI
// 004e9c0b: MOV EBX,dword ptr [EBP + 0xb38]
// 004e9c11: PUSH EBX
// 004e9c12: MOV ESI,dword ptr [EBP + 0xb34]
// 004e9c18: PUSH ESI
// 004e9c19: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004e9c1e: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004e9c1f: CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
//   XREF to: 0056eac0 (UNCONDITIONAL_CALL)
// 004e9c24: XOR ESI,ESI
// 004e9c26: MOV EDX,dword ptr [EBP + 0xb38]
// 004e9c2c: ADD ESP,0x1c
// 004e9c2f: TEST EDX,EDX
// 004e9c31: JLE 0x004e9c80
//   XREF to: 004e9c80 (CONDITIONAL_JUMP)
// 004e9c33: MOV EBX,EBP
// 004e9c35: MOV ECX,dword ptr [0x006703ec]
//   Label: LAB_004e9c35
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004e9c3b: MOV dword ptr [EBX + 0x6b4],0x0
// 004e9c45: PUSH EDI
// 004e9c46: MOV dword ptr [EBX + 0x6b8],0x0
// 004e9c50: INC ESI
// 004e9c51: MOV dword ptr [EBX + 0x6bc],0x0
// 004e9c5b: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004e9c5c: MOV dword ptr [EBX + 0x6c0],0x0
// 004e9c66: ADD EBX,0x48
// 004e9c69: CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
//   XREF to: 0048bdc0 (UNCONDITIONAL_CALL)
// 004e9c6e: ADD EDI,0x48
// 004e9c71: MOV EAX,dword ptr [EBP + 0xb38]
// 004e9c77: ADD ESP,0x8
// 004e9c7a: CMP ESI,EAX
// 004e9c7c: JL 0x004e9c35
//   XREF to: 004e9c35 (CONDITIONAL_JUMP)
// 004e9c7e: MOV EAX,EAX
// 004e9c80: PUSH EBP
//   Label: LAB_004e9c80
// 004e9c81: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 004e9c86: ADD ESP,0x4
// 004e9c89: MOV EAX,dword ptr [ESP + 0x20]
// 004e9c8d: POP EBX
// 004e9c8e: POP EDI
// 004e9c8f: ADD ESP,0x1c
// 004e9c92: POP EBP
// 004e9c93: POP ESI
// 004e9c94: RET
