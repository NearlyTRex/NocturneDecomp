// Name: core_filmreel.cpp_CFilmReel_FUN_004bee30
// Address: 004bee30
// Address Range: [[004bee30, 004bee79]]
// Convention: unknown
// Signature: undefined core_filmreel.cpp_CFilmReel_FUN_004bee30()
// Globals:
//   TerminatedCString s_CFilmReel_00629bde
//   TerminatedCString s_Key_reel_00629be8
//   TerminatedCString s_Key_event_00629bf1
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e350
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_dest.cpp_FUN_0046fe80

#include "nocturne.h"

/* Signature: undefined1 actors_other_filmreel.cpp_CFilmReel_FUN_004bee30(undefined4 param_1,
   undefined4 param_2) */

void core_filmreel_cpp_CFilmReel_FUN_004bee30(void)

{
  CActorPropertyList *in_stack_00000008;
  
  core_dest_cpp_FUN_0046fe80();
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  return;
}


// Assembly code:
// 004bee30: PUSH EBX
//   Label: core_filmreel.cpp_CFilmReel_FUN_004bee30
// 004bee31: PUSH ESI
// 004bee32: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004bee36: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004bee3a: PUSH ESI
// 004bee3b: PUSH EBX
// 004bee3c: CALL core_dest.cpp_FUN_0046fe80
//   XREF to: 0046fe80 (UNCONDITIONAL_CALL)
// 004bee41: ADD ESP,0x8
// 004bee44: PUSH 0x0
// 004bee46: PUSH 0x629bde
//   XREF to: 00629bde (DATA)
// 004bee4b: PUSH 0x1
// 004bee4d: LEA EAX,[EBX + 0x370]
// 004bee53: PUSH EAX
// 004bee54: PUSH 0x629be8
//   XREF to: 00629be8 (DATA)
// 004bee59: PUSH ESI
// 004bee5a: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 004bee5f: ADD ESP,0x18
// 004bee62: LEA EAX,[EBX + 0x374]
// 004bee68: PUSH EAX
// 004bee69: PUSH 0x629bf1
//   XREF to: 00629bf1 (DATA)
// 004bee6e: PUSH ESI
// 004bee6f: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 004bee74: ADD ESP,0xc
// 004bee77: POP ESI
// 004bee78: POP EBX
// 004bee79: RET
