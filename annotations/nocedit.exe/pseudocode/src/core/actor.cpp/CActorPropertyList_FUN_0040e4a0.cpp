// Name: core_actor.cpp_CActorPropertyList_FUN_0040e4a0
// Address: 0040e4a0
// Address Range: [[0040e4a0, 0040e4cb]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CActorPropertyList_FUN_0040e4a0(CActorPropertyList * this_ptr)
// Cross-references:
//   core_armour.cpp_CArmour_SnagRelatedMultiple_FUN_00412470 (00412470) at 00412494 [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_FUN_004162b0 (004162b0) at 004162d3 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_FUN_00417cd0 (00417cd0) at 00417cf4 [UNCONDITIONAL_CALL]
//   core_beast.cpp_FUN_00418420 (00418420) at 00418443 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_snag_FUN_00418c80 (00418c80) at 00418ca4 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_SnagRelated_ModelStateDeath_FUN_0041d990 (0041d990) at 0041d9b4 [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00424b10 (00424b10) at 00424b39 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444c50 (00444c50) at 00444c73 [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_getPropertyList_FUN_0047f920 (0047f920) at 0047f943 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00486c90 (00486c90) at 00486cb4 [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048f520 (0048f520) at 0048f543 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_getPropertyList_FUN_004e5af0 (004e5af0) at 004e5b14 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e8dc0 (004e8dc0) at 004e8de4 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f79d0 (004f79d0) at 004f79f3 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004fb110 (004fb110) at 004fb133 [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503c50 (00503c50) at 00503c73 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00527b70 (00527b70) at 00527b94 [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_FUN_00544e40 (00544e40) at 00544e64 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568f10 (00568f10) at 00568f33 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a3810 (005a3810) at 005a3833 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_FUN_005c77b0 (005c77b0) at 005c77d3 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_FUN_005dbc60 (005dbc60) at 005dbc84 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_FUN_005f20d0 (005f20d0) at 005f20f4 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fca80 (005fca80) at 005fcaa4 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e4a0(CActorPropertyList *this_ptr)

{
  int iVar1;
  undefined4 in_stack_00000014;
  
  iVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0(this_ptr);
  *(undefined4 *)(iVar1 + 0x58) = 1;
  *(undefined4 *)(iVar1 + 0x5c) = in_stack_00000014;
  return;
}


// Assembly code:
// 0040e4a0: PUSH EBX
//   Label: core_actor.cpp_CActorPropertyList_FUN_0040e4a0
// 0040e4a1: PUSH 0x0
// 0040e4a3: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0040e4a7: PUSH EDX
// 0040e4a8: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0040e4ac: PUSH ECX
// 0040e4ad: PUSH 0x7
// 0040e4af: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0040e4b3: PUSH EBX
// 0040e4b4: CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
//   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)
// 0040e4b9: ADD ESP,0x14
// 0040e4bc: MOV dword ptr [EAX + 0x58],0x1
// 0040e4c3: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 0040e4c7: MOV dword ptr [EAX + 0x5c],EDX
// 0040e4ca: POP EBX
// 0040e4cb: RET
