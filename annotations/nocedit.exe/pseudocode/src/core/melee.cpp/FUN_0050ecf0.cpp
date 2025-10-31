// Name: core_melee.cpp_FUN_0050ecf0
// Address: 0050ecf0
// Address Range: [[0050ecf0, 0050edec]]
// Convention: unknown
// Signature: undefined core_melee.cpp_FUN_0050ecf0()
// Globals:
//   TerminatedCString s_Allowed_attack_types_00635ced
//   TerminatedCString s_Attack_strength_lo_00635d02
//   TerminatedCString s_Attack_strength_hi_00635d15
//   TerminatedCString s_Can_attach_light_00635d28
//   TerminatedCString s_Dismember_prob_0_0_to_1__00635d39
//   TerminatedCString s_Can_go_in_inventory_00635d53
//   TerminatedCString s_Damage_type_00635da4
//   TerminatedCString s_thrustHitCharacterSound_00635db0
//   TerminatedCString s_swingHitCharacterSound_00635dc8
//   TerminatedCString s_hitOtherSound_00635ddf
//   void* PTR_s_Generic_0067d178 = 00635d67
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e1a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e640
//   core_actor.cpp_CActorPropertyList_FUN_0040e6a0
//   core_weapon.cpp_CWeapon_FUN_005ee9f0

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_melee.cpp_FUN_0050ecf0(undefined4 param_1, undefined4
   param_2) */

void core_melee_cpp_FUN_0050ecf0(void)

{
  CWeapon *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_weapon_cpp_CWeapon_FUN_005ee9f0(in_stack_00000004);
  core_actor_cpp_CActorPropertyList_FUN_0040e6a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  return;
}


// Assembly code:
// 0050ecf0: PUSH EBX
//   Label: core_melee.cpp_FUN_0050ecf0
// 0050ecf1: PUSH ESI
// 0050ecf2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0050ecf6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0050ecfa: PUSH ESI
// 0050ecfb: PUSH EBX
// 0050ecfc: CALL core_weapon.cpp_CWeapon_FUN_005ee9f0
//   XREF to: 005ee9f0 (UNCONDITIONAL_CALL)
// 0050ed01: ADD ESP,0x8
// 0050ed04: LEA EAX,[EBX + 0x578]
// 0050ed0a: PUSH EAX
// 0050ed0b: PUSH 0x635ced
//   XREF to: 00635ced (DATA)
// 0050ed10: PUSH ESI
// 0050ed11: CALL core_actor.cpp_CActorPropertyList_FUN_0040e6a0
//   XREF to: 0040e6a0 (UNCONDITIONAL_CALL)
// 0050ed16: ADD ESP,0xc
// 0050ed19: PUSH 0x0
// 0050ed1b: LEA EAX,[EBX + 0x57c]
// 0050ed21: PUSH EAX
// 0050ed22: PUSH 0x635d02
//   XREF to: 00635d02 (DATA)
// 0050ed27: PUSH ESI
// 0050ed28: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 0050ed2d: ADD ESP,0x10
// 0050ed30: PUSH 0x0
// 0050ed32: LEA EAX,[EBX + 0x580]
// 0050ed38: PUSH EAX
// 0050ed39: PUSH 0x635d15
//   XREF to: 00635d15 (DATA)
// 0050ed3e: PUSH ESI
// 0050ed3f: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 0050ed44: ADD ESP,0x10
// 0050ed47: LEA EAX,[EBX + 0x2f0]
// 0050ed4d: PUSH EAX
// 0050ed4e: PUSH 0x635d28
//   XREF to: 00635d28 (DATA)
// 0050ed53: PUSH ESI
// 0050ed54: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 0050ed59: ADD ESP,0xc
// 0050ed5c: PUSH 0x0
// 0050ed5e: PUSH 0x3f800000
// 0050ed63: LEA EAX,[EBX + 0x584]
// 0050ed69: PUSH 0x0
// 0050ed6b: PUSH EAX
// 0050ed6c: PUSH 0x635d39
//   XREF to: 00635d39 (DATA)
// 0050ed71: PUSH ESI
// 0050ed72: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0
//   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)
// 0050ed77: ADD ESP,0x18
// 0050ed7a: LEA EAX,[EBX + 0x588]
// 0050ed80: PUSH EAX
// 0050ed81: PUSH 0x635d53
//   XREF to: 00635d53 (DATA)
// 0050ed86: PUSH ESI
// 0050ed87: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 0050ed8c: ADD ESP,0xc
// 0050ed8f: LEA EAX,[EBX + 0x59c]
// 0050ed95: PUSH EAX
// 0050ed96: PUSH 0x67d178
//   XREF to: 0067d178 (DATA)
// 0050ed9b: PUSH 0x9
// 0050ed9d: PUSH 0x635da4
//   XREF to: 00635da4 (DATA)
// 0050eda2: PUSH ESI
// 0050eda3: CALL core_actor.cpp_CActorPropertyList_FUN_0040e640
//   XREF to: 0040e640 (UNCONDITIONAL_CALL)
// 0050eda8: ADD ESP,0x14
// 0050edab: LEA EAX,[EBX + 0x5a0]
// 0050edb1: PUSH EAX
// 0050edb2: PUSH 0x635db0
//   XREF to: 00635db0 (DATA)
// 0050edb7: PUSH ESI
// 0050edb8: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 0050edbd: ADD ESP,0xc
// 0050edc0: LEA EAX,[EBX + 0x604]
// 0050edc6: PUSH EAX
// 0050edc7: PUSH 0x635dc8
//   XREF to: 00635dc8 (DATA)
// 0050edcc: PUSH ESI
// 0050edcd: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 0050edd2: ADD ESP,0xc
// 0050edd5: ADD EBX,0x668
// 0050eddb: PUSH EBX
// 0050eddc: PUSH 0x635ddf
//   XREF to: 00635ddf (DATA)
// 0050ede1: PUSH ESI
// 0050ede2: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 0050ede7: ADD ESP,0xc
// 0050edea: POP ESI
// 0050edeb: POP EBX
// 0050edec: RET
