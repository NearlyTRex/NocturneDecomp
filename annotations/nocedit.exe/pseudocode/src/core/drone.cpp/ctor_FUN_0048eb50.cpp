// Name: core_drone.cpp_ctor_FUN_0048eb50
// Address: 0048eb50
// Address Range: [[0048eb50, 0048ebbf]]
// Convention: __cdecl
// Signature: CDrone * core_drone.cpp_ctor_FUN_0048eb50(CDrone * this_ptr)
// Cross-references:
//   core_drone.cpp_FUN_0048eb10 (0048eb10) at 0048eb2a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_drone_dfm_0062236d
//   undefined4 DAT_0065d0ac
//   undefined4 PTR_core_bride.cpp_FUN_0065d0ad+3
//   CDemonActor_vtable PTR_core_drone.cpp_FUN_0065d0c4
// Function calls:
//   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDrone * __cdecl core_drone_cpp_ctor_FUN_0048eb50(CDrone *this_ptr)

{
  CEnemy *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CDrone *pCVar4;
  
  pCVar4 = (CDrone *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar4->base_enemy).base_character.base_actor.vtable = &PTR_core_drone_cpp_FUN_0065d0c4;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840
            (&(pCVar4->base_enemy).base_character.model);
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x344] = '\0';
  uVar2 = _DAT_0065d0ac;
  (pCVar1->base_character).cloth_data[0x345] = '\0';
  (pCVar1->base_character).cloth_data[0x346] = '@';
  (pCVar1->base_character).cloth_data[0x347] = '?';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x348] = '\0';
  uVar3 = _PTR_core_bride_cpp_FUN_0065d0ad_3;
  (pCVar1->base_character).cloth_data[0x349] = '\0';
  (pCVar1->base_character).cloth_data[0x34a] = -0x40;
  (pCVar1->base_character).cloth_data[0x34b] = '?';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).field11_0x25a0[0x70] = '\x01';
  (pCVar1->base_character).field11_0x25a0[0x71] = '\0';
  (pCVar1->base_character).field11_0x25a0[0x72] = '\0';
  (pCVar1->base_character).field11_0x25a0[0x73] = '\0';
  (pCVar4->base_enemy).base_character.hit_points = 75.0;
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x34c) = uVar2;
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x350) = uVar3;
  return pCVar4;
}


// Assembly code:
// 0048eb50: PUSH EBX
//   Label: core_drone.cpp_ctor_FUN_0048eb50
// 0048eb51: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0048eb55: PUSH EDX
// 0048eb56: CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   XREF to: 004a9500 (UNCONDITIONAL_CALL)
// 0048eb5b: ADD ESP,0x4
// 0048eb5e: PUSH 0x62236d
//   XREF to: 0062236d (DATA)
// 0048eb63: MOV EBX,EAX
// 0048eb65: ADD EAX,0x158
// 0048eb6a: PUSH EAX
// 0048eb6b: MOV dword ptr [EAX + -0x4],0x65d0c4
//   XREF to: 0065d0c4 (DATA)
// 0048eb72: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 0048eb77: MOV dword ptr [EBX + 0x2ddc],0x3f400000
// 0048eb81: FLD float ptr [0x0065d0ac]
//   XREF to: 0065d0ac (READ)
// 0048eb87: MOV dword ptr [EBX + 0x2de0],0x3fc00000
// 0048eb91: FLD float ptr [0x0065d0b0]
//   XREF to: 0065d0b0 (READ)
// 0048eb97: MOV dword ptr [EBX + 0x2610],0x1
// 0048eba1: ADD ESP,0x8
// 0048eba4: MOV dword ptr [EBX + 0x243c],0x42960000
// 0048ebae: MOV EAX,EBX
// 0048ebb0: FXCH
// 0048ebb2: FSTP float ptr [EBX + 0x2de4]
// 0048ebb8: FSTP float ptr [EBX + 0x2de8]
// 0048ebbe: POP EBX
// 0048ebbf: RET
