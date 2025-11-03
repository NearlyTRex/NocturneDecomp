// Name: core_baron.cpp_CBaron_FUN_00413ae0
// Address: 00413ae0
// Address Range: [[00413ae0, 00413bd3] [00413bd7, 00413ccf]]
// Convention: __cdecl
// Signature: int core_baron.cpp_CBaron_FUN_00413ae0(CBaron * this_ptr)
// Globals:
//   undefined4 DAT_00615091
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   undefined4 DAT_008224dc
//   CKeyFramedModelInstance g_CKeyFramedModelInstanceInstance
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_02f43978
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_FUN_0052e700
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0150
//   crt_math.c_round_FUN_005fe6b0
//   engine_3d.c_setRenderAlpha_FUN_00406d80
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_baron_cpp_CBaron_FUN_00413ae0(CBaron *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  uint uVar2;
  int iVar3;
  CBoundingBox3D *this_ptr_00;
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  int unaff_EDI;
  float10 fVar4;
  int in_stack_00000014;
  float in_stack_ffffffc4;
  float fStack_2c;
  float in_stack_ffffffec;
  
  if ((*(int *)(this_ptr->field1_0x1fbd4 + 0xf8) == 0) && ((this_ptr->field0_0x0).control_type == 2)
     ) {
    return 0;
  }
  pCVar1 = &(this_ptr->field0_0x0).base_character.model;
  iVar3 = core_motion_cpp_CMotionController_FUN_0052dab0(&pCVar1->motion_controller);
  uVar2 = *(uint *)(iVar3 + 0x24);
  iVar3 = core_motion_cpp_CMotionController_FUN_0052dab0(&pCVar1->motion_controller);
  if (uVar2 < 6) {
    if (uVar2 != 5) goto LAB_00413b59;
LAB_00413b43:
    fVar4 = ((float10)in_stack_ffffffc4 * (float10)_DAT_00615091) / (float10)*(int *)(iVar3 + 100);
  }
  else {
    if (uVar2 < 7) goto LAB_00413b43;
    if (uVar2 != 7) goto LAB_00413b59;
    fVar4 = (float10)*(int *)(iVar3 + 100);
    fVar4 = ((fVar4 - (float10)in_stack_ffffffec) * (float10)_DAT_00615091) / fVar4;
  }
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,iVar3));
  unaff_EDI = (int)ROUND(fVar4);
LAB_00413b59:
  if (*(int *)(this_ptr->field1_0x1fbd4 + 0xfc) != 0) {
    engine_3d_c_setRenderAlpha_FUN_00406d80((unaff_EDI * 2) / 3);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,
               &(this_ptr->field0_0x0).base_character.base_actor.location.position);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr,(CVector3i *)&stack0xffffffd8,(CVector3i *)0x0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&g_CKeyFramedModelInstanceInstance,0.0,0x23);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
  this_ptr_00 = (*((this_ptr->field0_0x0).base_character.base_actor.vtable)->getBoundingBox)
                          ((CDemonActor *)this_ptr,(CBoundingBox3D *)&stack0xffffffd0);
  fStack_2c = 5.99082e-39;
  iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar3 != 0) {
    fStack_2c = 5.990856e-39;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
              (g_CDemonRendererPtr,in_stack_00000014);
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(g_CDemonRendererPtr,1);
    pCVar1 = &(this_ptr->field0_0x0).base_character.model;
    fStack_2c = 5.990945e-39;
    core_skeleton_cpp_CDeformableModelInstance_FUN_005a0150(pCVar1);
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(g_CDemonRendererPtr);
    if (DAT_02f43978 != 0) {
      core_motion_cpp_CMotionController_FUN_0052e700(&pCVar1->motion_controller);
    }
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
  return iVar3;
}


// Assembly code:
// 00413ae0: PUSH EBX
//   Label: core_baron.cpp_CBaron_FUN_00413ae0
// 00413ae1: PUSH ESI
// 00413ae2: PUSH EDI
// 00413ae3: PUSH EBP
// 00413ae4: MOV EBP,ESP
// 00413ae6: SUB ESP,0x34
// 00413ae9: AND ESP,0xfffffff8
// 00413aec: MOV EBX,dword ptr [EBP + 0x14]
// 00413aef: CMP dword ptr [EBX + 0x1fccc],0x0
// 00413af6: JNZ 0x00413b05
//   XREF to: 00413b05 (CONDITIONAL_JUMP)
// 00413af8: CMP dword ptr [EBX + 0xbe28],0x2
// 00413aff: JZ 0x00413c99
//   XREF to: 00413c99 (CONDITIONAL_JUMP)
// 00413b05: LEA EDI,[EBX + 0x158]
//   Label: LAB_00413b05
// 00413b0b: PUSH EDI
// 00413b0c: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00413b11: ADD ESP,0x4
// 00413b14: MOV ESI,dword ptr [EAX + 0x24]
// 00413b17: MOV EAX,dword ptr [EDI + 0x8]
// 00413b1a: PUSH EDI
// 00413b1b: MOV dword ptr [ESP + 0x30],EAX
// 00413b1f: MOV dword ptr [ESP + 0x8],EAX
// 00413b23: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00413b28: ADD ESP,0x4
// 00413b2b: FILD dword ptr [EAX + 0x64]
// 00413b2e: FSTP float ptr [ESP]
// 00413b31: CMP ESI,0x6
// 00413b34: JNC 0x00413cb8
//   XREF to: 00413cb8 (CONDITIONAL_JUMP)
// 00413b3a: CMP ESI,0x5
// 00413b3d: JNZ 0x00413cc3
//   XREF to: 00413cc3 (CONDITIONAL_JUMP)
// 00413b43: FLD float ptr [ESP + 0x4]
//   Label: LAB_00413b43
// 00413b47: FMUL double ptr [0x00615091]
//   XREF to: 00615091 (READ)
// 00413b4d: FDIV float ptr [ESP]
// 00413b50: CALL crt_math.c_round_FUN_005fe6b0
//   Label: LAB_00413b50
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00413b55: FISTP dword ptr [ESP + 0x30]
// 00413b59: CMP dword ptr [EBX + 0x1fcd0],0x0
//   Label: LAB_00413b59
// 00413b60: JZ 0x00413bd7
//   XREF to: 00413bd7 (CONDITIONAL_JUMP)
// 00413b62: MOV EDX,dword ptr [ESP + 0x30]
// 00413b66: ADD EDX,EDX
// 00413b68: MOV ESI,0x3
// 00413b6d: MOV EAX,EDX
// 00413b6f: SAR EDX,0x1f
// 00413b72: IDIV ESI
// 00413b74: PUSH EAX
// 00413b75: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 00413b7a: ADD ESP,0x4
// 00413b7d: LEA EAX,[EBX + 0x20]
// 00413b80: PUSH EAX
// 00413b81: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00413b86: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00413b87: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 00413b8c: ADD ESP,0x8
// 00413b8f: XOR EDX,EDX
// 00413b91: MOV EAX,[0x008224dc]
//   XREF to: 008224dc (READ)
// 00413b96: PUSH EDX
// 00413b97: MOV dword ptr [ESP + 0x28],EAX
// 00413b9b: LEA EAX,[ESP + 0x24]
// 00413b9f: PUSH EAX
// 00413ba0: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00413ba6: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00413ba7: MOV dword ptr [ESP + 0x2c],EDX
// 00413bab: MOV dword ptr [ESP + 0x34],EDX
// 00413baf: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 00413bb4: ADD ESP,0xc
// 00413bb7: PUSH 0x23
// 00413bb9: PUSH 0x0
// 00413bbb: PUSH 0x82251c
//   XREF to: 0082251c (DATA)
// 00413bc0: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 00413bc5: ADD ESP,0xc
// 00413bc8: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00413bce: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 00413bcf: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 00413bd7: PUSH EBX
//   Label: LAB_00413bd7
// 00413bd8: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 00413bdd: ADD ESP,0x4
// 00413be0: LEA EAX,[ESP + 0x8]
// 00413be4: PUSH EAX
// 00413be5: MOV EDX,dword ptr [EBX + 0x154]
// 00413beb: PUSH EBX
// 00413bec: CALL dword ptr [EDX + 0x14]
// 00413bef: ADD ESP,0x8
// 00413bf2: PUSH EAX
// 00413bf3: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 00413bf8: ADD ESP,0x4
// 00413bfb: MOV EDI,EAX
// 00413bfd: TEST EAX,EAX
// 00413bff: JZ 0x00413c87
//   XREF to: 00413c87 (CONDITIONAL_JUMP)
// 00413c05: PUSH 0x1
// 00413c07: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00413c0c: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00413c0d: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 00413c12: ADD ESP,0x8
// 00413c15: MOV EDX,dword ptr [ESP + 0x30]
// 00413c19: PUSH EDX
// 00413c1a: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00413c20: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00413c21: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 00413c26: ADD ESP,0x8
// 00413c29: PUSH 0x1
// 00413c2b: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00413c31: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00413c32: CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0
//   XREF to: 0048d6c0 (UNCONDITIONAL_CALL)
// 00413c37: ADD ESP,0x8
// 00413c3a: PUSH 0x0
// 00413c3c: PUSH 0x1
// 00413c3e: PUSH 0x2e7
// 00413c43: PUSH -0x1
// 00413c45: LEA ESI,[EBX + 0x158]
// 00413c4b: PUSH ESI
// 00413c4c: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0150
//   XREF to: 005a0150 (UNCONDITIONAL_CALL)
// 00413c51: ADD ESP,0x14
// 00413c54: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00413c59: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00413c5a: CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80
//   XREF to: 0048da80 (UNCONDITIONAL_CALL)
// 00413c5f: MOV EDX,dword ptr [0x02f43978]
//   XREF to: 02f43978 (READ)
// 00413c65: ADD ESP,0x4
// 00413c68: TEST EDX,EDX
// 00413c6a: JZ 0x00413c76
//   XREF to: 00413c76 (CONDITIONAL_JUMP)
// 00413c6c: PUSH EBX
// 00413c6d: PUSH ESI
// 00413c6e: CALL core_motion.cpp_CMotionController_FUN_0052e700
//   XREF to: 0052e700 (UNCONDITIONAL_CALL)
// 00413c73: ADD ESP,0x8
// 00413c76: PUSH 0x0
//   Label: LAB_00413c76
// 00413c78: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00413c7e: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00413c7f: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 00413c84: ADD ESP,0x8
// 00413c87: PUSH EBX
//   Label: LAB_00413c87
// 00413c88: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 00413c8d: ADD ESP,0x4
// 00413c90: MOV EAX,EDI
// 00413c92: MOV ESP,EBP
// 00413c94: POP EBP
// 00413c95: POP EDI
// 00413c96: POP ESI
// 00413c97: POP EBX
// 00413c98: RET
// 00413c99: XOR EAX,EAX
//   Label: LAB_00413c99
// 00413c9b: MOV ESP,EBP
// 00413c9d: POP EBP
// 00413c9e: POP EDI
// 00413c9f: POP ESI
// 00413ca0: POP EBX
// 00413ca1: RET
// 00413ca2: FLD float ptr [ESP]
//   Label: LAB_00413ca2
// 00413ca5: FLD ST0
// 00413ca7: FSUB float ptr [ESP + 0x2c]
// 00413cab: FMUL double ptr [0x00615091]
//   XREF to: 00615091 (READ)
// 00413cb1: FDIVRP
// 00413cb3: JMP 0x00413b50
//   XREF to: 00413b50 (UNCONDITIONAL_JUMP)
// 00413cb8: JBE 0x00413b43
//   Label: LAB_00413cb8
//   XREF to: 00413b43 (CONDITIONAL_JUMP)
// 00413cbe: CMP ESI,0x7
// 00413cc1: JZ 0x00413ca2
//   XREF to: 00413ca2 (CONDITIONAL_JUMP)
// 00413cc3: MOV dword ptr [ESP + 0x30],0xfde8
//   Label: LAB_00413cc3
// 00413ccb: JMP 0x00413b59
//   XREF to: 00413b59 (UNCONDITIONAL_JUMP)
