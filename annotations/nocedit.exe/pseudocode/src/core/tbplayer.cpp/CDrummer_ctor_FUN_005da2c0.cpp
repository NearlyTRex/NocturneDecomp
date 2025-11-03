// Name: core_tbplayer.cpp_CDrummer_ctor_FUN_005da2c0
// Address: 005da2c0
// Address Range: [[005da2c0, 005da2ed]]
// Convention: __cdecl
// Signature: CDrummer * core_tbplayer.cpp_CDrummer_ctor_FUN_005da2c0(CDrummer * this_ptr)
// Cross-references:
//   core_tbplayer.cpp_FUN_005da280 (005da280) at 005da29a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_drummer_dfm_00654bed
//   CDemonActor_vtable g_CDrummerVTable
// Function calls:
//   core_npc.cpp_FUN_005447e0
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840

#include "nocturne.h"

CDrummer * __cdecl core_tbplayer_cpp_CDrummer_ctor_FUN_005da2c0(CDrummer *this_ptr)

{
  CDrummer *pCVar1;
  
  pCVar1 = (CDrummer *)core_npc_cpp_FUN_005447e0(&this_ptr->base_npc);
  (pCVar1->base_npc).base_character.base_actor.vtable = &g_CDrummerVTable;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840(&(pCVar1->base_npc).base_character.model);
  return pCVar1;
}


// Assembly code:
// 005da2c0: PUSH EBX
//   Label: core_tbplayer.cpp_CDrummer_ctor_FUN_005da2c0
// 005da2c1: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005da2c5: PUSH EDX
// 005da2c6: CALL core_npc.cpp_FUN_005447e0
//   XREF to: 005447e0 (UNCONDITIONAL_CALL)
// 005da2cb: ADD ESP,0x4
// 005da2ce: PUSH 0x654bed
//   XREF to: 00654bed (DATA)
// 005da2d3: MOV EBX,EAX
// 005da2d5: ADD EAX,0x158
// 005da2da: PUSH EAX
// 005da2db: MOV dword ptr [EAX + -0x4],0x664074
//   XREF to: 00664074 (DATA)
// 005da2e2: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 005da2e7: ADD ESP,0x8
// 005da2ea: MOV EAX,EBX
// 005da2ec: POP EBX
// 005da2ed: RET
