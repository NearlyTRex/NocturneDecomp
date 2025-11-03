// Name: core_cow.cpp_FUN_00444140
// Address: 00444140
// Address Range: [[00444140, 004441a5]]
// Convention: __cdecl
// Signature: CZombieCow * core_cow.cpp_FUN_00444140(CZombieCow * this_ptr)
// Cross-references:
//   core_cow.cpp_FUN_00444100 (00444100) at 0044411a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_cow_dfm_00619470
//   undefined4 DAT_0065c09c
//   undefined4 PTR_FUN_0065c09d+3
//   CDemonActor_vtable PTR_core_cow.cpp_FUN_0065c0b4
// Function calls:
//   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CZombieCow * __cdecl core_cow_cpp_FUN_00444140(CZombieCow *this_ptr)

{
  CEnemy *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CZombieCow *pCVar4;
  
  pCVar4 = (CZombieCow *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar4->base_enemy).base_character.base_actor.vtable = &PTR_core_cow_cpp_FUN_0065c0b4;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840
            (&(pCVar4->base_enemy).base_character.model);
  uVar2 = _DAT_0065c09c;
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x344] = '\0';
  uVar3 = _PTR_FUN_0065c09d_3;
  (pCVar1->base_character).cloth_data[0x345] = '\0';
  (pCVar1->base_character).cloth_data[0x346] = -0x20;
  (pCVar1->base_character).cloth_data[0x347] = '?';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x348] = '\0';
  (pCVar1->base_character).cloth_data[0x349] = '\0';
  (pCVar1->base_character).cloth_data[0x34a] = '`';
  (pCVar1->base_character).cloth_data[0x34b] = '@';
  pCVar4->field1_0xbeb4[0x10] = '\0';
  pCVar4->field1_0xbeb4[0x11] = '\0';
  pCVar4->field1_0xbeb4[0x12] = '\0';
  pCVar4->field1_0xbeb4[0x13] = '\0';
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x34c) = uVar2;
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x350) = uVar3;
  return pCVar4;
}


// Assembly code:
// 00444140: PUSH EBX
//   Label: core_cow.cpp_FUN_00444140
// 00444141: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00444145: PUSH EDX
// 00444146: CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   XREF to: 004a9500 (UNCONDITIONAL_CALL)
// 0044414b: ADD ESP,0x4
// 0044414e: PUSH 0x619470
//   XREF to: 00619470 (DATA)
// 00444153: MOV EBX,EAX
// 00444155: ADD EAX,0x158
// 0044415a: PUSH EAX
// 0044415b: MOV dword ptr [EAX + -0x4],0x65c0b4
//   XREF to: 0065c0b4 (DATA)
// 00444162: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 00444167: FLD float ptr [0x0065c09c]
//   XREF to: 0065c09c (READ)
// 0044416d: MOV dword ptr [EBX + 0x2ddc],0x3fe00000
// 00444177: FLD float ptr [0x0065c0a0]
//   XREF to: 0065c0a0 (READ)
// 0044417d: MOV dword ptr [EBX + 0x2de0],0x40600000
// 00444187: ADD ESP,0x8
// 0044418a: MOV dword ptr [EBX + 0xbec4],0x0
// 00444194: MOV EAX,EBX
// 00444196: FXCH
// 00444198: FSTP float ptr [EBX + 0x2de4]
// 0044419e: FSTP float ptr [EBX + 0x2de8]
// 004441a4: POP EBX
// 004441a5: RET
