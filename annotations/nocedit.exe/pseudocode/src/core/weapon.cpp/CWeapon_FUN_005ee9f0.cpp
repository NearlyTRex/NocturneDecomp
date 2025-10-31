// Name: core_weapon.cpp_CWeapon_FUN_005ee9f0
// Address: 005ee9f0
// Address Range: [[005ee9f0, 005eea5c]]
// Convention: __cdecl
// Signature: void core_weapon.cpp_CWeapon_FUN_005ee9f0(CWeapon * this_ptr)
// Cross-references:
//   core_melee.cpp_FUN_0050ecf0 (0050ecf0) at 0050ecfc [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e3ca0 (005e3ca0) at 005e3cac [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Model_file_kfm_00657b31
//   TerminatedCString s_Weapon_state_00657b6d
//   TerminatedCString s_Sim_timer_00657b7a
//   void* PTR_s_Lying_Around_006848b4 = 00657b43
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CActorPropertyList_FUN_0040e640
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_FUN_005ee9f0(CWeapon *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base_actor,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  if (this_ptr->weapon_state != 0) {
    return;
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  return;
}


// Assembly code:
// 005ee9f0: PUSH EBX
//   Label: core_weapon.cpp_CWeapon_FUN_005ee9f0
// 005ee9f1: PUSH ESI
// 005ee9f2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005ee9f6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005ee9fa: PUSH ESI
// 005ee9fb: PUSH EBX
// 005ee9fc: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 005eea01: ADD ESP,0x8
// 005eea04: PUSH 0x0
// 005eea06: LEA EAX,[EBX + 0x158]
// 005eea0c: PUSH EAX
// 005eea0d: PUSH 0x657b31
//   XREF to: 00657b31 (DATA)
// 005eea12: PUSH ESI
// 005eea13: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 005eea18: ADD ESP,0x10
// 005eea1b: LEA EAX,[EBX + 0x2d4]
// 005eea21: PUSH EAX
// 005eea22: PUSH 0x6848b4
//   XREF to: 006848b4 (DATA)
// 005eea27: PUSH 0x4
// 005eea29: PUSH 0x657b6d
//   XREF to: 00657b6d (DATA)
// 005eea2e: PUSH ESI
// 005eea2f: CALL core_actor.cpp_CActorPropertyList_FUN_0040e640
//   XREF to: 0040e640 (UNCONDITIONAL_CALL)
// 005eea34: MOV EDX,dword ptr [EBX + 0x2d4]
// 005eea3a: ADD ESP,0x14
// 005eea3d: TEST EDX,EDX
// 005eea3f: JZ 0x005eea44
//   XREF to: 005eea44 (CONDITIONAL_JUMP)
// 005eea41: POP ESI
// 005eea42: POP EBX
// 005eea43: RET
// 005eea44: PUSH EDX
//   Label: LAB_005eea44
// 005eea45: ADD EBX,0x570
// 005eea4b: PUSH EBX
// 005eea4c: PUSH 0x657b7a
//   XREF to: 00657b7a (DATA)
// 005eea51: PUSH ESI
// 005eea52: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 005eea57: ADD ESP,0x10
// 005eea5a: POP ESI
// 005eea5b: POP EBX
// 005eea5c: RET
