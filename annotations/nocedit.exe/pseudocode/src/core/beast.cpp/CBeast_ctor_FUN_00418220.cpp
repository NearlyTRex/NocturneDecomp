// Name: core_beast.cpp_CBeast_ctor_FUN_00418220
// Address: 00418220
// Address Range: [[00418220, 0041827b]]
// Convention: __cdecl
// Signature: CBeast * core_beast.cpp_CBeast_ctor_FUN_00418220(CBeast * this_ptr)
// Cross-references:
//   core_beast.cpp_constructor_FUN_004181e0 (004181e0) at 004181fa [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_beast_dfm_00615a6e
//   undefined4 DAT_0065aa58
//   undefined4 DAT_0065aa5c
//   CDemonActor_vtable g_CBeastVTable
// Function calls:
//   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBeast * __cdecl core_beast_cpp_CBeast_ctor_FUN_00418220(CBeast *this_ptr)

{
  CEnemy *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CBeast *pCVar4;
  
  pCVar4 = (CBeast *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar4->base_enemy).base_character.base_actor.vtable = &g_CBeastVTable;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840
            (&(pCVar4->base_enemy).base_character.model);
  uVar3 = _DAT_0065aa5c;
  uVar2 = _DAT_0065aa58;
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x344] = '\0';
  (pCVar1->base_character).cloth_data[0x345] = '\0';
  (pCVar1->base_character).cloth_data[0x346] = ' ';
  (pCVar1->base_character).cloth_data[0x347] = 'A';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x348] = '\0';
  (pCVar1->base_character).cloth_data[0x349] = '\0';
  (pCVar1->base_character).cloth_data[0x34a] = ' ';
  (pCVar1->base_character).cloth_data[0x34b] = 'A';
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x34c) = uVar2;
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x350) = uVar3;
  return pCVar4;
}


// Assembly code:
// 00418220: PUSH EBX
//   Label: core_beast.cpp_CBeast_ctor_FUN_00418220
// 00418221: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00418225: PUSH EDX
// 00418226: CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   XREF to: 004a9500 (UNCONDITIONAL_CALL)
// 0041822b: ADD ESP,0x4
// 0041822e: PUSH 0x615a6e
//   XREF to: 00615a6e (DATA)
// 00418233: MOV EBX,EAX
// 00418235: ADD EAX,0x158
// 0041823a: PUSH EAX
// 0041823b: MOV dword ptr [EAX + -0x4],0x65aa64
//   XREF to: 0065aa64 (DATA)
// 00418242: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 00418247: FLD float ptr [0x0065aa58]
//   XREF to: 0065aa58 (READ)
// 0041824d: FLD float ptr [0x0065aa5c]
//   XREF to: 0065aa5c (READ)
// 00418253: MOV dword ptr [EBX + 0x2ddc],0x41200000
// 0041825d: ADD ESP,0x8
// 00418260: MOV dword ptr [EBX + 0x2de0],0x41200000
// 0041826a: MOV EAX,EBX
// 0041826c: FXCH
// 0041826e: FSTP float ptr [EBX + 0x2de4]
// 00418274: FSTP float ptr [EBX + 0x2de8]
// 0041827a: POP EBX
// 0041827b: RET
