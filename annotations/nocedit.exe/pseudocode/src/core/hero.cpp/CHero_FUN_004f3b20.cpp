// Name: core_hero.cpp_CHero_FUN_004f3b20
// Address: 004f3b20
// Address Range: [[004f3b20, 004f3bb2]]
// Convention: __cdecl
// Signature: void core_hero.cpp_CHero_FUN_004f3b20(CHero * this_ptr)
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005c6750 (005c6750) at 005c675c [UNCONDITIONAL_CALL]
// Function calls:
//   core_inv.cpp_CInventory_removeMatchingKeys_FUN_005014a0

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_FUN_004f3b20(CHero *this_ptr)

{
  CHero *pCVar1;
  float *pfVar2;
  
  this_ptr->field6_0x1fb9c[0] = '\0';
  this_ptr->field6_0x1fb9c[1] = '\0';
  this_ptr->field6_0x1fb9c[2] = '\0';
  this_ptr->field6_0x1fb9c[3] = '\0';
  this_ptr->field6_0x1fb9c[4] = '\0';
  this_ptr->field6_0x1fb9c[5] = '\0';
  this_ptr->field6_0x1fb9c[6] = '\0';
  this_ptr->field6_0x1fb9c[7] = '\0';
  this_ptr->field6_0x1fb9c[8] = '\0';
  this_ptr->field6_0x1fb9c[9] = '\0';
  this_ptr->field6_0x1fb9c[10] = '\0';
  this_ptr->field6_0x1fb9c[0xb] = '\0';
  this_ptr->field6_0x1fb9c[0xc] = '\0';
  this_ptr->field6_0x1fb9c[0xd] = '\0';
  this_ptr->field6_0x1fb9c[0xe] = '\0';
  this_ptr->field6_0x1fb9c[0xf] = '\0';
  this_ptr->field6_0x1fb9c[0x10] = '\0';
  this_ptr->field6_0x1fb9c[0x11] = '\0';
  this_ptr->field6_0x1fb9c[0x12] = '\0';
  this_ptr->field6_0x1fb9c[0x13] = '\0';
  this_ptr->field6_0x1fb9c[0x14] = '\0';
  this_ptr->field6_0x1fb9c[0x15] = '\0';
  this_ptr->field6_0x1fb9c[0x16] = '\0';
  this_ptr->field6_0x1fb9c[0x17] = '\0';
  this_ptr->field6_0x1fb9c[0x18] = '\0';
  this_ptr->field6_0x1fb9c[0x19] = '\0';
  this_ptr->field6_0x1fb9c[0x1a] = '\0';
  this_ptr->field6_0x1fb9c[0x1b] = '\0';
  (this_ptr->base_character).grabbed_by = (CDemonActor *)0x0;
  core_inv_cpp_CInventory_removeMatchingKeys_FUN_005014a0(&this_ptr->inventory,0xffffffff);
  (*(this_ptr->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
            ((CDemonActor *)this_ptr);
  pCVar1 = this_ptr;
  do {
    pfVar2 = &(pCVar1->base_character).base_actor.orient_matrix.m[0].z;
    (pCVar1->base_character).carry_hands[0].carry_actor = (CDemonActor *)0x0;
    pCVar1 = (CHero *)pfVar2;
  } while (pfVar2 != (float *)((this_ptr->base_character).base_actor.create_event + 0x10));
  return;
}


// Assembly code:
// 004f3b20: PUSH EBX
//   Label: core_hero.cpp_CHero_FUN_004f3b20
// 004f3b21: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f3b25: MOV dword ptr [EBX + 0x1fb9c],0x0
// 004f3b2f: MOV dword ptr [EBX + 0x1fba0],0x0
// 004f3b39: MOV dword ptr [EBX + 0x1fba4],0x0
// 004f3b43: MOV dword ptr [EBX + 0x1fba8],0x0
// 004f3b4d: MOV dword ptr [EBX + 0x1fbac],0x0
// 004f3b57: PUSH -0x1
// 004f3b59: MOV dword ptr [EBX + 0x1fbb0],0x0
// 004f3b63: LEA EAX,[EBX + 0x1f738]
// 004f3b69: MOV dword ptr [EBX + 0x1fbb4],0x0
// 004f3b73: PUSH EAX
// 004f3b74: MOV dword ptr [EBX + 0x2598],0x0
// 004f3b7e: CALL core_inv.cpp_CInventory_removeMatchingKeys_FUN_005014a0
//   XREF to: 005014a0 (UNCONDITIONAL_CALL)
// 004f3b83: ADD ESP,0x8
// 004f3b86: PUSH 0x0
// 004f3b88: MOV EAX,dword ptr [EBX + 0x154]
// 004f3b8e: PUSH EBX
// 004f3b8f: CALL dword ptr [EAX + 0x158]
// 004f3b95: ADD ESP,0x8
// 004f3b98: MOV EAX,EBX
// 004f3b9a: LEA EDX,[EBX + 0x88]
// 004f3ba0: ADD EAX,0x44
//   Label: LAB_004f3ba0
// 004f3ba3: MOV dword ptr [EAX + 0x2470],0x0
// 004f3bad: CMP EAX,EDX
// 004f3baf: JNZ 0x004f3ba0
//   XREF to: 004f3ba0 (CONDITIONAL_JUMP)
// 004f3bb1: POP EBX
// 004f3bb2: RET
