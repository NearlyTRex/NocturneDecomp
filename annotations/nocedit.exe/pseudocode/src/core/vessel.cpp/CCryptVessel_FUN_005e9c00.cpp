// Name: core_vessel.cpp_CCryptVessel_FUN_005e9c00
// Address: 005e9c00
// Address Range: [[005e9c00, 005e9d02]]
// Convention: __cdecl
// Signature: void core_vessel.cpp_CCryptVessel_FUN_005e9c00(CCryptVessel * this_ptr)
// Globals:
//   TerminatedCString s_Model_file_kfm_006570e5
//   TerminatedCString s_CCryptVessel_006570f7
//   TerminatedCString s_Prey_00657104
//   TerminatedCString s_CCryptVessel_00657109
//   TerminatedCString s_Neutral_00657116
//   TerminatedCString s_Destroyed_event_momentar_0065711e
//   TerminatedCString s_CActorDestination_0065713a
//   TerminatedCString s_Start_loc_0065714c
//   TerminatedCString s_CActorDestination_00657156
//   TerminatedCString s_End_loc_00657168
//   TerminatedCString s_Win_event_persistant_00657170
//   TerminatedCString s_Eat_distance_00657187
//   TerminatedCString s_Visual_type_006571a3
//   void* PTR_s_Air_006844b0 = 00657194
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e350
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_actor.cpp_CActorPropertyList_FUN_0040e640
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

void __cdecl core_vessel_cpp_CCryptVessel_FUN_005e9c00(CCryptVessel *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  char *pcStack0000000c;
  float *pfStack00000010;
  void **ppvStack00000014;
  int *piStack00000018;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base_actor,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  pcStack0000000c = (char *)0x0;
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  pfStack00000010 = (float *)this_ptr->win_event;
  pcStack0000000c = "Win event (persistant)";
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  ppvStack00000014 = (void **)0x0;
  pfStack00000010 = &this_ptr->eat_distance;
  pcStack0000000c = "Eat distance";
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  piStack00000018 = &this_ptr->visual_type;
  ppvStack00000014 = &PTR_s_Air_006844b0;
  pfStack00000010 = (float *)0x3;
  pcStack0000000c = "Visual type";
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  return;
}


// Assembly code:
// 005e9c00: PUSH EBX
//   Label: core_vessel.cpp_CCryptVessel_FUN_005e9c00
// 005e9c01: PUSH ESI
// 005e9c02: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005e9c06: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005e9c0a: PUSH ESI
// 005e9c0b: PUSH EBX
// 005e9c0c: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 005e9c11: ADD ESP,0x8
// 005e9c14: PUSH 0x0
// 005e9c16: LEA EAX,[EBX + 0x158]
// 005e9c1c: PUSH EAX
// 005e9c1d: PUSH 0x6570e5
//   XREF to: 006570e5 (DATA)
// 005e9c22: PUSH ESI
// 005e9c23: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 005e9c28: ADD ESP,0x10
// 005e9c2b: PUSH 0x0
// 005e9c2d: PUSH 0x6570f7
//   XREF to: 006570f7 (DATA)
// 005e9c32: PUSH 0x1
// 005e9c34: LEA EAX,[EBX + 0x2d8]
// 005e9c3a: PUSH EAX
// 005e9c3b: PUSH 0x657104
//   XREF to: 00657104 (DATA)
// 005e9c40: PUSH ESI
// 005e9c41: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 005e9c46: ADD ESP,0x18
// 005e9c49: PUSH 0x0
// 005e9c4b: PUSH 0x657109
//   XREF to: 00657109 (DATA)
// 005e9c50: PUSH 0x1
// 005e9c52: LEA EAX,[EBX + 0x2dc]
// 005e9c58: PUSH EAX
// 005e9c59: PUSH 0x657116
//   XREF to: 00657116 (DATA)
// 005e9c5e: PUSH ESI
// 005e9c5f: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 005e9c64: ADD ESP,0x18
// 005e9c67: LEA EAX,[EBX + 0x2e0]
// 005e9c6d: PUSH EAX
// 005e9c6e: PUSH 0x65711e
//   XREF to: 0065711e (DATA)
// 005e9c73: PUSH ESI
// 005e9c74: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 005e9c79: ADD ESP,0xc
// 005e9c7c: PUSH 0x0
// 005e9c7e: PUSH 0x65713a
//   XREF to: 0065713a (DATA)
// 005e9c83: PUSH 0x1
// 005e9c85: LEA EAX,[EBX + 0x3a8]
// 005e9c8b: PUSH EAX
// 005e9c8c: PUSH 0x65714c
//   XREF to: 0065714c (DATA)
// 005e9c91: PUSH ESI
// 005e9c92: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 005e9c97: ADD ESP,0x18
// 005e9c9a: PUSH 0x0
// 005e9c9c: PUSH 0x657156
//   XREF to: 00657156 (DATA)
// 005e9ca1: PUSH 0x1
// 005e9ca3: LEA EAX,[EBX + 0x3ac]
// 005e9ca9: PUSH EAX
// 005e9caa: PUSH 0x657168
//   XREF to: 00657168 (DATA)
// 005e9caf: PUSH ESI
// 005e9cb0: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 005e9cb5: ADD ESP,0x18
// 005e9cb8: LEA EAX,[EBX + 0x344]
// 005e9cbe: PUSH EAX
// 005e9cbf: PUSH 0x657170
//   XREF to: 00657170 (DATA)
// 005e9cc4: PUSH ESI
// 005e9cc5: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 005e9cca: ADD ESP,0xc
// 005e9ccd: PUSH 0x0
// 005e9ccf: LEA EAX,[EBX + 0x3b0]
// 005e9cd5: PUSH EAX
// 005e9cd6: PUSH 0x657187
//   XREF to: 00657187 (DATA)
// 005e9cdb: PUSH ESI
// 005e9cdc: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 005e9ce1: ADD ESP,0x10
// 005e9ce4: ADD EBX,0x3b4
// 005e9cea: PUSH EBX
// 005e9ceb: PUSH 0x6844b0
//   XREF to: 006844b0 (DATA)
// 005e9cf0: PUSH 0x3
// 005e9cf2: PUSH 0x6571a3
//   XREF to: 006571a3 (DATA)
// 005e9cf7: PUSH ESI
// 005e9cf8: CALL core_actor.cpp_CActorPropertyList_FUN_0040e640
//   XREF to: 0040e640 (UNCONDITIONAL_CALL)
// 005e9cfd: ADD ESP,0x14
// 005e9d00: POP ESI
// 005e9d01: POP EBX
// 005e9d02: RET
