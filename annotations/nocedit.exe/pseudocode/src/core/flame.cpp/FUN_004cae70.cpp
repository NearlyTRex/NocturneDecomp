// Name: core_flame.cpp_FUN_004cae70
// Address: 004cae70
// Address Range: [[004cae70, 004caf50]]
// Convention: unknown
// Signature: undefined core_flame.cpp_FUN_004cae70()
// Globals:
//   TerminatedCString s_Flame_type_0062a1f7
//   TerminatedCString s_Globe_scalar_0062a202
//   TerminatedCString s_On_event_0062a20f
//   TerminatedCString s_Off_event_0062a218
//   TerminatedCString s_Flame_state_0062a222
//   TerminatedCString s_Intensity_0062a22e
//   TerminatedCString s_Randomness_0062a238
//   TerminatedCString s_Catch_hero_on_fire_0062a243
//   TerminatedCString s_Catch_enemies_on_fire_0062a256
//   void* PTR_s_Torch_0067b0e0 = 0062a1d6
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_actor.cpp_CActorPropertyList_FUN_0040e640
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

/* Signature: undefined1 actors_other_flame.cpp_FUN_004cae70(undefined4 param_1, undefined4 param_2)
    */

void core_flame_cpp_FUN_004cae70(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  return;
}


// Assembly code:
// 004cae70: PUSH EBX
//   Label: core_flame.cpp_FUN_004cae70
// 004cae71: PUSH ESI
// 004cae72: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004cae76: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004cae7a: PUSH ESI
// 004cae7b: PUSH EBX
// 004cae7c: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 004cae81: ADD ESP,0x8
// 004cae84: LEA EAX,[EBX + 0x1a8]
// 004cae8a: PUSH EAX
// 004cae8b: PUSH 0x67b0e0
//   XREF to: 0067b0e0 (DATA)
// 004cae90: PUSH 0x4
// 004cae92: PUSH 0x62a1f7
//   XREF to: 0062a1f7 (DATA)
// 004cae97: PUSH ESI
// 004cae98: CALL core_actor.cpp_CActorPropertyList_FUN_0040e640
//   XREF to: 0040e640 (UNCONDITIONAL_CALL)
// 004cae9d: ADD ESP,0x14
// 004caea0: PUSH 0x0
// 004caea2: LEA EAX,[EBX + 0x1ac]
// 004caea8: PUSH EAX
// 004caea9: PUSH 0x62a202
//   XREF to: 0062a202 (DATA)
// 004caeae: PUSH ESI
// 004caeaf: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 004caeb4: ADD ESP,0x10
// 004caeb7: LEA EAX,[EBX + 0x1b8]
// 004caebd: PUSH EAX
// 004caebe: PUSH 0x62a20f
//   XREF to: 0062a20f (DATA)
// 004caec3: PUSH ESI
// 004caec4: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 004caec9: ADD ESP,0xc
// 004caecc: LEA EAX,[EBX + 0x21c]
// 004caed2: PUSH EAX
// 004caed3: PUSH 0x62a218
//   XREF to: 0062a218 (DATA)
// 004caed8: PUSH ESI
// 004caed9: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 004caede: ADD ESP,0xc
// 004caee1: LEA EAX,[EBX + 0x1b4]
// 004caee7: PUSH EAX
// 004caee8: PUSH 0x62a222
//   XREF to: 0062a222 (DATA)
// 004caeed: PUSH ESI
// 004caeee: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 004caef3: ADD ESP,0xc
// 004caef6: PUSH 0x0
// 004caef8: LEA EAX,[EBX + 0x280]
// 004caefe: PUSH EAX
// 004caeff: PUSH 0x62a22e
//   XREF to: 0062a22e (DATA)
// 004caf04: PUSH ESI
// 004caf05: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 004caf0a: ADD ESP,0x10
// 004caf0d: PUSH 0x0
// 004caf0f: LEA EAX,[EBX + 0x284]
// 004caf15: PUSH EAX
// 004caf16: PUSH 0x62a238
//   XREF to: 0062a238 (DATA)
// 004caf1b: PUSH ESI
// 004caf1c: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 004caf21: ADD ESP,0x10
// 004caf24: LEA EAX,[EBX + 0x288]
// 004caf2a: PUSH EAX
// 004caf2b: PUSH 0x62a243
//   XREF to: 0062a243 (DATA)
// 004caf30: PUSH ESI
// 004caf31: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 004caf36: ADD ESP,0xc
// 004caf39: ADD EBX,0x28c
// 004caf3f: PUSH EBX
// 004caf40: PUSH 0x62a256
//   XREF to: 0062a256 (DATA)
// 004caf45: PUSH ESI
// 004caf46: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 004caf4b: ADD ESP,0xc
// 004caf4e: POP ESI
// 004caf4f: POP EBX
// 004caf50: RET
