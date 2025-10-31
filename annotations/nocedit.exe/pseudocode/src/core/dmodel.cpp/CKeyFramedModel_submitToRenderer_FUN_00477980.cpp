// Name: core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00477980
// Address: 00477980
// Address Range: [[00477980, 00477be6]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00477980(CKeyFramedModel * this_ptr, int frame_index, int render_flags, CKeyFramedModelInstance * instance)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850 (00477850) at 00477882 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0061f5bb = 250
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
//   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_submitToRenderer_FUN_00477980
          (CKeyFramedModel *this_ptr,int frame_index,int render_flags,
          CKeyFramedModelInstance *instance)

{
  SMRGLTextureExtended *texture;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *in_stack_00000014;
  int in_stack_00000018;
  int local_18;
  int *local_14;
  CKeyFramedModel *local_10;
  
  if (0 < this_ptr->poly_count) {
    if (this_ptr->disable_backface_culling == 0) {
      if ((0 < this_ptr->frame_count) ||
         (fVar1 = (this_ptr->bounds_max).x - (this_ptr->bounds_min).x,
         fVar2 = (this_ptr->bounds_max).y - (this_ptr->bounds_min).y,
         fVar3 = (this_ptr->bounds_max).z - (this_ptr->bounds_min).z,
         (float)DOUBLE_0061f5bb < SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2))) {
        engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
      }
    }
    else {
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
      engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,0);
    }
    iVar9 = -1;
    iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
    local_18 = 0;
    if (0 < this_ptr->part_count) {
      texture = this_ptr->texture_list;
      local_10 = this_ptr;
      local_14 = in_stack_00000014;
      iVar8 = 0;
      do {
        iVar5 = local_10->part_list[0].poly_count + iVar8;
        if ((in_stack_00000014 == (int *)0x0) || (*local_14 != 0)) {
          if ((this_ptr->texture_count < 2) || (iVar4 != 0)) {
            if (iVar4 == 0) {
              engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                        (g_CDemonRendererPtr,&texture->base);
            }
            core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
                      (g_CDemonSetPtr,
                       (SMRGLPrimitiveQuad *)(this_ptr->poly_vert_list + iVar8 * 0x12),
                       (int)texture - iVar8,(int)in_stack_00000014);
          }
          else {
            while (iVar8 < iVar5) {
              if (iVar9 != this_ptr->poly_texture_index_list[iVar8]) {
                engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                          (g_CDemonRendererPtr,
                           &texture[this_ptr->poly_texture_index_list[iVar8]].base);
                iVar9 = this_ptr->poly_texture_index_list[iVar8];
              }
              iVar6 = iVar8 * 4;
              iVar7 = iVar8;
              do {
                iVar6 = iVar6 + 4;
                iVar7 = iVar7 + 1;
                if (iVar5 * 4 <= iVar6) break;
              } while (iVar9 == *(int *)((int)this_ptr->poly_texture_index_list + iVar6));
              core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
                        (g_CDemonSetPtr,
                         (SMRGLPrimitiveQuad *)(this_ptr->poly_vert_list + iVar8 * 0x12),
                         iVar7 - iVar8,in_stack_00000018);
              iVar8 = iVar7;
            }
          }
        }
        local_10 = (CKeyFramedModel *)(local_10->model_filename + 8);
        local_14 = local_14 + 1;
        local_18 = local_18 + 1;
        iVar8 = iVar5;
      } while (local_18 < this_ptr->part_count);
    }
    engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
  }
  return;
}


// Assembly code:
// 00477980: PUSH ESI
//   Label: core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00477980
// 00477981: PUSH EDI
// 00477982: PUSH EBP
// 00477983: SUB ESP,0x28
// 00477986: MOV ESI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0047798a: CMP dword ptr [ESI + 0x110],0x1
// 00477991: JL 0x00477a79
//   XREF to: 00477a79 (CONDITIONAL_JUMP)
// 00477997: CMP dword ptr [ESI + 0x56a0],0x0
// 0047799e: JNZ 0x00477a80
//   XREF to: 00477a80 (CONDITIONAL_JUMP)
// 004779a4: CMP dword ptr [ESI + 0x100],0x0
// 004779ab: JLE 0x00477aa3
//   XREF to: 00477aa3 (CONDITIONAL_JUMP)
// 004779b1: PUSH 0x1
//   Label: LAB_004779b1
// 004779b3: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004779b9: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004779ba: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 004779bf: ADD ESP,0x8
//   Label: LAB_004779bf
// 004779c2: PUSH EBX
//   Label: LAB_004779c2
// 004779c3: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004779c9: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004779ca: MOV EDI,0xffffffff
// 004779cf: XOR EBP,EBP
// 004779d1: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 004779d6: ADD ESP,0x4
// 004779d9: MOV EBX,dword ptr [ESI + 0x5584]
// 004779df: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004779e3: MOV dword ptr [ESP + 0x14],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 004779e7: TEST EBX,EBX
// 004779e9: JLE 0x00477a56
//   XREF to: 00477a56 (CONDITIONAL_JUMP)
// 004779eb: LEA EAX,[ESI + 0x124]
// 004779f1: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004779f5: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x8] (READ)
// 004779f9: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 004779fd: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00477a01: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_00477a01
//   XREF to: Stack[-0x1c] (READ)
// 00477a05: MOV EAX,dword ptr [EAX + 0x558c]
// 00477a0b: ADD EAX,EBP
// 00477a0d: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00477a11: CMP dword ptr [ESP + 0x40],0x0
//   XREF to: Stack[0x8] (READ)
// 00477a16: JZ 0x00477af3
//   XREF to: 00477af3 (CONDITIONAL_JUMP)
// 00477a1c: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 00477a20: CMP dword ptr [EAX],0x0
// 00477a23: JNZ 0x00477af3
//   XREF to: 00477af3 (CONDITIONAL_JUMP)
// 00477a29: MOV EBP,dword ptr [ESP + 0x24]
//   Label: LAB_00477a29
//   XREF to: Stack[-0x14] (READ)
// 00477a2d: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 00477a31: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 00477a35: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 00477a39: MOV EBX,dword ptr [ESI + 0x5584]
// 00477a3f: ADD EAX,0x8
// 00477a42: ADD EDX,0x4
// 00477a45: INC ECX
// 00477a46: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00477a4a: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00477a4e: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 00477a52: CMP ECX,EBX
// 00477a54: JL 0x00477a01
//   XREF to: 00477a01 (CONDITIONAL_JUMP)
// 00477a56: PUSH 0x0
//   Label: LAB_00477a56
// 00477a58: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00477a5e: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00477a5f: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 00477a64: ADD ESP,0x8
// 00477a67: PUSH 0x1
// 00477a69: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00477a6f: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 00477a70: CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
// 00477a75: ADD ESP,0x8
// 00477a78: POP EBX
// 00477a79: ADD ESP,0x28
//   Label: LAB_00477a79
// 00477a7c: POP EBP
// 00477a7d: POP EDI
// 00477a7e: POP ESI
// 00477a7f: RET
// 00477a80: PUSH 0x0
//   Label: LAB_00477a80
// 00477a82: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00477a88: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 00477a89: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 00477a8e: ADD ESP,0x8
// 00477a91: PUSH 0x0
// 00477a93: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00477a98: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00477a99: CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
//   XREF to: 0048c9f0 (UNCONDITIONAL_CALL)
// 00477a9e: JMP 0x004779bf
//   XREF to: 004779bf (UNCONDITIONAL_JUMP)
// 00477aa3: LEA EDX,[ESI + 0x5678]
//   Label: LAB_00477aa3
// 00477aa9: LEA EAX,[ESI + 0x5684]
// 00477aaf: FLD float ptr [EAX]
// 00477ab1: FSUB float ptr [EDX]
// 00477ab3: FSTP float ptr [ESP]
//   XREF to: Stack[-0x34] (DATA)
// 00477ab6: FLD float ptr [EAX + 0x4]
// 00477ab9: FSUB float ptr [EDX + 0x4]
// 00477abc: FST float ptr [ESP + 0x4]
//   XREF to: Stack[-0x30] (WRITE)
// 00477ac0: FMUL float ptr [ESP + 0x4]
//   XREF to: Stack[-0x30] (READ)
// 00477ac4: FLD float ptr [ESP]
//   XREF to: Stack[-0x34] (DATA)
// 00477ac7: FMUL ST0
// 00477ac9: FLD float ptr [EAX + 0x8]
// 00477acc: FSUB float ptr [EDX + 0x8]
// 00477acf: FXCH
// 00477ad1: FADDP ST2,ST0
// 00477ad3: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x2c] (WRITE)
// 00477ad7: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x2c] (READ)
// 00477adb: FADDP
// 00477add: FSQRT
// 00477adf: FCOMP double ptr [0x0061f5bb]
//   XREF to: 0061f5bb (READ)
// 00477ae5: FNSTSW AX
// 00477ae7: SAHF
// 00477ae8: JA 0x004779b1
//   XREF to: 004779b1 (CONDITIONAL_JUMP)
// 00477aee: JMP 0x004779c2
//   XREF to: 004779c2 (UNCONDITIONAL_JUMP)
// 00477af3: CMP dword ptr [ESI + 0x120],0x1
//   Label: LAB_00477af3
// 00477afa: JLE 0x00477b03
//   XREF to: 00477b03 (CONDITIONAL_JUMP)
// 00477afc: CMP dword ptr [ESP + 0x10],0x0
//   XREF to: Stack[-0x28] (READ)
// 00477b01: JZ 0x00477b4a
//   XREF to: 00477b4a (CONDITIONAL_JUMP)
// 00477b03: CMP dword ptr [ESP + 0x10],0x0
//   Label: LAB_00477b03
//   XREF to: Stack[-0x28] (READ)
// 00477b08: JNZ 0x00477b1e
//   XREF to: 00477b1e (CONDITIONAL_JUMP)
// 00477b0a: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 00477b0e: PUSH ECX
// 00477b0f: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00477b15: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00477b16: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 00477b1b: ADD ESP,0x8
// 00477b1e: MOV EAX,dword ptr [ESP + 0x44]
//   Label: LAB_00477b1e
//   XREF to: Stack[0xc] (READ)
// 00477b22: PUSH EAX
// 00477b23: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 00477b27: SUB EAX,EBP
// 00477b29: IMUL EBP,EBP,0x48
// 00477b2c: PUSH EAX
// 00477b2d: MOV EAX,dword ptr [ESI + 0x114]
// 00477b33: ADD EAX,EBP
// 00477b35: PUSH EAX
// 00477b36: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00477b3c: PUSH EDX
//   XREF to: 03114278 (DATA)
// 00477b3d: CALL core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
//   XREF to: 00570770 (UNCONDITIONAL_CALL)
// 00477b42: ADD ESP,0x10
// 00477b45: JMP 0x00477a29
//   XREF to: 00477a29 (UNCONDITIONAL_JUMP)
// 00477b4a: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_00477b4a
//   XREF to: Stack[-0x14] (READ)
// 00477b4e: MOV EBX,EBP
// 00477b50: CMP EBP,EAX
// 00477b52: JGE 0x00477a29
//   XREF to: 00477a29 (CONDITIONAL_JUMP)
// 00477b58: LEA EBP,[EBX*0x4 + 0x0]
//   Label: LAB_00477b58
// 00477b5f: MOV EAX,dword ptr [ESI + 0x118]
// 00477b65: ADD EAX,EBP
// 00477b67: MOV EDX,dword ptr [EAX]
// 00477b69: CMP EDI,EDX
// 00477b6b: JNZ 0x00477bc6
//   XREF to: 00477bc6 (CONDITIONAL_JUMP)
// 00477b6d: MOV ECX,dword ptr [ESP + 0x24]
//   Label: LAB_00477b6d
//   XREF to: Stack[-0x14] (READ)
// 00477b71: MOV dword ptr [ESP + 0x28],EBX
//   XREF to: Stack[-0x10] (WRITE)
// 00477b75: LEA EAX,[EBX*0x4 + 0x0]
// 00477b7c: SHL ECX,0x2
// 00477b7f: ADD EAX,0x4
//   Label: LAB_00477b7f
// 00477b82: INC EBX
// 00477b83: CMP EAX,ECX
// 00477b85: JGE 0x00477b92
//   XREF to: 00477b92 (CONDITIONAL_JUMP)
// 00477b87: MOV EDX,dword ptr [ESI + 0x118]
// 00477b8d: CMP EDI,dword ptr [EDX + EAX*0x1]
// 00477b90: JZ 0x00477b7f
//   XREF to: 00477b7f (CONDITIONAL_JUMP)
// 00477b92: MOV EBP,dword ptr [ESP + 0x28]
//   Label: LAB_00477b92
//   XREF to: Stack[-0x10] (READ)
// 00477b96: MOV EAX,EBX
// 00477b98: SUB EAX,EBP
// 00477b9a: IMUL EDX,EBP,0x48
// 00477b9d: MOV ECX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0xc] (READ)
// 00477ba1: PUSH ECX
// 00477ba2: PUSH EAX
// 00477ba3: MOV EAX,dword ptr [ESI + 0x114]
// 00477ba9: ADD EAX,EDX
// 00477bab: PUSH EAX
// 00477bac: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00477bb2: PUSH EDX
//   XREF to: 03114278 (DATA)
// 00477bb3: CALL core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
//   XREF to: 00570770 (UNCONDITIONAL_CALL)
// 00477bb8: ADD ESP,0x10
// 00477bbb: CMP EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 00477bbf: JL 0x00477b58
//   XREF to: 00477b58 (CONDITIONAL_JUMP)
// 00477bc1: JMP 0x00477a29
//   XREF to: 00477a29 (UNCONDITIONAL_JUMP)
// 00477bc6: IMUL EAX,EDX,0x48
//   Label: LAB_00477bc6
// 00477bc9: ADD EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 00477bcd: PUSH EAX
// 00477bce: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00477bd3: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00477bd4: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 00477bd9: MOV EAX,dword ptr [ESI + 0x118]
// 00477bdf: ADD ESP,0x8
// 00477be2: MOV EDI,dword ptr [EAX + EBP*0x1]
// 00477be5: JMP 0x00477b6d
//   XREF to: 00477b6d (UNCONDITIONAL_JUMP)
