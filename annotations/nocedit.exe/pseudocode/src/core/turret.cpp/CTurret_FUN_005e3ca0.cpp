// Name: core_turret.cpp_CTurret_FUN_005e3ca0
// Address: 005e3ca0
// Address Range: [[005e3ca0, 005e3dcc]]
// Convention: __cdecl
// Signature: void core_turret.cpp_CTurret_FUN_005e3ca0(CTurret * this_ptr)
// Globals:
//   TerminatedCString s_State_006567da
//   TerminatedCString s_Activate_event_006567e0
//   TerminatedCString s_Charge_time_006567ef
//   TerminatedCString s_Patrol_time_006567fb
//   TerminatedCString s_Power_down_time_00656807
//   TerminatedCString s_Fire_delay_time_00656817
//   TerminatedCString s_Rotate_speed_deg_sec_00656827
//   TerminatedCString s_CTrigger_0065683e
//   TerminatedCString s_Guard_zone_box_trigger_00656847
//   TerminatedCString s_Allowed_victim_types_00656860
//   TerminatedCString s_canManualAim_00656875
//   void* PTR_s_Inactive_00684414 = 006567b0
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e1a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e290
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e350
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_actor.cpp_CActorPropertyList_FUN_0040e640
//   core_weapon.cpp_CWeapon_FUN_005ee9f0

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_FUN_005e3ca0(CTurret *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  char *pcStack0000000c;
  char *pcStack00000010;
  char *pcStack00000018;
  int *piStack0000001c;
  
  core_weapon_cpp_CWeapon_FUN_005ee9f0(&this_ptr->base_weapon);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
  pcStack0000000c = (char *)0x0;
  core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
  pcStack00000010 = (char *)0x0;
  pcStack0000000c = (char *)0x47c34f80;
  core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
  pcStack00000010 = "CTrigger";
  pcStack0000000c = (char *)0x1;
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  pcStack00000018 = (char *)0x0;
  pcStack00000010 = this_ptr->field10_0x780 + 4;
  pcStack0000000c = "Allowed victim types";
  core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  piStack0000001c = &this_ptr->can_manual_aim;
  pcStack00000018 = "canManualAim";
  pcStack00000010 = (char *)0x5e3dc7;
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  return;
}


// Assembly code:
// 005e3ca0: PUSH EBX
//   Label: core_turret.cpp_CTurret_FUN_005e3ca0
// 005e3ca1: PUSH ESI
// 005e3ca2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005e3ca6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005e3caa: PUSH ESI
// 005e3cab: PUSH EBX
// 005e3cac: CALL core_weapon.cpp_CWeapon_FUN_005ee9f0
//   XREF to: 005ee9f0 (UNCONDITIONAL_CALL)
// 005e3cb1: ADD ESP,0x8
// 005e3cb4: LEA EAX,[EBX + 0x700]
// 005e3cba: PUSH EAX
// 005e3cbb: PUSH 0x684414
//   XREF to: 00684414 (DATA)
// 005e3cc0: PUSH 0x5
// 005e3cc2: PUSH 0x6567da
//   XREF to: 006567da (DATA)
// 005e3cc7: PUSH ESI
// 005e3cc8: CALL core_actor.cpp_CActorPropertyList_FUN_0040e640
//   XREF to: 0040e640 (UNCONDITIONAL_CALL)
// 005e3ccd: ADD ESP,0x14
// 005e3cd0: LEA EAX,[EBX + 0x704]
// 005e3cd6: PUSH EAX
// 005e3cd7: PUSH 0x6567e0
//   XREF to: 006567e0 (DATA)
// 005e3cdc: PUSH ESI
// 005e3cdd: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 005e3ce2: ADD ESP,0xc
// 005e3ce5: PUSH 0x0
// 005e3ce7: PUSH 0x47c34f80
// 005e3cec: LEA EAX,[EBX + 0x768]
// 005e3cf2: PUSH 0x0
// 005e3cf4: PUSH EAX
// 005e3cf5: PUSH 0x6567ef
//   XREF to: 006567ef (DATA)
// 005e3cfa: PUSH ESI
// 005e3cfb: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0
//   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)
// 005e3d00: ADD ESP,0x18
// 005e3d03: PUSH 0x0
// 005e3d05: PUSH 0x47c34f80
// 005e3d0a: LEA EAX,[EBX + 0x76c]
// 005e3d10: PUSH 0x0
// 005e3d12: PUSH EAX
// 005e3d13: PUSH 0x6567fb
//   XREF to: 006567fb (DATA)
// 005e3d18: PUSH ESI
// 005e3d19: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0
//   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)
// 005e3d1e: ADD ESP,0x18
// 005e3d21: PUSH 0x0
// 005e3d23: PUSH 0x47c34f80
// 005e3d28: LEA EAX,[EBX + 0x770]
// 005e3d2e: PUSH 0x0
// 005e3d30: PUSH EAX
// 005e3d31: PUSH 0x656807
//   XREF to: 00656807 (DATA)
// 005e3d36: PUSH ESI
// 005e3d37: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0
//   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)
// 005e3d3c: ADD ESP,0x18
// 005e3d3f: PUSH 0x0
// 005e3d41: PUSH 0x47c34f80
// 005e3d46: LEA EAX,[EBX + 0x774]
// 005e3d4c: PUSH 0x0
// 005e3d4e: PUSH EAX
// 005e3d4f: PUSH 0x656817
//   XREF to: 00656817 (DATA)
// 005e3d54: PUSH ESI
// 005e3d55: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0
//   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)
// 005e3d5a: ADD ESP,0x18
// 005e3d5d: PUSH 0x0
// 005e3d5f: PUSH 0x47c34f80
// 005e3d64: LEA EAX,[EBX + 0x778]
// 005e3d6a: PUSH 0x0
// 005e3d6c: PUSH EAX
// 005e3d6d: PUSH 0x656827
//   XREF to: 00656827 (DATA)
// 005e3d72: PUSH ESI
// 005e3d73: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0
//   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)
// 005e3d78: ADD ESP,0x18
// 005e3d7b: PUSH 0x0
// 005e3d7d: PUSH 0x65683e
//   XREF to: 0065683e (DATA)
// 005e3d82: PUSH 0x1
// 005e3d84: LEA EAX,[EBX + 0x780]
// 005e3d8a: PUSH EAX
// 005e3d8b: PUSH 0x656847
//   XREF to: 00656847 (DATA)
// 005e3d90: PUSH ESI
// 005e3d91: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 005e3d96: ADD ESP,0x18
// 005e3d99: PUSH 0x0
// 005e3d9b: PUSH 0xc8
// 005e3da0: LEA EAX,[EBX + 0x784]
// 005e3da6: PUSH EAX
// 005e3da7: PUSH 0x656860
//   XREF to: 00656860 (DATA)
// 005e3dac: PUSH ESI
// 005e3dad: CALL core_actor.cpp_CActorPropertyList_FUN_0040e290
//   XREF to: 0040e290 (UNCONDITIONAL_CALL)
// 005e3db2: ADD ESP,0x14
// 005e3db5: ADD EBX,0x858
// 005e3dbb: PUSH EBX
// 005e3dbc: PUSH 0x656875
//   XREF to: 00656875 (DATA)
// 005e3dc1: PUSH ESI
// 005e3dc2: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 005e3dc7: ADD ESP,0xc
// 005e3dca: POP ESI
// 005e3dcb: POP EBX
// 005e3dcc: RET
