// Name: core_hero.cpp_FUN_004f3c00
// Address: 004f3c00
// Address Range: [[004f3c00, 004f3c2b]]
// Convention: __cdecl
// Signature: CHeroPlaceholder * core_hero.cpp_FUN_004f3c00(CHeroPlaceholder * this_ptr)
// Cross-references:
//   core_hero.cpp_FUN_004f3bc0 (004f3bc0) at 004f3bdd [UNCONDITIONAL_CALL]
//   core_mission.cpp_FUN_00524c20 (00524c20) at 00524d0d [UNCONDITIONAL_CALL]
// Globals:
//   CDemonActor_vtable g_CHeroPlaceholderVTable
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0

#include "nocturne.h"

CHeroPlaceholder * __cdecl core_hero_cpp_FUN_004f3c00(CHeroPlaceholder *this_ptr)

{
  CHeroPlaceholder *pCVar1;
  
  pCVar1 = (CHeroPlaceholder *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  (pCVar1->base_actor).metadata.vtable = &g_CHeroPlaceholderVTable;
  (pCVar1->base_actor).is_transparent = 1;
  pCVar1->field1_0x158 = 0;
  return pCVar1;
}


// Assembly code:
// 004f3c00: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_hero.cpp_FUN_004f3c00
//   XREF to: Stack[0x4] (READ)
// 004f3c04: PUSH EDX
// 004f3c05: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 004f3c0a: MOV dword ptr [EAX + 0x154],0x65f844
//   XREF to: 0065f844 (DATA)
// 004f3c14: MOV dword ptr [EAX + 0xfc],0x1
// 004f3c1e: ADD ESP,0x4
// 004f3c21: MOV dword ptr [EAX + 0x158],0x0
// 004f3c2b: RET
