// Name: core_tentacle.cpp_CTentacle_FUN_005db840
// Address: 005db840
// Address Range: [[005db840, 005db87a]]
// Convention: __cdecl
// Signature: int core_tentacle.cpp_CTentacle_FUN_005db840(CTentacle * this_ptr)
// Globals:
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f33744
// Function calls:
//   core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
//   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0

#include "nocturne.h"

int __cdecl core_tentacle_cpp_CTentacle_FUN_005db840(CTentacle *this_ptr)

{
  int iVar1;
  
  iVar1 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->shouldIgnoreForTargeting)
                    ((CDemonActor *)this_ptr);
  if (iVar1 != 0) {
    if (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) == 0) {
      return 0;
    }
    core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940((CDemonActor *)this_ptr,3);
  }
  iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0((CCharacter *)this_ptr);
  return iVar1;
}


// Assembly code:
// 005db840: PUSH EBX
//   Label: core_tentacle.cpp_CTentacle_FUN_005db840
// 005db841: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005db845: PUSH EBX
// 005db846: MOV EAX,dword ptr [EBX + 0x154]
// 005db84c: CALL dword ptr [EAX + 0x68]
// 005db84f: ADD ESP,0x4
// 005db852: TEST EAX,EAX
// 005db854: JZ 0x005db86c
//   XREF to: 005db86c (CONDITIONAL_JUMP)
// 005db856: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 005db85b: CMP dword ptr [EAX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 005db85f: JZ 0x005db877
//   XREF to: 005db877 (CONDITIONAL_JUMP)
// 005db861: PUSH 0x3
// 005db863: PUSH EBX
// 005db864: CALL core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
//   XREF to: 0040d940 (UNCONDITIONAL_CALL)
// 005db869: ADD ESP,0x8
// 005db86c: PUSH EBX
//   Label: LAB_005db86c
// 005db86d: CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0
//   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)
// 005db872: ADD ESP,0x4
// 005db875: POP EBX
// 005db876: RET
// 005db877: XOR EAX,EAX
//   Label: LAB_005db877
// 005db879: POP EBX
// 005db87a: RET
