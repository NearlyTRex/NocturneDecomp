// Name: core_glass.cpp_CGlass_renderBackground_FUN_004e9e90
// Address: 004e9e90
// Address Range: [[004e9e90, 004ea027]]
// Convention: __cdecl
// Signature: void core_glass.cpp_CGlass_renderBackground_FUN_004e9e90(CGlass * this_ptr, int layer_flag)
// Globals:
//   float FLOAT_0065eed0 = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_glass.cpp_CGlass_renderBrokenGlass_FUN_004e9ca0
//   core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_renderBackground_FUN_004e9e90(CGlass *this_ptr,int layer_flag)

{
  CDemonRenderer *this_ptr_00;
  CBoundingBox3D *this_ptr_01;
  CVector3f *pCVar1;
  char *pcVar2;
  CGlass *pCVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  SMRGLHeaderPrimitive *polygon_info;
  float fStack_18;
  SMRGLTextureBasic *texture;
  
  if (this_ptr->background_flag == 0) {
    if (((layer_flag != 0) && (this_ptr->shattered != 0)) && (this_ptr->mirror_flag != 0)) {
      core_glass_cpp_CGlass_renderBrokenGlass_FUN_004e9ca0(this_ptr);
      return;
    }
  }
  else if ((layer_flag != 0) || (this_ptr->field18_0xb3c != 0)) {
    this_ptr->field18_0xb3c = 0;
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
    this_ptr_01 = (*((this_ptr->base).vtable)->getBoundingBox)
                            (&this_ptr->base,(CBoundingBox3D *)&stack0xffffffe4);
    core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_01);
    if (this_ptr->shattered == 0) {
      texture = &this_ptr->glass_texture;
    }
    else {
      texture = &this_ptr->broken_texture;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,texture);
    pCVar1 = this_ptr->broken_vertices;
    iVar4 = 0;
    pcVar2 = this_ptr->field12_0x4b8;
    if (0 < this_ptr->broken_vertex_count) {
      do {
        *(int *)pcVar2 = (int)ROUND(pCVar1->x * FLOAT_0065eed0);
        *(int *)(pcVar2 + 4) = (int)ROUND(pCVar1->y * FLOAT_0065eed0);
        *(int *)(pcVar2 + 8) = (int)ROUND(pCVar1->z * FLOAT_0065eed0);
        iVar4 = iVar4 + 1;
        pCVar1 = pCVar1 + 1;
        pcVar2 = pcVar2 + 0xc;
      } while (iVar4 < this_ptr->broken_vertex_count);
    }
    iVar4 = 0;
    fStack_18 = 7.220373e-39;
    core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0
              (g_CDemonSetPtr,this_ptr->broken_vertex_count,(int *)this_ptr->field12_0x4b8);
    if (0 < this_ptr->broken_polygon_count) {
      polygon_info = &this_ptr->broken_quads[0].base;
      pCVar3 = this_ptr;
      do {
        pCVar3->broken_quads[0].base.surface_normal.A = 0;
        this_ptr_00 = g_CDemonRendererPtr;
        pCVar3->broken_quads[0].base.surface_normal.B = 0;
        iVar4 = iVar4 + 1;
        pCVar3->broken_quads[0].base.surface_normal.C = 0;
        pCVar3->broken_quads[0].base.surface_normal.D = 0;
        pCVar3 = (CGlass *)((pCVar3->base).orient_matrix.m + 1);
        fStack_18 = 7.220487e-39;
        engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
                  (this_ptr_00,polygon_info,0xc1);
        polygon_info = polygon_info + 3;
      } while (iVar4 < this_ptr->broken_polygon_count);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  }
  return;
}


// Assembly code:
// 004e9e90: PUSH EDI
//   Label: core_glass.cpp_CGlass_renderBackground_FUN_004e9e90
// 004e9e91: PUSH EBP
// 004e9e92: SUB ESP,0x18
// 004e9e95: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 004e9e99: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 004e9e9d: CMP dword ptr [EBP + 0x370],0x0
// 004e9ea4: JZ 0x004ea003
//   XREF to: 004ea003 (CONDITIONAL_JUMP)
// 004e9eaa: TEST EAX,EAX
// 004e9eac: JNZ 0x004e9ebb
//   XREF to: 004e9ebb (CONDITIONAL_JUMP)
// 004e9eae: CMP dword ptr [EBP + 0xb3c],0x0
// 004e9eb5: JZ 0x004e9feb
//   XREF to: 004e9feb (CONDITIONAL_JUMP)
// 004e9ebb: PUSH EBP
//   Label: LAB_004e9ebb
// 004e9ebc: MOV dword ptr [EBP + 0xb3c],0x0
// 004e9ec6: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 004e9ecb: ADD ESP,0x4
// 004e9ece: MOV EAX,ESP
// 004e9ed0: PUSH EAX
// 004e9ed1: MOV EDX,dword ptr [EBP + 0x154]
// 004e9ed7: PUSH EBP
// 004e9ed8: CALL dword ptr [EDX + 0x14]
// 004e9edb: ADD ESP,0x8
// 004e9ede: PUSH EAX
// 004e9edf: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 004e9ee4: MOV EDI,dword ptr [EBP + 0x180]
// 004e9eea: ADD ESP,0x4
// 004e9eed: TEST EDI,EDI
// 004e9eef: JZ 0x004e9ff1
//   XREF to: 004e9ff1 (CONDITIONAL_JUMP)
// 004e9ef5: LEA EAX,[EBP + 0x374]
// 004e9efb: PUSH EAX
// 004e9efc: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004e9f02: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004e9f03: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   Label: LAB_004e9f03
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004e9f08: ADD ESP,0x8
// 004e9f0b: PUSH ESI
// 004e9f0c: PUSH EBX
// 004e9f0d: LEA ECX,[EBP + 0x38c]
// 004e9f13: MOV EBX,dword ptr [EBP + 0xb34]
// 004e9f19: LEA EDI,[EBP + 0x4b8]
// 004e9f1f: XOR ESI,ESI
// 004e9f21: MOV EDX,EDI
// 004e9f23: TEST EBX,EBX
// 004e9f25: JLE 0x004e9f60
//   XREF to: 004e9f60 (CONDITIONAL_JUMP)
// 004e9f27: MOV EBX,EDX
//   Label: LAB_004e9f27
// 004e9f29: MOV EAX,ECX
// 004e9f2b: FLD float ptr [EAX]
// 004e9f2d: FMUL float ptr [0x0065eed0]
//   XREF to: 0065eed0 (READ)
// 004e9f33: FISTP dword ptr [EBX]
// 004e9f35: FLD float ptr [EAX + 0x4]
// 004e9f38: FMUL float ptr [0x0065eed0]
//   XREF to: 0065eed0 (READ)
// 004e9f3e: FISTP dword ptr [EBX + 0x4]
// 004e9f41: FLD float ptr [EAX + 0x8]
// 004e9f44: FMUL float ptr [0x0065eed0]
//   XREF to: 0065eed0 (READ)
// 004e9f4a: FISTP dword ptr [EBX + 0x8]
// 004e9f4d: INC ESI
// 004e9f4e: ADD ECX,0xc
// 004e9f51: MOV EAX,dword ptr [EBP + 0xb34]
// 004e9f57: ADD EDX,0xc
// 004e9f5a: CMP ESI,EAX
// 004e9f5c: JL 0x004e9f27
//   XREF to: 004e9f27 (CONDITIONAL_JUMP)
// 004e9f5e: MOV EAX,EAX
// 004e9f60: PUSH EDI
//   Label: LAB_004e9f60
// 004e9f61: MOV EDX,dword ptr [EBP + 0xb34]
// 004e9f67: PUSH EDX
// 004e9f68: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004e9f6e: PUSH ECX
//   XREF to: 03114278 (DATA)
// 004e9f6f: XOR EDI,EDI
// 004e9f71: CALL core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
//   XREF to: 0056e7c0 (UNCONDITIONAL_CALL)
// 004e9f76: MOV EBX,dword ptr [EBP + 0xb38]
// 004e9f7c: ADD ESP,0xc
// 004e9f7f: TEST EBX,EBX
// 004e9f81: JLE 0x004e9fe0
//   XREF to: 004e9fe0 (CONDITIONAL_JUMP)
// 004e9f83: LEA ESI,[EBP + 0x6ac]
// 004e9f89: MOV EBX,EBP
// 004e9f8b: PUSH 0xc1
//   Label: LAB_004e9f8b
// 004e9f90: MOV dword ptr [EBX + 0x6b4],0x0
// 004e9f9a: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004e9f9f: MOV dword ptr [EBX + 0x6b8],0x0
// 004e9fa9: PUSH ESI
// 004e9faa: INC EDI
// 004e9fab: MOV dword ptr [EBX + 0x6bc],0x0
// 004e9fb5: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004e9fb6: MOV dword ptr [EBX + 0x6c0],0x0
// 004e9fc0: ADD EBX,0x48
// 004e9fc3: CALL engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
//   XREF to: 0048aeb0 (UNCONDITIONAL_CALL)
// 004e9fc8: ADD ESI,0x48
// 004e9fcb: MOV EDX,dword ptr [EBP + 0xb38]
// 004e9fd1: ADD ESP,0xc
// 004e9fd4: CMP EDI,EDX
// 004e9fd6: JL 0x004e9f8b
//   XREF to: 004e9f8b (CONDITIONAL_JUMP)
// 004e9fd8: LEA EAX,[EAX]
// 004e9fde: MOV EDX,EDX
// 004e9fe0: PUSH EBP
//   Label: LAB_004e9fe0
// 004e9fe1: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 004e9fe6: ADD ESP,0x4
// 004e9fe9: POP EBX
// 004e9fea: POP ESI
// 004e9feb: ADD ESP,0x18
//   Label: LAB_004e9feb
// 004e9fee: POP EBP
// 004e9fef: POP EDI
// 004e9ff0: RET
// 004e9ff1: LEA EAX,[EBP + 0x164]
//   Label: LAB_004e9ff1
// 004e9ff7: PUSH EAX
// 004e9ff8: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004e9ffd: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004e9ffe: JMP 0x004e9f03
//   XREF to: 004e9f03 (UNCONDITIONAL_JUMP)
// 004ea003: TEST EAX,EAX
//   Label: LAB_004ea003
// 004ea005: JZ 0x004e9feb
//   XREF to: 004e9feb (CONDITIONAL_JUMP)
// 004ea007: CMP dword ptr [EBP + 0x180],0x0
// 004ea00e: JZ 0x004e9feb
//   XREF to: 004e9feb (CONDITIONAL_JUMP)
// 004ea010: CMP dword ptr [EBP + 0x1e8],0x0
// 004ea017: JZ 0x004e9feb
//   XREF to: 004e9feb (CONDITIONAL_JUMP)
// 004ea019: PUSH EBP
// 004ea01a: CALL core_glass.cpp_CGlass_renderBrokenGlass_FUN_004e9ca0
//   XREF to: 004e9ca0 (UNCONDITIONAL_CALL)
// 004ea01f: ADD ESP,0x4
// 004ea022: ADD ESP,0x18
// 004ea025: POP EBP
// 004ea026: POP EDI
// 004ea027: RET
