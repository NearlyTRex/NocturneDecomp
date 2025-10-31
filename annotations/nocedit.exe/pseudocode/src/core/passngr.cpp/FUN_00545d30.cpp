// Name: core_passngr.cpp_FUN_00545d30
// Address: 00545d30
// Address Range: [[00545d30, 00545ee7]]
// Convention: unknown
// Signature: undefined core_passngr.cpp_FUN_00545d30()
// Globals:
//   TerminatedCString s_CWerewolf_0063e7c4
//   TerminatedCString s_transform_0063e7ce
// Function calls:
//   core_actor.cpp_createActorByName_FUN_0040c430
//   core_morph.cpp_CallToFreeSomething1_FUN_0052b430
//   core_morph.cpp_CMorph_getReady_FUN_0052b680
//   core_motion.cpp_CMotionController_FUN_0052dde0
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   core_npc.cpp_CNPC_FUN_00544870
//   core_skeleton.cpp_CDeformableModel_GetModelPtrSomethingMaybe_FUN_0059df80
//   core_skeleton.cpp_CDeformableModelInstance_CallToLoadSkeletonDeformable_FUN_005a0450
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e000
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb40
//   core_skeleton.cpp_FUN_005a0840

#include "nocturne.h"

/* Signature: undefined1 actors_npc_passenger.cpp_FUN_00545d30(undefined4 param_1) */

void core_passngr_cpp_FUN_00545d30(void)

{
  COrientation *pCVar1;
  char cVar2;
  int iVar3;
  CCharacter *pCVar4;
  CDemonActor *pCVar5;
  char *pcVar6;
  CNPC *in_stack_00000004;
  
  core_npc_cpp_CNPC_FUN_00544870(in_stack_00000004);
  if (in_stack_00000004[1].base_character.base_actor.scale.x == 0) {
    pCVar5 = core_actor_cpp_createActorByName_FUN_0040c430("CWerewolf");
    pcVar6 = in_stack_00000004[1].base_character.base_actor.create_event + 0xc;
    in_stack_00000004[1].base_character.base_actor.scale.x = (int)pCVar5;
    do {
      cVar2 = *pcVar6;
      pCVar5->actor_name[0] = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pCVar5->actor_name[1] = cVar2;
      pCVar5 = (CDemonActor *)(pCVar5->actor_name + 2);
    } while (cVar2 != '\0');
    iVar3 = in_stack_00000004[1].base_character.base_actor.scale.x;
    *(float *)(iVar3 + 0x20) = (in_stack_00000004->base_character).base_actor.location.position.x;
    *(float *)(iVar3 + 0x24) = (in_stack_00000004->base_character).base_actor.location.position.y;
    *(float *)(iVar3 + 0x28) = (in_stack_00000004->base_character).base_actor.location.position.z;
    *(int *)(iVar3 + 0x2c) = (in_stack_00000004->base_character).base_actor.location.area_id;
    iVar3 = in_stack_00000004[1].base_character.base_actor.scale.x;
    pCVar1 = &(in_stack_00000004->base_character).base_actor.orient;
    if ((COrientation *)(iVar3 + 0x30) != pCVar1) {
      *(float *)(iVar3 + 0x30) = pCVar1->pitch;
      *(float *)(iVar3 + 0x34) = (in_stack_00000004->base_character).base_actor.orient.bank;
      *(float *)(iVar3 + 0x38) = (in_stack_00000004->base_character).base_actor.orient.heading;
    }
    core_skeleton_cpp_FUN_005a0840();
    *(undefined4 *)(in_stack_00000004[1].base_character.base_actor.scale.x + 0x261c) =
         *(undefined4 *)(in_stack_00000004[1].base_character.model.padding_0x0 + 0xbe4);
    (*(code *)**(undefined4 **)(in_stack_00000004[1].base_character.base_actor.scale.x + 0x154))();
    core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0();
    core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460();
    core_motion_cpp_CMotionController_FUN_0052dde0();
  }
  core_skeleton_cpp_CDeformableModel_GetModelPtrSomethingMaybe_FUN_0059df80();
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb40();
  core_skeleton_cpp_CDeformableModel_GetModelPtrSomethingMaybe_FUN_0059df80();
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb40();
  core_skeleton_cpp_CDeformableModelInstance_CallToLoadSkeletonDeformable_FUN_005a0450();
  core_morph_cpp_CallToFreeSomething1_FUN_0052b430();
  core_morph_cpp_CallToFreeSomething1_FUN_0052b430();
  core_morph_cpp_CMorph_getReady_FUN_0052b680();
  pCVar4 = &in_stack_00000004[1].base_character;
  (pCVar4->model).padding_0x0[0xbe0] = '\0';
  (pCVar4->model).padding_0x0[0xbe1] = '\0';
  (pCVar4->model).padding_0x0[0xbe2] = '\0';
  (pCVar4->model).padding_0x0[0xbe3] = '\0';
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059e000();
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059e000();
  return;
}


// Assembly code:
// 00545d30: PUSH EBX
//   Label: core_passngr.cpp_FUN_00545d30
// 00545d31: PUSH ESI
// 00545d32: PUSH EDI
// 00545d33: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00545d37: PUSH EBX
// 00545d38: CALL core_npc.cpp_CNPC_FUN_00544870
//   XREF to: 00544870 (UNCONDITIONAL_CALL)
// 00545d3d: MOV EDX,dword ptr [EBX + 0x1f810]
// 00545d43: ADD ESP,0x4
// 00545d46: TEST EDX,EDX
// 00545d48: JZ 0x00545df4
//   XREF to: 00545df4 (CONDITIONAL_JUMP)
// 00545d4e: MOV EAX,dword ptr [EBX + 0x1f810]
//   Label: LAB_00545d4e
// 00545d54: ADD EAX,0x158
// 00545d59: PUSH EAX
// 00545d5a: CALL core_skeleton.cpp_CDeformableModel_GetModelPtrSomethingMaybe_FUN_0059df80
//   XREF to: 0059df80 (UNCONDITIONAL_CALL)
// 00545d5f: MOV EAX,dword ptr [EBX + 0x1f810]
// 00545d65: ADD ESP,0x4
// 00545d68: ADD EAX,0x158
// 00545d6d: PUSH EAX
// 00545d6e: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb40
//   XREF to: 0059fb40 (UNCONDITIONAL_CALL)
// 00545d73: ADD ESP,0x4
// 00545d76: LEA ESI,[EBX + 0x158]
// 00545d7c: PUSH ESI
// 00545d7d: CALL core_skeleton.cpp_CDeformableModel_GetModelPtrSomethingMaybe_FUN_0059df80
//   XREF to: 0059df80 (UNCONDITIONAL_CALL)
// 00545d82: ADD ESP,0x4
// 00545d85: PUSH ESI
// 00545d86: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb40
//   XREF to: 0059fb40 (UNCONDITIONAL_CALL)
// 00545d8b: ADD ESP,0x4
// 00545d8e: PUSH ESI
// 00545d8f: CALL core_skeleton.cpp_CDeformableModelInstance_CallToLoadSkeletonDeformable_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 00545d94: ADD ESP,0x4
// 00545d97: PUSH ESI
// 00545d98: PUSH 0x0
// 00545d9a: LEA EDI,[EBX + 0x1f814]
// 00545da0: PUSH EDI
// 00545da1: CALL core_morph.cpp_CallToFreeSomething1_FUN_0052b430
//   XREF to: 0052b430 (UNCONDITIONAL_CALL)
// 00545da6: MOV EAX,dword ptr [EBX + 0x1f810]
// 00545dac: ADD ESP,0xc
// 00545daf: ADD EAX,0x158
// 00545db4: PUSH EAX
// 00545db5: PUSH 0x1
// 00545db7: PUSH EDI
// 00545db8: CALL core_morph.cpp_CallToFreeSomething1_FUN_0052b430
//   XREF to: 0052b430 (UNCONDITIONAL_CALL)
// 00545dbd: ADD ESP,0xc
// 00545dc0: PUSH EDI
// 00545dc1: CALL core_morph.cpp_CMorph_getReady_FUN_0052b680
//   XREF to: 0052b680 (UNCONDITIONAL_CALL)
// 00545dc6: ADD ESP,0x4
// 00545dc9: PUSH ESI
// 00545dca: MOV dword ptr [EBX + 0x20440],0x0
// 00545dd4: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059e000
//   XREF to: 0059e000 (UNCONDITIONAL_CALL)
// 00545dd9: MOV EAX,dword ptr [EBX + 0x1f810]
// 00545ddf: ADD ESP,0x4
// 00545de2: ADD EAX,0x158
// 00545de7: PUSH EAX
// 00545de8: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059e000
//   XREF to: 0059e000 (UNCONDITIONAL_CALL)
// 00545ded: ADD ESP,0x4
// 00545df0: POP EDI
// 00545df1: POP ESI
// 00545df2: POP EBX
// 00545df3: RET
// 00545df4: PUSH 0x63e7c4
//   Label: LAB_00545df4
//   XREF to: 0063e7c4 (DATA)
// 00545df9: CALL core_actor.cpp_createActorByName_FUN_0040c430
//   XREF to: 0040c430 (UNCONDITIONAL_CALL)
// 00545dfe: LEA ESI,[EBX + 0x1f78c]
// 00545e04: ADD ESP,0x4
// 00545e07: MOV EDI,EAX
// 00545e09: MOV dword ptr [EBX + 0x1f810],EAX
// 00545e0f: PUSH EDI
// 00545e10: MOV AL,byte ptr [ESI]
//   Label: LAB_00545e10
// 00545e12: MOV byte ptr [EDI],AL
// 00545e14: CMP AL,0x0
// 00545e16: JZ 0x00545e28
//   XREF to: 00545e28 (CONDITIONAL_JUMP)
// 00545e18: MOV AL,byte ptr [ESI + 0x1]
// 00545e1b: ADD ESI,0x2
// 00545e1e: MOV byte ptr [EDI + 0x1],AL
// 00545e21: ADD EDI,0x2
// 00545e24: CMP AL,0x0
// 00545e26: JNZ 0x00545e10
//   XREF to: 00545e10 (CONDITIONAL_JUMP)
// 00545e28: POP EDI
//   Label: LAB_00545e28
// 00545e29: LEA ESI,[EBX + 0x20]
// 00545e2c: MOV EAX,dword ptr [EBX + 0x1f810]
// 00545e32: MOV EDX,dword ptr [ESI]
// 00545e34: MOV dword ptr [EAX + 0x20],EDX
// 00545e37: MOV EDX,dword ptr [ESI + 0x4]
// 00545e3a: MOV dword ptr [EAX + 0x24],EDX
// 00545e3d: MOV EDX,dword ptr [ESI + 0x8]
// 00545e40: MOV dword ptr [EAX + 0x28],EDX
// 00545e43: MOV ESI,dword ptr [ESI + 0xc]
// 00545e46: MOV dword ptr [EAX + 0x2c],ESI
// 00545e49: MOV EAX,dword ptr [EBX + 0x1f810]
// 00545e4f: LEA ESI,[EBX + 0x30]
// 00545e52: ADD EAX,0x30
// 00545e55: CMP EAX,ESI
// 00545e57: JZ 0x00545e69
//   XREF to: 00545e69 (CONDITIONAL_JUMP)
// 00545e59: MOV EDX,dword ptr [ESI]
// 00545e5b: MOV dword ptr [EAX],EDX
// 00545e5d: MOV EDX,dword ptr [ESI + 0x4]
// 00545e60: MOV dword ptr [EAX + 0x4],EDX
// 00545e63: MOV EDX,dword ptr [ESI + 0x8]
// 00545e66: MOV dword ptr [EAX + 0x8],EDX
// 00545e69: LEA EAX,[EBX + 0x1f76c]
//   Label: LAB_00545e69
// 00545e6f: PUSH EAX
// 00545e70: MOV EAX,dword ptr [EBX + 0x1f810]
// 00545e76: ADD EAX,0x158
// 00545e7b: PUSH EAX
// 00545e7c: CALL core_skeleton.cpp_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 00545e81: MOV EAX,dword ptr [EBX + 0x1f810]
// 00545e87: FLD float ptr [EBX + 0x20444]
// 00545e8d: ADD ESP,0x8
// 00545e90: FSTP float ptr [EAX + 0x261c]
// 00545e96: MOV EAX,dword ptr [EBX + 0x1f810]
// 00545e9c: PUSH EAX
// 00545e9d: MOV ESI,dword ptr [EAX + 0x154]
// 00545ea3: CALL dword ptr [ESI]
// 00545ea5: ADD ESP,0x4
// 00545ea8: PUSH 0x1
// 00545eaa: MOV EAX,dword ptr [EBX + 0x1f810]
// 00545eb0: PUSH 0x63e7ce
//   XREF to: 0063e7ce (DATA)
// 00545eb5: ADD EAX,0x158
// 00545eba: PUSH EAX
// 00545ebb: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 00545ec0: ADD ESP,0x4
// 00545ec3: PUSH EAX
// 00545ec4: CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   XREF to: 0052d460 (UNCONDITIONAL_CALL)
// 00545ec9: ADD ESP,0xc
// 00545ecc: PUSH 0x0
// 00545ece: PUSH EAX
// 00545ecf: MOV EAX,dword ptr [EBX + 0x1f810]
// 00545ed5: ADD EAX,0x158
// 00545eda: PUSH EAX
// 00545edb: CALL core_motion.cpp_CMotionController_FUN_0052dde0
//   XREF to: 0052dde0 (UNCONDITIONAL_CALL)
// 00545ee0: ADD ESP,0xc
// 00545ee3: JMP 0x00545d4e
//   XREF to: 00545d4e (UNCONDITIONAL_JUMP)
