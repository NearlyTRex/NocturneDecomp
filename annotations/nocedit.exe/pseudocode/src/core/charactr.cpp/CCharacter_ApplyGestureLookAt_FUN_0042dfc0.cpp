// Name: core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
// Address: 0042dfc0
// Address Range: [[0042dfc0, 0042e046]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr)
// Cross-references:
//   core_armour.cpp_CArmour_process_FUN_00412260 (00412260) at 00412324 [UNCONDITIONAL_CALL]
//   core_baron.cpp_CBaron_process_FUN_00412e80 (00412e80) at 0041312a [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_process_FUN_00415470 (00415470) at 00415674 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 00416aa2 [UNCONDITIONAL_CALL]
//   core_beast.cpp_FUN_004182a0 (004182a0) at 00418318 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_CBiggs_FUN_00418700 (00418700) at 004188eb [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c531 [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00423a30 (00423a30) at 00424487 [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_0043fa00 (0043fa00) at 0043fc91 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444310 (00444310) at 00444545 [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_process_FUN_0047f140 (0047f140) at 0047f38c [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 0048488a [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ec70 (0048ec70) at 0048ef09 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d34f8 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk6_FUN_004e4a00 (004e4a00) at 004e4c39 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e6940 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f0e40 (004f0e40) at 004f10e0 [UNCONDITIONAL_CALL]
//   core_hiram.cpp_FUN_004f4550 (004f4550) at 004f467f [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f51c7 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f6f20 (004f6f20) at 004f711d [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f83c3 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9c30 (004f9c30) at 004fa11d [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503080 (00503080) at 005032df [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 00525d6d [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_00528d20 (00528d20) at 00528fba [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_process_FUN_005448b0 (005448b0) at 00544af0 [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_00545ef0 (00545ef0) at 005460a8 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005571f0 (005571f0) at 005575a2 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568030 (00568030) at 00568231 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a2800 (005a2800) at 005a2b48 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bc3bb [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_process_FUN_005c6e90 (005c6e90) at 005c70d0 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 (005d8ba0) at 005d8ea4 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_process_FUN_005db050 (005db050) at 005db1b3 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e662f [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 (005efde0) at 005f01df [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005f9f46 [UNCONDITIONAL_CALL]
// Function calls:
//   core_charactr.cpp_CCharacter_applyGesture_FUN_0042d3d0
//   core_charactr.cpp_CCharacter_applyLookAt_FUN_0042dcd0
//   core_charactr.cpp_CCharacter_FUN_0042d090
//   core_charactr.cpp_CCharacter_FUN_0042d530
//   core_cloth.cpp_FUN_0043c2d0
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb40

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(CCharacter *this_ptr)

{
  int iVar1;
  undefined4 uStack00000008;
  SCollisionInfo *in_stack_00000010;
  COrientation *pCStack00000014;
  undefined4 uStack0000001c;
  CDeformableModelInstance *pCStack00000020;
  
  core_charactr_cpp_CCharacter_applyGesture_FUN_0042d3d0(this_ptr);
  core_charactr_cpp_CCharacter_applyLookAt_FUN_0042dcd0(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb40();
  core_charactr_cpp_CCharacter_FUN_0042d530(this_ptr);
  core_charactr_cpp_CCharacter_FUN_0042d090(this_ptr);
  if (*(int *)this_ptr->field13_0x2620 == 0) {
    uStack00000008 = 0x42e013;
    iVar1 = (*(this_ptr->base_actor).metadata.vtable[1].hasCollision)
                      (&this_ptr->base_actor,in_stack_00000010);
    if (iVar1 != 1) {
      return;
    }
  }
  pCStack00000020 = &this_ptr->model;
  uStack0000001c = *(undefined4 *)(this_ptr->field2_0x240c + 8);
  pCStack00000014 = &(this_ptr->base_actor).orient;
  uStack00000008 = 0x42e042;
  core_cloth_cpp_FUN_0043c2d0();
  return;
}


// Assembly code:
// 0042dfc0: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
// 0042dfc1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0042dfc5: PUSH EBX
// 0042dfc6: CALL core_charactr.cpp_CCharacter_applyGesture_FUN_0042d3d0
//   XREF to: 0042d3d0 (UNCONDITIONAL_CALL)
// 0042dfcb: ADD ESP,0x4
// 0042dfce: PUSH EBX
// 0042dfcf: CALL core_charactr.cpp_CCharacter_applyLookAt_FUN_0042dcd0
//   XREF to: 0042dcd0 (UNCONDITIONAL_CALL)
// 0042dfd4: ADD ESP,0x4
// 0042dfd7: LEA EAX,[EBX + 0x158]
// 0042dfdd: PUSH EAX
// 0042dfde: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb40
//   XREF to: 0059fb40 (UNCONDITIONAL_CALL)
// 0042dfe3: ADD ESP,0x4
// 0042dfe6: PUSH EBX
// 0042dfe7: CALL core_charactr.cpp_CCharacter_FUN_0042d530
//   XREF to: 0042d530 (UNCONDITIONAL_CALL)
// 0042dfec: ADD ESP,0x4
// 0042dfef: PUSH dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0042dff3: PUSH EBX
// 0042dff4: CALL core_charactr.cpp_CCharacter_FUN_0042d090
//   XREF to: 0042d090 (UNCONDITIONAL_CALL)
// 0042dff9: MOV EDX,dword ptr [EBX + 0x2620]
// 0042dfff: ADD ESP,0x8
// 0042e002: TEST EDX,EDX
// 0042e004: JNZ 0x0042e01d
//   XREF to: 0042e01d (CONDITIONAL_JUMP)
// 0042e006: PUSH EBX
// 0042e007: MOV EAX,dword ptr [EBX + 0x154]
// 0042e00d: CALL dword ptr [EAX + 0x120]
// 0042e013: ADD ESP,0x4
// 0042e016: CMP EAX,0x1
// 0042e019: JZ 0x0042e01d
//   XREF to: 0042e01d (CONDITIONAL_JUMP)
// 0042e01b: POP EBX
// 0042e01c: RET
// 0042e01d: LEA EAX,[EBX + 0x158]
//   Label: LAB_0042e01d
// 0042e023: PUSH EAX
// 0042e024: PUSH dword ptr [EBX + 0x2414]
// 0042e02a: LEA EAX,[EBX + 0x30]
// 0042e02d: PUSH dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0042e031: PUSH EAX
// 0042e032: LEA EAX,[EBX + 0x20]
// 0042e035: PUSH EAX
// 0042e036: ADD EBX,0x2a94
// 0042e03c: PUSH EBX
// 0042e03d: CALL core_cloth.cpp_FUN_0043c2d0
//   XREF to: 0043c2d0 (UNCONDITIONAL_CALL)
// 0042e042: ADD ESP,0x18
// 0042e045: POP EBX
// 0042e046: RET
