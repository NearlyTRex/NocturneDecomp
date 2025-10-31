// Name: core_dog.cpp_CZombieDog_getPropertyList_FUN_0047f920
// Address: 0047f920
// Address Range: [[0047f920, 0047f95c]]
// Convention: __cdecl
// Signature: void core_dog.cpp_CZombieDog_getPropertyList_FUN_0047f920(CZombieDog * this_ptr, CActorPropertyList * property_list)
// Globals:
//   TerminatedCString s_Model_0062106d
//   TerminatedCString s_State_00621073
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   core_enemy.cpp_CEnemy_FUN_004aa170

#include "nocturne.h"

void __cdecl
core_dog_cpp_CZombieDog_getPropertyList_FUN_0047f920
          (CZombieDog *this_ptr,CActorPropertyList *property_list)

{
  core_enemy_cpp_CEnemy_FUN_004aa170(&this_ptr->base_enemy);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(property_list);
  return;
}


// Assembly code:
// 0047f920: PUSH EBX
//   Label: core_dog.cpp_CZombieDog_getPropertyList_FUN_0047f920
// 0047f921: PUSH ESI
// 0047f922: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0047f926: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0047f92a: PUSH ESI
// 0047f92b: PUSH EBX
// 0047f92c: CALL core_enemy.cpp_CEnemy_FUN_004aa170
//   XREF to: 004aa170 (UNCONDITIONAL_CALL)
// 0047f931: ADD ESP,0x8
// 0047f934: PUSH 0x0
// 0047f936: ADD EBX,0x158
// 0047f93c: PUSH EBX
// 0047f93d: PUSH 0x62106d
//   XREF to: 0062106d (DATA)
// 0047f942: PUSH ESI
// 0047f943: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)
// 0047f948: ADD ESP,0x10
// 0047f94b: PUSH EBX
// 0047f94c: PUSH 0x621073
//   XREF to: 00621073 (DATA)
// 0047f951: PUSH ESI
// 0047f952: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
// 0047f957: ADD ESP,0xc
// 0047f95a: POP ESI
// 0047f95b: POP EBX
// 0047f95c: RET
