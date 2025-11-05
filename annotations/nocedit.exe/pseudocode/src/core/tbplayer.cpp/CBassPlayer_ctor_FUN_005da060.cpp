// Name: core_tbplayer.cpp_CBassPlayer_ctor_FUN_005da060
// Address: 005da060
// Address Range: [[005da060, 005da08d]]
// Convention: __cdecl
// Signature: CBassPlayer * core_tbplayer.cpp_CBassPlayer_ctor_FUN_005da060(CBassPlayer * this_ptr)
// Cross-references:
//   core_tbplayer.cpp_FUN_005da020 (005da020) at 005da03a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_bassplayer_dfm_00654baf
//   CDemonActor_vtable g_CBassPlayerVTable
// Function calls:
//   core_npc.cpp_FUN_005447e0
//   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840

#include "nocturne.h"

CBassPlayer * __cdecl core_tbplayer_cpp_CBassPlayer_ctor_FUN_005da060(CBassPlayer *this_ptr)

{
  CBassPlayer *pCVar1;
  
  pCVar1 = (CBassPlayer *)core_npc_cpp_FUN_005447e0(&this_ptr->base_npc);
  (pCVar1->base_npc).base_character.base_actor.vtable = &g_CBassPlayerVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar1->base_npc).base_character.model,"bassplayer.dfm");
  return pCVar1;
}


// Assembly code:
// 005da060: PUSH EBX
//   Label: core_tbplayer.cpp_CBassPlayer_ctor_FUN_005da060
// 005da061: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005da065: PUSH EDX
// 005da066: CALL core_npc.cpp_FUN_005447e0
//   XREF to: 005447e0 (UNCONDITIONAL_CALL)
// 005da06b: ADD ESP,0x4
// 005da06e: PUSH 0x654baf
//   XREF to: 00654baf (DATA)
// 005da073: MOV EBX,EAX
// 005da075: ADD EAX,0x158
// 005da07a: PUSH EAX
// 005da07b: MOV dword ptr [EAX + -0x4],0x663f14
//   XREF to: 00663f14 (DATA)
// 005da082: CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 005da087: ADD ESP,0x8
// 005da08a: MOV EAX,EBX
// 005da08c: POP EBX
// 005da08d: RET
