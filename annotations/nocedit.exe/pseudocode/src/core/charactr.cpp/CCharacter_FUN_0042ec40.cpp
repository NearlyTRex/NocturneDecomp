// Name: core_charactr.cpp_CCharacter_FUN_0042ec40
// Address: 0042ec40
// Address Range: [[0042ec40, 0042edd5]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042ec40(CCharacter * this_ptr)
// Cross-references:
//   core_batcreat.cpp_CBatCreature_process_FUN_00415470 (00415470) at 00415693 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 00416ac1 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_CBiggs_FUN_00418700 (00418700) at 00418958 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c322 [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00423a30 (00423a30) at 00423bd3 [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_00440430 (00440430) at 00440484 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444310 (00444310) at 00444564 [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_process_FUN_0047f140 (0047f140) at 0047f3ab [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 00484623 [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ec70 (0048ec70) at 0048ef3f [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4890 (004d4890) at 004d4c7f [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk6_FUN_004e4a00 (004e4a00) at 004e4a70 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e6f73 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f1970 (004f1970) at 004f1a99 [UNCONDITIONAL_CALL]
//   core_hiram.cpp_FUN_004f4550 (004f4550) at 004f4653 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f4ca3 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f6f20 (004f6f20) at 004f713c [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f93a0 (004f93a0) at 004f9481 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9c30 (004f9c30) at 004f9cc5 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 005259fb [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_00528d20 (00528d20) at 00528dac [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_process_FUN_005448b0 (005448b0) at 00544920 [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_00545ef0 (00545ef0) at 00545f97 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00557d20 (00557d20) at 00557d49 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568030 (00568030) at 00568403 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a2800 (005a2800) at 005a2915 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bdd20 (005bdd20) at 005be3e0 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_process_FUN_005c6e90 (005c6e90) at 005c6f3a [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_MotionControllerAdvance_ParentBones_FUN_005d9970 (005d9970) at 005d99ed [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 (005efde0) at 005efe68 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005f9543 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_Bip01_L_Foot_006175f2
//   TerminatedCString s_Bip01_R_Foot_006175ff
//   TerminatedCString s_Bip01_L_Foot_0061760c
//   TerminatedCString s_Bip01_R_Foot_00617619
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042ec40(CCharacter *this_ptr)

{
  CDemonActor_vtable *pCVar1;
  int iVar2;
  CVector3f *pCVar3;
  uint in_stack_00000008;
  float in_stack_ffffffcc;
  
  if (in_stack_00000008 < 7) {
    if ((in_stack_00000008 == 1) && (*(int *)(this_ptr->field2_0x240c + 4) != 0)) {
      core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820();
      iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
      if (-1 < iVar2) {
        pCVar1 = (this_ptr->base_actor).metadata.vtable;
        pCVar3 = (CVector3f *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fa20();
        (*pCVar1->processFootstepAtOffset)(&this_ptr->base_actor,pCVar3,in_stack_ffffffcc);
        return;
      }
    }
  }
  else if (in_stack_00000008 < 8) {
    if (*(int *)(this_ptr->field2_0x240c + 4) != 0) {
      core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820();
      iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
      if (-1 < iVar2) {
        pCVar1 = (this_ptr->base_actor).metadata.vtable;
        pCVar3 = (CVector3f *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fa20();
        (*pCVar1->processFootstepAtOffset)(&this_ptr->base_actor,pCVar3,in_stack_ffffffcc);
        return;
      }
    }
  }
  else if (0x1e < in_stack_00000008) {
    if (in_stack_00000008 < 0x20) {
      if (*(int *)(this_ptr->field2_0x240c + 4) != 0) {
        core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820();
        iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
        if (-1 < iVar2) {
          pCVar1 = (this_ptr->base_actor).metadata.vtable;
          pCVar3 = (CVector3f *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fa20();
          (*pCVar1->processFootstepAtOffset)(&this_ptr->base_actor,pCVar3,in_stack_ffffffcc);
          return;
        }
      }
    }
    else {
      if (in_stack_00000008 != 0x25) {
        return;
      }
      if (*(int *)(this_ptr->field2_0x240c + 4) != 0) {
        core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820();
        iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
        if (-1 < iVar2) {
          pCVar1 = (this_ptr->base_actor).metadata.vtable;
          pCVar3 = (CVector3f *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fa20();
          (*pCVar1->processFootstepAtOffset)(&this_ptr->base_actor,pCVar3,in_stack_ffffffcc);
          return;
        }
      }
    }
  }
  return;
}


// Assembly code:
// 0042ec40: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042ec40
// 0042ec41: PUSH ESI
// 0042ec42: PUSH EDI
// 0042ec43: SUB ESP,0x30
// 0042ec46: MOV EBX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 0042ec4a: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x8] (READ)
// 0042ec4e: LEA ESI,[EBX + 0x158]
// 0042ec54: CMP EAX,0x7
// 0042ec57: JNC 0x0042edb5
//   XREF to: 0042edb5 (CONDITIONAL_JUMP)
// 0042ec5d: CMP EAX,0x1
// 0042ec60: JNZ 0x0042ec6b
//   XREF to: 0042ec6b (CONDITIONAL_JUMP)
// 0042ec62: CMP dword ptr [EBX + 0x2410],0x0
// 0042ec69: JNZ 0x0042ec72
//   XREF to: 0042ec72 (CONDITIONAL_JUMP)
// 0042ec6b: ADD ESP,0x30
//   Label: LAB_0042ec6b
// 0042ec6e: POP EDI
// 0042ec6f: POP ESI
// 0042ec70: POP EBX
// 0042ec71: RET
// 0042ec72: PUSH 0x0
//   Label: LAB_0042ec72
// 0042ec74: PUSH 0x6175f2
//   XREF to: 006175f2 (DATA)
// 0042ec79: PUSH ESI
// 0042ec7a: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0042ec7f: ADD ESP,0x4
// 0042ec82: PUSH EAX
// 0042ec83: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0042ec88: ADD ESP,0xc
// 0042ec8b: TEST EAX,EAX
// 0042ec8d: JL 0x0042ec6b
//   XREF to: 0042ec6b (CONDITIONAL_JUMP)
// 0042ec8f: PUSH 0x3f800000
// 0042ec94: PUSH EAX
// 0042ec95: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x3c] (DATA)
// 0042ec99: PUSH EAX
// 0042ec9a: PUSH ESI
// 0042ec9b: MOV EDI,dword ptr [EBX + 0x154]
// 0042eca1: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 0042eca6: ADD ESP,0xc
// 0042eca9: PUSH EAX
// 0042ecaa: PUSH EBX
// 0042ecab: CALL dword ptr [EDI + 0x1c]
// 0042ecae: ADD ESP,0xc
// 0042ecb1: ADD ESP,0x30
// 0042ecb4: POP EDI
// 0042ecb5: POP ESI
// 0042ecb6: POP EBX
// 0042ecb7: RET
// 0042ecb8: CMP dword ptr [EBX + 0x2410],0x0
//   Label: LAB_0042ecb8
// 0042ecbf: JZ 0x0042ec6b
//   XREF to: 0042ec6b (CONDITIONAL_JUMP)
// 0042ecc1: PUSH 0x0
// 0042ecc3: PUSH 0x6175ff
//   XREF to: 006175ff (DATA)
// 0042ecc8: PUSH ESI
// 0042ecc9: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0042ecce: ADD ESP,0x4
// 0042ecd1: PUSH EAX
// 0042ecd2: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0042ecd7: ADD ESP,0xc
// 0042ecda: TEST EAX,EAX
// 0042ecdc: JL 0x0042ec6b
//   XREF to: 0042ec6b (CONDITIONAL_JUMP)
// 0042ecde: PUSH 0x3f800000
// 0042ece3: PUSH EAX
// 0042ece4: LEA EAX,[ESP + 0x2c]
//   XREF to: Stack[-0x18] (DATA)
// 0042ece8: PUSH EAX
// 0042ece9: PUSH ESI
// 0042ecea: MOV EDI,dword ptr [EBX + 0x154]
// 0042ecf0: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 0042ecf5: ADD ESP,0xc
// 0042ecf8: PUSH EAX
// 0042ecf9: PUSH EBX
// 0042ecfa: CALL dword ptr [EDI + 0x1c]
// 0042ecfd: ADD ESP,0xc
// 0042ed00: ADD ESP,0x30
// 0042ed03: POP EDI
// 0042ed04: POP ESI
// 0042ed05: POP EBX
// 0042ed06: RET
// 0042ed07: CMP dword ptr [EBX + 0x2410],0x0
//   Label: LAB_0042ed07
// 0042ed0e: JZ 0x0042ec6b
//   XREF to: 0042ec6b (CONDITIONAL_JUMP)
// 0042ed14: PUSH 0x0
// 0042ed16: PUSH 0x61760c
//   XREF to: 0061760c (DATA)
// 0042ed1b: PUSH ESI
// 0042ed1c: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0042ed21: ADD ESP,0x4
// 0042ed24: PUSH EAX
// 0042ed25: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0042ed2a: ADD ESP,0xc
// 0042ed2d: TEST EAX,EAX
// 0042ed2f: JL 0x0042ec6b
//   XREF to: 0042ec6b (CONDITIONAL_JUMP)
// 0042ed35: PUSH 0x3fd9999a
// 0042ed3a: PUSH EAX
// 0042ed3b: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x24] (DATA)
// 0042ed3f: PUSH EAX
// 0042ed40: PUSH ESI
// 0042ed41: MOV EDI,dword ptr [EBX + 0x154]
// 0042ed47: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 0042ed4c: ADD ESP,0xc
// 0042ed4f: PUSH EAX
// 0042ed50: PUSH EBX
// 0042ed51: CALL dword ptr [EDI + 0x1c]
// 0042ed54: ADD ESP,0xc
// 0042ed57: ADD ESP,0x30
// 0042ed5a: POP EDI
// 0042ed5b: POP ESI
// 0042ed5c: POP EBX
// 0042ed5d: RET
// 0042ed5e: CMP dword ptr [EBX + 0x2410],0x0
//   Label: LAB_0042ed5e
// 0042ed65: JZ 0x0042ec6b
//   XREF to: 0042ec6b (CONDITIONAL_JUMP)
// 0042ed6b: PUSH 0x0
// 0042ed6d: PUSH 0x617619
//   XREF to: 00617619 (DATA)
// 0042ed72: PUSH ESI
// 0042ed73: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0042ed78: ADD ESP,0x4
// 0042ed7b: PUSH EAX
// 0042ed7c: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0042ed81: ADD ESP,0xc
// 0042ed84: TEST EAX,EAX
// 0042ed86: JL 0x0042ec6b
//   XREF to: 0042ec6b (CONDITIONAL_JUMP)
// 0042ed8c: PUSH 0x3fd9999a
// 0042ed91: PUSH EAX
// 0042ed92: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x30] (DATA)
// 0042ed96: PUSH EAX
// 0042ed97: PUSH ESI
// 0042ed98: MOV EDI,dword ptr [EBX + 0x154]
// 0042ed9e: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 0042eda3: ADD ESP,0xc
// 0042eda6: PUSH EAX
// 0042eda7: PUSH EBX
// 0042eda8: CALL dword ptr [EDI + 0x1c]
// 0042edab: ADD ESP,0xc
// 0042edae: ADD ESP,0x30
// 0042edb1: POP EDI
// 0042edb2: POP ESI
// 0042edb3: POP EBX
// 0042edb4: RET
// 0042edb5: JBE 0x0042ecb8
//   Label: LAB_0042edb5
//   XREF to: 0042ecb8 (CONDITIONAL_JUMP)
// 0042edbb: CMP EAX,0x1f
// 0042edbe: JC 0x0042ec6b
//   XREF to: 0042ec6b (CONDITIONAL_JUMP)
// 0042edc4: JBE 0x0042ed07
//   XREF to: 0042ed07 (CONDITIONAL_JUMP)
// 0042edca: CMP EAX,0x25
// 0042edcd: JZ 0x0042ed5e
//   XREF to: 0042ed5e (CONDITIONAL_JUMP)
// 0042edcf: ADD ESP,0x30
// 0042edd2: POP EDI
// 0042edd3: POP ESI
// 0042edd4: POP EBX
// 0042edd5: RET
