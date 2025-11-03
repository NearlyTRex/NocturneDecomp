// Name: core_melee.cpp_CMelee_load_FUN_0050e920
// Address: 0050e920
// Address Range: [[0050e920, 0050ea3a]]
// Convention: unknown
// Signature: undefined core_melee.cpp_CMelee_load_FUN_0050e920()
// Globals:
//   TerminatedCString s_allowedAttackTypes_00635c04
//   TerminatedCString s_strengthLo_00635c17
//   TerminatedCString s_strengthHi_00635c22
//   TerminatedCString s_canAttachLight_00635c2d
//   TerminatedCString s_dismemberProb_00635c3c
//   TerminatedCString s_canGoInInventory_00635c4a
//   TerminatedCString s_ammoType_00635c5b
//   TerminatedCString s_thrustHitCharacterSound_00635c64
//   TerminatedCString s_swingHitCharacterSound_00635c7c
//   TerminatedCString s_hitOtherSound_00635c93
//   undefined4 g_CMeleeClassVersion
// Function calls:
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_weapon.cpp_CWeapon_serialize_FUN_005ee250

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_melee.cpp_CMelee_load(CMelee* pMelee) */

void core_melee_cpp_CMelee_load_FUN_0050e920(void)

{
  CWeapon *in_stack_00000004;
  
  core_weapon_cpp_CWeapon_serialize_FUN_005ee250(in_stack_00000004);
  if (1 < g_CMeleeClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004 + 1),"allowedAttackTypes");
  }
  if (2 < g_CMeleeClassVersion) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)(in_stack_00000004[1].base_actor.actor_name + 4),"strengthLo");
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)(in_stack_00000004[1].base_actor.actor_name + 8),"strengthHi");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&in_stack_00000004->can_attach_light,"canAttachLight");
  }
  if (3 < g_CMeleeClassVersion) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)(in_stack_00000004[1].base_actor.actor_name + 0xc),"dismemberProb")
    ;
  }
  if (4 < g_CMeleeClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004[1].base_actor.actor_name + 0x10),
               "canGoInInventory");
  }
  if (5 < g_CMeleeClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[1].base_actor.location.position.y,"ammoType");
  }
  if (g_CMeleeClassVersion < 7) {
    return;
  }
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[1].base_actor.location.position.z,
             "thrustHitCharacterSound");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[1].base_actor.create_event + 0x14),
             "swingHitCharacterSound");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[1].base_actor.field13_0xec.y,"hitOtherSound");
  return;
}


// Assembly code:
// 0050e920: PUSH EBX
//   Label: core_melee.cpp_CMelee_load_FUN_0050e920
// 0050e921: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0050e925: PUSH EBX
// 0050e926: CALL core_weapon.cpp_CWeapon_serialize_FUN_005ee250
//   XREF to: 005ee250 (UNCONDITIONAL_CALL)
// 0050e92b: MOV EDX,dword ptr [0x0067d1c0]
//   XREF to: 0067d1c0 (READ)
// 0050e931: ADD ESP,0x4
// 0050e934: CMP EDX,0x2
// 0050e937: JGE 0x0050e9e4
//   XREF to: 0050e9e4 (CONDITIONAL_JUMP)
// 0050e93d: CMP dword ptr [0x0067d1c0],0x3
//   Label: LAB_0050e93d
//   XREF to: 0067d1c0 (READ)
// 0050e944: JL 0x0050e982
//   XREF to: 0050e982 (CONDITIONAL_JUMP)
// 0050e946: PUSH 0x635c17
//   XREF to: 00635c17 (DATA)
// 0050e94b: LEA EAX,[EBX + 0x57c]
// 0050e951: PUSH EAX
// 0050e952: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0050e957: ADD ESP,0x8
// 0050e95a: PUSH 0x635c22
//   XREF to: 00635c22 (DATA)
// 0050e95f: LEA EAX,[EBX + 0x580]
// 0050e965: PUSH EAX
// 0050e966: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0050e96b: ADD ESP,0x8
// 0050e96e: PUSH 0x635c2d
//   XREF to: 00635c2d (DATA)
// 0050e973: LEA EAX,[EBX + 0x2f0]
// 0050e979: PUSH EAX
// 0050e97a: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0050e97f: ADD ESP,0x8
// 0050e982: CMP dword ptr [0x0067d1c0],0x4
//   Label: LAB_0050e982
//   XREF to: 0067d1c0 (READ)
// 0050e989: JL 0x0050e99f
//   XREF to: 0050e99f (CONDITIONAL_JUMP)
// 0050e98b: PUSH 0x635c3c
//   XREF to: 00635c3c (DATA)
// 0050e990: LEA EAX,[EBX + 0x584]
// 0050e996: PUSH EAX
// 0050e997: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0050e99c: ADD ESP,0x8
// 0050e99f: CMP dword ptr [0x0067d1c0],0x5
//   Label: LAB_0050e99f
//   XREF to: 0067d1c0 (READ)
// 0050e9a6: JL 0x0050e9bc
//   XREF to: 0050e9bc (CONDITIONAL_JUMP)
// 0050e9a8: PUSH 0x635c4a
//   XREF to: 00635c4a (DATA)
// 0050e9ad: LEA EAX,[EBX + 0x588]
// 0050e9b3: PUSH EAX
// 0050e9b4: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0050e9b9: ADD ESP,0x8
// 0050e9bc: CMP dword ptr [0x0067d1c0],0x6
//   Label: LAB_0050e9bc
//   XREF to: 0067d1c0 (READ)
// 0050e9c3: JL 0x0050e9d9
//   XREF to: 0050e9d9 (CONDITIONAL_JUMP)
// 0050e9c5: PUSH 0x635c5b
//   XREF to: 00635c5b (DATA)
// 0050e9ca: LEA EAX,[EBX + 0x59c]
// 0050e9d0: PUSH EAX
// 0050e9d1: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0050e9d6: ADD ESP,0x8
// 0050e9d9: CMP dword ptr [0x0067d1c0],0x7
//   Label: LAB_0050e9d9
//   XREF to: 0067d1c0 (READ)
// 0050e9e0: JGE 0x0050e9fd
//   XREF to: 0050e9fd (CONDITIONAL_JUMP)
// 0050e9e2: POP EBX
// 0050e9e3: RET
// 0050e9e4: PUSH 0x635c04
//   Label: LAB_0050e9e4
//   XREF to: 00635c04 (DATA)
// 0050e9e9: LEA EAX,[EBX + 0x578]
// 0050e9ef: PUSH EAX
// 0050e9f0: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0050e9f5: ADD ESP,0x8
// 0050e9f8: JMP 0x0050e93d
//   XREF to: 0050e93d (UNCONDITIONAL_JUMP)
// 0050e9fd: PUSH 0x635c64
//   Label: LAB_0050e9fd
//   XREF to: 00635c64 (DATA)
// 0050ea02: LEA EAX,[EBX + 0x5a0]
// 0050ea08: PUSH EAX
// 0050ea09: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0050ea0e: ADD ESP,0x8
// 0050ea11: PUSH 0x635c7c
//   XREF to: 00635c7c (DATA)
// 0050ea16: LEA EAX,[EBX + 0x604]
// 0050ea1c: PUSH EAX
// 0050ea1d: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0050ea22: ADD ESP,0x8
// 0050ea25: PUSH 0x635c93
//   XREF to: 00635c93 (DATA)
// 0050ea2a: ADD EBX,0x668
// 0050ea30: PUSH EBX
// 0050ea31: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0050ea36: ADD ESP,0x8
// 0050ea39: POP EBX
// 0050ea3a: RET
