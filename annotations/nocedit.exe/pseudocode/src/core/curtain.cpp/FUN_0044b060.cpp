// Name: core_curtain.cpp_FUN_0044b060
// Address: 0044b060
// Address Range: [[0044b060, 0044b332]]
// Convention: unknown
// Signature: undefined core_curtain.cpp_FUN_0044b060()
// Cross-references:
//   core_curtain.cpp_FUN_0044b340 (0044b340) at 0044b354 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0065c4c0
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   int g_RelativeZ
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_box.cpp_CBoundingBox3D_render_FUN_004210b0
//   core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
//   core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
//   core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_curtain.cpp_FUN_0044b060(undefined4 param_1) */

undefined4 core_curtain_cpp_FUN_0044b060(void)

{
  bool bVar1;
  CDemonRenderer *this_ptr;
  CBoundingBox3D *pCVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  SMRGLHeaderPrimitive *primitive_array;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  float unaff_ESI;
  SMRGLPrimitiveQuad *primitive_array_00;
  int unaff_retaddr;
  CDemonActor *in_stack_00000004;
  undefined4 in_stack_00000034;
  float fStack_34;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  pCVar2 = (*in_stack_00000004->vtable->getBoundingBox)
                     (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffc8);
  iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(pCVar2);
  this_ptr = g_CDemonRendererPtr;
  if (iVar3 == 0) goto LAB_0044b320;
  in_stack_00000004[0x4ba].previous_transform_state.dirty_flags = 1;
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(this_ptr);
  if (((iVar3 != 0) && (in_stack_00000004[1].location.position.z != 0.0)) &&
     (in_stack_00000004[0x4ba].field25_0x144 == 0)) {
    pCVar2 = (*in_stack_00000004->vtable->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)&stack0xfffffffc);
    core_box_cpp_CBoundingBox3D_render_FUN_004210b0(pCVar2,unaff_EBP,(int)unaff_ESI,unaff_retaddr);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
    return 1;
  }
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr,(int)in_stack_00000004[1].location.position.y);
  iVar3 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,(SMRGLTextureBasic *)(in_stack_00000004[1].actor_name + 0xc));
  piVar5 = (int *)(in_stack_00000004[1].create_event + 0x38);
  piVar4 = &in_stack_00000004[0x152].field17_0x104;
  if (0 < *(int *)(in_stack_00000004[1].create_event + 0x34)) {
    do {
      *piVar4 = (int)ROUND((float)*piVar5 * _DAT_0065c4c0);
      ((CVector3i *)(piVar4 + 1))->x = (int)ROUND((float)piVar5[1] * _DAT_0065c4c0);
      piVar4[2] = (int)ROUND((float)piVar5[2] * _DAT_0065c4c0);
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 0x1d;
      piVar4 = piVar4 + 3;
    } while (iVar3 < *(int *)(in_stack_00000004[1].create_event + 0x34));
  }
  core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0
            (g_CDemonSetPtr,*(int *)(in_stack_00000004[1].create_event + 0x34),
             &in_stack_00000004[0x152].field17_0x104);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  bVar1 = 0 < g_RelativeZ;
  if (in_stack_00000004[1].location.position.z == 0.0) {
    bVar1 = true;
LAB_0044b1a4:
    primitive_array = (SMRGLHeaderPrimitive *)&in_stack_00000004[0x175].field11_0xdc;
    fStack_34 = 6.308613e-39;
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,*(int *)(in_stack_00000004[1].create_event + 0x34),
               in_stack_00000004[0x152].is_transparent * in_stack_00000004[0x152].field16_0x100 * 2,
               (SInputFace *)primitive_array,(int)&in_stack_00000004[0x152].field17_0x104,4,0);
    if ((int)in_stack_00000004[1].location.position.y < 0xfde9) {
      for (iVar3 = 0;
          iVar6 = in_stack_00000004[0x152].is_transparent * in_stack_00000004[0x152].field16_0x100,
          SBORROW4(iVar3,iVar6 * 2) != iVar3 + iVar6 * -2 < 0; iVar3 = iVar3 + 1) {
        engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
                  (g_CDemonRendererPtr,primitive_array);
        primitive_array = primitive_array + 3;
      }
    }
    else {
      core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
                (g_CDemonSetPtr,(SMRGLPrimitiveQuad *)primitive_array,
                 in_stack_00000004[0x152].is_transparent * in_stack_00000004[0x152].field16_0x100 *
                 2,-1);
    }
  }
  else if (g_RelativeZ < 0) goto LAB_0044b1a4;
  if (bVar1) {
    primitive_array_00 = (SMRGLPrimitiveQuad *)(in_stack_00000004[0x318].orient_matrix.m + 2);
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,*(int *)(in_stack_00000004[1].create_event + 0x34),
               in_stack_00000004[0x152].is_transparent * in_stack_00000004[0x152].field16_0x100 * 2,
               (SInputFace *)primitive_array_00,(int)&in_stack_00000004[0x152].field17_0x104,4,0);
    if ((int)in_stack_00000004[1].location.position.y < 0xfde9) {
      for (iVar3 = 0;
          iVar6 = in_stack_00000004[0x152].is_transparent * in_stack_00000004[0x152].field16_0x100,
          SBORROW4(iVar3,iVar6 * 2) != iVar3 + iVar6 * -2 < 0; iVar3 = iVar3 + 1) {
        engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
                  (g_CDemonRendererPtr,&primitive_array_00->base);
        primitive_array_00 = primitive_array_00 + 1;
      }
    }
    else {
      core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
                (g_CDemonSetPtr,primitive_array_00,
                 in_stack_00000004[0x152].is_transparent * in_stack_00000004[0x152].field16_0x100 *
                 2,-1);
    }
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
LAB_0044b320:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return in_stack_00000034;
}


// Assembly code:
// 0044b060: PUSH ESI
//   Label: core_curtain.cpp_FUN_0044b060
// 0044b061: PUSH EBP
// 0044b062: SUB ESP,0x34
// 0044b065: MOV ESI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 0044b069: PUSH ESI
// 0044b06a: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 0044b06f: ADD ESP,0x4
// 0044b072: MOV EAX,ESP
// 0044b074: PUSH EAX
// 0044b075: MOV EDX,dword ptr [ESI + 0x154]
// 0044b07b: PUSH ESI
// 0044b07c: CALL dword ptr [EDX + 0x14]
// 0044b07f: ADD ESP,0x8
// 0044b082: PUSH EAX
// 0044b083: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 0044b088: ADD ESP,0x4
// 0044b08b: MOV dword ptr [ESP + 0x30],EAX
// 0044b08f: TEST EAX,EAX
// 0044b091: JZ 0x0044b320
//   XREF to: 0044b320 (CONDITIONAL_JUMP)
// 0044b097: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0044b09d: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0044b09e: MOV dword ptr [ESI + 0x65b30],0x1
// 0044b0a8: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 0044b0ad: ADD ESP,0x4
// 0044b0b0: TEST EAX,EAX
// 0044b0b2: JZ 0x0044b0ca
//   XREF to: 0044b0ca (CONDITIONAL_JUMP)
// 0044b0b4: CMP dword ptr [ESI + 0x180],0x0
// 0044b0bb: JZ 0x0044b0ca
//   XREF to: 0044b0ca (CONDITIONAL_JUMP)
// 0044b0bd: CMP dword ptr [ESI + 0x65b34],0x0
// 0044b0c4: JZ 0x0044b217
//   XREF to: 0044b217 (CONDITIONAL_JUMP)
// 0044b0ca: PUSH EDI
//   Label: LAB_0044b0ca
// 0044b0cb: PUSH EBX
// 0044b0cc: MOV EDI,dword ptr [ESI + 0x17c]
// 0044b0d2: PUSH EDI
// 0044b0d3: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0044b0d9: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 0044b0da: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 0044b0df: ADD ESP,0x8
// 0044b0e2: LEA EAX,[ESI + 0x164]
// 0044b0e8: PUSH EAX
// 0044b0e9: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0044b0ee: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0044b0ef: XOR EDI,EDI
// 0044b0f1: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 0044b0f6: LEA EDX,[ESI + 0x208]
// 0044b0fc: ADD ESP,0x8
// 0044b0ff: LEA EBP,[ESI + 0x1c734]
// 0044b105: MOV EBX,dword ptr [ESI + 0x204]
// 0044b10b: MOV ECX,EBP
// 0044b10d: TEST EBX,EBX
// 0044b10f: JLE 0x0044b150
//   XREF to: 0044b150 (CONDITIONAL_JUMP)
// 0044b111: MOV EBX,ECX
//   Label: LAB_0044b111
// 0044b113: MOV EAX,EDX
// 0044b115: FLD float ptr [EAX]
// 0044b117: FMUL float ptr [0x0065c4c0]
//   XREF to: 0065c4c0 (READ)
// 0044b11d: FISTP dword ptr [EBX]
// 0044b11f: FLD float ptr [EAX + 0x4]
// 0044b122: FMUL float ptr [0x0065c4c0]
//   XREF to: 0065c4c0 (READ)
// 0044b128: FISTP dword ptr [EBX + 0x4]
// 0044b12b: FLD float ptr [EAX + 0x8]
// 0044b12e: FMUL float ptr [0x0065c4c0]
//   XREF to: 0065c4c0 (READ)
// 0044b134: FISTP dword ptr [EBX + 0x8]
// 0044b137: INC EDI
// 0044b138: ADD EDX,0x74
// 0044b13b: MOV EAX,dword ptr [ESI + 0x204]
// 0044b141: ADD ECX,0xc
// 0044b144: CMP EDI,EAX
// 0044b146: JL 0x0044b111
//   XREF to: 0044b111 (CONDITIONAL_JUMP)
// 0044b148: LEA EAX,[EAX]
// 0044b14e: MOV EDX,EDX
// 0044b150: PUSH EBP
//   Label: LAB_0044b150
// 0044b151: MOV EDX,dword ptr [ESI + 0x204]
// 0044b157: PUSH EDX
// 0044b158: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0044b15e: PUSH ECX
//   XREF to: 03114278 (DATA)
// 0044b15f: CALL core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
//   XREF to: 0056e7c0 (UNCONDITIONAL_CALL)
// 0044b164: ADD ESP,0xc
// 0044b167: PUSH 0x1
// 0044b169: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0044b16f: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 0044b170: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 0044b175: MOV EDI,dword ptr [0x02d052c0]
//   XREF to: 02d052c0 (READ)
// 0044b17b: ADD ESP,0x8
// 0044b17e: XOR EDX,EDX
// 0044b180: TEST EDI,EDI
// 0044b182: SETL AL
// 0044b185: MOV DL,AL
// 0044b187: TEST EDI,EDI
// 0044b189: SETG AL
// 0044b18c: MOVZX EBP,AL
// 0044b18f: CMP dword ptr [ESI + 0x180],0x0
// 0044b196: JZ 0x0044b246
//   XREF to: 0044b246 (CONDITIONAL_JUMP)
// 0044b19c: TEST EDX,EDX
// 0044b19e: JZ 0x0044b272
//   XREF to: 0044b272 (CONDITIONAL_JUMP)
// 0044b1a4: MOV EDX,dword ptr [ESI + 0x1c72c]
//   Label: LAB_0044b1a4
// 0044b1aa: IMUL EDX,dword ptr [ESI + 0x1c730]
// 0044b1b1: PUSH 0x0
// 0044b1b3: PUSH 0x4
// 0044b1b5: LEA EAX,[ESI + 0x1c734]
// 0044b1bb: PUSH EAX
// 0044b1bc: LEA EBX,[ESI + 0x1f614]
// 0044b1c2: PUSH EBX
// 0044b1c3: LEA EAX,[EDX + EDX*0x1]
// 0044b1c6: PUSH EAX
// 0044b1c7: MOV EDI,dword ptr [ESI + 0x204]
// 0044b1cd: PUSH EDI
// 0044b1ce: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0044b1d3: PUSH EAX
//   XREF to: 03114278 (DATA)
// 0044b1d4: CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
//   XREF to: 0056eac0 (UNCONDITIONAL_CALL)
// 0044b1d9: MOV EDX,dword ptr [ESI + 0x17c]
// 0044b1df: ADD ESP,0x1c
// 0044b1e2: CMP EDX,0xfde8
// 0044b1e8: JG 0x0044b250
//   XREF to: 0044b250 (CONDITIONAL_JUMP)
// 0044b1ea: XOR EDI,EDI
// 0044b1ec: MOV EAX,dword ptr [ESI + 0x1c730]
//   Label: LAB_0044b1ec
// 0044b1f2: MOV EDX,dword ptr [ESI + 0x1c72c]
// 0044b1f8: IMUL EDX,EAX
// 0044b1fb: ADD EDX,EDX
// 0044b1fd: CMP EDI,EDX
// 0044b1ff: JGE 0x0044b272
//   XREF to: 0044b272 (CONDITIONAL_JUMP)
// 0044b201: PUSH EBX
// 0044b202: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0044b208: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0044b209: INC EDI
// 0044b20a: CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
//   XREF to: 0048bdc0 (UNCONDITIONAL_CALL)
// 0044b20f: ADD EBX,0x48
// 0044b212: ADD ESP,0x8
// 0044b215: JMP 0x0044b1ec
//   XREF to: 0044b1ec (UNCONDITIONAL_JUMP)
// 0044b217: LEA EAX,[ESP + 0x18]
//   Label: LAB_0044b217
// 0044b21b: PUSH EAX
// 0044b21c: MOV EDX,dword ptr [ESI + 0x154]
// 0044b222: PUSH ESI
// 0044b223: CALL dword ptr [EDX + 0x14]
// 0044b226: ADD ESP,0x8
// 0044b229: PUSH EAX
// 0044b22a: CALL core_box.cpp_CBoundingBox3D_render_FUN_004210b0
//   XREF to: 004210b0 (UNCONDITIONAL_CALL)
// 0044b22f: ADD ESP,0x4
// 0044b232: PUSH ESI
// 0044b233: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 0044b238: MOV EAX,0x1
// 0044b23d: ADD ESP,0x4
// 0044b240: ADD ESP,0x34
// 0044b243: POP EBP
// 0044b244: POP ESI
// 0044b245: RET
// 0044b246: MOV EBP,0x1
//   Label: LAB_0044b246
// 0044b24b: JMP 0x0044b1a4
//   XREF to: 0044b1a4 (UNCONDITIONAL_JUMP)
// 0044b250: MOV EDX,dword ptr [ESI + 0x1c72c]
//   Label: LAB_0044b250
// 0044b256: IMUL EDX,dword ptr [ESI + 0x1c730]
// 0044b25d: PUSH -0x1
// 0044b25f: ADD EDX,EDX
// 0044b261: PUSH EDX
// 0044b262: PUSH EBX
// 0044b263: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0044b269: PUSH EBX
//   XREF to: 03114278 (DATA)
// 0044b26a: CALL core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
//   XREF to: 00570770 (UNCONDITIONAL_CALL)
// 0044b26f: ADD ESP,0x10
// 0044b272: TEST EBP,EBP
//   Label: LAB_0044b272
// 0044b274: JZ 0x0044b30d
//   XREF to: 0044b30d (CONDITIONAL_JUMP)
// 0044b27a: MOV EDX,dword ptr [ESI + 0x1c72c]
// 0044b280: IMUL EDX,dword ptr [ESI + 0x1c730]
// 0044b287: PUSH 0x0
// 0044b289: PUSH 0x4
// 0044b28b: LEA EAX,[ESI + 0x1c734]
// 0044b291: PUSH EAX
// 0044b292: LEA EDI,[ESI + 0x42894]
// 0044b298: PUSH EDI
// 0044b299: ADD EDX,EDX
// 0044b29b: PUSH EDX
// 0044b29c: MOV EBX,dword ptr [ESI + 0x204]
// 0044b2a2: PUSH EBX
// 0044b2a3: MOV EBP,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0044b2a9: PUSH EBP
//   XREF to: 03114278 (DATA)
// 0044b2aa: CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
//   XREF to: 0056eac0 (UNCONDITIONAL_CALL)
// 0044b2af: MOV EAX,dword ptr [ESI + 0x17c]
// 0044b2b5: ADD ESP,0x1c
// 0044b2b8: CMP EAX,0xfde8
// 0044b2bd: JG 0x0044b2eb
//   XREF to: 0044b2eb (CONDITIONAL_JUMP)
// 0044b2bf: XOR EBX,EBX
// 0044b2c1: MOV EBP,dword ptr [ESI + 0x1c730]
//   Label: LAB_0044b2c1
// 0044b2c7: MOV EDX,dword ptr [ESI + 0x1c72c]
// 0044b2cd: IMUL EDX,EBP
// 0044b2d0: ADD EDX,EDX
// 0044b2d2: CMP EBX,EDX
// 0044b2d4: JGE 0x0044b30d
//   XREF to: 0044b30d (CONDITIONAL_JUMP)
// 0044b2d6: PUSH EDI
// 0044b2d7: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0044b2dc: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0044b2dd: INC EBX
// 0044b2de: CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
//   XREF to: 0048bdc0 (UNCONDITIONAL_CALL)
// 0044b2e3: ADD EDI,0x48
// 0044b2e6: ADD ESP,0x8
// 0044b2e9: JMP 0x0044b2c1
//   XREF to: 0044b2c1 (UNCONDITIONAL_JUMP)
// 0044b2eb: MOV EDX,dword ptr [ESI + 0x1c72c]
//   Label: LAB_0044b2eb
// 0044b2f1: IMUL EDX,dword ptr [ESI + 0x1c730]
// 0044b2f8: PUSH -0x1
// 0044b2fa: ADD EDX,EDX
// 0044b2fc: PUSH EDX
// 0044b2fd: PUSH EDI
// 0044b2fe: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0044b304: PUSH EBX
//   XREF to: 03114278 (DATA)
// 0044b305: CALL core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
//   XREF to: 00570770 (UNCONDITIONAL_CALL)
// 0044b30a: ADD ESP,0x10
// 0044b30d: PUSH 0x0
//   Label: LAB_0044b30d
// 0044b30f: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0044b315: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0044b316: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 0044b31b: ADD ESP,0x8
// 0044b31e: POP EBX
// 0044b31f: POP EDI
// 0044b320: PUSH ESI
//   Label: LAB_0044b320
// 0044b321: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 0044b326: ADD ESP,0x4
// 0044b329: MOV EAX,dword ptr [ESP + 0x30]
// 0044b32d: ADD ESP,0x34
// 0044b330: POP EBP
// 0044b331: POP ESI
// 0044b332: RET
