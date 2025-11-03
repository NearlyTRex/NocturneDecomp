// Name: core_glass.cpp_CGlass_renderOpaque_FUN_004e9930
// Address: 004e9930
// Address Range: [[004e9930, 004e9ae4]]
// Convention: __cdecl
// Signature: int core_glass.cpp_CGlass_renderOpaque_FUN_004e9930(CGlass * this_ptr)
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

int __cdecl core_glass_cpp_CGlass_renderOpaque_FUN_004e9930(CGlass *this_ptr)

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
  int iStack00000010;
  int in_stack_00000024;
  float fStack_20;
  
  if ((((this_ptr->background_flag == 0) && ((this_ptr->base).is_transparent == 0)) &&
      (64999 < this_ptr->opacity)) &&
     ((this_ptr->shattered == 0 &&
      (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
      iVar2 == 0)))) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
    this_ptr_01 = (*((this_ptr->base).vtable)->getBoundingBox)
                            (&this_ptr->base,(CBoundingBox3D *)&fStack_20);
    iStack00000010 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_01);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,&this_ptr->glass_texture);
    pCVar4 = this_ptr->broken_vertices;
    input_vertices = this_ptr->field12_0x4b8;
    iVar2 = 0;
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
    iVar2 = 0;
    fStack_20 = 7.218582e-39;
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,this_ptr->broken_vertex_count,this_ptr->broken_polygon_count,
               (SInputFace *)polygon_info,(int)input_vertices,4,0);
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
    return in_stack_00000024;
  }
  return 0;
}


// Assembly code:
// 004e9930: PUSH ESI
//   Label: core_glass.cpp_CGlass_renderOpaque_FUN_004e9930
// 004e9931: PUSH EDI
// 004e9932: PUSH EBP
// 004e9933: SUB ESP,0x1c
// 004e9936: MOV EBP,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 004e993a: CMP dword ptr [EBP + 0x370],0x0
// 004e9941: JNZ 0x004e9962
//   XREF to: 004e9962 (CONDITIONAL_JUMP)
// 004e9943: CMP dword ptr [EBP + 0xfc],0x0
// 004e994a: JNZ 0x004e9962
//   XREF to: 004e9962 (CONDITIONAL_JUMP)
// 004e994c: CMP dword ptr [EBP + 0x17c],0xfde8
// 004e9956: JL 0x004e9962
//   XREF to: 004e9962 (CONDITIONAL_JUMP)
// 004e9958: MOV ESI,dword ptr [EBP + 0x180]
// 004e995e: TEST ESI,ESI
// 004e9960: JZ 0x004e996b
//   XREF to: 004e996b (CONDITIONAL_JUMP)
// 004e9962: XOR EAX,EAX
//   Label: LAB_004e9962
// 004e9964: ADD ESP,0x1c
// 004e9967: POP EBP
// 004e9968: POP EDI
// 004e9969: POP ESI
// 004e996a: RET
// 004e996b: MOV EDI,dword ptr [0x006703ec]
//   Label: LAB_004e996b
//   XREF to: 006703ec (READ)
// 004e9971: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004e9972: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 004e9977: ADD ESP,0x4
// 004e997a: TEST EAX,EAX
// 004e997c: JNZ 0x004e9962
//   XREF to: 004e9962 (CONDITIONAL_JUMP)
// 004e997e: PUSH EBX
// 004e997f: PUSH EBP
// 004e9980: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 004e9985: ADD ESP,0x4
// 004e9988: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x28] (DATA)
// 004e998c: PUSH EAX
// 004e998d: MOV EDX,dword ptr [EBP + 0x154]
// 004e9993: PUSH EBP
// 004e9994: CALL dword ptr [EDX + 0x14]
// 004e9997: ADD ESP,0x8
// 004e999a: PUSH EAX
// 004e999b: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 004e99a0: ADD ESP,0x4
// 004e99a3: MOV dword ptr [ESP + 0x1c],EAX
// 004e99a7: LEA EAX,[EBP + 0x164]
// 004e99ad: PUSH EAX
// 004e99ae: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004e99b3: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004e99b4: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004e99b9: LEA EDX,[EBP + 0x38c]
// 004e99bf: ADD ESP,0x8
// 004e99c2: LEA EDI,[EBP + 0x4b8]
// 004e99c8: MOV EBX,dword ptr [EBP + 0xb34]
// 004e99ce: MOV ECX,EDI
// 004e99d0: TEST EBX,EBX
// 004e99d2: JLE 0x004e9a10
//   XREF to: 004e9a10 (CONDITIONAL_JUMP)
// 004e99d4: MOV EBX,ECX
//   Label: LAB_004e99d4
// 004e99d6: MOV EAX,EDX
// 004e99d8: FLD float ptr [EAX]
// 004e99da: FMUL float ptr [0x0065eed0]
//   XREF to: 0065eed0 (READ)
// 004e99e0: FISTP dword ptr [EBX]
// 004e99e2: FLD float ptr [EAX + 0x4]
// 004e99e5: FMUL float ptr [0x0065eed0]
//   XREF to: 0065eed0 (READ)
// 004e99eb: FISTP dword ptr [EBX + 0x4]
// 004e99ee: FLD float ptr [EAX + 0x8]
// 004e99f1: FMUL float ptr [0x0065eed0]
//   XREF to: 0065eed0 (READ)
// 004e99f7: FISTP dword ptr [EBX + 0x8]
// 004e99fa: INC ESI
// 004e99fb: ADD EDX,0xc
// 004e99fe: MOV EAX,dword ptr [EBP + 0xb34]
// 004e9a04: ADD ECX,0xc
// 004e9a07: CMP ESI,EAX
// 004e9a09: JL 0x004e99d4
//   XREF to: 004e99d4 (CONDITIONAL_JUMP)
// 004e9a0b: LEA EAX,[EAX]
// 004e9a0e: MOV ECX,ECX
// 004e9a10: PUSH EDI
//   Label: LAB_004e9a10
// 004e9a11: MOV EDX,dword ptr [EBP + 0xb34]
// 004e9a17: PUSH EDX
// 004e9a18: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004e9a1e: PUSH ECX
//   XREF to: 03114278 (DATA)
// 004e9a1f: CALL core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
//   XREF to: 0056e7c0 (UNCONDITIONAL_CALL)
// 004e9a24: MOV EAX,0xffff
// 004e9a29: MOV EBX,dword ptr [0x02d051f4]
//   XREF to: 02d051f4 (READ)
// 004e9a2f: ADD ESP,0xc
// 004e9a32: MOV EDX,dword ptr [EBP + 0x17c]
// 004e9a38: SUB EAX,EBX
// 004e9a3a: IMUL EDX
// 004e9a3c: SHRD EAX,EDX,0x10
// 004e9a40: PUSH EAX
// 004e9a41: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004e9a47: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 004e9a48: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 004e9a4d: ADD ESP,0x8
// 004e9a50: PUSH 0x0
// 004e9a52: PUSH 0x4
// 004e9a54: PUSH EDI
// 004e9a55: LEA EDI,[EBP + 0x6ac]
// 004e9a5b: PUSH EDI
// 004e9a5c: MOV EAX,dword ptr [EBP + 0xb38]
// 004e9a62: PUSH EAX
// 004e9a63: MOV EDX,dword ptr [EBP + 0xb34]
// 004e9a69: PUSH EDX
// 004e9a6a: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004e9a70: PUSH ECX
//   XREF to: 03114278 (DATA)
// 004e9a71: XOR ESI,ESI
// 004e9a73: CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
//   XREF to: 0056eac0 (UNCONDITIONAL_CALL)
// 004e9a78: MOV EBX,dword ptr [EBP + 0xb38]
// 004e9a7e: ADD ESP,0x1c
// 004e9a81: TEST EBX,EBX
// 004e9a83: JLE 0x004e9ad0
//   XREF to: 004e9ad0 (CONDITIONAL_JUMP)
// 004e9a85: MOV EBX,EBP
// 004e9a87: MOV EAX,[0x006703ec]
//   Label: LAB_004e9a87
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004e9a8c: MOV dword ptr [EBX + 0x6b4],0x0
// 004e9a96: PUSH EDI
// 004e9a97: MOV dword ptr [EBX + 0x6b8],0x0
// 004e9aa1: INC ESI
// 004e9aa2: MOV dword ptr [EBX + 0x6bc],0x0
// 004e9aac: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004e9aad: MOV dword ptr [EBX + 0x6c0],0x0
// 004e9ab7: ADD EBX,0x48
// 004e9aba: CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
//   XREF to: 0048bdc0 (UNCONDITIONAL_CALL)
// 004e9abf: ADD EDI,0x48
// 004e9ac2: MOV EDX,dword ptr [EBP + 0xb38]
// 004e9ac8: ADD ESP,0x8
// 004e9acb: CMP ESI,EDX
// 004e9acd: JL 0x004e9a87
//   XREF to: 004e9a87 (CONDITIONAL_JUMP)
// 004e9acf: NOP
// 004e9ad0: PUSH EBP
//   Label: LAB_004e9ad0
// 004e9ad1: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 004e9ad6: ADD ESP,0x4
// 004e9ad9: MOV EAX,dword ptr [ESP + 0x1c]
// 004e9add: POP EBX
// 004e9ade: ADD ESP,0x1c
// 004e9ae1: POP EBP
// 004e9ae2: POP EDI
// 004e9ae3: POP ESI
// 004e9ae4: RET
