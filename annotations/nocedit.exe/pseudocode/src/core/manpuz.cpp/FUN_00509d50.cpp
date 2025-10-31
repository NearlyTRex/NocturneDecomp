// Name: core_manpuz.cpp_FUN_00509d50
// Address: 00509d50
// Address Range: [[00509d50, 0050a1b8] [0050a1c7, 0050a1ec]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_00509d50()
// Cross-references:
//   core_manpuz.cpp_FUN_005090d0 (005090d0) at 00509167 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_0063570d = 256
//   double DOUBLE_00635715 = 0.0100000000000000
//   undefined4 DAT_00660d70
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 DAT_01000000
//   CDemonRenderer g_CDemonRendererInstance
//   CEditorTools g_CEditorToolsPtr
//   undefined4 DAT_02f0cb1c
//   undefined4 DAT_02f33744
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   core_set.cpp_CDemonSet_FUN_00570ca0
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
//   shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
//   shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_manpuz.cpp_FUN_00509d50(undefined4 param_1, undefined4
   param_2) */

void core_manpuz_cpp_FUN_00509d50(void)

{
  SRenderVertex *pSVar1;
  float fVar2;
  CDemonMission *pCVar3;
  CDemonMission *extraout_EAX;
  int iVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar5;
  int *piVar6;
  CDemonRenderer *this_ptr;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  float *pfVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  float in_stack_00000020;
  float in_stack_00000028;
  int in_stack_0000002c;
  float in_stack_00000030;
  undefined1 local_30 [12];
  int local_24;
  int local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  
  pfVar7 = (float *)(in_stack_00000004 + 0xaa0 + in_stack_00000008 * 0xb8);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)(pfVar7 + 0xc),(CVector3i *)(pfVar7 + 9));
  pCVar3 = g_CDemonMissionPtr;
  uVar5 = extraout_EDX;
  if ((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) &&
     (pCVar3 = (CDemonMission *)
               engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
     uVar5 = extraout_EDX_00, pCVar3 == (CDemonMission *)0x0)) {
    if (DAT_02f0cb1c == 2) {
      shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr);
    }
    shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(g_CEditorToolsPtr,1.0,0xfb);
    pCVar3 = extraout_EAX;
    uVar5 = extraout_EDX_01;
  }
  fVar8 = (float10)pfVar7[2] * (float10)FLOAT_0063570d;
  fVar10 = (float10)*pfVar7 * (float10)FLOAT_0063570d;
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(uVar5,pCVar3));
  dVar11 = crt_math_c_round_FUN_005fe6b0(dVar11);
  crt_math_c_round_FUN_005fe6b0(dVar11);
  in_stack_00000008 = (int)ROUND(fVar10);
  core_set_cpp_CDemonSet_FUN_00570ca0(g_CDemonSetPtr);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x2d4),0.0,-1);
  core_set_cpp_CDemonSet_FUN_00570ca0(g_CDemonSetPtr);
  iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if ((iVar4 == 0) &&
     ((((float)DOUBLE_00635715 < pfVar7[3] || ((float)DOUBLE_00635715 < pfVar7[4])) ||
      ((float)DOUBLE_00635715 < pfVar7[5])))) {
    local_1c = 0xbfb33333;
    local_14 = -1.4;
    local_18 = 0.2;
    local_30._8_4_ = (undefined4)ROUND(_DAT_00660d70 * -1.4);
    local_24 = (int)ROUND(_DAT_00660d70 * 0.2);
    local_20 = (int)ROUND(_DAT_00660d70 * -1.4);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)(local_30 + 8)
              );
    local_18 = -local_18;
    local_30._0_4_ = (undefined4)ROUND(local_18 * _DAT_00660d70);
    local_30._4_4_ = (undefined4)ROUND(local_14 * _DAT_00660d70);
    local_30._8_4_ = (undefined4)ROUND(unaff_EBP * _DAT_00660d70);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)local_30);
    fVar2 = local_14 * _DAT_00660d70;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
               (CVector3i *)&stack0xfffffff8);
    in_stack_00000008 = (int)ROUND(-unaff_EBP * _DAT_00660d70);
    in_stack_0000000c = (int)ROUND(-(float)(int)ROUND(fVar8) * _DAT_00660d70);
    in_stack_00000010 = (int)ROUND((float)(int)ROUND(fVar2) * _DAT_00660d70);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,
               (CVector3i *)&stack0x00000008);
    local_30._4_4_ = 0;
    local_30._8_4_ = 0x1000000;
    local_30._0_4_ = 3;
    fVar9 = (float10)FLOAT_0063570d;
    fVar8 = (float10)pfVar7[3] * fVar9;
    fVar10 = (float10)pfVar7[4] * fVar9;
    fVar9 = (float10)pfVar7[5] * fVar9;
    pSVar1 = g_CDemonRendererPtr->vertex_buffer_ptr;
    dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(g_CDemonRendererPtr,1));
    in_stack_00000020 = (float)(int)ROUND(fVar8);
    pSVar1->light = in_stack_00000020;
    dVar11 = crt_math_c_round_FUN_005fe6b0
                       ((double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),in_stack_00000020));
    piVar6 = (int *)((ulonglong)dVar11 >> 0x20);
    in_stack_00000028 = (float)(int)ROUND(fVar10);
    *(float *)(*piVar6 + 0x24) = in_stack_00000028;
    dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(piVar6,in_stack_00000028));
    this_ptr = (CDemonRenderer *)((ulonglong)dVar11 >> 0x20);
    in_stack_00000030 = (float)(int)ROUND(fVar9);
    this_ptr->vertex_buffer_ptr->fog = in_stack_00000030;
    this_ptr->vertex_buffer_ptr->w_recip = 9.18341e-41;
    this_ptr->vertex_buffer_ptr[1].light = in_stack_00000028;
    this_ptr->vertex_buffer_ptr[1].color = in_stack_0000002c;
    this_ptr->vertex_buffer_ptr[1].fog = in_stack_00000030;
    this_ptr->vertex_buffer_ptr[1].w_recip = 9.18341e-41;
    this_ptr->vertex_buffer_ptr[2].light = in_stack_00000028;
    this_ptr->vertex_buffer_ptr[2].color = in_stack_0000002c;
    this_ptr->vertex_buffer_ptr[2].fog = in_stack_00000030;
    this_ptr->vertex_buffer_ptr[2].w_recip = 9.18341e-41;
    this_ptr->vertex_buffer_ptr[3].light = in_stack_00000028;
    this_ptr->vertex_buffer_ptr[3].color = in_stack_0000002c;
    this_ptr->vertex_buffer_ptr[3].fog = in_stack_00000030;
    this_ptr->vertex_buffer_ptr[3].w_recip = 9.18341e-41;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (this_ptr,(SMRGLTextureBasic *)(in_stack_00000004 + 0x14c0));
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,0);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
    engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
              (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffffac);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,1);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}


// Assembly code:
// 00509d50: PUSH EBX
//   Label: core_manpuz.cpp_FUN_00509d50
// 00509d51: PUSH ESI
// 00509d52: PUSH EDI
// 00509d53: PUSH EBP
// 00509d54: SUB ESP,0x98
// 00509d5a: MOV EDI,dword ptr [ESP + 0xac]
// 00509d61: MOV EDX,dword ptr [ESP + 0xb0]
// 00509d68: LEA EAX,[EDX*0x4 + 0x0]
// 00509d6f: SUB EAX,EDX
// 00509d71: SHL EAX,0x3
// 00509d74: SUB EAX,EDX
// 00509d76: LEA ESI,[EDI + 0xaa0]
// 00509d7c: SHL EAX,0x3
// 00509d7f: ADD ESI,EAX
// 00509d81: LEA EAX,[ESI + 0x24]
// 00509d84: PUSH EAX
// 00509d85: LEA EAX,[ESI + 0x30]
// 00509d88: PUSH EAX
// 00509d89: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00509d8f: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00509d90: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 00509d95: MOV EAX,[0x0067d550]
//   XREF to: 0067d550 (READ)
// 00509d9a: MOV ECX,dword ptr [EAX + 0x4]
//   XREF to: 02f33744 (READ)
// 00509d9d: ADD ESP,0xc
// 00509da0: TEST ECX,ECX
// 00509da2: JZ 0x00509dea
//   XREF to: 00509dea (CONDITIONAL_JUMP)
// 00509da4: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00509daa: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00509dab: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 00509db0: ADD ESP,0x4
// 00509db3: TEST EAX,EAX
// 00509db5: JNZ 0x00509dea
//   XREF to: 00509dea (CONDITIONAL_JUMP)
// 00509db7: MOV EBP,dword ptr [0x02f0cb1c]
//   XREF to: 02f0cb1c (READ)
// 00509dbd: MOV EBX,0xfb
// 00509dc2: CMP EBP,0x2
// 00509dc5: JNZ 0x00509dd5
//   XREF to: 00509dd5 (CONDITIONAL_JUMP)
// 00509dc7: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 00509dcc: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 00509dcd: CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   XREF to: 004a1330 (UNCONDITIONAL_CALL)
// 00509dd2: ADD ESP,0x4
// 00509dd5: PUSH EBX
//   Label: LAB_00509dd5
// 00509dd6: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00509ddc: PUSH 0x3f800000
// 00509de1: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 00509de2: CALL shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
//   XREF to: 004a1ca0 (UNCONDITIONAL_CALL)
// 00509de7: ADD ESP,0xc
// 00509dea: FLD float ptr [0x0063570d]
//   Label: LAB_00509dea
//   XREF to: 0063570d (READ)
// 00509df0: FLD float ptr [ESI + 0x8]
// 00509df3: FMUL ST1
// 00509df5: FLD float ptr [ESI + 0x4]
// 00509df8: FMUL ST2
// 00509dfa: FLD float ptr [ESI]
// 00509dfc: FMULP ST3
// 00509dfe: FXCH
// 00509e00: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00509e05: FXCH
// 00509e07: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00509e0c: FXCH
// 00509e0e: FISTP dword ptr [ESP + 0x84]
// 00509e15: FISTP dword ptr [ESP + 0x94]
// 00509e1c: MOV ECX,dword ptr [ESP + 0x84]
// 00509e23: MOV EBX,dword ptr [ESP + 0x94]
// 00509e2a: PUSH ECX
// 00509e2b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00509e30: PUSH EBX
// 00509e31: FISTP dword ptr [ESP + 0x9c]
// 00509e38: MOV EBP,dword ptr [ESP + 0x9c]
// 00509e3f: PUSH EBP
// 00509e40: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 00509e45: PUSH EAX
//   XREF to: 03114278 (DATA)
// 00509e46: CALL core_set.cpp_CDemonSet_FUN_00570ca0
//   XREF to: 00570ca0 (UNCONDITIONAL_CALL)
// 00509e4b: ADD ESP,0x10
// 00509e4e: PUSH -0x1
// 00509e50: LEA EAX,[EDI + 0x2d4]
// 00509e56: PUSH 0x0
// 00509e58: PUSH EAX
// 00509e59: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 00509e5e: ADD ESP,0xc
// 00509e61: PUSH 0x10000
// 00509e66: PUSH 0x10000
// 00509e6b: PUSH 0x10000
// 00509e70: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 00509e76: PUSH EDX
//   XREF to: 03114278 (DATA)
// 00509e77: CALL core_set.cpp_CDemonSet_FUN_00570ca0
//   XREF to: 00570ca0 (UNCONDITIONAL_CALL)
// 00509e7c: ADD ESP,0x10
// 00509e7f: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00509e85: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00509e86: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 00509e8b: ADD ESP,0x4
// 00509e8e: TEST EAX,EAX
// 00509e90: JNZ 0x0050a1ad
//   XREF to: 0050a1ad (CONDITIONAL_JUMP)
// 00509e96: FLD float ptr [ESI + 0xc]
// 00509e99: FCOMP double ptr [0x00635715]
//   XREF to: 00635715 (READ)
// 00509e9f: FNSTSW AX
// 00509ea1: SAHF
// 00509ea2: JBE 0x0050a1c7
//   XREF to: 0050a1c7 (CONDITIONAL_JUMP)
// 00509ea8: MOV EBX,0xbfb33333
//   Label: LAB_00509ea8
// 00509ead: MOV EBP,0x3e4ccccd
// 00509eb2: LEA EAX,[ESP + 0x60]
// 00509eb6: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00509ebc: MOV dword ptr [ESP + 0x60],EBX
// 00509ec0: MOV dword ptr [ESP + 0x68],EBX
// 00509ec4: LEA EBX,[ESP + 0x54]
// 00509ec8: MOV dword ptr [ESP + 0x64],EBP
// 00509ecc: FLD float ptr [EAX]
// 00509ece: FMUL float ptr [0x00660d70]
//   XREF to: 00660d70 (READ)
// 00509ed4: FISTP dword ptr [EBX]
// 00509ed6: FLD float ptr [EAX + 0x4]
// 00509ed9: FMUL float ptr [0x00660d70]
//   XREF to: 00660d70 (READ)
// 00509edf: FISTP dword ptr [EBX + 0x4]
// 00509ee2: FLD float ptr [EAX + 0x8]
// 00509ee5: FMUL float ptr [0x00660d70]
//   XREF to: 00660d70 (READ)
// 00509eeb: FISTP dword ptr [EBX + 0x8]
// 00509eee: LEA EAX,[ESP + 0x54]
// 00509ef2: PUSH EAX
// 00509ef3: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00509ef5: PUSH EAX
// 00509ef6: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00509efb: ADD ESP,0x8
// 00509efe: MOV AH,byte ptr [ESP + 0x63]
// 00509f02: XOR AH,0x80
// 00509f05: LEA EBX,[ESP + 0x48]
// 00509f09: MOV byte ptr [ESP + 0x63],AH
// 00509f0d: LEA EAX,[ESP + 0x60]
// 00509f11: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00509f17: FLD float ptr [EAX]
// 00509f19: FMUL float ptr [0x00660d70]
//   XREF to: 00660d70 (READ)
// 00509f1f: FISTP dword ptr [EBX]
// 00509f21: FLD float ptr [EAX + 0x4]
// 00509f24: FMUL float ptr [0x00660d70]
//   XREF to: 00660d70 (READ)
// 00509f2a: FISTP dword ptr [EBX + 0x4]
// 00509f2d: FLD float ptr [EAX + 0x8]
// 00509f30: FMUL float ptr [0x00660d70]
//   XREF to: 00660d70 (READ)
// 00509f36: FISTP dword ptr [EBX + 0x8]
// 00509f39: LEA EAX,[ESP + 0x48]
// 00509f3d: PUSH EAX
// 00509f3e: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00509f40: ADD EAX,0x30
// 00509f43: PUSH EAX
// 00509f44: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00509f49: ADD ESP,0x8
// 00509f4c: MOV DL,byte ptr [ESP + 0x6b]
// 00509f50: LEA EBX,[ESP + 0x6c]
// 00509f54: XOR DL,0x80
// 00509f57: LEA EAX,[ESP + 0x60]
// 00509f5b: MOV byte ptr [ESP + 0x6b],DL
// 00509f5f: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00509f65: FLD float ptr [EAX]
// 00509f67: FMUL float ptr [0x00660d70]
//   XREF to: 00660d70 (READ)
// 00509f6d: FISTP dword ptr [EBX]
// 00509f6f: FLD float ptr [EAX + 0x4]
// 00509f72: FMUL float ptr [0x00660d70]
//   XREF to: 00660d70 (READ)
// 00509f78: FISTP dword ptr [EBX + 0x4]
// 00509f7b: FLD float ptr [EAX + 0x8]
// 00509f7e: FMUL float ptr [0x00660d70]
//   XREF to: 00660d70 (READ)
// 00509f84: FISTP dword ptr [EBX + 0x8]
// 00509f87: LEA EAX,[ESP + 0x6c]
// 00509f8b: PUSH EAX
// 00509f8c: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00509f8e: ADD EAX,0x60
// 00509f91: PUSH EAX
// 00509f92: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00509f97: ADD ESP,0x8
// 00509f9a: MOV DH,byte ptr [ESP + 0x63]
// 00509f9e: LEA EBX,[ESP + 0x78]
// 00509fa2: XOR DH,0x80
// 00509fa5: LEA EAX,[ESP + 0x60]
// 00509fa9: MOV byte ptr [ESP + 0x63],DH
// 00509fad: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00509fb3: FLD float ptr [EAX]
// 00509fb5: FMUL float ptr [0x00660d70]
//   XREF to: 00660d70 (READ)
// 00509fbb: FISTP dword ptr [EBX]
// 00509fbd: FLD float ptr [EAX + 0x4]
// 00509fc0: FMUL float ptr [0x00660d70]
//   XREF to: 00660d70 (READ)
// 00509fc6: FISTP dword ptr [EBX + 0x4]
// 00509fc9: FLD float ptr [EAX + 0x8]
// 00509fcc: FMUL float ptr [0x00660d70]
//   XREF to: 00660d70 (READ)
// 00509fd2: FISTP dword ptr [EBX + 0x8]
// 00509fd5: LEA EAX,[ESP + 0x78]
// 00509fd9: PUSH EAX
// 00509fda: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00509fdc: ADD EAX,0x90
// 00509fe1: PUSH EAX
// 00509fe2: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00509fe7: ADD ESP,0x8
// 00509fea: MOV EDX,0x4
// 00509fef: MOV EAX,0x1
// 00509ff4: MOV EBX,0x2
// 00509ff9: XOR ECX,ECX
// 00509ffb: MOV dword ptr [ESP + 0x4],EDX
// 00509fff: MOV dword ptr [ESP + 0x18],ECX
// 0050a003: MOV dword ptr [ESP + 0x1c],ECX
// 0050a007: MOV dword ptr [ESP + 0x20],ECX
// 0050a00b: MOV dword ptr [ESP + 0x24],EAX
// 0050a00f: MOV dword ptr [ESP + 0x2c],ECX
// 0050a013: MOV dword ptr [ESP + 0x30],EBX
// 0050a017: MOV EDX,0x1000000
//   XREF to: 01000000 (DATA)
// 0050a01c: MOV dword ptr [ESP + 0x40],ECX
// 0050a020: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: 01000000 (DATA)
// 0050a024: MOV EBP,EDX
// 0050a026: MOV dword ptr [ESP + 0x34],EDX
//   XREF to: 01000000 (DATA)
// 0050a02a: MOV dword ptr [ESP + 0x38],EDX
//   XREF to: 01000000 (DATA)
// 0050a02e: MOV EDX,0x3
// 0050a033: MOV dword ptr [ESP + 0x44],EBP
//   XREF to: 01000000 (DATA)
// 0050a037: MOV dword ptr [ESP + 0x3c],EDX
// 0050a03b: FLD float ptr [0x0063570d]
//   XREF to: 0063570d (READ)
// 0050a041: FLD float ptr [ESI + 0xc]
// 0050a044: FMUL ST1
// 0050a046: FLD float ptr [ESI + 0x10]
// 0050a049: FMUL ST2
// 0050a04b: FLD float ptr [ESI + 0x14]
// 0050a04e: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0050a054: FMULP ST3
// 0050a056: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0050a058: FXCH
// 0050a05a: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0050a05f: FISTP dword ptr [ESP + 0x88]
// 0050a066: MOV EAX,dword ptr [ESP + 0x88]
// 0050a06d: MOV dword ptr [EBX + 0x20],EAX
// 0050a070: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0050a075: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0050a077: FISTP dword ptr [ESP + 0x8c]
// 0050a07e: MOV EAX,dword ptr [ESP + 0x8c]
// 0050a085: MOV dword ptr [EBX + 0x24],EAX
// 0050a088: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0050a08d: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0050a08f: FISTP dword ptr [ESP + 0x90]
// 0050a096: MOV EAX,dword ptr [ESP + 0x90]
// 0050a09d: MOV dword ptr [EBX + 0x28],EAX
// 0050a0a0: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0050a0a2: MOV dword ptr [EAX + 0x2c],0xffff
// 0050a0a9: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0050a0ab: MOV EAX,dword ptr [ESP + 0x88]
// 0050a0b2: MOV dword ptr [EBX + 0x50],EAX
// 0050a0b5: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0050a0b7: MOV EAX,dword ptr [ESP + 0x8c]
// 0050a0be: MOV dword ptr [EBX + 0x54],EAX
// 0050a0c1: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0050a0c3: MOV EAX,dword ptr [ESP + 0x90]
// 0050a0ca: MOV dword ptr [EBX + 0x58],EAX
// 0050a0cd: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0050a0cf: MOV dword ptr [EAX + 0x5c],0xffff
// 0050a0d6: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0050a0d8: MOV EAX,dword ptr [ESP + 0x88]
// 0050a0df: MOV dword ptr [EBX + 0x80],EAX
// 0050a0e5: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0050a0e7: MOV EAX,dword ptr [ESP + 0x8c]
// 0050a0ee: MOV dword ptr [EBX + 0x84],EAX
// 0050a0f4: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0050a0f6: MOV EAX,dword ptr [ESP + 0x90]
// 0050a0fd: MOV dword ptr [EBX + 0x88],EAX
// 0050a103: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0050a105: MOV dword ptr [EAX + 0x8c],0xffff
// 0050a10f: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0050a111: MOV EAX,dword ptr [ESP + 0x88]
// 0050a118: MOV dword ptr [EBX + 0xb0],EAX
// 0050a11e: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0050a120: MOV EAX,dword ptr [ESP + 0x8c]
// 0050a127: MOV dword ptr [EBX + 0xb4],EAX
// 0050a12d: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0050a12f: MOV EAX,dword ptr [ESP + 0x90]
// 0050a136: MOV dword ptr [EBX + 0xb8],EAX
// 0050a13c: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0050a13e: MOV dword ptr [EAX + 0xbc],0xffff
// 0050a148: LEA EAX,[EDI + 0x14c0]
// 0050a14e: PUSH EAX
// 0050a14f: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0050a150: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 0050a155: ADD ESP,0x8
// 0050a158: PUSH 0x0
// 0050a15a: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0050a160: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 0050a161: CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
//   XREF to: 0048c9f0 (UNCONDITIONAL_CALL)
// 0050a166: ADD ESP,0x8
// 0050a169: PUSH 0x1
// 0050a16b: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0050a171: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 0050a172: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 0050a177: ADD ESP,0x8
// 0050a17a: MOV EAX,ESP
// 0050a17c: PUSH EAX
// 0050a17d: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0050a183: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 0050a184: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
//   XREF to: 0048bba0 (UNCONDITIONAL_CALL)
// 0050a189: ADD ESP,0x8
// 0050a18c: PUSH 0x1
// 0050a18e: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0050a193: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0050a194: CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
//   XREF to: 0048c9f0 (UNCONDITIONAL_CALL)
// 0050a199: ADD ESP,0x8
// 0050a19c: PUSH 0x0
// 0050a19e: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0050a1a4: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0050a1a5: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 0050a1aa: ADD ESP,0x8
// 0050a1ad: MOV ECX,dword ptr [0x006703ec]
//   Label: LAB_0050a1ad
//   XREF to: 006703ec (READ)
// 0050a1b3: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0050a1b4: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 0050a1c7: FLD float ptr [ESI + 0x10]
//   Label: LAB_0050a1c7
// 0050a1ca: FCOMP double ptr [0x00635715]
//   XREF to: 00635715 (READ)
// 0050a1d0: FNSTSW AX
// 0050a1d2: SAHF
// 0050a1d3: JA 0x00509ea8
//   XREF to: 00509ea8 (CONDITIONAL_JUMP)
// 0050a1d9: FLD float ptr [ESI + 0x14]
// 0050a1dc: FCOMP double ptr [0x00635715]
//   XREF to: 00635715 (READ)
// 0050a1e2: FNSTSW AX
// 0050a1e4: SAHF
// 0050a1e5: JA 0x00509ea8
//   XREF to: 00509ea8 (CONDITIONAL_JUMP)
// 0050a1eb: JMP 0x0050a1ad
//   XREF to: 0050a1ad (UNCONDITIONAL_JUMP)
