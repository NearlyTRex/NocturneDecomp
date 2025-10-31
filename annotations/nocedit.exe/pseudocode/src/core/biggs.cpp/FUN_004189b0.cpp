// Name: core_biggs.cpp_FUN_004189b0
// Address: 004189b0
// Address Range: [[004189b0, 00418abc]]
// Convention: unknown
// Signature: undefined core_biggs.cpp_FUN_004189b0()
// Globals:
//   undefined4 DAT_0065ac10
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_02f43978
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_charactr.cpp_CCharacter_FUN_00429aa0
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_morph.cpp_CallToCallToMorphAnimate_FUN_0052b640
//   core_morph.cpp_FUN_0052b600
//   core_morph.cpp_MorphModelRotatePointsTwice_FUN_0052bae0
//   core_motion.cpp_CMotionController_FUN_0052e700
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_biggs.cpp_FUN_004189b0(undefined4 param_1) */

int core_biggs_cpp_FUN_004189b0(void)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  CCharacter *in_stack_00000004;
  CCharacter *pCStack_1c;
  
  if (*(int *)in_stack_00000004->field2_0x240c != 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&in_stack_00000004->base_actor);
  this_ptr = (*((in_stack_00000004->base_actor).metadata.vtable)->getBoundingBox)
                       (&in_stack_00000004->base_actor,(CBoundingBox3D *)&pCStack_1c);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  if (iVar1 != 0) {
    iVar2 = *(int *)(in_stack_00000004[1].model.padding_0x0 + 0xbc);
    in_stack_00000004->field13_0x2620[0] = '\x01';
    in_stack_00000004->field13_0x2620[1] = '\0';
    in_stack_00000004->field13_0x2620[2] = '\0';
    in_stack_00000004->field13_0x2620[3] = '\0';
    if (iVar2 == 0) {
      core_charactr_cpp_CCharacter_FUN_00429aa0(in_stack_00000004);
    }
    else {
      pCStack_1c = (CCharacter *)(in_stack_00000004[1].model.padding_0x0 + 0xc4);
      core_morph_cpp_FUN_0052b600();
      pCStack_1c = (CCharacter *)0x0;
      pCStack_1c = (CCharacter *)
                   core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                             ((CKeyFramedModelInstance *)
                              (in_stack_00000004[1].base_actor.create_event + 0x20));
      core_morph_cpp_CallToCallToMorphAnimate_FUN_0052b640();
      core_morph_cpp_MorphModelRotatePointsTwice_FUN_0052bae0();
    }
    if (DAT_02f43978 != 0) {
      iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
      if (iVar2 == 0) {
        pCStack_1c = in_stack_00000004;
        core_motion_cpp_CMotionController_FUN_0052e700();
        pCStack_1c = (CCharacter *)0x418a9c;
        (*((in_stack_00000004->base_actor).metadata.vtable)->renderTargetPoints)
                  (&in_stack_00000004->base_actor);
      }
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&in_stack_00000004->base_actor);
  return iVar1;
}


// Assembly code:
// 004189b0: PUSH EBX
//   Label: core_biggs.cpp_FUN_004189b0
// 004189b1: PUSH EBP
// 004189b2: SUB ESP,0x18
// 004189b5: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 004189b9: CMP dword ptr [EBX + 0x240c],0x0
// 004189c0: JZ 0x004189ca
//   XREF to: 004189ca (CONDITIONAL_JUMP)
// 004189c2: XOR EAX,EAX
// 004189c4: ADD ESP,0x18
// 004189c7: POP EBP
// 004189c8: POP EBX
// 004189c9: RET
// 004189ca: PUSH EDI
//   Label: LAB_004189ca
// 004189cb: PUSH ESI
// 004189cc: PUSH EBX
// 004189cd: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 004189d2: ADD ESP,0x4
// 004189d5: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x20] (DATA)
// 004189d9: PUSH ESI
// 004189da: MOV EAX,dword ptr [EBX + 0x154]
// 004189e0: PUSH EBX
// 004189e1: CALL dword ptr [EAX + 0x14]
// 004189e4: ADD ESP,0x8
// 004189e7: PUSH EAX
// 004189e8: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 004189ed: ADD ESP,0x4
// 004189f0: MOV EDI,EAX
// 004189f2: TEST EAX,EAX
// 004189f4: JZ 0x00418a9f
//   XREF to: 00418a9f (CONDITIONAL_JUMP)
// 004189fa: MOV ECX,dword ptr [EBX + 0xc038]
// 00418a00: MOV dword ptr [EBX + 0x2620],0x1
// 00418a0a: TEST ECX,ECX
// 00418a0c: JZ 0x00418ab2
//   XREF to: 00418ab2 (CONDITIONAL_JUMP)
// 00418a12: PUSH 0x0
// 00418a14: LEA EAX,[EBX + 0x158]
// 00418a1a: PUSH EAX
// 00418a1b: PUSH 0x0
// 00418a1d: LEA ESI,[EBX + 0xc040]
// 00418a23: PUSH ESI
// 00418a24: CALL core_morph.cpp_FUN_0052b600
//   XREF to: 0052b600 (UNCONDITIONAL_CALL)
// 00418a29: ADD ESP,0x10
// 00418a2c: PUSH 0x0
// 00418a2e: PUSH 0x0
// 00418a30: LEA EAX,[EBX + 0xbebc]
// 00418a36: PUSH EAX
// 00418a37: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00418a3c: ADD ESP,0x4
// 00418a3f: PUSH EAX
// 00418a40: PUSH 0x1
// 00418a42: PUSH ESI
// 00418a43: CALL core_morph.cpp_CallToCallToMorphAnimate_FUN_0052b640
//   XREF to: 0052b640 (UNCONDITIONAL_CALL)
// 00418a48: FLD float ptr [EBX + 0xc03c]
// 00418a4e: FDIV float ptr [0x0065ac10]
//   XREF to: 0065ac10 (READ)
// 00418a54: ADD ESP,0x14
// 00418a57: SUB ESP,0x4
// 00418a5a: FSTP float ptr [ESP]
// 00418a5d: PUSH ESI
// 00418a5e: CALL core_morph.cpp_MorphModelRotatePointsTwice_FUN_0052bae0
//   XREF to: 0052bae0 (UNCONDITIONAL_CALL)
// 00418a63: ADD ESP,0x8
// 00418a66: CMP dword ptr [0x02f43978],0x0
//   Label: LAB_00418a66
//   XREF to: 02f43978 (READ)
// 00418a6d: JZ 0x00418a9f
//   XREF to: 00418a9f (CONDITIONAL_JUMP)
// 00418a6f: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00418a75: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 00418a76: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 00418a7b: ADD ESP,0x4
// 00418a7e: TEST EAX,EAX
// 00418a80: JNZ 0x00418a9f
//   XREF to: 00418a9f (CONDITIONAL_JUMP)
// 00418a82: PUSH EBX
// 00418a83: LEA EAX,[EBX + 0x158]
// 00418a89: PUSH EAX
// 00418a8a: CALL core_motion.cpp_CMotionController_FUN_0052e700
//   XREF to: 0052e700 (UNCONDITIONAL_CALL)
// 00418a8f: ADD ESP,0x8
// 00418a92: MOV EAX,dword ptr [EBX + 0x154]
// 00418a98: PUSH EBX
// 00418a99: CALL dword ptr [EAX + 0x50]
// 00418a9c: ADD ESP,0x4
// 00418a9f: PUSH EBX
//   Label: LAB_00418a9f
// 00418aa0: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 00418aa5: ADD ESP,0x4
// 00418aa8: MOV EAX,EDI
// 00418aaa: POP ESI
// 00418aab: POP EDI
// 00418aac: ADD ESP,0x18
// 00418aaf: POP EBP
// 00418ab0: POP EBX
// 00418ab1: RET
// 00418ab2: PUSH EBX
//   Label: LAB_00418ab2
// 00418ab3: CALL core_charactr.cpp_CCharacter_FUN_00429aa0
//   XREF to: 00429aa0 (UNCONDITIONAL_CALL)
// 00418ab8: ADD ESP,0x4
// 00418abb: JMP 0x00418a66
//   XREF to: 00418a66 (UNCONDITIONAL_JUMP)
