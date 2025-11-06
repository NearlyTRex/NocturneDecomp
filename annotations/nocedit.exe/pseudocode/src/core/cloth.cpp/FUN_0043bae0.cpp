// Name: core_cloth.cpp_FUN_0043bae0
// Address: 0043bae0
// Address Range: [[0043bae0, 0043bf33]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043bae0()
// Cross-references:
//   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 (0043c880) at 0043caf9 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_MultipleCallSaveJoinedLight_FUN_0043c320 (0043c320) at 0043c376 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6140 (004d6140) at 004d6185 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_FUN_005205f0 (005205f0) at 00520708 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_005208b0 (005208b0) at 00520918 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_FUN_005d9bc0 (005d9bc0) at 005d9d0a [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_renderOpaque_FUN_005e6da0 (005e6da0) at 005e6e2e [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0061855a
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 DAT_00827500
//   undefined4 DAT_00827504
//   undefined4 DAT_00827518
//   undefined4 DAT_00827520
//   undefined4 DAT_00827524
//   undefined4 DAT_0082752c
//   undefined4 DAT_00827548
//   undefined4 DAT_0082754c
//   undefined4 DAT_00827590
//   CDemonRenderer g_CDemonRendererInstance
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
//   core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
//   core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_cloth_cpp_FUN_0043bae0(void)

{
  int iVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  SMRGLPrimitiveQuad *pSVar4;
  undefined *puVar5;
  undefined4 extraout_EDX;
  int iVar6;
  undefined4 *puVar7;
  byte bVar8;
  float10 fVar9;
  int unaff_retaddr;
  int in_stack_00000004;
  int in_stack_00000008;
  int iStack0000000c;
  undefined *puStack00000010;
  
  bVar8 = 0;
  core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0
            (g_CDemonSetPtr,*(int *)(in_stack_00000004 + 0x104),*(int **)(in_stack_00000004 + 0x10c)
            );
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  fVar9 = (float10)*(float *)(in_stack_00000004 + 0x3ce88) * (float10)_DAT_0061855a;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,iVar3));
  iVar3 = (int)ROUND(fVar9);
  if (iVar3 < 1000) {
    return;
  }
  if (iVar3 < 63000) {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,iVar3);
  }
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800
            ((SMRGLTextureBasic *)(in_stack_00000004 + 0x124));
  if (*(int *)(in_stack_00000004 + 0x3ce84) == 0) {
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,*(int *)(in_stack_00000004 + 0x104),
               *(int *)(in_stack_00000004 + 0x110) / 2,*(SInputFace **)(in_stack_00000004 + 0x114),
               *(int *)(in_stack_00000004 + 0x10c),4,0);
    if ((in_stack_00000008 != 0) &&
       (iVar6 = 0, iVar3 = in_stack_00000004, 0 < *(int *)(in_stack_00000004 + 0x3f028))) {
      do {
        pCVar2 = g_CDemonRendererPtr;
        iVar1 = *(int *)(iVar3 + 0x3f02c);
        g_CDemonRendererPtr->vertex_buffer_ptr[iVar1].light = *(float *)(iVar3 + 0x3f98c);
        pCVar2->vertex_buffer_ptr[iVar1].color = *(int *)(iVar3 + 0x3fb1c);
        pCVar2->vertex_buffer_ptr[iVar1].fog = *(float *)(iVar3 + 0x3fcac);
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar6 < *(int *)(in_stack_00000004 + 0x3f028));
    }
    if (unaff_retaddr < 63000) {
      iVar3 = *(int *)(in_stack_00000004 + 0x110);
      iVar6 = 0x267;
      pSVar4 = *(SMRGLPrimitiveQuad **)(in_stack_00000004 + 0x114);
    }
    else {
      iVar3 = *(int *)(in_stack_00000004 + 0x110);
      iVar6 = -1;
      pSVar4 = *(SMRGLPrimitiveQuad **)(in_stack_00000004 + 0x114);
    }
    core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770(g_CDemonSetPtr,pSVar4,iVar3 / 2,iVar6);
    iVar3 = *(int *)(in_stack_00000004 + 0x110) / 2;
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,*(int *)(in_stack_00000004 + 0x104),iVar3,
               (SInputFace *)(*(int *)(in_stack_00000004 + 0x114) + iVar3 * 0x48),
               *(int *)(in_stack_00000004 + 0x10c),4,0);
    if (62999 < in_stack_00000008) {
      in_stack_00000008 = *(int *)(in_stack_00000004 + 0x110) / 2;
      iVar3 = -1;
      pSVar4 = (SMRGLPrimitiveQuad *)
               (in_stack_00000008 * 0x48 + *(int *)(in_stack_00000004 + 0x114));
      goto LAB_0043bcda;
    }
    in_stack_00000008 = *(int *)(in_stack_00000004 + 0x110) / 2;
    pSVar4 = (SMRGLPrimitiveQuad *)(*(int *)(in_stack_00000004 + 0x114) + in_stack_00000008 * 0x48);
  }
  else {
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,*(int *)(in_stack_00000004 + 0x104),
               *(int *)(in_stack_00000004 + 0x110),*(SInputFace **)(in_stack_00000004 + 0x114),
               *(int *)(in_stack_00000004 + 0x10c),4,0);
    if ((in_stack_00000008 != 0) &&
       (iVar6 = 0, iVar3 = in_stack_00000004, 0 < *(int *)(in_stack_00000004 + 0x3f028))) {
      do {
        pCVar2 = g_CDemonRendererPtr;
        iVar1 = *(int *)(iVar3 + 0x3f02c);
        g_CDemonRendererPtr->vertex_buffer_ptr[iVar1].light = *(float *)(iVar3 + 0x3f98c);
        pCVar2->vertex_buffer_ptr[iVar1].color = *(int *)(iVar3 + 0x3fb1c);
        pCVar2->vertex_buffer_ptr[iVar1].fog = *(float *)(iVar3 + 0x3fcac);
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar6 < *(int *)(in_stack_00000004 + 0x3f028));
    }
    if (unaff_retaddr < 63000) {
      iVar6 = 0x267;
      iVar3 = *(int *)(in_stack_00000004 + 0x110);
      pSVar4 = *(SMRGLPrimitiveQuad **)(in_stack_00000004 + 0x114);
    }
    else {
      iVar6 = -1;
      iVar3 = *(int *)(in_stack_00000004 + 0x110);
      pSVar4 = *(SMRGLPrimitiveQuad **)(in_stack_00000004 + 0x114);
    }
    core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770(g_CDemonSetPtr,pSVar4,iVar3,iVar6);
    in_stack_00000008 = *(int *)(in_stack_00000004 + 0x110);
    if (1000 < in_stack_00000008) {
      in_stack_00000008 = 1000;
    }
    iStack0000000c = 0;
    if (0 < in_stack_00000008) {
      puStack00000010 = &DAT_00827500;
      do {
        iVar6 = *(int *)(in_stack_00000004 + 0x114) + iStack0000000c * 0x48;
        *(undefined4 *)(puStack00000010 + 4) = *(undefined4 *)(iVar6 + 4);
        iVar3 = 0;
        puVar5 = puStack00000010;
        if (0 < *(int *)(iVar6 + 4)) {
          do {
            iVar1 = iVar6 + ((*(int *)(iVar6 + 4) - iVar3) + -1) * 0xc;
            puVar7 = (undefined4 *)(iVar1 + 0x1c + (uint)bVar8 * -8);
            *(undefined4 *)(puVar5 + 0x18) = *(undefined4 *)(iVar1 + 0x18);
            *(undefined4 *)(puVar5 + (uint)bVar8 * -8 + 0x1c) = *puVar7;
            *(undefined4 *)((int)(puVar5 + (uint)bVar8 * -8 + 0x1c) + ((uint)bVar8 * -2 + 1) * 4) =
                 puVar7[(uint)bVar8 * -2 + 1];
            iVar3 = iVar3 + 1;
            puVar5 = puVar5 + 0xc;
          } while (iVar3 < *(int *)(iVar6 + 4));
        }
        puStack00000010 = puStack00000010 + 0x48;
        iStack0000000c = iStack0000000c + 1;
      } while (iStack0000000c < in_stack_00000008);
    }
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,*(int *)(in_stack_00000004 + 0x104),in_stack_00000008,
               (SInputFace *)&DAT_00827500,*(int *)(in_stack_00000004 + 0x10c),4,0);
    if (62999 < in_stack_00000008) {
      iVar3 = -1;
      pSVar4 = (SMRGLPrimitiveQuad *)&DAT_00827500;
      goto LAB_0043bcda;
    }
    pSVar4 = (SMRGLPrimitiveQuad *)&DAT_00827500;
  }
  iVar3 = 0x267;
LAB_0043bcda:
  core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
            (g_CDemonSetPtr,pSVar4,in_stack_00000008,iVar3);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
  return;
}


// Assembly code:
// 0043bae0: PUSH EBX
//   Label: core_cloth.cpp_FUN_0043bae0
// 0043bae1: PUSH ESI
// 0043bae2: PUSH EDI
// 0043bae3: PUSH EBP
// 0043bae4: SUB ESP,0x14
// 0043bae7: MOV EBP,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0043baeb: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 0043baef: MOV EDX,dword ptr [EBP + 0x10c]
// 0043baf5: PUSH EDX
// 0043baf6: MOV ECX,dword ptr [EBP + 0x104]
// 0043bafc: PUSH ECX
// 0043bafd: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0043bb03: PUSH ESI
//   XREF to: 03114278 (DATA)
// 0043bb04: CALL core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
//   XREF to: 0056e7c0 (UNCONDITIONAL_CALL)
// 0043bb09: ADD ESP,0xc
// 0043bb0c: PUSH 0x1
// 0043bb0e: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0043bb14: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 0043bb15: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 0043bb1a: ADD ESP,0x8
// 0043bb1d: PUSH 0xffff
// 0043bb22: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0043bb27: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0043bb28: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 0043bb2d: ADD ESP,0x8
// 0043bb30: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0043bb36: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0043bb37: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 0043bb3c: FLD float ptr [EBP + 0x3ce88]
// 0043bb42: FMUL double ptr [0x0061855a]
//   XREF to: 0061855a (READ)
// 0043bb48: ADD ESP,0x4
// 0043bb4b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0043bb50: FISTP dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (WRITE)
// 0043bb54: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 0043bb58: CMP ECX,0x3e8
// 0043bb5e: JL 0x0043bd04
//   XREF to: 0043bd04 (CONDITIONAL_JUMP)
// 0043bb64: CMP ECX,0xf618
// 0043bb6a: JL 0x0043bd0c
//   XREF to: 0043bd0c (CONDITIONAL_JUMP)
// 0043bb70: LEA EAX,[EBP + 0x124]
//   Label: LAB_0043bb70
// 0043bb76: PUSH EAX
// 0043bb77: CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
//   XREF to: 005dd800 (UNCONDITIONAL_CALL)
// 0043bb7c: MOV EDX,dword ptr [EBP + 0x3ce84]
// 0043bb82: ADD ESP,0x4
// 0043bb85: TEST EDX,EDX
// 0043bb87: JNZ 0x0043bd76
//   XREF to: 0043bd76 (CONDITIONAL_JUMP)
// 0043bb8d: MOV EAX,dword ptr [EBP + 0x110]
// 0043bb93: PUSH EDX
// 0043bb94: MOV EDX,EAX
// 0043bb96: SAR EDX,0x1f
// 0043bb99: SUB EAX,EDX
// 0043bb9b: SAR EAX,0x1
// 0043bb9d: PUSH 0x4
// 0043bb9f: MOV ESI,dword ptr [EBP + 0x10c]
// 0043bba5: PUSH ESI
// 0043bba6: MOV EDI,dword ptr [EBP + 0x114]
// 0043bbac: PUSH EDI
// 0043bbad: PUSH EAX
// 0043bbae: MOV EAX,dword ptr [EBP + 0x104]
// 0043bbb4: PUSH EAX
// 0043bbb5: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0043bbbb: PUSH EDX
//   XREF to: 03114278 (DATA)
// 0043bbbc: CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
//   XREF to: 0056eac0 (UNCONDITIONAL_CALL)
// 0043bbc1: ADD ESP,0x1c
// 0043bbc4: TEST EBX,EBX
// 0043bbc6: JZ 0x0043bc20
//   XREF to: 0043bc20 (CONDITIONAL_JUMP)
// 0043bbc8: MOV ECX,dword ptr [EBP + 0x3f028]
// 0043bbce: XOR EBX,EBX
// 0043bbd0: TEST ECX,ECX
// 0043bbd2: JLE 0x0043bc20
//   XREF to: 0043bc20 (CONDITIONAL_JUMP)
// 0043bbd4: MOV EAX,EBP
// 0043bbd6: MOV EDX,dword ptr [EAX + 0x3f02c]
//   Label: LAB_0043bbd6
// 0043bbdc: IMUL EDX,EDX,0x30
// 0043bbdf: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0043bbe5: MOV ESI,dword ptr [ECX]
//   XREF to: 02c6d578 (READ)
// 0043bbe7: ADD ESI,EDX
// 0043bbe9: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x24] (DATA)
// 0043bbec: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 0043bbef: MOV ESI,dword ptr [EAX + 0x3f98c]
// 0043bbf5: MOV dword ptr [EDI + 0x20],ESI
// 0043bbf8: MOV ESI,dword ptr [ECX]
//   XREF to: 02c6d578 (READ)
// 0043bbfa: MOV EDI,dword ptr [EAX + 0x3fb1c]
// 0043bc00: MOV dword ptr [EDX + ESI*0x1 + 0x24],EDI
// 0043bc04: MOV ECX,dword ptr [ECX]
//   XREF to: 02c6d578 (READ)
// 0043bc06: ADD EDX,ECX
// 0043bc08: MOV ECX,dword ptr [EAX + 0x3fcac]
// 0043bc0e: MOV dword ptr [EDX + 0x28],ECX
// 0043bc11: INC EBX
// 0043bc12: MOV ESI,dword ptr [EBP + 0x3f028]
// 0043bc18: ADD EAX,0x4
// 0043bc1b: CMP EBX,ESI
// 0043bc1d: JL 0x0043bbd6
//   XREF to: 0043bbd6 (CONDITIONAL_JUMP)
// 0043bc1f: NOP
// 0043bc20: CMP dword ptr [ESP + 0x4],0xf618
//   Label: LAB_0043bc20
//   XREF to: Stack[-0x20] (READ)
// 0043bc28: JGE 0x0043bd20
//   XREF to: 0043bd20 (CONDITIONAL_JUMP)
// 0043bc2e: MOV EAX,dword ptr [EBP + 0x110]
// 0043bc34: MOV EDX,EAX
// 0043bc36: SAR EDX,0x1f
// 0043bc39: SUB EAX,EDX
// 0043bc3b: SAR EAX,0x1
// 0043bc3d: PUSH 0x267
// 0043bc42: PUSH EAX
// 0043bc43: MOV ECX,dword ptr [EBP + 0x114]
// 0043bc49: PUSH ECX
// 0043bc4a: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0043bc50: PUSH EBX
//   XREF to: 03114278 (DATA)
// 0043bc51: CALL core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
//   Label: LAB_0043bc51
//   XREF to: 00570770 (UNCONDITIONAL_CALL)
// 0043bc56: ADD ESP,0x10
// 0043bc59: MOV EAX,dword ptr [EBP + 0x110]
// 0043bc5f: MOV EDX,EAX
// 0043bc61: SAR EDX,0x1f
// 0043bc64: SUB EAX,EDX
// 0043bc66: SAR EAX,0x1
// 0043bc68: PUSH 0x0
// 0043bc6a: MOV EDX,EAX
// 0043bc6c: SHL EAX,0x3
// 0043bc6f: MOV ESI,dword ptr [EBP + 0x10c]
// 0043bc75: LEA ECX,[EDX + EAX*0x1]
// 0043bc78: PUSH 0x4
// 0043bc7a: SHL ECX,0x3
// 0043bc7d: MOV EAX,dword ptr [EBP + 0x114]
// 0043bc83: PUSH ESI
// 0043bc84: ADD EAX,ECX
// 0043bc86: PUSH EAX
// 0043bc87: PUSH EDX
// 0043bc88: MOV EDI,dword ptr [EBP + 0x104]
// 0043bc8e: PUSH EDI
// 0043bc8f: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0043bc94: PUSH EAX
//   XREF to: 03114278 (DATA)
// 0043bc95: CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
//   XREF to: 0056eac0 (UNCONDITIONAL_CALL)
// 0043bc9a: ADD ESP,0x1c
// 0043bc9d: CMP dword ptr [ESP + 0x4],0xf618
//   XREF to: Stack[-0x20] (READ)
// 0043bca5: JGE 0x0043bd45
//   XREF to: 0043bd45 (CONDITIONAL_JUMP)
// 0043bcab: MOV EAX,dword ptr [EBP + 0x110]
// 0043bcb1: MOV EDX,EAX
// 0043bcb3: SAR EDX,0x1f
// 0043bcb6: SUB EAX,EDX
// 0043bcb8: SAR EAX,0x1
// 0043bcba: PUSH 0x267
// 0043bcbf: PUSH EAX
// 0043bcc0: MOV EDX,EAX
// 0043bcc2: SHL EAX,0x3
// 0043bcc5: ADD EDX,EAX
// 0043bcc7: SHL EDX,0x3
// 0043bcca: MOV EAX,dword ptr [EBP + 0x114]
// 0043bcd0: ADD EAX,EDX
// 0043bcd2: PUSH EAX
// 0043bcd3: MOV EBX,dword ptr [0x006810c8]
//   Label: LAB_0043bcd3
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0043bcd9: PUSH EBX
//   XREF to: 03114278 (DATA)
// 0043bcda: CALL core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
//   Label: LAB_0043bcda
//   XREF to: 00570770 (UNCONDITIONAL_CALL)
// 0043bcdf: ADD ESP,0x10
// 0043bce2: PUSH 0x0
// 0043bce4: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0043bcea: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 0043bceb: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 0043bcf0: ADD ESP,0x8
// 0043bcf3: PUSH 0x1
// 0043bcf5: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0043bcfb: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 0043bcfc: CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
// 0043bd01: ADD ESP,0x8
// 0043bd04: ADD ESP,0x14
//   Label: LAB_0043bd04
// 0043bd07: POP EBP
// 0043bd08: POP EDI
// 0043bd09: POP ESI
// 0043bd0a: POP EBX
// 0043bd0b: RET
// 0043bd0c: PUSH ECX
//   Label: LAB_0043bd0c
// 0043bd0d: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0043bd12: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0043bd13: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 0043bd18: ADD ESP,0x8
// 0043bd1b: JMP 0x0043bb70
//   XREF to: 0043bb70 (UNCONDITIONAL_JUMP)
// 0043bd20: MOV EAX,dword ptr [EBP + 0x110]
//   Label: LAB_0043bd20
// 0043bd26: MOV EDX,EAX
// 0043bd28: SAR EDX,0x1f
// 0043bd2b: SUB EAX,EDX
// 0043bd2d: SAR EAX,0x1
// 0043bd2f: PUSH -0x1
// 0043bd31: PUSH EAX
// 0043bd32: MOV EAX,dword ptr [EBP + 0x114]
// 0043bd38: PUSH EAX
// 0043bd39: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0043bd3f: PUSH EDX
//   XREF to: 03114278 (DATA)
// 0043bd40: JMP 0x0043bc51
//   XREF to: 0043bc51 (UNCONDITIONAL_JUMP)
// 0043bd45: MOV EAX,dword ptr [EBP + 0x110]
//   Label: LAB_0043bd45
// 0043bd4b: MOV EDX,EAX
// 0043bd4d: SAR EDX,0x1f
// 0043bd50: SUB EAX,EDX
// 0043bd52: SAR EAX,0x1
// 0043bd54: PUSH -0x1
// 0043bd56: PUSH EAX
// 0043bd57: MOV EDX,EAX
// 0043bd59: SHL EAX,0x3
// 0043bd5c: ADD EAX,EDX
// 0043bd5e: SHL EAX,0x3
// 0043bd61: MOV EDX,dword ptr [EBP + 0x114]
// 0043bd67: ADD EAX,EDX
// 0043bd69: PUSH EAX
// 0043bd6a: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0043bd70: PUSH ECX
//   XREF to: 03114278 (DATA)
// 0043bd71: JMP 0x0043bcda
//   XREF to: 0043bcda (UNCONDITIONAL_JUMP)
// 0043bd76: PUSH 0x0
//   Label: LAB_0043bd76
// 0043bd78: PUSH 0x4
// 0043bd7a: MOV ECX,dword ptr [EBP + 0x10c]
// 0043bd80: PUSH ECX
// 0043bd81: MOV ESI,dword ptr [EBP + 0x114]
// 0043bd87: PUSH ESI
// 0043bd88: MOV EDI,dword ptr [EBP + 0x110]
// 0043bd8e: PUSH EDI
// 0043bd8f: MOV EAX,dword ptr [EBP + 0x104]
// 0043bd95: PUSH EAX
// 0043bd96: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0043bd9c: PUSH EDX
//   XREF to: 03114278 (DATA)
// 0043bd9d: CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
//   XREF to: 0056eac0 (UNCONDITIONAL_CALL)
// 0043bda2: ADD ESP,0x1c
// 0043bda5: TEST EBX,EBX
// 0043bda7: JZ 0x0043be00
//   XREF to: 0043be00 (CONDITIONAL_JUMP)
// 0043bda9: MOV ECX,dword ptr [EBP + 0x3f028]
// 0043bdaf: XOR EBX,EBX
// 0043bdb1: TEST ECX,ECX
// 0043bdb3: JLE 0x0043be00
//   XREF to: 0043be00 (CONDITIONAL_JUMP)
// 0043bdb5: MOV EAX,EBP
// 0043bdb7: MOV ECX,dword ptr [EAX + 0x3f02c]
//   Label: LAB_0043bdb7
// 0043bdbd: IMUL ECX,ECX,0x30
// 0043bdc0: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0043bdc6: MOV EDI,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0043bdc8: MOV ESI,dword ptr [EAX + 0x3f98c]
// 0043bdce: MOV dword ptr [ECX + EDI*0x1 + 0x20],ESI
// 0043bdd2: MOV ESI,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0043bdd4: ADD ESI,ECX
// 0043bdd6: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x24] (DATA)
// 0043bdd9: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 0043bddc: MOV ESI,dword ptr [EAX + 0x3fb1c]
// 0043bde2: MOV dword ptr [EDI + 0x24],ESI
// 0043bde5: MOV EDX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0043bde7: ADD ECX,EDX
// 0043bde9: MOV EDX,dword ptr [EAX + 0x3fcac]
// 0043bdef: MOV dword ptr [ECX + 0x28],EDX
// 0043bdf2: INC EBX
// 0043bdf3: MOV ESI,dword ptr [EBP + 0x3f028]
// 0043bdf9: ADD EAX,0x4
// 0043bdfc: CMP EBX,ESI
// 0043bdfe: JL 0x0043bdb7
//   XREF to: 0043bdb7 (CONDITIONAL_JUMP)
// 0043be00: CMP dword ptr [ESP + 0x4],0xf618
//   Label: LAB_0043be00
//   XREF to: Stack[-0x20] (READ)
// 0043be08: JGE 0x0043bf04
//   XREF to: 0043bf04 (CONDITIONAL_JUMP)
// 0043be0e: PUSH 0x267
// 0043be13: MOV EBX,dword ptr [EBP + 0x110]
// 0043be19: PUSH EBX
// 0043be1a: MOV ESI,dword ptr [EBP + 0x114]
// 0043be20: PUSH ESI
// 0043be21: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0043be27: PUSH EDI
//   XREF to: 03114278 (DATA)
// 0043be28: CALL core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
//   Label: LAB_0043be28
//   XREF to: 00570770 (UNCONDITIONAL_CALL)
// 0043be2d: ADD ESP,0x10
// 0043be30: MOV EAX,dword ptr [EBP + 0x110]
// 0043be36: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0043be3a: CMP EAX,0x3e8
// 0043be3f: JLE 0x0043be49
//   XREF to: 0043be49 (CONDITIONAL_JUMP)
// 0043be41: MOV dword ptr [ESP + 0x8],0x3e8
//   XREF to: Stack[-0x1c] (WRITE)
// 0043be49: XOR ECX,ECX
//   Label: LAB_0043be49
// 0043be4b: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 0043be4f: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0043be53: TEST EBX,EBX
// 0043be55: JLE 0x0043bebf
//   XREF to: 0043bebf (CONDITIONAL_JUMP)
// 0043be57: MOV dword ptr [ESP + 0x10],0x827500
//   XREF to: Stack[-0x14] (WRITE)
//   XREF to: 00827500 (DATA)
// 0043be5f: IMUL EAX,dword ptr [ESP + 0xc],0x48
//   Label: LAB_0043be5f
//   XREF to: Stack[-0x18] (READ)
// 0043be64: MOV EDX,dword ptr [EBP + 0x114]
// 0043be6a: ADD EDX,EAX
// 0043be6c: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 0043be70: MOV EAX,dword ptr [EDX + 0x4]
// 0043be73: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 00827504 (WRITE)
//   XREF to: 0082754c (WRITE)
// 0043be76: MOV ECX,dword ptr [EDX + 0x4]
// 0043be79: XOR EAX,EAX
// 0043be7b: TEST ECX,ECX
// 0043be7d: JLE 0x0043bea3
//   XREF to: 0043bea3 (CONDITIONAL_JUMP)
// 0043be7f: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 0043be83: MOV EBX,dword ptr [EDX + 0x4]
//   Label: LAB_0043be83
// 0043be86: SUB EBX,EAX
// 0043be88: DEC EBX
// 0043be89: IMUL EBX,EBX,0xc
// 0043be8c: LEA ESI,[EDX + EBX*0x1]
// 0043be8f: LEA EDI,[ECX + 0x18]
//   XREF to: 00827518 (DATA)
// 0043be92: LEA ESI,[ESI + 0x18]
// 0043be95: MOVSD ES:EDI,ESI
//   XREF to: 00827518 (WRITE)
//   XREF to: 00827524 (WRITE)
// 0043be96: MOVSD ES:EDI,ESI
//   XREF to: 0082751c (WRITE)
//   XREF to: 00827528 (WRITE)
// 0043be97: MOVSD ES:EDI,ESI
//   XREF to: 00827520 (WRITE)
//   XREF to: 0082752c (WRITE)
// 0043be98: INC EAX
// 0043be99: MOV EBX,dword ptr [EDX + 0x4]
// 0043be9c: ADD ECX,0xc
// 0043be9f: CMP EAX,EBX
// 0043bea1: JL 0x0043be83
//   XREF to: 0043be83 (CONDITIONAL_JUMP)
// 0043bea3: MOV ESI,dword ptr [ESP + 0x10]
//   Label: LAB_0043bea3
//   XREF to: Stack[-0x14] (READ)
// 0043bea7: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 0043beab: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 0043beaf: ADD ESI,0x48
// 0043beb2: INC EDI
// 0043beb3: MOV dword ptr [ESP + 0x10],ESI
//   XREF to: Stack[-0x14] (WRITE)
//   XREF to: 00827548 (DATA)
//   XREF to: 00827590 (DATA)
// 0043beb7: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 0043bebb: CMP EDI,EDX
// 0043bebd: JL 0x0043be5f
//   XREF to: 0043be5f (CONDITIONAL_JUMP)
// 0043bebf: PUSH 0x0
//   Label: LAB_0043bebf
// 0043bec1: PUSH 0x4
// 0043bec3: MOV ECX,dword ptr [EBP + 0x10c]
// 0043bec9: PUSH ECX
// 0043beca: PUSH 0x827500
//   XREF to: 00827500 (DATA)
// 0043becf: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (READ)
// 0043bed3: PUSH EBX
// 0043bed4: MOV ESI,dword ptr [EBP + 0x104]
// 0043beda: PUSH ESI
// 0043bedb: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0043bee1: PUSH EDI
//   XREF to: 03114278 (DATA)
// 0043bee2: CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
//   XREF to: 0056eac0 (UNCONDITIONAL_CALL)
// 0043bee7: ADD ESP,0x1c
// 0043beea: CMP dword ptr [ESP + 0x4],0xf618
//   XREF to: Stack[-0x20] (READ)
// 0043bef2: JGE 0x0043bf20
//   XREF to: 0043bf20 (CONDITIONAL_JUMP)
// 0043bef4: PUSH 0x267
// 0043bef9: PUSH EBX
// 0043befa: PUSH 0x827500
//   XREF to: 00827500 (DATA)
// 0043beff: JMP 0x0043bcd3
//   XREF to: 0043bcd3 (UNCONDITIONAL_JUMP)
// 0043bf04: PUSH -0x1
//   Label: LAB_0043bf04
// 0043bf06: MOV EAX,dword ptr [EBP + 0x110]
// 0043bf0c: PUSH EAX
// 0043bf0d: MOV EDX,dword ptr [EBP + 0x114]
// 0043bf13: PUSH EDX
// 0043bf14: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0043bf1a: PUSH ECX
//   XREF to: 03114278 (DATA)
// 0043bf1b: JMP 0x0043be28
//   XREF to: 0043be28 (UNCONDITIONAL_JUMP)
// 0043bf20: PUSH -0x1
//   Label: LAB_0043bf20
// 0043bf22: PUSH EBX
// 0043bf23: PUSH 0x827500
//   XREF to: 00827500 (DATA)
// 0043bf28: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0043bf2e: PUSH EDX
//   XREF to: 03114278 (DATA)
// 0043bf2f: JMP 0x0043bcda
//   XREF to: 0043bcda (UNCONDITIONAL_JUMP)
