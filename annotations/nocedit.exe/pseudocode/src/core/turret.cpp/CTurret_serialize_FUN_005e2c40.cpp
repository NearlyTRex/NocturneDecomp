// Name: core_turret.cpp_CTurret_serialize_FUN_005e2c40
// Address: 005e2c40
// Address Range: [[005e2c40, 005e2d4c]]
// Convention: __cdecl
// Signature: void core_turret.cpp_CTurret_serialize_FUN_005e2c40(CTurret * this_ptr)
// Globals:
//   TerminatedCString s_homeOrient_006566c0
//   TerminatedCString s_state_006566cb
//   TerminatedCString s_activateEvent_006566d1
//   TerminatedCString s_chargeTime_006566df
//   TerminatedCString s_patrolTime_006566ea
//   TerminatedCString s_powerDownTime_006566f5
//   TerminatedCString s_fireDelayTime_00656703
//   TerminatedCString s_timer_00656711
//   TerminatedCString s_guardZoneTriggerPtr_00656717
//   TerminatedCString s_allowedVictimTypes_0065672b
//   TerminatedCString s_rotateDegPerSec_0065673e
//   TerminatedCString s_canManualAim_0065674e
//   int g_CTurretClassVersion = 0x2
// Function calls:
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeOrientation_FUN_0040b3e0
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_weapon.cpp_CWeapon_serialize_FUN_005ee250

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_serialize_FUN_005e2c40(CTurret *this_ptr)

{
  core_weapon_cpp_CWeapon_serialize_FUN_005ee250(&this_ptr->base_weapon);
  core_actor_cpp_serializeOrientation_FUN_0040b3e0
            ((COrientation *)this_ptr->field1_0x578,"homeOrient");
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->state,"state");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)this_ptr->field3_0x704,"activateEvent");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->charge_time,"chargeTime");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->patrol_time,"patrolTime");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->power_down_time,"powerDownTime");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->fire_delay_time,"fireDelayTime");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->timer,"timer");
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)this_ptr->field10_0x780,"guardZoneTriggerPtr");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(this_ptr->field10_0x780 + 4),"allowedVictimTypes");
  core_actor_cpp_serializeFloat_FUN_0040b770
            (&this_ptr->rotate_deg_per_sec,"rotateDegPerSec");
  if (g_CTurretClassVersion < 2) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->can_manual_aim,"canManualAim");
  return;
}


// Assembly code:
// 005e2c40: PUSH EBX
//   Label: core_turret.cpp_CTurret_serialize_FUN_005e2c40
// 005e2c41: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005e2c45: PUSH EBX
// 005e2c46: CALL core_weapon.cpp_CWeapon_serialize_FUN_005ee250
//   XREF to: 005ee250 (UNCONDITIONAL_CALL)
// 005e2c4b: ADD ESP,0x4
// 005e2c4e: PUSH 0x6566c0
//   XREF to: 006566c0 (DATA)
// 005e2c53: LEA EAX,[EBX + 0x578]
// 005e2c59: PUSH EAX
// 005e2c5a: CALL core_actor.cpp_serializeOrientation_FUN_0040b3e0
//   XREF to: 0040b3e0 (UNCONDITIONAL_CALL)
// 005e2c5f: ADD ESP,0x8
// 005e2c62: PUSH 0x6566cb
//   XREF to: 006566cb (DATA)
// 005e2c67: LEA EAX,[EBX + 0x700]
// 005e2c6d: PUSH EAX
// 005e2c6e: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005e2c73: ADD ESP,0x8
// 005e2c76: PUSH 0x6566d1
//   XREF to: 006566d1 (DATA)
// 005e2c7b: LEA EAX,[EBX + 0x704]
// 005e2c81: PUSH EAX
// 005e2c82: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005e2c87: ADD ESP,0x8
// 005e2c8a: PUSH 0x6566df
//   XREF to: 006566df (DATA)
// 005e2c8f: LEA EAX,[EBX + 0x768]
// 005e2c95: PUSH EAX
// 005e2c96: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005e2c9b: ADD ESP,0x8
// 005e2c9e: PUSH 0x6566ea
//   XREF to: 006566ea (DATA)
// 005e2ca3: LEA EAX,[EBX + 0x76c]
// 005e2ca9: PUSH EAX
// 005e2caa: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005e2caf: ADD ESP,0x8
// 005e2cb2: PUSH 0x6566f5
//   XREF to: 006566f5 (DATA)
// 005e2cb7: LEA EAX,[EBX + 0x770]
// 005e2cbd: PUSH EAX
// 005e2cbe: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005e2cc3: ADD ESP,0x8
// 005e2cc6: PUSH 0x656703
//   XREF to: 00656703 (DATA)
// 005e2ccb: LEA EAX,[EBX + 0x774]
// 005e2cd1: PUSH EAX
// 005e2cd2: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005e2cd7: ADD ESP,0x8
// 005e2cda: PUSH 0x656711
//   XREF to: 00656711 (DATA)
// 005e2cdf: LEA EAX,[EBX + 0x77c]
// 005e2ce5: PUSH EAX
// 005e2ce6: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005e2ceb: ADD ESP,0x8
// 005e2cee: PUSH 0x656717
//   XREF to: 00656717 (DATA)
// 005e2cf3: LEA EAX,[EBX + 0x780]
// 005e2cf9: PUSH EAX
// 005e2cfa: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005e2cff: ADD ESP,0x8
// 005e2d02: PUSH 0x65672b
//   XREF to: 0065672b (DATA)
// 005e2d07: LEA EAX,[EBX + 0x784]
// 005e2d0d: PUSH EAX
// 005e2d0e: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005e2d13: ADD ESP,0x8
// 005e2d16: PUSH 0x65673e
//   XREF to: 0065673e (DATA)
// 005e2d1b: LEA EAX,[EBX + 0x778]
// 005e2d21: PUSH EAX
// 005e2d22: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005e2d27: MOV EDX,dword ptr [0x0068443c]
//   XREF to: 0068443c (READ)
// 005e2d2d: ADD ESP,0x8
// 005e2d30: CMP EDX,0x2
// 005e2d33: JGE 0x005e2d37
//   XREF to: 005e2d37 (CONDITIONAL_JUMP)
// 005e2d35: POP EBX
// 005e2d36: RET
// 005e2d37: PUSH 0x65674e
//   Label: LAB_005e2d37
//   XREF to: 0065674e (DATA)
// 005e2d3c: ADD EBX,0x858
// 005e2d42: PUSH EBX
// 005e2d43: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005e2d48: ADD ESP,0x8
// 005e2d4b: POP EBX
// 005e2d4c: RET
