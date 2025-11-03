// Name: core_enemy.cpp_FUN_004a9f10
// Address: 004a9f10
// Address Range: [[004a9f10, 004a9f96]]
// Convention: unknown
// Signature: undefined core_enemy.cpp_FUN_004a9f10()
// Cross-references:
//   core_armour.cpp_CArmour_FUN_00412400 (00412400) at 0041242f [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_FUN_00416030 (00416030) at 00416203 [UNCONDITIONAL_CALL]
//   core_batman.cpp_FUN_004179a0 (004179a0) at 00417b73 [UNCONDITIONAL_CALL]
//   core_beast.cpp_FUN_00418380 (00418380) at 00418391 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_FUN_00418b50 (00418b50) at 00418bf8 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_ExplodeAndSoundSomething_FUN_0041d4d0 (0041d4d0) at 0041d519 [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00424830 (00424830) at 00424957 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00425640 (00425640) at 00425651 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444b40 (00444b40) at 00444be8 [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_FUN_0047f820 (0047f820) at 0047f8c4 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00486070 (00486070) at 00486170 [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048f360 (0048f360) at 0048f415 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk3_FUN_004e57d0 (004e57d0) at 004e5914 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e87e0 (004e87e0) at 004e89ab [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f7720 (004f7720) at 004f788e [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004fae00 (004fae00) at 004faefe [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503a20 (00503a20) at 00503b27 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00527740 (00527740) at 00527807 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_SentinelBehavior_FUN_00568cd0 (00568cd0) at 00568d53 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a3580 (005a3580) at 005a3642 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_FUN_005c7760 (005c7760) at 005c7771 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_FUN_005e5130 (005e5130) at 005e5194 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_FUN_005f1ac0 (005f1ac0) at 005f1bcb [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fc4f0 (005fc4f0) at 005fc6d5 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_CCharacterClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_charactr.cpp_CCharacter_FUN_0042c3c0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_enemy.cpp_FUN_004a9f10(undefined4 param_1, undefined4 param_2)
    */

void core_enemy_cpp_FUN_004a9f10
               (undefined4 param_1,undefined4 param_2,float unaff_EBX,undefined4 param_4,
               CCharacter *param_5,int param_6)

{
  CCharacter *pCVar1;
  CDemonActor *pCVar2;
  CVector3f *unaff_EBP;
  int unaff_ESI;
  
  (*(param_5->base_actor).vtable[1].handleFootstep)
            (&param_5->base_actor,unaff_EBP,unaff_ESI,unaff_EBX);
  core_charactr_cpp_CCharacter_FUN_0042c3c0(param_5);
  if (0.0 < *(float *)(param_6 + 4)) {
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(param_6 + 0x38),g_CCharacterClassInfo.name_hash);
    if (pCVar2 == (CDemonActor *)0x0) {
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(param_6 + 0x34),g_CCharacterClassInfo.name_hash);
    }
    if (pCVar2 != (CDemonActor *)0x0) {
      pCVar1 = param_5 + 1;
      (pCVar1->base_actor).actor_name[0x1c] = '\0';
      (pCVar1->base_actor).actor_name[0x1d] = '\0';
      (pCVar1->base_actor).actor_name[0x1e] = 'p';
      (pCVar1->base_actor).actor_name[0x1f] = 'A';
      pCVar1 = param_5 + 1;
      (pCVar1->base_actor).actor_name[0xc] = '\x01';
      (pCVar1->base_actor).actor_name[0xd] = '\0';
      (pCVar1->base_actor).actor_name[0xe] = '\0';
      (pCVar1->base_actor).actor_name[0xf] = '\0';
      *(CDemonActor **)(param_5[1].base_actor.actor_name + 0x18) = pCVar2;
      return;
    }
  }
  return;
}


// Assembly code:
// 004a9f10: PUSH EBX
//   Label: core_enemy.cpp_FUN_004a9f10
// 004a9f11: PUSH ESI
// 004a9f12: PUSH EBP
// 004a9f13: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004a9f17: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004a9f1b: PUSH EBX
// 004a9f1c: MOV EAX,dword ptr [EBX + 0x154]
// 004a9f22: CALL dword ptr [EAX + 0x10c]
// 004a9f28: ADD ESP,0x4
// 004a9f2b: PUSH ESI
// 004a9f2c: PUSH EBX
// 004a9f2d: CALL core_charactr.cpp_CCharacter_FUN_0042c3c0
//   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)
// 004a9f32: FLD float ptr [ESI + 0x4]
// 004a9f35: FLDZ
// 004a9f37: ADD ESP,0x8
// 004a9f3a: FCOMPP
// 004a9f3c: FNSTSW AX
// 004a9f3e: SAHF
// 004a9f3f: JC 0x004a9f45
//   XREF to: 004a9f45 (CONDITIONAL_JUMP)
// 004a9f41: POP EBP
//   Label: LAB_004a9f41
// 004a9f42: POP ESI
// 004a9f43: POP EBX
// 004a9f44: RET
// 004a9f45: MOV EDX,dword ptr [0x00823c4c]
//   Label: LAB_004a9f45
//   XREF to: 00823c4c (READ)
// 004a9f4b: PUSH EDX
// 004a9f4c: MOV ECX,dword ptr [ESI + 0x38]
// 004a9f4f: PUSH ECX
// 004a9f50: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004a9f55: ADD ESP,0x8
// 004a9f58: MOV EDX,EAX
// 004a9f5a: TEST EAX,EAX
// 004a9f5c: JNZ 0x004a9f75
//   XREF to: 004a9f75 (CONDITIONAL_JUMP)
// 004a9f5e: PUSH EDI
// 004a9f5f: MOV EDI,dword ptr [0x00823c4c]
//   XREF to: 00823c4c (READ)
// 004a9f65: PUSH EDI
// 004a9f66: MOV EBP,dword ptr [ESI + 0x34]
// 004a9f69: PUSH EBP
// 004a9f6a: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004a9f6f: ADD ESP,0x8
// 004a9f72: MOV EDX,EAX
// 004a9f74: POP EDI
// 004a9f75: TEST EDX,EDX
//   Label: LAB_004a9f75
// 004a9f77: JZ 0x004a9f41
//   XREF to: 004a9f41 (CONDITIONAL_JUMP)
// 004a9f79: MOV dword ptr [EBX + 0xbe40],0x41700000
// 004a9f83: MOV dword ptr [EBX + 0xbe30],0x1
// 004a9f8d: MOV dword ptr [EBX + 0xbe3c],EDX
// 004a9f93: POP EBP
// 004a9f94: POP ESI
// 004a9f95: POP EBX
// 004a9f96: RET
